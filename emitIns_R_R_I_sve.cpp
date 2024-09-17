case INS_sve_asr:
case INS_sve_lsl:
case INS_sve_lsr:
case INS_sve_srshr:
case INS_sve_sqshl:
case INS_sve_urshr:
case INS_sve_sqshlu:
case INS_sve_uqshl:
case INS_sve_asrd:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // ggg
   assert(isVectorRegister(reg20)); // ddddd
   assert(isValidImm()); // iii
   assert(isValidVectorElemsize(opt)); // xx
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_AM_2A;
   break;

case INS_sve_xar:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // ddddd
   assert(isValidImm()); // iii
   assert(isValidVectorElemsize(opt)); // xx
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_AW_2A;
   break;

case INS_sve_index:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // ddddd
   assert(isValidImm()); // iiiii
   assert(isValidGeneralRegister(reg20)); // mmmmm
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_AY_2A;
   break;

case INS_sve_index:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // ddddd
   assert(isValidGeneralRegister(reg20)); // nnnnn
   assert(isValidImm()); // iiiii
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_AZ_2A;
   break;

case INS_sve_addvl:
case INS_sve_addpl:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isValidGeneralRegister(reg10)); // ddddd
   assert(isValidImm()); // iiiiii
   assert(isValidGeneralRegister(reg20)); // nnnnn
   fmt = IF_SVE_BB_2A;
   break;

case INS_sve_asr:
case INS_sve_lsl:
case INS_sve_lsr:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isVectorRegister(reg20)); // ddddd
   assert(isValidImm()); // iii
   assert(isValidVectorElemsize(opt)); // xx
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_BF_2A;
   break;

case INS_sve_sri:
case INS_sve_sli:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isVectorRegister(reg20)); // ddddd
   assert(isValidImm()); // iii
   assert(isValidVectorElemsize(opt)); // xx
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_FT_2A;
   break;

case INS_sve_ssra:
case INS_sve_srsra:
case INS_sve_usra:
case INS_sve_ursra:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isVectorRegister(reg20)); // ddddd
   assert(isValidImm()); // iii
   assert(isValidVectorElemsize(opt)); // xx
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_FU_2A;
   break;

case INS_sve_ext:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isVectorRegister(reg20)); // ddddd
   assert(isValidImm()); // iii
   assert(isValidImm()); // iiiii
   fmt = IF_SVE_BQ_2A;
   break;

case INS_sve_ext:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // ddddd
   assert(isValidImm()); // iii
   assert(isValidImm()); // iiiii
   fmt = IF_SVE_BQ_2B;
   break;

case INS_sve_fmov:
case INS_sve_fcpy:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // gggg
   assert(isVectorRegister(reg20)); // ddddd
   assert(isValidImm()); // iiiiiiii
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_BU_2A;
   break;

case INS_sve_mov:
case INS_sve_cpy:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isValidImmShift(opt)); // h
   assert(isPredicateRegister(reg10)); // gggg
   assert(isVectorRegister(reg20)); // ddddd
   assert(isValidImm()); // iiiiiiii
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_BV_2A;
   break;

case INS_sve_cpy:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isValidImmShift(opt)); // h
   assert(isPredicateRegister(reg10)); // gggg
   assert(isVectorRegister(reg20)); // ddddd
   assert(isValidImm()); // iiiiiiii
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_BV_2A_A;
   break;

case INS_sve_mov:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isValidImmShift(opt)); // h
   assert(isPredicateRegister(reg10)); // gggg
   assert(isVectorRegister(reg20)); // ddddd
   assert(isValidImm()); // iiiiiiii
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_BV_2A_J;
   break;

case INS_sve_mov:
case INS_sve_dup:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isVectorRegister(reg20)); // ddddd
   assert(isValidVectorElemsize(opt)); // xxxxx
   assert(isValidImm()); // ii
   fmt = IF_SVE_BW_2A;
   break;

case INS_sve_dupq:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isVectorRegister(reg20)); // ddddd
   assert(isValidVectorElemsize(opt)); // xxxx
   assert(isValidimm1l()); // i
   fmt = IF_SVE_BX_2A;
   break;

case INS_sve_extq:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // ddddd
   assert(isValidImm()); // iiii
   fmt = IF_SVE_BY_2A;
   break;

case INS_sve_pmov:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // DDDD
   assert(isValidimm3l()); // ii
   assert(isValidimm3h()); // i
   fmt = IF_SVE_CE_2B;
   break;

case INS_sve_pmov:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // DDDD
   assert(isValidimm1l()); // i
   fmt = IF_SVE_CE_2C;
   break;

case INS_sve_pmov:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // DDDD
   assert(isValidimm2()); // ii
   fmt = IF_SVE_CE_2D;
   break;

