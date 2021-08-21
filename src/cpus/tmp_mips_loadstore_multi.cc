
/*  AUTOMATICALLY GENERATED! Do not edit.  */

X(multi_lw_2_le)
{
	uint32_t *page;
	MODE_uint_t rX = reg(ic[0].arg[1]), r0, r1;
	MODE_uint_t addr0 = rX + (int32_t)ic[0].arg[2];
	MODE_uint_t addr1 = rX + (int32_t)ic[1].arg[2];
	uint32_t index0 = addr0 >> 12;
	uint32_t index1 = addr1 >> 12;
	page = (uint32_t *) cpu->cd.mips.host_load[index0];
	if (cpu->delay_slot ||
	    page == NULL || (addr0 & 3) || (addr1 & 3)
	    || index1 != index0) {
		mips32_loadstore[5](cpu, ic);
		return;
	}
	addr0 = (addr0 >> 2) & 0x3ff;
	addr1 = (addr1 >> 2) & 0x3ff;
	r0 = page[addr0];
	r1 = page[addr1];
	r0 = LE32_TO_HOST(r0);
	r1 = LE32_TO_HOST(r1);
	reg(ic[0].arg[0]) = r0;
	reg(ic[1].arg[0]) = r1;
	cpu->n_translated_instrs += 1;
	cpu->cd.mips.next_ic += 1;
}

X(multi_lw_3_le)
{
	uint32_t *page;
	MODE_uint_t rX = reg(ic[0].arg[1]), r0, r1, r2;
	MODE_uint_t addr0 = rX + (int32_t)ic[0].arg[2];
	MODE_uint_t addr1 = rX + (int32_t)ic[1].arg[2];
	MODE_uint_t addr2 = rX + (int32_t)ic[2].arg[2];
	uint32_t index0 = addr0 >> 12;
	uint32_t index1 = addr1 >> 12;
	uint32_t index2 = addr2 >> 12;
	page = (uint32_t *) cpu->cd.mips.host_load[index0];
	if (cpu->delay_slot ||
	    page == NULL || (addr0 & 3) || (addr1 & 3) || (addr2 & 3)
	    || index1 != index0 || index2 != index0) {
		mips32_loadstore[5](cpu, ic);
		return;
	}
	addr0 = (addr0 >> 2) & 0x3ff;
	addr1 = (addr1 >> 2) & 0x3ff;
	addr2 = (addr2 >> 2) & 0x3ff;
	r0 = page[addr0];
	r1 = page[addr1];
	r2 = page[addr2];
	r0 = LE32_TO_HOST(r0);
	r1 = LE32_TO_HOST(r1);
	r2 = LE32_TO_HOST(r2);
	reg(ic[0].arg[0]) = r0;
	reg(ic[1].arg[0]) = r1;
	reg(ic[2].arg[0]) = r2;
	cpu->n_translated_instrs += 2;
	cpu->cd.mips.next_ic += 2;
}

X(multi_lw_4_le)
{
	uint32_t *page;
	MODE_uint_t rX = reg(ic[0].arg[1]), r0, r1, r2, r3;
	MODE_uint_t addr0 = rX + (int32_t)ic[0].arg[2];
	MODE_uint_t addr1 = rX + (int32_t)ic[1].arg[2];
	MODE_uint_t addr2 = rX + (int32_t)ic[2].arg[2];
	MODE_uint_t addr3 = rX + (int32_t)ic[3].arg[2];
	uint32_t index0 = addr0 >> 12;
	uint32_t index1 = addr1 >> 12;
	uint32_t index2 = addr2 >> 12;
	uint32_t index3 = addr3 >> 12;
	page = (uint32_t *) cpu->cd.mips.host_load[index0];
	if (cpu->delay_slot ||
	    page == NULL || (addr0 & 3) || (addr1 & 3) || (addr2 & 3) || (addr3 & 3)
	    || index1 != index0 || index2 != index0 || index3 != index0) {
		mips32_loadstore[5](cpu, ic);
		return;
	}
	addr0 = (addr0 >> 2) & 0x3ff;
	addr1 = (addr1 >> 2) & 0x3ff;
	addr2 = (addr2 >> 2) & 0x3ff;
	addr3 = (addr3 >> 2) & 0x3ff;
	r0 = page[addr0];
	r1 = page[addr1];
	r2 = page[addr2];
	r3 = page[addr3];
	r0 = LE32_TO_HOST(r0);
	r1 = LE32_TO_HOST(r1);
	r2 = LE32_TO_HOST(r2);
	r3 = LE32_TO_HOST(r3);
	reg(ic[0].arg[0]) = r0;
	reg(ic[1].arg[0]) = r1;
	reg(ic[2].arg[0]) = r2;
	reg(ic[3].arg[0]) = r3;
	cpu->n_translated_instrs += 3;
	cpu->cd.mips.next_ic += 3;
}

