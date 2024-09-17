case INS_sve_and:
case INS_sve_orr:
case INS_sve_eor:
case INS_sve_bic:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_AA_3A;
   break;

case INS_sve_add:
case INS_sve_sub:
case INS_sve_subr:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_AB_3A;
   break;

case INS_sve_udiv:
case INS_sve_sdiv:
case INS_sve_sdivr:
case INS_sve_udivr:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_AC_3A;
   break;

case INS_sve_smax:
case INS_sve_umax:
case INS_sve_smin:
case INS_sve_umin:
case INS_sve_sabd:
case INS_sve_uabd:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_AD_3A;
   break;

case INS_sve_mul:
case INS_sve_smulh:
case INS_sve_umulh:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_AE_3A;
   break;

case INS_sve_asr:
case INS_sve_lsl:
case INS_sve_lsr:
case INS_sve_asrr:
case INS_sve_lsrr:
case INS_sve_lslr:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_AN_3A;
   break;

case INS_sve_asr:
case INS_sve_lsl:
case INS_sve_lsr:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_AO_3A;
   break;

case INS_sve_clasta:
case INS_sve_clastb:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_CM_3A;
   break;

case INS_sve_clasta:
case INS_sve_clastb:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_CN_3A;
   break;

case INS_sve_clasta:
case INS_sve_clastb:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_CO_3A;
   break;

case INS_sve_shadd:
case INS_sve_srhadd:
case INS_sve_shsub:
case INS_sve_uhadd:
case INS_sve_urhadd:
case INS_sve_uhsub:
case INS_sve_shsubr:
case INS_sve_uhsubr:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_EP_3A;
   break;

case INS_sve_addp:
case INS_sve_smaxp:
case INS_sve_sminp:
case INS_sve_umaxp:
case INS_sve_uminp:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_ER_3A;
   break;

case INS_sve_sqadd:
case INS_sve_sqsub:
case INS_sve_uqadd:
case INS_sve_uqsub:
case INS_sve_suqadd:
case INS_sve_usqadd:
case INS_sve_sqsubr:
case INS_sve_uqsubr:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_ET_3A;
   break;

case INS_sve_sqshl:
case INS_sve_uqshl:
case INS_sve_srshl:
case INS_sve_sqrshl:
case INS_sve_urshl:
case INS_sve_uqrshl:
case INS_sve_srshlr:
case INS_sve_urshlr:
case INS_sve_sqshlr:
case INS_sve_uqshlr:
case INS_sve_sqrshlr:
case INS_sve_uqrshlr:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_EU_3A;
   break;

case INS_sve_fmaxnmp:
case INS_sve_faddp:
case INS_sve_fmaxp:
case INS_sve_fminnmp:
case INS_sve_fminp:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_GR_3A;
   break;

case INS_sve_fadda:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_HJ_3A;
   break;

case INS_sve_fmulx:
case INS_sve_fabd:
case INS_sve_fmul:
case INS_sve_fmaxnm:
case INS_sve_fadd:
case INS_sve_fmax:
case INS_sve_fminnm:
case INS_sve_fsub:
case INS_sve_famax:
case INS_sve_fmin:
case INS_sve_fdiv:
case INS_sve_famin:
case INS_sve_fscale:
case INS_sve_fsubr:
case INS_sve_fdivr:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_HL_3A;
   break;

case INS_sve_addpt:
case INS_sve_subpt:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   fmt = IF_SVE_AB_3B;
   break;

case INS_sve_bfmul:
case INS_sve_bfadd:
case INS_sve_bfsub:
case INS_sve_bfmaxnm:
case INS_sve_bfminnm:
case INS_sve_bfmax:
case INS_sve_bfmin:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   fmt = IF_SVE_HL_3B;
   break;

case INS_sve_orv:
case INS_sve_eorv:
case INS_sve_andv:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_AF_3A;
   break;

case INS_sve_orqv:
case INS_sve_eorqv:
case INS_sve_andqv:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_AG_3A;
   break;

case INS_sve_saddv:
case INS_sve_uaddv:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_AI_3A;
   break;

case INS_sve_addqv:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_AJ_3A;
   break;

case INS_sve_smaxv:
case INS_sve_sminv:
case INS_sve_umaxv:
case INS_sve_uminv:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_AK_3A;
   break;

