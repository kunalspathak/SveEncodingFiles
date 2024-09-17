case INS_sve_cmpeq:
case INS_sve_cmpgt:
case INS_sve_cmpge:
case INS_sve_cmpne:
case INS_sve_cmple:
case INS_sve_cmplt:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isPredicateRegister(reg30)); // DDDD
   assert(isValidImm()); // iiiii
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_CY_3A;
   break;

case INS_sve_cmphi:
case INS_sve_cmphs:
case INS_sve_cmplo:
case INS_sve_cmpls:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isPredicateRegister(reg30)); // DDDD
   assert(isValidImm()); // iiiiiii
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_CY_3B;
   break;

case INS_sve_sdot:
case INS_sve_udot:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm2()); // ii
   fmt = IF_SVE_EG_3A;
   break;

case INS_sve_sdot:
case INS_sve_udot:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm2()); // ii
   fmt = IF_SVE_EY_3A;
   break;

case INS_sve_usdot:
case INS_sve_sudot:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm2()); // ii
   fmt = IF_SVE_EZ_3A;
   break;

case INS_sve_mul:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm2()); // ii
   fmt = IF_SVE_FD_3B;
   break;

case INS_sve_mla:
case INS_sve_mls:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm2()); // ii
   fmt = IF_SVE_FF_3B;
   break;

case INS_sve_sqdmulh:
case INS_sve_sqrdmulh:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm2()); // ii
   fmt = IF_SVE_FI_3B;
   break;

case INS_sve_sqrdmlah:
case INS_sve_sqrdmlsh:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm2()); // ii
   fmt = IF_SVE_FK_3B;
   break;

case INS_sve_fmla:
case INS_sve_fmls:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm2()); // ii
   fmt = IF_SVE_GU_3A;
   break;

case INS_sve_fmul:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm2()); // ii
   fmt = IF_SVE_GX_3A;
   break;

case INS_sve_fdot:
case INS_sve_bfdot:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm2()); // ii
   fmt = IF_SVE_GY_3B;
   break;

case INS_sve_fdot:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm2()); // ii
   fmt = IF_SVE_GY_3B_D;
   break;

case INS_sve_sdot:
case INS_sve_udot:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm1l()); // i
   fmt = IF_SVE_EY_3B;
   break;

case INS_sve_mul:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm1l()); // i
   fmt = IF_SVE_FD_3C;
   break;

case INS_sve_mla:
case INS_sve_mls:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm1l()); // i
   fmt = IF_SVE_FF_3C;
   break;

case INS_sve_sqdmulh:
case INS_sve_sqrdmulh:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm1l()); // i
   fmt = IF_SVE_FI_3C;
   break;

case INS_sve_sqrdmlah:
case INS_sve_sqrdmlsh:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm1l()); // i
   fmt = IF_SVE_FK_3C;
   break;

case INS_sve_fmla:
case INS_sve_fmls:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm1l()); // i
   fmt = IF_SVE_GU_3B;
   break;

case INS_sve_fmul:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm1l()); // i
   fmt = IF_SVE_GX_3B;
   break;

case INS_sve_cdot:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidRot()); // rr
   assert(isValidimm2()); // ii
   fmt = IF_SVE_FA_3A;
   break;

case INS_sve_cmla:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidRot()); // rr
   assert(isValidimm2()); // ii
   fmt = IF_SVE_FB_3A;
   break;

case INS_sve_sqrdcmlah:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidRot()); // rr
   assert(isValidimm2()); // ii
   fmt = IF_SVE_FC_3A;
   break;

case INS_sve_cdot:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidRot()); // rr
   assert(isValidimm1l()); // i
   fmt = IF_SVE_FA_3B;
   break;

case INS_sve_cmla:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidRot()); // rr
   assert(isValidimm1l()); // i
   fmt = IF_SVE_FB_3B;
   break;

case INS_sve_sqrdcmlah:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidRot()); // rr
   assert(isValidimm1l()); // i
   fmt = IF_SVE_FC_3B;
   break;

case INS_sve_fcmla:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidRot()); // rr
   assert(isValidimm1l()); // i
   fmt = IF_SVE_GV_3A;
   break;

case INS_sve_mul:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm3l()); // ii
   assert(isValidimm3h()); // i
   fmt = IF_SVE_FD_3A;
   break;

case INS_sve_mla:
case INS_sve_mls:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm3l()); // ii
   assert(isValidimm3h()); // i
   fmt = IF_SVE_FF_3A;
   break;

