case INS_sve_index:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // ddddd
   assert(isValidImm()); // iiiii
   assert(isValidImm()); // iiiii
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_AX_1A;
   break;

case INS_sve_rdvl:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isValidGeneralRegister(reg10)); // ddddd
   assert(isValidImm()); // iiiiii
   fmt = IF_SVE_BC_1A;
   break;

case INS_sve_cntb:
case INS_sve_cntd:
case INS_sve_cnth:
case INS_sve_cntw:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isValidPattern()); // ppppp
   assert(isValidGeneralRegister(reg10)); // ddddd
   assert(isValidImm()); // iiii
   fmt = IF_SVE_BL_1A;
   break;

case INS_sve_incb:
case INS_sve_incd:
case INS_sve_inch:
case INS_sve_incw:
case INS_sve_decb:
case INS_sve_decd:
case INS_sve_dech:
case INS_sve_decw:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isValidPattern()); // ppppp
   assert(isValidGeneralRegister(reg10)); // ddddd
   assert(isValidImm()); // iiii
   fmt = IF_SVE_BM_1A;
   break;

case INS_sve_incd:
case INS_sve_inch:
case INS_sve_incw:
case INS_sve_decd:
case INS_sve_dech:
case INS_sve_decw:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isValidPattern()); // ppppp
   assert(isValidGeneralRegister(reg10)); // ddddd
   assert(isValidImm()); // iiii
   fmt = IF_SVE_BN_1A;
   break;

case INS_sve_sqinch:
case INS_sve_uqinch:
case INS_sve_sqdech:
case INS_sve_uqdech:
case INS_sve_sqincw:
case INS_sve_uqincw:
case INS_sve_sqdecw:
case INS_sve_uqdecw:
case INS_sve_sqincd:
case INS_sve_uqincd:
case INS_sve_sqdecd:
case INS_sve_uqdecd:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isValidPattern()); // ppppp
   assert(isValidGeneralRegister(reg10)); // ddddd
   assert(isValidImm()); // iiii
   fmt = IF_SVE_BP_1A;
   break;

case INS_sve_sqincb:
case INS_sve_uqincb:
case INS_sve_sqdecb:
case INS_sve_uqdecb:
case INS_sve_sqinch:
case INS_sve_uqinch:
case INS_sve_sqdech:
case INS_sve_uqdech:
case INS_sve_sqincw:
case INS_sve_uqincw:
case INS_sve_sqdecw:
case INS_sve_uqdecw:
case INS_sve_sqincd:
case INS_sve_uqincd:
case INS_sve_sqdecd:
case INS_sve_uqdecd:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isValidPattern()); // ppppp
   assert(isValidGeneralRegister(reg10)); // ddddd
   assert(isValidImm()); // iiii
   assert(isValidVectorDatasize(code, size)); // X
   fmt = IF_SVE_BO_1A;
   break;

case INS_sve_and:
case INS_sve_orr:
case INS_sve_eor:
case INS_sve_bic:
case INS_sve_orn:
case INS_sve_eon:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // ddddd
   assert(isValidImm()); // iiiiiiiiiiiii
   fmt = IF_SVE_BS_1A;
   break;

case INS_sve_mov:
case INS_sve_dupm:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // ddddd
   assert(isValidImm()); // iiiiiiiiiiiii
   fmt = IF_SVE_BT_1A;
   break;

case INS_sve_fmov:
case INS_sve_fdup:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // ddddd
   assert(isValidImm()); // iiiiiiii
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_EA_1A;
   break;

case INS_sve_smax:
case INS_sve_umax:
case INS_sve_smin:
case INS_sve_umin:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // ddddd
   assert(isValidImm()); // iiiiiiii
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_ED_1A;
   break;

case INS_sve_mul:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // ddddd
   assert(isValidImm()); // iiiiiiii
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_EE_1A;
   break;

case INS_sve_mov:
case INS_sve_dup:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isValidImmShift(opt)); // h
   assert(isVectorRegister(reg10)); // ddddd
   assert(isValidImm()); // iiiiiiii
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_EB_1A;
   break;

case INS_sve_add:
case INS_sve_sub:
case INS_sve_sqadd:
case INS_sve_sqsub:
case INS_sve_uqadd:
case INS_sve_uqsub:
case INS_sve_subr:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isValidImmShift(opt)); // h
   assert(isVectorRegister(reg10)); // ddddd
   assert(isValidImm()); // iiiiiiii
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_EC_1A;
   break;

