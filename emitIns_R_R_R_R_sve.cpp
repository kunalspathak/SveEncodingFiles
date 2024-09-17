case INS_sve_mla:
case INS_sve_mls:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isPredicateRegister(reg30)); // ggg
   assert(isVectorRegister(reg40)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_AR_4A;
   break;

case INS_sve_histcnt:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isPredicateRegister(reg30)); // ggg
   assert(isVectorRegister(reg40)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_GI_4A;
   break;

case INS_sve_fmla:
case INS_sve_fmls:
case INS_sve_fnmla:
case INS_sve_fnmls:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isPredicateRegister(reg30)); // ggg
   assert(isVectorRegister(reg40)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_HU_4A;
   break;

case INS_sve_mad:
case INS_sve_msb:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // aaaaa
   assert(isVectorRegister(reg20)); // mmmmm
   assert(isPredicateRegister(reg30)); // ggg
   assert(isVectorRegister(reg40)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_AS_4A;
   break;

case INS_sve_mov:
case INS_sve_sel:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isPredicateRegister(reg30)); // VVVV
   assert(isVectorRegister(reg40)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_CW_4A;
   break;

case INS_sve_cmpeq:
case INS_sve_cmpgt:
case INS_sve_cmpge:
case INS_sve_cmphi:
case INS_sve_cmphs:
case INS_sve_cmpne:
case INS_sve_cmple:
case INS_sve_cmplo:
case INS_sve_cmpls:
case INS_sve_cmplt:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isPredicateRegister(reg30)); // ggg
   assert(isPredicateRegister(reg40)); // DDDD
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_CX_4A;
   break;

case INS_sve_cmpeq:
case INS_sve_cmpgt:
case INS_sve_cmpge:
case INS_sve_cmphi:
case INS_sve_cmphs:
case INS_sve_cmpne:
case INS_sve_cmple:
case INS_sve_cmplo:
case INS_sve_cmpls:
case INS_sve_cmplt:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isPredicateRegister(reg30)); // ggg
   assert(isPredicateRegister(reg40)); // DDDD
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_CX_4A_A;
   break;

case INS_sve_match:
case INS_sve_nmatch:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isPredicateRegister(reg30)); // ggg
   assert(isPredicateRegister(reg40)); // DDDD
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_GE_4A;
   break;

case INS_sve_fcmeq:
case INS_sve_fcmge:
case INS_sve_facge:
case INS_sve_fcmgt:
case INS_sve_facgt:
case INS_sve_fcmlt:
case INS_sve_fcmle:
case INS_sve_fcmne:
case INS_sve_fcmuo:
case INS_sve_facle:
case INS_sve_faclt:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isPredicateRegister(reg30)); // ggg
   assert(isPredicateRegister(reg40)); // DDDD
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_HT_4A;
   break;

case INS_sve_mov:
case INS_sve_and:
case INS_sve_orr:
case INS_sve_eor:
case INS_sve_ands:
case INS_sve_bic:
case INS_sve_orn:
case INS_sve_bics:
case INS_sve_not:
case INS_sve_sel:
case INS_sve_movs:
case INS_sve_eors:
case INS_sve_nots:
case INS_sve_nor:
case INS_sve_nand:
case INS_sve_orrs:
case INS_sve_orns:
case INS_sve_nors:
case INS_sve_nands:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // MMMM
   assert(isPredicateRegister(reg20)); // NNNN
   assert(isPredicateRegister(reg30)); // gggg
   assert(isPredicateRegister(reg40)); // DDDD
   fmt = IF_SVE_CZ_4A;
   break;

case INS_sve_movs:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // MMMM
   assert(isPredicateRegister(reg20)); // NNNN
   assert(isPredicateRegister(reg30)); // gggg
   assert(isPredicateRegister(reg40)); // DDDD
   fmt = IF_SVE_CZ_4A_A;
   break;

case INS_sve_mov:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // MMMM
   assert(isPredicateRegister(reg20)); // NNNN
   assert(isPredicateRegister(reg30)); // gggg
   assert(isPredicateRegister(reg40)); // DDDD
   fmt = IF_SVE_CZ_4A_K;
   break;

case INS_sve_mov:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // MMMM
   assert(isPredicateRegister(reg20)); // NNNN
   assert(isPredicateRegister(reg30)); // gggg
   assert(isPredicateRegister(reg40)); // DDDD
   fmt = IF_SVE_CZ_4A_L;
   break;

case INS_sve_brkpa:
case INS_sve_brkpb:
case INS_sve_brkpas:
case INS_sve_brkpbs:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // MMMM
   assert(isPredicateRegister(reg20)); // NNNN
   assert(isPredicateRegister(reg30)); // gggg
   assert(isPredicateRegister(reg40)); // DDDD
   fmt = IF_SVE_DA_4A;
   break;

case INS_sve_fcmla:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isPredicateRegister(reg30)); // ggg
   assert(isVectorRegister(reg40)); // ddddd
   assert(isValidRot()); // rr
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_GT_4A;
   break;