case INS_sve_sqdmulh:
case INS_sve_sqrdmulh:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm3l()); // ii
   assert(isValidimm3h()); // i
   fmt = IF_SVE_FI_3A;
   break;

case INS_sve_sqrdmlah:
case INS_sve_sqrdmlsh:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm3l()); // ii
   assert(isValidimm3h()); // i
   fmt = IF_SVE_FK_3A;
   break;

case INS_sve_bfmla:
case INS_sve_bfmls:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm3l()); // ii
   assert(isValidimm3h()); // i
   fmt = IF_SVE_GU_3C;
   break;

case INS_sve_bfmul:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm3l()); // ii
   assert(isValidimm3h()); // i
   fmt = IF_SVE_GX_3C;
   break;

case INS_sve_smullb:
case INS_sve_smullt:
case INS_sve_umullb:
case INS_sve_umullt:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm3l()); // i
   assert(isValidimm3h()); // ii
   fmt = IF_SVE_FE_3A;
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
   assert(isVectorRegister(reg10)); // mmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm3l()); // i
   assert(isValidimm3h()); // ii
   fmt = IF_SVE_FG_3A;
   break;

case INS_sve_sqdmullb:
case INS_sve_sqdmullt:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm3l()); // i
   assert(isValidimm3h()); // ii
   fmt = IF_SVE_FH_3A;
   break;

case INS_sve_sqdmlalb:
case INS_sve_sqdmlalt:
case INS_sve_sqdmlslb:
case INS_sve_sqdmlslt:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm3l()); // i
   assert(isValidimm3h()); // ii
   fmt = IF_SVE_FJ_3A;
   break;

case INS_sve_fdot:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm3l()); // i
   assert(isValidimm3h()); // ii
   fmt = IF_SVE_GY_3A;
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
   assert(isVectorRegister(reg10)); // mmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm3l()); // i
   assert(isValidimm3h()); // ii
   fmt = IF_SVE_GZ_3A;
   break;

case INS_sve_smullb:
case INS_sve_smullt:
case INS_sve_umullb:
case INS_sve_umullt:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm2l()); // i
   assert(isValidimm2h()); // i
   fmt = IF_SVE_FE_3B;
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
   assert(isVectorRegister(reg10)); // mmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm2l()); // i
   assert(isValidimm2h()); // i
   fmt = IF_SVE_FG_3B;
   break;

case INS_sve_sqdmullb:
case INS_sve_sqdmullt:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm2l()); // i
   assert(isValidimm2h()); // i
   fmt = IF_SVE_FH_3B;
   break;

case INS_sve_sqdmlalb:
case INS_sve_sqdmlalt:
case INS_sve_sqdmlslb:
case INS_sve_sqdmlslt:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm2l()); // i
   assert(isValidimm2h()); // i
   fmt = IF_SVE_FJ_3B;
   break;

case INS_sve_luti2:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm2()); // ii
   fmt = IF_SVE_GG_3A;
   break;

case INS_sve_luti4:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm2()); // ii
   fmt = IF_SVE_GH_3B;
   break;

case INS_sve_luti4:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm2()); // ii
   fmt = IF_SVE_GH_3B_B;
   break;

case INS_sve_luti2:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm3l()); // i
   assert(isValidimm3h()); // ii
   fmt = IF_SVE_GG_3B;
   break;

case INS_sve_luti4:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmmmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm1l()); // i
   fmt = IF_SVE_GH_3A;
   break;

case INS_sve_fmlalb:
case INS_sve_fmlalt:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm4l()); // ii
   assert(isValidimm4h()); // ii
   fmt = IF_SVE_GM_3A;
   break;

case INS_sve_fmlallbb:
case INS_sve_fmlallbt:
case INS_sve_fmlalltb:
case INS_sve_fmlalltt:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // mmm
   assert(isVectorRegister(reg20)); // nnnnn
   assert(isVectorRegister(reg30)); // ddddd
   assert(isValidimm4l()); // ii
   assert(isValidimm4h()); // ii
   fmt = IF_SVE_HC_3A;
   break;

case INS_sve_ld1sb:
case INS_sve_ldff1sb:
case INS_sve_ld1b:
case INS_sve_ldff1b:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidImm()); // iiiii
   fmt = IF_SVE_HX_3A_B;
   break;

case INS_sve_ld1sh:
case INS_sve_ldff1sh:
case INS_sve_ld1h:
case INS_sve_ldff1h:
case INS_sve_ld1w:
case INS_sve_ldff1w:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidImm()); // iiiii
   fmt = IF_SVE_HX_3A_E;
   break;