case INS_sve_smaxqv:
case INS_sve_umaxqv:
case INS_sve_sminqv:
case INS_sve_uminqv:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_AL_3A;
   break;

case INS_sve_clz:
case INS_sve_cls:
case INS_sve_cnt:
case INS_sve_fabs:
case INS_sve_not:
case INS_sve_fneg:
case INS_sve_cnot:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_AP_3A;
   break;

case INS_sve_sxtb:
case INS_sve_sxth:
case INS_sve_sxtw:
case INS_sve_uxtb:
case INS_sve_uxth:
case INS_sve_neg:
case INS_sve_abs:
case INS_sve_uxtw:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_AQ_3A;
   break;

case INS_sve_compact:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_CL_3A;
   break;

case INS_sve_mov:
case INS_sve_cpy:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_CP_3A;
   break;

case INS_sve_mov:
case INS_sve_cpy:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_CQ_3A;
   break;

case INS_sve_lasta:
case INS_sve_lastb:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_CR_3A;
   break;

case INS_sve_lasta:
case INS_sve_lastb:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_CS_3A;
   break;

case INS_sve_rbit:
case INS_sve_revb:
case INS_sve_revh:
case INS_sve_revw:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_CU_3A;
   break;

case INS_sve_sadalp:
case INS_sve_uadalp:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_EQ_3A;
   break;

case INS_sve_sqabs:
case INS_sve_sqneg:
case INS_sve_urecpe:
case INS_sve_ursqrte:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_ES_3A;
   break;

case INS_sve_faddqv:
case INS_sve_fmaxnmqv:
case INS_sve_fminnmqv:
case INS_sve_fmaxqv:
case INS_sve_fminqv:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_GS_3A;
   break;

case INS_sve_fmaxnmv:
case INS_sve_fmaxv:
case INS_sve_fminnmv:
case INS_sve_fminv:
case INS_sve_faddv:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_HE_3A;
   break;

case INS_sve_frintn:
case INS_sve_frintm:
case INS_sve_frintp:
case INS_sve_frintz:
case INS_sve_frinta:
case INS_sve_frintx:
case INS_sve_frinti:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_HQ_3A;
   break;

case INS_sve_frecpx:
case INS_sve_fsqrt:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_HR_3A;
   break;

case INS_sve_movprfx:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidPredQualifier()); // M
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_AH_3A;
   break;

case INS_sve_add:
case INS_sve_sub:
case INS_sve_sqadd:
case INS_sve_sqsub:
case INS_sve_uqadd:
case INS_sve_uqsub:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_AT_3A;
   break;

case INS_sve_index:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_BA_3A;
   break;

case INS_sve_mul:
case INS_sve_smulh:
case INS_sve_umulh:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_BD_3A;
   break;

case INS_sve_sqdmulh:
case INS_sve_sqrdmulh:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_BE_3A;
   break;

case INS_sve_asr:
case INS_sve_lsl:
case INS_sve_lsr:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_BG_3A;
   break;

case INS_sve_ftssel:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_BK_3A;
   break;

case INS_sve_uzp1:
case INS_sve_trn1:
case INS_sve_zip1:
case INS_sve_uzp2:
case INS_sve_trn2:
case INS_sve_zip2:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_BR_3A;
   break;

case INS_sve_tbl:
case INS_sve_tbx:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_BZ_3A;
   break;

case INS_sve_tbl:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_BZ_3A_A;
   break;

case INS_sve_tbxq:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_CA_3A;
   break;

case INS_sve_sdot:
case INS_sve_udot:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_EH_3A;
   break;

case INS_sve_smlalb:
case INS_sve_smlalt:
case INS_sve_umlalb:
case INS_sve_umlalt:
case INS_sve_smlslb:
case INS_sve_smlslt:
case INS_sve_umlslb:
case INS_sve_umlslt:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_EL_3A;
   break;

case INS_sve_sqrdmlah:
case INS_sve_sqrdmlsh:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_EM_3A;
   break;

case INS_sve_sqdmlalbt:
case INS_sve_sqdmlslbt:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_EN_3A;
   break;

case INS_sve_sqdmlalb:
case INS_sve_sqdmlalt:
case INS_sve_sqdmlslb:
case INS_sve_sqdmlslt:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_EO_3A;
   break;

case INS_sve_sclamp:
case INS_sve_uclamp:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_EV_3A;
   break;