X(multi_sw_2_le)
{
	uint32_t *page;
	MODE_uint_t rX = reg(ic[0].arg[1]), r0, r1;
	MODE_uint_t addr0 = rX + (int32_t)ic[0].arg[2];
	MODE_uint_t addr1 = rX + (int32_t)ic[1].arg[2];
	uint32_t index0 = addr0 >> 12;
	uint32_t index1 = addr1 >> 12;
	page = (uint32_t *) cpu->cd.mips.host_store[index0];
	if (cpu->delay_slot ||
	    page == NULL || (addr0 & 3) || (addr1 & 3)
	    || index1 != index0) {
		mips32_loadstore[12](cpu, ic);
		return;
	}
	addr0 = (addr0 >> 2) & 0x3ff;
	addr1 = (addr1 >> 2) & 0x3ff;
	r0 = reg(ic[0].arg[0]);
	r1 = reg(ic[1].arg[0]);
	r0 = LE32_TO_HOST(r0);
	r1 = LE32_TO_HOST(r1);
	page[addr0] = r0;
	page[addr1] = r1;
	cpu->n_translated_instrs += 1;
	cpu->cd.mips.next_ic += 1;
}

X(multi_sw_3_le)
{
	uint32_t *page;
	MODE_uint_t rX = reg(ic[0].arg[1]), r0, r1, r2;
	MODE_uint_t addr0 = rX + (int32_t)ic[0].arg[2];
	MODE_uint_t addr1 = rX + (int32_t)ic[1].arg[2];
	MODE_uint_t addr2 = rX + (int32_t)ic[2].arg[2];
	uint32_t index0 = addr0 >> 12;
	uint32_t index1 = addr1 >> 12;
	uint32_t index2 = addr2 >> 12;
	page = (uint32_t *) cpu->cd.mips.host_store[index0];
	if (cpu->delay_slot ||
	    page == NULL || (addr0 & 3) || (addr1 & 3) || (addr2 & 3)
	    || index1 != index0 || index2 != index0) {
		mips32_loadstore[12](cpu, ic);
		return;
	}
	addr0 = (addr0 >> 2) & 0x3ff;
	addr1 = (addr1 >> 2) & 0x3ff;
	addr2 = (addr2 >> 2) & 0x3ff;
	r0 = reg(ic[0].arg[0]);
	r1 = reg(ic[1].arg[0]);
	r2 = reg(ic[2].arg[0]);
	r0 = LE32_TO_HOST(r0);
	r1 = LE32_TO_HOST(r1);
	r2 = LE32_TO_HOST(r2);
	page[addr0] = r0;
	page[addr1] = r1;
	page[addr2] = r2;
	cpu->n_translated_instrs += 2;
	cpu->cd.mips.next_ic += 2;
}

X(multi_sw_4_le)
{
	uint32_t *page;
	MODE_uint_t rX = reg(ic[0].arg[1]), r0, r1, r2, r3;
	MODE_uint_t addr0 = rX + (int32_t)ic[0].arg[2];
	MODE_uint_t addr1 = rX + (int32_t)ic[1].arg[2];
	MODE_uint_t addr2 = rX + (int32_t)ic[2].arg[2];
	MODE_uint_t addr3 = rX + (int32_t)ic[3].arg[2];
	uint32_t index0 = addr0 >> 12;
	uint32_t index1 = addr1 >> 12;
	uint32_t index2 = addr2 >> 12;
	uint32_t index3 = addr3 >> 12;
	page = (uint32_t *) cpu->cd.mips.host_store[index0];
	if (cpu->delay_slot ||
	    page == NULL || (addr0 & 3) || (addr1 & 3) || (addr2 & 3) || (addr3 & 3)
	    || index1 != index0 || index2 != index0 || index3 != index0) {
		mips32_loadstore[12](cpu, ic);
		return;
	}
	addr0 = (addr0 >> 2) & 0x3ff;
	addr1 = (addr1 >> 2) & 0x3ff;
	addr2 = (addr2 >> 2) & 0x3ff;
	addr3 = (addr3 >> 2) & 0x3ff;
	r0 = reg(ic[0].arg[0]);
	r1 = reg(ic[1].arg[0]);
	r2 = reg(ic[2].arg[0]);
	r3 = reg(ic[3].arg[0]);
	r0 = LE32_TO_HOST(r0);
	r1 = LE32_TO_HOST(r1);
	r2 = LE32_TO_HOST(r2);
	r3 = LE32_TO_HOST(r3);
	page[addr0] = r0;
	page[addr1] = r1;
	page[addr2] = r2;
	page[addr3] = r3;
	cpu->n_translated_instrs += 3;
	cpu->cd.mips.next_ic += 3;
}