case INS_sve_ldff1sw:
case INS_sve_ldff1d:
case INS_sve_ld1d:
case INS_sve_ld1sw:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidImm()); // iiiii
   fmt = IF_SVE_IV_3A;
   break;

case INS_sve_st1b:
case INS_sve_st1h:
case INS_sve_st1w:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidImm()); // iiiii
   fmt = IF_SVE_JI_3A_A;
   break;

case INS_sve_st1d:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // nnnnn
   assert(isPredicateRegister(reg20)); // ggg
   assert(isVectorRegister(reg30)); // ttttt
   assert(isValidImm()); // iiiii
   fmt = IF_SVE_JL_3A;
   break;

case INS_sve_ld1rsw:
case INS_sve_ld1rd:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // ggg
   assert(isVectorRegister(reg20)); // ttttt
   assert(isValidGeneralRegister(reg30)); // nnnnn
   assert(isValidImm()); // iiiiii
   fmt = IF_SVE_IC_3A;
   break;

case INS_sve_ld1rsh:
case INS_sve_ld1rw:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // ggg
   assert(isVectorRegister(reg20)); // ttttt
   assert(isValidGeneralRegister(reg30)); // nnnnn
   assert(isValidImm()); // iiiiii
   fmt = IF_SVE_IC_3A_A;
   break;

case INS_sve_ld1rh:
case INS_sve_ld1rsb:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // ggg
   assert(isVectorRegister(reg20)); // ttttt
   assert(isValidGeneralRegister(reg30)); // nnnnn
   assert(isValidImm()); // iiiiii
   fmt = IF_SVE_IC_3A_B;
   break;

case INS_sve_ld1rb:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // ggg
   assert(isVectorRegister(reg20)); // ttttt
   assert(isValidGeneralRegister(reg30)); // nnnnn
   assert(isValidImm()); // iiiiii
   fmt = IF_SVE_IC_3A_C;
   break;

case INS_sve_ld1d:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // ggg
   assert(isVectorRegister(reg20)); // ttttt
   assert(isValidGeneralRegister(reg30)); // nnnnn
   assert(isValidImm()); // iiii
   fmt = IF_SVE_IH_3A;
   break;

case INS_sve_ld1d:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // ggg
   assert(isVectorRegister(reg20)); // ttttt
   assert(isValidGeneralRegister(reg30)); // nnnnn
   assert(isValidImm()); // iiii
   fmt = IF_SVE_IH_3A_A;
   break;

case INS_sve_ld1w:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // ggg
   assert(isVectorRegister(reg20)); // ttttt
   assert(isValidGeneralRegister(reg30)); // nnnnn
   assert(isValidImm()); // iiii
   fmt = IF_SVE_IH_3A_F;
   break;

case INS_sve_ld1sw:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // ggg
   assert(isVectorRegister(reg20)); // ttttt
   assert(isValidGeneralRegister(reg30)); // nnnnn
   assert(isValidImm()); // iiii
   fmt = IF_SVE_IJ_3A;
   break;

case INS_sve_ld1sb:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // ggg
   assert(isVectorRegister(reg20)); // ttttt
   assert(isValidGeneralRegister(reg30)); // nnnnn
   assert(isValidImm()); // iiii
   fmt = IF_SVE_IJ_3A_D;
   break;

case INS_sve_ld1b:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // ggg
   assert(isVectorRegister(reg20)); // ttttt
   assert(isValidGeneralRegister(reg30)); // nnnnn
   assert(isValidImm()); // iiii
   fmt = IF_SVE_IJ_3A_E;
   break;

case INS_sve_ld1sh:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // ggg
   assert(isVectorRegister(reg20)); // ttttt
   assert(isValidGeneralRegister(reg30)); // nnnnn
   assert(isValidImm()); // iiii
   fmt = IF_SVE_IJ_3A_F;
   break;

case INS_sve_ld1h:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // ggg
   assert(isVectorRegister(reg20)); // ttttt
   assert(isValidGeneralRegister(reg30)); // nnnnn
   assert(isValidImm()); // iiii
   fmt = IF_SVE_IJ_3A_G;
   break;

case INS_sve_ldnf1sw:
case INS_sve_ldnf1d:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // ggg
   assert(isVectorRegister(reg20)); // ttttt
   assert(isValidGeneralRegister(reg30)); // nnnnn
   assert(isValidImm()); // iiii
   fmt = IF_SVE_IL_3A;
   break;