case INS_sve_zipq1:
case INS_sve_zipq2:
case INS_sve_uzpq1:
case INS_sve_uzpq2:
case INS_sve_tblq:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_EX_3A;
   break;

case INS_sve_saddlb:
case INS_sve_saddlt:
case INS_sve_uaddlb:
case INS_sve_uaddlt:
case INS_sve_ssublb:
case INS_sve_ssublt:
case INS_sve_usublb:
case INS_sve_usublt:
case INS_sve_sabdlb:
case INS_sve_sabdlt:
case INS_sve_uabdlb:
case INS_sve_uabdlt:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_FL_3A;
   break;

case INS_sve_saddwb:
case INS_sve_saddwt:
case INS_sve_uaddwb:
case INS_sve_uaddwt:
case INS_sve_ssubwb:
case INS_sve_ssubwt:
case INS_sve_usubwb:
case INS_sve_usubwt:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_FM_3A;
   break;

case INS_sve_smullb:
case INS_sve_smullt:
case INS_sve_umullb:
case INS_sve_umullt:
case INS_sve_sqdmullb:
case INS_sve_sqdmullt:
case INS_sve_pmullb:
case INS_sve_pmullt:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_FN_3A;
   break;

case INS_sve_eorbt:
case INS_sve_eortb:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_FP_3A;
   break;

case INS_sve_bext:
case INS_sve_bdep:
case INS_sve_bgrp:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_FQ_3A;
   break;

case INS_sve_saddlbt:
case INS_sve_ssublbt:
case INS_sve_ssubltb:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_FS_3A;
   break;

case INS_sve_saba:
case INS_sve_uaba:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_FW_3A;
   break;

case INS_sve_sabalb:
case INS_sve_sabalt:
case INS_sve_uabalb:
case INS_sve_uabalt:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_FX_3A;
   break;

case INS_sve_addhnb:
case INS_sve_addhnt:
case INS_sve_raddhnb:
case INS_sve_raddhnt:
case INS_sve_subhnb:
case INS_sve_subhnt:
case INS_sve_rsubhnb:
case INS_sve_rsubhnt:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_GC_3A;
   break;

case INS_sve_histseg:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_GF_3A;
   break;

case INS_sve_fclamp:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_GW_3A;
   break;

case INS_sve_frecps:
case INS_sve_frsqrts:
case INS_sve_fmul:
case INS_sve_fadd:
case INS_sve_fsub:
case INS_sve_ftsmul:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_HK_3A;
   break;

case INS_sve_addpt:
case INS_sve_subpt:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   fmt = IF_SVE_AT_3B;
   break;

case INS_sve_mov:
case INS_sve_and:
case INS_sve_orr:
case INS_sve_eor:
case INS_sve_bic:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   fmt = IF_SVE_AU_3A;
   break;

case INS_sve_pmul:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   fmt = IF_SVE_BD_3B;
   break;

case INS_sve_uzp1:
case INS_sve_trn1:
case INS_sve_zip1:
case INS_sve_uzp2:
case INS_sve_trn2:
case INS_sve_zip2:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   fmt = IF_SVE_BR_3B;
   break;

case INS_sve_sdot:
case INS_sve_udot:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   fmt = IF_SVE_EF_3A;
   break;

case INS_sve_usdot:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   fmt = IF_SVE_EI_3A;
   break;

case INS_sve_mlapt:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   fmt = IF_SVE_EW_3A;
   break;

case INS_sve_pmullb:
case INS_sve_pmullt:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   fmt = IF_SVE_FN_3B;
   break;

case INS_sve_smmla:
case INS_sve_usmmla:
case INS_sve_ummla:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   fmt = IF_SVE_FO_3A;
   break;

case INS_sve_rax1:
case INS_sve_sm4ekey:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   fmt = IF_SVE_GJ_3A;
   break;

case INS_sve_fmlalb:
case INS_sve_fmlalt:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   fmt = IF_SVE_GN_3A;
   break;

case INS_sve_fmlallbb:
case INS_sve_fmlallbt:
case INS_sve_fmlalltb:
case INS_sve_fmlalltt:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   fmt = IF_SVE_GO_3A;
   break;

case INS_sve_bfclamp:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   fmt = IF_SVE_GW_3B;
   break;

case INS_sve_fdot:
case INS_sve_bfdot:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   fmt = IF_SVE_HA_3A;
   break;

case INS_sve_fdot:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   fmt = IF_SVE_HA_3A_E;
   break;

