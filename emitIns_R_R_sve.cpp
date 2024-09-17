case INS_sve_movprfx:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isVectorRegister(reg20)); // ddddd
   fmt = IF_SVE_BI_2A;
   break;

case INS_sve_f1cvt:
case INS_sve_f2cvt:
case INS_sve_bf1cvt:
case INS_sve_bf2cvt:
case INS_sve_f1cvtlt:
case INS_sve_f2cvtlt:
case INS_sve_bf1cvtlt:
case INS_sve_bf2cvtlt:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isVectorRegister(reg20)); // ddddd
   fmt = IF_SVE_HH_2A;
   break;

case INS_sve_fexpa:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isVectorRegister(reg20)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_BJ_2A;
   break;

case INS_sve_mov:
case INS_sve_dup:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isVectorRegister(reg20)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_CB_2A;
   break;

case INS_sve_rev:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isVectorRegister(reg20)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_CG_2A;
   break;

case INS_sve_sunpkhi:
case INS_sve_sunpklo:
case INS_sve_uunpkhi:
case INS_sve_uunpklo:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isVectorRegister(reg20)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_CH_2A;
   break;

case INS_sve_frecpe:
case INS_sve_frsqrte:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isVectorRegister(reg20)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_HF_2A;
   break;

case INS_sve_fmov:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // gggg
   assert(isVectorRegister(reg20)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_BV_2B;
   break;

case INS_sve_insr:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // ddddd
   assert(isVectorRegister(reg20)); // mmmmm
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_CC_2A;
   break;

case INS_sve_insr:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // ddddd
   assert(isVectorRegister(reg20)); // mmmmm
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_CD_2A;
   break;

case INS_sve_pmov:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // DDDD
   fmt = IF_SVE_CE_2A;
   break;

case INS_sve_pmov:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // NNNN
   assert(isVectorRegister(reg20)); // ddddd
   fmt = IF_SVE_CF_2A;
   break;

case INS_sve_rev:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // NNNN
   assert(isPredicateRegister(reg20)); // DDDD
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_CJ_2A;
   break;

case INS_sve_punpkhi:
case INS_sve_punpklo:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // NNNN
   assert(isPredicateRegister(reg20)); // DDDD
   fmt = IF_SVE_CK_2A;
   break;

case INS_sve_pfirst:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // gggg
   assert(isPredicateRegister(reg20)); // DDDD
   fmt = IF_SVE_DD_2A;
   break;

case INS_sve_rdffr:
case INS_sve_rdffrs:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // gggg
   assert(isPredicateRegister(reg20)); // DDDD
   fmt = IF_SVE_DG_2A;
   break;

case INS_sve_pnext:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // VVVV
   assert(isPredicateRegister(reg20)); // DDDD
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_DF_2A;
   break;

case INS_sve_ptest:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // NNNN
   assert(isPredicateRegister(reg20)); // gggg
   fmt = IF_SVE_DI_2A;
   break;

case INS_sve_cntp:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isValidVectorLength()); // l
   assert(isPredicateRegister(reg10)); // NNNN
   assert(isValidGeneralRegister(reg20)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_DL_2A;
   break;

case INS_sve_incp:
case INS_sve_decp:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // MMMM
   assert(isValidGeneralRegister(reg20)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_DM_2A;
   break;

case INS_sve_incp:
case INS_sve_decp:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // MMMM
   assert(isValidGeneralRegister(reg20)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_DN_2A;
   break;

case INS_sve_sqincp:
case INS_sve_uqincp:
case INS_sve_sqdecp:
case INS_sve_uqdecp:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // MMMM
   assert(isValidGeneralRegister(reg20)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_DP_2A;
   break;

case INS_sve_sqincp:
case INS_sve_uqincp:
case INS_sve_sqdecp:
case INS_sve_uqdecp:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // MMMM
   assert(isValidGeneralRegister(reg20)); // ddddd
   assert(isValidVectorDatasize(code, size)); // X
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_DO_2A;
   break;

case INS_sve_ctermeq:
case INS_sve_ctermne:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isValidGeneralRegister(reg10)); // nnnnn
   assert(isValidGeneralRegister(reg20)); // mmmmm
   assert(isValidVectorElemsize(opt)); // x
   fmt = IF_SVE_DS_2A;
   break;

case INS_sve_cadd:
case INS_sve_sqcadd:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // ddddd
   assert(isValidRot()); // r
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_FV_2A;
   break;

case INS_sve_sqcvtn:
case INS_sve_uqcvtn:
case INS_sve_sqcvtun:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnn
   assert(isVectorRegister(reg20)); // ddddd
   fmt = IF_SVE_FZ_2A;
   break;

case INS_sve_fcvtn:
case INS_sve_bfcvtn:
case INS_sve_fcvtnt:
case INS_sve_fcvtnb:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnn
   assert(isVectorRegister(reg20)); // ddddd
   fmt = IF_SVE_HG_2A;
   break;

case INS_sve_sqxtnb:
case INS_sve_sqxtnt:
case INS_sve_uqxtnb:
case INS_sve_uqxtnt:
case INS_sve_sqxtunb:
case INS_sve_sqxtunt:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isVectorRegister(reg20)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   assert(isValidVectorElemsize(opt)); // x
   fmt = IF_SVE_GD_2A;
   break;

case INS_sve_aese:
case INS_sve_aesd:
case INS_sve_sm4e:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // ddddd
   fmt = IF_SVE_GK_2A;
   break;