case INS_sve_ldnf1sh:
case INS_sve_ldnf1w:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // ggg
   assert(isVectorRegister(reg20)); // ttttt
   assert(isValidGeneralRegister(reg30)); // nnnnn
   assert(isValidImm()); // iiii
   fmt = IF_SVE_IL_3A_A;
   break;

case INS_sve_ldnf1h:
case INS_sve_ldnf1sb:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // ggg
   assert(isVectorRegister(reg20)); // ttttt
   assert(isValidGeneralRegister(reg30)); // nnnnn
   assert(isValidImm()); // iiii
   fmt = IF_SVE_IL_3A_B;
   break;

case INS_sve_ldnf1b:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // ggg
   assert(isVectorRegister(reg20)); // ttttt
   assert(isValidGeneralRegister(reg30)); // nnnnn
   assert(isValidImm()); // iiii
   fmt = IF_SVE_IL_3A_C;
   break;

case INS_sve_ldnt1b:
case INS_sve_ldnt1h:
case INS_sve_ldnt1w:
case INS_sve_ldnt1d:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // ggg
   assert(isVectorRegister(reg20)); // ttttt
   assert(isValidGeneralRegister(reg30)); // nnnnn
   assert(isValidImm()); // iiii
   fmt = IF_SVE_IM_3A;
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
   assert(isPredicateRegister(reg10)); // ggg
   assert(isVectorRegister(reg20)); // ttttt
   assert(isValidGeneralRegister(reg30)); // nnnnn
   assert(isValidImm()); // iiii
   fmt = IF_SVE_IO_3A;
   break;

case INS_sve_ld2q:
case INS_sve_ld3q:
case INS_sve_ld4q:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // ggg
   assert(isVectorRegister(reg20)); // ttttt
   assert(isValidGeneralRegister(reg30)); // nnnnn
   assert(isValidImm()); // iiii
   fmt = IF_SVE_IQ_3A;
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
   assert(isPredicateRegister(reg10)); // ggg
   assert(isVectorRegister(reg20)); // ttttt
   assert(isValidGeneralRegister(reg30)); // nnnnn
   assert(isValidImm()); // iiii
   fmt = IF_SVE_IS_3A;
   break;

case INS_sve_st2q:
case INS_sve_st3q:
case INS_sve_st4q:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // ggg
   assert(isVectorRegister(reg20)); // ttttt
   assert(isValidGeneralRegister(reg30)); // nnnnn
   assert(isValidImm()); // iiii
   fmt = IF_SVE_JE_3A;
   break;

case INS_sve_stnt1b:
case INS_sve_stnt1h:
case INS_sve_stnt1w:
case INS_sve_stnt1d:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // ggg
   assert(isVectorRegister(reg20)); // ttttt
   assert(isValidGeneralRegister(reg30)); // nnnnn
   assert(isValidImm()); // iiii
   fmt = IF_SVE_JM_3A;
   break;

case INS_sve_st1w:
case INS_sve_st1d:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // ggg
   assert(isVectorRegister(reg20)); // ttttt
   assert(isValidGeneralRegister(reg30)); // nnnnn
   assert(isValidImm()); // iiii
   fmt = IF_SVE_JN_3C;
   break;

case INS_sve_st1d:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // ggg
   assert(isVectorRegister(reg20)); // ttttt
   assert(isValidGeneralRegister(reg30)); // nnnnn
   assert(isValidImm()); // iiii
   fmt = IF_SVE_JN_3C_D;
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
   assert(isPredicateRegister(reg10)); // ggg
   assert(isVectorRegister(reg20)); // ttttt
   assert(isValidGeneralRegister(reg30)); // nnnnn
   assert(isValidImm()); // iiii
   fmt = IF_SVE_JO_3A;
   break;

case INS_sve_st1b:
case INS_sve_st1h:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // ggg
   assert(isVectorRegister(reg20)); // ttttt
   assert(isValidGeneralRegister(reg30)); // nnnnn
   assert(isValidImm()); // iiii
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_JN_3A;
   break;

case INS_sve_st1w:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // ggg
   assert(isVectorRegister(reg20)); // ttttt
   assert(isValidGeneralRegister(reg30)); // nnnnn
   assert(isValidImm()); // iiii
   assert(isValidVectorElemsize(opt)); // x
   fmt = IF_SVE_JN_3B;
   break;