X(multi_lw_2_be)
{
	uint32_t *page;
	MODE_uint_t rX = reg(ic[0].arg[1]), r0, r1;
	MODE_uint_t addr0 = rX + (int32_t)ic[0].arg[2];
	MODE_uint_t addr1 = rX + (int32_t)ic[1].arg[2];
	uint32_t index0 = addr0 >> 12;
	uint32_t index1 = addr1 >> 12;
	page = (uint32_t *) cpu->cd.mips.host_load[index0];
	if (cpu->delay_slot ||
	    page == NULL || (addr0 & 3) || (addr1 & 3)
	    || index1 != index0) {
		mips32_loadstore[21](cpu, ic);
		return;
	}
	addr0 = (addr0 >> 2) & 0x3ff;
	addr1 = (addr1 >> 2) & 0x3ff;
	r0 = page[addr0];
	r1 = page[addr1];
	r0 = BE32_TO_HOST(r0);
	r1 = BE32_TO_HOST(r1);
	reg(ic[0].arg[0]) = r0;
	reg(ic[1].arg[0]) = r1;
	cpu->n_translated_instrs += 1;
	cpu->cd.mips.next_ic += 1;
}

X(multi_lw_3_be)
{
	uint32_t *page;
	MODE_uint_t rX = reg(ic[0].arg[1]), r0, r1, r2;
	MODE_uint_t addr0 = rX + (int32_t)ic[0].arg[2];
	MODE_uint_t addr1 = rX + (int32_t)ic[1].arg[2];
	MODE_uint_t addr2 = rX + (int32_t)ic[2].arg[2];
	uint32_t index0 = addr0 >> 12;
	uint32_t index1 = addr1 >> 12;
	uint32_t index2 = addr2 >> 12;
	page = (uint32_t *) cpu->cd.mips.host_load[index0];
	if (cpu->delay_slot ||
	    page == NULL || (addr0 & 3) || (addr1 & 3) || (addr2 & 3)
	    || index1 != index0 || index2 != index0) {
		mips32_loadstore[21](cpu, ic);
		return;
	}
	addr0 = (addr0 >> 2) & 0x3ff;
	addr1 = (addr1 >> 2) & 0x3ff;
	addr2 = (addr2 >> 2) & 0x3ff;
	r0 = page[addr0];
	r1 = page[addr1];
	r2 = page[addr2];
	r0 = BE32_TO_HOST(r0);
	r1 = BE32_TO_HOST(r1);
	r2 = BE32_TO_HOST(r2);
	reg(ic[0].arg[0]) = r0;
	reg(ic[1].arg[0]) = r1;
	reg(ic[2].arg[0]) = r2;
	cpu->n_translated_instrs += 2;
	cpu->cd.mips.next_ic += 2;
}

X(multi_lw_4_be)
{
	uint32_t *page;
	MODE_uint_t rX = reg(ic[0].arg[1]), r0, r1, r2, r3;
	MODE_uint_t addr0 = rX + (int32_t)ic[0].arg[2];
	MODE_uint_t addr1 = rX + (int32_t)ic[1].arg[2];
	MODE_uint_t addr2 = rX + (int32_t)ic[2].arg[2];
	MODE_uint_t addr3 = rX + (int32_t)ic[3].arg[2];
	uint32_t index0 = addr0 >> 12;
	uint32_t index1 = addr1 >> 12;
	uint32_t index2 = addr2 >> 12;
	uint32_t index3 = addr3 >> 12;
	page = (uint32_t *) cpu->cd.mips.host_load[index0];
	if (cpu->delay_slot ||
	    page == NULL || (addr0 & 3) || (addr1 & 3) || (addr2 & 3) || (addr3 & 3)
	    || index1 != index0 || index2 != index0 || index3 != index0) {
		mips32_loadstore[21](cpu, ic);
		return;
	}
	addr0 = (addr0 >> 2) & 0x3ff;
	addr1 = (addr1 >> 2) & 0x3ff;
	addr2 = (addr2 >> 2) & 0x3ff;
	addr3 = (addr3 >> 2) & 0x3ff;
	r0 = page[addr0];
	r1 = page[addr1];
	r2 = page[addr2];
	r3 = page[addr3];
	r0 = BE32_TO_HOST(r0);
	r1 = BE32_TO_HOST(r1);
	r2 = BE32_TO_HOST(r2);
	r3 = BE32_TO_HOST(r3);
	reg(ic[0].arg[0]) = r0;
	reg(ic[1].arg[0]) = r1;
	reg(ic[2].arg[0]) = r2;
	reg(ic[3].arg[0]) = r3;
	cpu->n_translated_instrs += 3;
	cpu->cd.mips.next_ic += 3;
}

