#
#  DO NOT EDIT THIS FILE! It is automagically created by
#  the configure script, based on Makefile.skel.
#

CWARNINGS=-Wstrict-aliasing -Wall 
COPTIM=-g -fno-rtti -fstrict-aliasing -fomit-frame-pointer -O3 -DNDEBUG 
INCLUDE=-Iinclude/
DINCLUDE=-I../include/
INCLUDE2=-I../../include/
CXX=c++
OTHERLIBS=
CPU_ARCHS= cpu_arm.o cpu_arm_coproc.o memory_arm.o  tmp_arm_loadstore.o tmp_arm_loadstore_p0_u0_w0.o tmp_arm_loadstore_p0_u0_w1.o tmp_arm_loadstore_p0_u1_w0.o tmp_arm_loadstore_p0_u1_w1.o tmp_arm_loadstore_p1_u0_w0.o tmp_arm_loadstore_p1_u0_w1.o tmp_arm_loadstore_p1_u1_w0.o tmp_arm_loadstore_p1_u1_w1.o tmp_arm_dpi.o tmp_arm_r.o tmp_arm_r0.o tmp_arm_r1.o tmp_arm_r2.o tmp_arm_r3.o tmp_arm_r4.o tmp_arm_r5.o tmp_arm_r6.o tmp_arm_r7.o tmp_arm_r8.o tmp_arm_r9.o tmp_arm_ra.o tmp_arm_rb.o tmp_arm_rc.o tmp_arm_rd.o tmp_arm_re.o tmp_arm_rf.o tmp_arm_multi.o cpu_m88k.o memory_m88k.o cpu_mips.o cpu_mips_coproc.o  cpu_mips_instr_unaligned.o cpu_ppc.o cpu_sh.o memory_sh.o
CPU_TOOLS= generate_arm_dpi generate_arm_r generate_arm_loadstore generate_arm_multi generate_m88k_bcnd generate_m88k_loadstore generate_mips_loadstore generate_mips_loadstore_multi generate_ppc_loadstore
DOXYGEN=\#
VALGRIND=
PREFIX=/usr/local

#
#  Makefile for GXemul
#

BIN=gxemul
LIBS=$(XLIB) $(OTHERLIBS)

all: build

build: do_src
	$(CXX) $(COPTIM) src/components/*/*.o src/console/*.o src/cpus/*.o src/debugger/*.o src/devices/*.o src/disk/*.o src/file/*.o src/machines/*.o src/main/*.o src/main/*/*.o src/net/*.o src/old_main/*.o src/promemul/*.o src/symbol/*.o src/ui/*/*.o $(LIBS) -o $(BIN)

do_src:
	cd src; $(MAKE)

test: build
	test/check_delete_calls.sh
	@rm -f tmp_valgrind.out
	$(VALGRIND) ./$(BIN) -WW@U
	@if [ -s tmp_valgrind.out ]; then cat tmp_valgrind.out; false; fi

documentation: build
	sed s/PAGETITLE/Machines/g < doc/head.html > doc/machines.html
	./$(BIN) -WW@M >> doc/machines.html
	cat doc/tail.html >> doc/machines.html
	sed s/PAGETITLE/Components/g < doc/head.html > doc/components.html
	./$(BIN) -WW@C >> doc/components.html
	cat doc/tail.html >> doc/components.html
	doc/generate_machine_doc.sh
	$(DOXYGEN) doc/Doxyfile

install: documentation test
	@echo Installing binaries, man page, and documentation...
	mkdir -p $(PREFIX)/bin
	cp -f $(BIN) $(PREFIX)/bin/
	mkdir -p $(PREFIX)/man/man1
	cp -f man/gxemul.1 $(PREFIX)/man/man1/
	mkdir -p $(PREFIX)/share/doc/gxemul
	cp -R doc/* $(PREFIX)/share/doc/gxemul/

uninstall:
	@echo Removing binaries, man pages, and documentation...
	rm -f $(PREFIX)/bin/gxemul
	rm -f $(PREFIX)/man/man1/gxemul.1
	rm -rf $(PREFIX)/share/doc/gxemul

clean:
	rm -f $(BIN) *core core.* *.gmon _* *.exe ktrace.out tmp_*.out*
	rm -f unittest*.h components*.h commands*.h
	rm -rf doc/doxygen
	cd src; $(MAKE) clean

#  experiments and demos are not cleaned on a normal clean, only on a clean_all.

clean_all: clean
	cd experiments; $(MAKE) clean_all
	cd demos; $(MAKE) clean
	rm -f config.h Makefile src/Makefile src/cpus/Makefile
	rm -f src/ui/*/Makefile src/ui/Makefile src/main/fileloaders/Makefile
	rm -f src/main/commands/Makefile
	rm -f src/components/Makefile src/components/*/Makefile
	rm -f src/debugger/Makefile src/devices/Makefile
	rm -f src/devices/fonts/Makefile src/disk/Makefile
	rm -f src/file/Makefile src/machines/Makefile
	rm -f src/main/Makefile src/old_main/Makefile src/net/Makefile
	rm -f src/promemul/Makefile src/include/Makefile
	rm -f src/useremul/Makefile src/include/Makefile
	rm -f src/console/Makefile src/symbol/Makefile