case INS_sve_fdot:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   fmt = IF_SVE_HA_3A_F;
   break;

case INS_sve_fmlalb:
case INS_sve_fmlalt:
case INS_sve_fmlslb:
case INS_sve_fmlslt:
case INS_sve_bfmlalb:
case INS_sve_bfmlalt:
case INS_sve_bfmlslb:
case INS_sve_bfmlslt:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   fmt = IF_SVE_HB_3A;
   break;

case INS_sve_bfmmla:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   fmt = IF_SVE_HD_3A;
   break;

case INS_sve_fmmla:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   fmt = IF_SVE_HD_3A_A;
   break;

case INS_sve_bfmul:
case INS_sve_bfadd:
case INS_sve_bfsub:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   fmt = IF_SVE_HK_3B;
   break;

case INS_sve_bsl:
case INS_sve_eor3:
case INS_sve_bcax:
case INS_sve_bsl1n:
case INS_sve_bsl2n:
case INS_sve_nbsl:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // kkkkk
   assert(isVectorRegister(reg20)); // mmmmm
   assert(isVectorRegister(reg30)); // ddddd
   fmt = IF_SVE_AV_3A;
   break;

case INS_sve_adr:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidImmShift(opt)); // hh
   assert(isValidVectorElemsize(opt)); // x
   fmt = IF_SVE_BH_3A;
   break;

case INS_sve_adr:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidImmShift(opt)); // hh
   fmt = IF_SVE_BH_3B;
   break;

case INS_sve_adr:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidImmShift(opt)); // hh
   fmt = IF_SVE_BH_3B_A;
   break;

case INS_sve_uzp1:
case INS_sve_trn1:
case INS_sve_zip1:
case INS_sve_uzp2:
case INS_sve_trn2:
case INS_sve_zip2:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // MMMM
   assert(isPredicateRegister(reg20)); // NNNN
   assert(isPredicateRegister(reg30)); // DDDD
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_CI_3A;
   break;

case INS_sve_revd:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   fmt = IF_SVE_CT_3A;
   break;

case INS_sve_fcvtxnt:
case INS_sve_fcvtnt:
case INS_sve_fcvtlt:
case INS_sve_bfcvtnt:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   fmt = IF_SVE_GQ_3A;
   break;

case INS_sve_fcvt:
case INS_sve_bfcvt:
case INS_sve_fcvtx:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   fmt = IF_SVE_HO_3A;
   break;

case INS_sve_fcvt:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   fmt = IF_SVE_HO_3A_B;
   break;

case INS_sve_fcvtzs:
case INS_sve_fcvtzu:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   fmt = IF_SVE_HP_3B;
   break;

case INS_sve_fcvtzs:
case INS_sve_fcvtzu:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   fmt = IF_SVE_HP_3B_H;
   break;

case INS_sve_fcvtzs:
case INS_sve_fcvtzu:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   fmt = IF_SVE_HP_3B_I;
   break;

case INS_sve_fcvtzs:
case INS_sve_fcvtzu:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   fmt = IF_SVE_HP_3B_J;
   break;

case INS_sve_scvtf:
case INS_sve_ucvtf:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   fmt = IF_SVE_HS_3A;
   break;

case INS_sve_scvtf:
case INS_sve_ucvtf:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   fmt = IF_SVE_HS_3A_H;
   break;

case INS_sve_scvtf:
case INS_sve_ucvtf:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   fmt = IF_SVE_HS_3A_I;
   break;

case INS_sve_scvtf:
case INS_sve_ucvtf:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   fmt = IF_SVE_HS_3A_J;
   break;

case INS_sve_splice:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // VVV
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_CV_3A;
   break;

case INS_sve_splice:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // VVV
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_CV_3B;
   break;

case INS_sve_brka:
case INS_sve_brkb:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // NNNN
   assert(isValidPredQualifier()); // M
   assert(isPredicateRegister(reg20)); // gggg
   assert(isPredicateRegister(reg30)); // DDDD
   fmt = IF_SVE_DB_3A;
   break;

case INS_sve_brkas:
case INS_sve_brkbs:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // NNNN
   assert(isPredicateRegister(reg20)); // gggg
   assert(isPredicateRegister(reg30)); // DDDD
   fmt = IF_SVE_DB_3B;
   break;