case INS_sve_pmov:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // NNNN
   assert(isVectorRegister(reg20)); // ddddd
   assert(isValidimm3l()); // ii
   assert(isValidimm3h()); // i
   fmt = IF_SVE_CF_2B;
   break;

case INS_sve_pmov:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // NNNN
   assert(isVectorRegister(reg20)); // ddddd
   assert(isValidimm1l()); // i
   fmt = IF_SVE_CF_2C;
   break;

case INS_sve_pmov:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // NNNN
   assert(isVectorRegister(reg20)); // ddddd
   assert(isValidimm2()); // ii
   fmt = IF_SVE_CF_2D;
   break;

case INS_sve_pext:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // NNN
   assert(isPredicateRegister(reg20)); // DDDD
   assert(isValidImm()); // ii
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_DW_2A;
   break;

case INS_sve_pext:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // NNN
   assert(isPredicateRegister(reg20)); // DDDD
   assert(isValidimm1l()); // i
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_DW_2B;
   break;

case INS_sve_sshllb:
case INS_sve_sshllt:
case INS_sve_ushllb:
case INS_sve_ushllt:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isVectorRegister(reg20)); // ddddd
   assert(isValidImm()); // iii
   assert(isValidVectorElemsize(opt)); // xx
   assert(isValidVectorElemsize(opt)); // x
   fmt = IF_SVE_FR_2A;
   break;

case INS_sve_sqshrunb:
case INS_sve_sqshrunt:
case INS_sve_sqrshrunb:
case INS_sve_sqrshrunt:
case INS_sve_shrnb:
case INS_sve_shrnt:
case INS_sve_rshrnb:
case INS_sve_rshrnt:
case INS_sve_sqshrnb:
case INS_sve_sqshrnt:
case INS_sve_sqrshrnb:
case INS_sve_sqrshrnt:
case INS_sve_uqshrnb:
case INS_sve_uqshrnt:
case INS_sve_uqrshrnb:
case INS_sve_uqrshrnt:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isVectorRegister(reg20)); // ddddd
   assert(isValidImm()); // iii
   assert(isValidVectorElemsize(opt)); // xx
   assert(isValidVectorElemsize(opt)); // x
   fmt = IF_SVE_GB_2A;
   break;

case INS_sve_sqrshrn:
case INS_sve_sqrshrun:
case INS_sve_uqrshrn:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnn
   assert(isVectorRegister(reg20)); // ddddd
   assert(isValidImm()); // iiii
   fmt = IF_SVE_GA_2A;
   break;

case INS_sve_fmul:
case INS_sve_fmaxnm:
case INS_sve_fadd:
case INS_sve_fmax:
case INS_sve_fminnm:
case INS_sve_fsub:
case INS_sve_fmin:
case INS_sve_fsubr:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // ggg
   assert(isVectorRegister(reg20)); // ddddd
   assert(isValidimm1l()); // i
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_HM_2A;
   break;

case INS_sve_ftmad:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // ddddd
   assert(isValidImm()); // iii
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_HN_2A;
   break;

case INS_sve_prfb:
case INS_sve_prfh:
case INS_sve_prfw:
case INS_sve_prfd:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isValidPrfop()); // oooo
   assert(isValidImm()); // iiiii
   fmt = IF_SVE_HZ_2A_B;
   break;

case INS_sve_prfb:
case INS_sve_prfh:
case INS_sve_prfw:
case INS_sve_prfd:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // ggg
   assert(isValidPrfop()); // oooo
   assert(isValidGeneralRegister(reg20)); // nnnnn
   assert(isValidImm()); // iiiiii
   fmt = IF_SVE_IA_2A;
   break;

case INS_sve_ldr:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // TTTT
   assert(isValidGeneralRegister(reg20)); // nnnnn
   assert(isValidImm()); // iii
   assert(isValidImm()); // iiiiii
   fmt = IF_SVE_ID_2A;
   break;

case INS_sve_str:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // TTTT
   assert(isValidGeneralRegister(reg20)); // nnnnn
   assert(isValidImm()); // iii
   assert(isValidImm()); // iiiiii
   fmt = IF_SVE_JG_2A;
   break;

case INS_sve_ldr:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // ttttt
   assert(isValidGeneralRegister(reg20)); // nnnnn
   assert(isValidImm()); // iii
   assert(isValidImm()); // iiiiii
   fmt = IF_SVE_IE_2A;
   break;

case INS_sve_str:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // ttttt
   assert(isValidGeneralRegister(reg20)); // nnnnn
   assert(isValidImm()); // iii
   assert(isValidImm()); // iiiiii
   fmt = IF_SVE_JH_2A;
   break;