X(multi_sw_2_be)
{
	uint32_t *page;
	MODE_uint_t rX = reg(ic[0].arg[1]), r0, r1;
	MODE_uint_t addr0 = rX + (int32_t)ic[0].arg[2];
	MODE_uint_t addr1 = rX + (int32_t)ic[1].arg[2];
	uint32_t index0 = addr0 >> 12;
	uint32_t index1 = addr1 >> 12;
	page = (uint32_t *) cpu->cd.mips.host_store[index0];
	if (cpu->delay_slot ||
	    page == NULL || (addr0 & 3) || (addr1 & 3)
	    || index1 != index0) {
		mips32_loadstore[28](cpu, ic);
		return;
	}
	addr0 = (addr0 >> 2) & 0x3ff;
	addr1 = (addr1 >> 2) & 0x3ff;
	r0 = reg(ic[0].arg[0]);
	r1 = reg(ic[1].arg[0]);
	r0 = BE32_TO_HOST(r0);
	r1 = BE32_TO_HOST(r1);
	page[addr0] = r0;
	page[addr1] = r1;
	cpu->n_translated_instrs += 1;
	cpu->cd.mips.next_ic += 1;
}

X(multi_sw_3_be)
{
	uint32_t *page;
	MODE_uint_t rX = reg(ic[0].arg[1]), r0, r1, r2;
	MODE_uint_t addr0 = rX + (int32_t)ic[0].arg[2];
	MODE_uint_t addr1 = rX + (int32_t)ic[1].arg[2];
	MODE_uint_t addr2 = rX + (int32_t)ic[2].arg[2];
	uint32_t index0 = addr0 >> 12;
	uint32_t index1 = addr1 >> 12;
	uint32_t index2 = addr2 >> 12;
	page = (uint32_t *) cpu->cd.mips.host_store[index0];
	if (cpu->delay_slot ||
	    page == NULL || (addr0 & 3) || (addr1 & 3) || (addr2 & 3)
	    || index1 != index0 || index2 != index0) {
		mips32_loadstore[28](cpu, ic);
		return;
	}
	addr0 = (addr0 >> 2) & 0x3ff;
	addr1 = (addr1 >> 2) & 0x3ff;
	addr2 = (addr2 >> 2) & 0x3ff;
	r0 = reg(ic[0].arg[0]);
	r1 = reg(ic[1].arg[0]);
	r2 = reg(ic[2].arg[0]);
	r0 = BE32_TO_HOST(r0);
	r1 = BE32_TO_HOST(r1);
	r2 = BE32_TO_HOST(r2);
	page[addr0] = r0;
	page[addr1] = r1;
	page[addr2] = r2;
	cpu->n_translated_instrs += 2;
	cpu->cd.mips.next_ic += 2;
}

X(multi_sw_4_be)
{
	uint32_t *page;
	MODE_uint_t rX = reg(ic[0].arg[1]), r0, r1, r2, r3;
	MODE_uint_t addr0 = rX + (int32_t)ic[0].arg[2];
	MODE_uint_t addr1 = rX + (int32_t)ic[1].arg[2];
	MODE_uint_t addr2 = rX + (int32_t)ic[2].arg[2];
	MODE_uint_t addr3 = rX + (int32_t)ic[3].arg[2];
	uint32_t index0 = addr0 >> 12;
	uint32_t index1 = addr1 >> 12;
	uint32_t index2 = addr2 >> 12;
	uint32_t index3 = addr3 >> 12;
	page = (uint32_t *) cpu->cd.mips.host_store[index0];
	if (cpu->delay_slot ||
	    page == NULL || (addr0 & 3) || (addr1 & 3) || (addr2 & 3) || (addr3 & 3)
	    || index1 != index0 || index2 != index0 || index3 != index0) {
		mips32_loadstore[28](cpu, ic);
		return;
	}
	addr0 = (addr0 >> 2) & 0x3ff;
	addr1 = (addr1 >> 2) & 0x3ff;
	addr2 = (addr2 >> 2) & 0x3ff;
	addr3 = (addr3 >> 2) & 0x3ff;
	r0 = reg(ic[0].arg[0]);
	r1 = reg(ic[1].arg[0]);
	r2 = reg(ic[2].arg[0]);
	r3 = reg(ic[3].arg[0]);
	r0 = BE32_TO_HOST(r0);
	r1 = BE32_TO_HOST(r1);
	r2 = BE32_TO_HOST(r2);
	r3 = BE32_TO_HOST(r3);
	page[addr0] = r0;
	page[addr1] = r1;
	page[addr2] = r2;
	page[addr3] = r3;
	cpu->n_translated_instrs += 3;
	cpu->cd.mips.next_ic += 3;
}