case INS_sve_brkn:
case INS_sve_brkns:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // NNNN
   assert(isPredicateRegister(reg20)); // gggg
   assert(isPredicateRegister(reg30)); // MMMM
   fmt = IF_SVE_DC_3A;
   break;

case INS_sve_cntp:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // NNNN
   assert(isPredicateRegister(reg20)); // gggg
   assert(isValidGeneralRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_DK_3A;
   break;

case INS_sve_whilege:
case INS_sve_whilegt:
case INS_sve_whilelt:
case INS_sve_whilele:
case INS_sve_whilehs:
case INS_sve_whilehi:
case INS_sve_whilelo:
case INS_sve_whilels:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // DDDD
   assert(isValidGeneralRegister(reg20)); // nnnnn
   assert(isValidVectorDatasize(code, size)); // X
   assert(isValidGeneralRegister(reg30)); // mmmmm
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_DT_3A;
   break;

case INS_sve_whilewr:
case INS_sve_whilerw:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // DDDD
   assert(isValidGeneralRegister(reg20)); // nnnnn
   assert(isValidGeneralRegister(reg30)); // mmmmm
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_DU_3A;
   break;

case INS_sve_whilege:
case INS_sve_whilegt:
case INS_sve_whilelt:
case INS_sve_whilele:
case INS_sve_whilehs:
case INS_sve_whilehi:
case INS_sve_whilelo:
case INS_sve_whilels:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // DDD
   assert(isValidGeneralRegister(reg20)); // nnnnn
   assert(isValidGeneralRegister(reg30)); // mmmmm
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_DX_3A;
   break;

case INS_sve_whilege:
case INS_sve_whilegt:
case INS_sve_whilelt:
case INS_sve_whilele:
case INS_sve_whilehs:
case INS_sve_whilehi:
case INS_sve_whilelo:
case INS_sve_whilels:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isValidVectorLength()); // l
   assert(isPredicateRegister(reg10)); // DDD
   assert(isValidGeneralRegister(reg20)); // nnnnn
   assert(isValidGeneralRegister(reg30)); // mmmmm
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_DY_3A;
   break;

case INS_sve_cdot:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidRot()); // rr
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_EJ_3A;
   break;

case INS_sve_cmla:
case INS_sve_sqrdcmlah:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidRot()); // rr
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_EK_3A;
   break;

case INS_sve_madpt:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // aaaaa
   assert(isVectorRegister(reg20)); // mmmmm
   assert(isVectorRegister(reg30)); // ddddd
   fmt = IF_SVE_EW_3B;
   break;

case INS_sve_adclb:
case INS_sve_adclt:
case INS_sve_sbclb:
case INS_sve_sbclt:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // x
   fmt = IF_SVE_FY_3A;
   break;

case INS_sve_fcadd:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidRot()); // r
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_GP_3A;
   break;

case INS_sve_fcmeq:
case INS_sve_fcmge:
case INS_sve_fcmgt:
case INS_sve_fcmlt:
case INS_sve_fcmle:
case INS_sve_fcmne:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isPredicateRegister(reg30)); // DDDD
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_HI_3A;
   break;

case INS_sve_flogb:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_HP_3A;
   break;

case INS_sve_prfb:
case INS_sve_prfh:
case INS_sve_prfw:
case INS_sve_prfd:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isValidPrfop()); // oooo
   assert(isValidGeneralRegister(reg30)); // nnnnn
   assert(isValidImmShift(opt)); // h
   fmt = IF_SVE_HY_3A;
   break;

case INS_sve_prfb:
case INS_sve_prfh:
case INS_sve_prfw:
case INS_sve_prfd:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isValidPrfop()); // oooo
   assert(isValidGeneralRegister(reg30)); // nnnnn
   assert(isValidImmShift(opt)); // h
   fmt = IF_SVE_HY_3A_A;
   break;

case INS_sve_prfb:
case INS_sve_prfh:
case INS_sve_prfw:
case INS_sve_prfd:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isValidPrfop()); // oooo
   assert(isValidGeneralRegister(reg30)); // nnnnn
   fmt = IF_SVE_HY_3B;
   break;

case INS_sve_prfb:
case INS_sve_prfh:
case INS_sve_prfw:
case INS_sve_prfd:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isPredicateRegister(reg20)); // ggg
   assert(isValidPrfop()); // oooo
   assert(isValidGeneralRegister(reg30)); // nnnnn
   fmt = IF_SVE_IB_3A;
   break;