case INS_sve_bfmla:
case INS_sve_bfmls:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isPredicateRegister(reg30)); // ggg
   assert(isVectorRegister(reg40)); // ddddd
   fmt = IF_SVE_HU_4B;
   break;

case INS_sve_fmad:
case INS_sve_fmsb:
case INS_sve_fnmad:
case INS_sve_fnmsb:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // aaaaa
   assert(isVectorRegister(reg20)); // mmmmm
   assert(isPredicateRegister(reg30)); // ggg
   assert(isVectorRegister(reg40)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_HV_4A;
   break;

case INS_sve_ld1sb:
case INS_sve_ldff1sb:
case INS_sve_ld1b:
case INS_sve_ldff1b:
case INS_sve_ld1sh:
case INS_sve_ldff1sh:
case INS_sve_ld1h:
case INS_sve_ldff1h:
case INS_sve_ld1w:
case INS_sve_ldff1w:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   assert(isValidImmShift(opt)); // h
   fmt = IF_SVE_HW_4A;
   break;

case INS_sve_ld1sb:
case INS_sve_ldff1sb:
case INS_sve_ld1b:
case INS_sve_ldff1b:
case INS_sve_ld1sh:
case INS_sve_ldff1sh:
case INS_sve_ld1h:
case INS_sve_ldff1h:
case INS_sve_ld1w:
case INS_sve_ldff1w:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   assert(isValidImmShift(opt)); // h
   fmt = IF_SVE_HW_4A_A;
   break;

case INS_sve_ld1sh:
case INS_sve_ldff1sh:
case INS_sve_ld1h:
case INS_sve_ldff1h:
case INS_sve_ld1w:
case INS_sve_ldff1w:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   assert(isValidImmShift(opt)); // h
   fmt = IF_SVE_HW_4A_B;
   break;

case INS_sve_ld1sh:
case INS_sve_ldff1sh:
case INS_sve_ld1h:
case INS_sve_ldff1h:
case INS_sve_ld1w:
case INS_sve_ldff1w:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   assert(isValidImmShift(opt)); // h
   fmt = IF_SVE_HW_4A_C;
   break;

case INS_sve_ldff1sw:
case INS_sve_ldff1d:
case INS_sve_ld1d:
case INS_sve_ld1sw:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   assert(isValidImmShift(opt)); // h
   fmt = IF_SVE_IU_4A;
   break;

case INS_sve_ldff1sw:
case INS_sve_ldff1d:
case INS_sve_ld1sw:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   assert(isValidImmShift(opt)); // h
   fmt = IF_SVE_IU_4A_A;
   break;

case INS_sve_ld1d:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   assert(isValidImmShift(opt)); // h
   fmt = IF_SVE_IU_4A_C;
   break;

case INS_sve_ld1sb:
case INS_sve_ldff1sb:
case INS_sve_ld1b:
case INS_sve_ldff1b:
case INS_sve_ld1sh:
case INS_sve_ldff1sh:
case INS_sve_ld1h:
case INS_sve_ldff1h:
case INS_sve_ld1w:
case INS_sve_ldff1w:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_HW_4B;
   break;

case INS_sve_ld1sh:
case INS_sve_ldff1sh:
case INS_sve_ld1h:
case INS_sve_ldff1h:
case INS_sve_ld1w:
case INS_sve_ldff1w:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_HW_4B_D;
   break;

case INS_sve_ldnt1sb:
case INS_sve_ldnt1b:
case INS_sve_ldnt1sh:
case INS_sve_ldnt1h:
case INS_sve_ldnt1w:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_IF_4A;
   break;

case INS_sve_ldnt1sb:
case INS_sve_ldnt1b:
case INS_sve_ldnt1sh:
case INS_sve_ldnt1h:
case INS_sve_ldnt1w:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_IF_4A_A;
   break;

case INS_sve_ldff1sw:
case INS_sve_ldff1d:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_IG_4A;
   break;

case INS_sve_ldff1sb:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_IG_4A_D;
   break;

case INS_sve_ldff1b:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_IG_4A_E;
   break;

case INS_sve_ldff1sh:
case INS_sve_ldff1w:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_IG_4A_F;
   break;

case INS_sve_ldff1h:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_IG_4A_G;
   break;

case INS_sve_ld1d:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_II_4A;
   break;

case INS_sve_ld1d:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_II_4A_B;
   break;

case INS_sve_ld1w:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_II_4A_H;
   break;

case INS_sve_ld1sw:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_IK_4A;
   break;

case INS_sve_ld1sb:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_IK_4A_F;
   break;

case INS_sve_ld1sh:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_IK_4A_G;
   break;

case INS_sve_ld1b:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_IK_4A_H;
   break;

case INS_sve_ld1h:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_IK_4A_I;
   break;

case INS_sve_ldnt1b:
case INS_sve_ldnt1h:
case INS_sve_ldnt1w:
case INS_sve_ldnt1d:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_IN_4A;
   break;

case INS_sve_ld1rqb:
case INS_sve_ld1rob:
case INS_sve_ld1rqh:
case INS_sve_ld1roh:
case INS_sve_ld1rqw:
case INS_sve_ld1row:
case INS_sve_ld1rqd:
case INS_sve_ld1rod:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_IP_4A;
   break;

case INS_sve_ld2q:
case INS_sve_ld3q:
case INS_sve_ld4q:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_IR_4A;
   break;

case INS_sve_ld2b:
case INS_sve_ld3b:
case INS_sve_ld4b:
case INS_sve_ld2h:
case INS_sve_ld3h:
case INS_sve_ld4h:
case INS_sve_ld2w:
case INS_sve_ld3w:
case INS_sve_ld4w:
case INS_sve_ld2d:
case INS_sve_ld3d:
case INS_sve_ld4d:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_IT_4A;
   break;

case INS_sve_ldff1sw:
case INS_sve_ldff1d:
case INS_sve_ld1d:
case INS_sve_ld1sw:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_IU_4B;
   break;

case INS_sve_ldff1sw:
case INS_sve_ldff1d:
case INS_sve_ld1sw:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_IU_4B_B;
   break;

case INS_sve_ld1d:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_IU_4B_D;
   break;

case INS_sve_ld1q:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_IW_4A;
   break;

case INS_sve_ldnt1d:
case INS_sve_ldnt1sw:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_IX_4A;
   break;

case INS_sve_st1q:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_IY_4A;
   break;

case INS_sve_stnt1b:
case INS_sve_stnt1h:
case INS_sve_stnt1w:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_IZ_4A;
   break;

case INS_sve_stnt1b:
case INS_sve_stnt1h:
case INS_sve_stnt1w:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_IZ_4A_A;
   break;

case INS_sve_stnt1d:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_JA_4A;
   break;

case INS_sve_stnt1b:
case INS_sve_stnt1h:
case INS_sve_stnt1w:
case INS_sve_stnt1d:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_JB_4A;
   break;

case INS_sve_st2b:
case INS_sve_st3b:
case INS_sve_st4b:
case INS_sve_st2h:
case INS_sve_st3h:
case INS_sve_st4h:
case INS_sve_st2w:
case INS_sve_st3w:
case INS_sve_st4w:
case INS_sve_st2d:
case INS_sve_st3d:
case INS_sve_st4d:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_JC_4A;
   break;

case INS_sve_st1w:
case INS_sve_st1d:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_JD_4C;
   break;

case INS_sve_st1d:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_JD_4C_A;
   break;

case INS_sve_st2q:
case INS_sve_st3q:
case INS_sve_st4q:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_JF_4A;
   break;

case INS_sve_st1h:
case INS_sve_st1w:
case INS_sve_st1d:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_JJ_4B;
   break;

case INS_sve_st1d:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_JJ_4B_C;
   break;

case INS_sve_st1h:
case INS_sve_st1w:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_JJ_4B_E;
   break;

case INS_sve_st1b:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   fmt = IF_SVE_JK_4B;
   break;

case INS_sve_st1b:
case INS_sve_st1h:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // ggg
   assert(isVectorRegister(reg20)); // ttttt
   assert(isValidGeneralRegister(reg30)); // nnnnn
   assert(isValidGeneralRegister(reg40)); // mmmmm
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_JD_4A;
   break;

case INS_sve_st1w:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // ggg
   assert(isVectorRegister(reg20)); // ttttt
   assert(isValidGeneralRegister(reg30)); // nnnnn
   assert(isValidGeneralRegister(reg40)); // mmmmm
   assert(isValidVectorElemsize(opt)); // x
   fmt = IF_SVE_JD_4B;
   break;

case INS_sve_st1h:
case INS_sve_st1w:
case INS_sve_st1d:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   assert(isValidImmShift(opt)); // h
   fmt = IF_SVE_JJ_4A;
   break;

case INS_sve_st1h:
case INS_sve_st1w:
case INS_sve_st1d:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   assert(isValidImmShift(opt)); // h
   fmt = IF_SVE_JJ_4A_B;
   break;

case INS_sve_st1h:
case INS_sve_st1w:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   assert(isValidImmShift(opt)); // h
   fmt = IF_SVE_JJ_4A_C;
   break;

case INS_sve_st1h:
case INS_sve_st1w:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   assert(isValidImmShift(opt)); // h
   fmt = IF_SVE_JJ_4A_D;
   break;

case INS_sve_st1b:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   assert(isValidImmShift(opt)); // h
   fmt = IF_SVE_JK_4A;
   break;

case INS_sve_st1b:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidGeneralRegister(reg40)); // nnnnn
   assert(isValidImmShift(opt)); // h
   fmt = IF_SVE_JK_4A_B;
   break;

