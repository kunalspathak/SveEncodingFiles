
// IF_SVE_AA_3A
theEmitter->emitIns_R_R_R(INS_sve_and, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // AND     <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_bic, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // BIC     <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_eor, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // EOR     <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_orr, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // ORR     <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 

// IF_SVE_AB_3A
theEmitter->emitIns_R_R_R(INS_sve_add, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // ADD     <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_sub, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SUB     <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_subr, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SUBR    <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 

// IF_SVE_AB_3B
theEmitter->emitIns_R_R_R(INS_sve_addpt, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // ADDPT   <Zdn>.D, <Pg>/M, <Zdn>.D, <Zm>.D 
theEmitter->emitIns_R_R_R(INS_sve_subpt, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SUBPT   <Zdn>.D, <Pg>/M, <Zdn>.D, <Zm>.D 

// IF_SVE_AC_3A
theEmitter->emitIns_R_R_R(INS_sve_sdiv, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SDIV    <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_sdivr, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SDIVR   <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_udiv, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // UDIV    <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_udivr, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // UDIVR   <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 

// IF_SVE_AD_3A
theEmitter->emitIns_R_R_R(INS_sve_sabd, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SABD    <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_smax, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SMAX    <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_smin, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SMIN    <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_uabd, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // UABD    <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_umax, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // UMAX    <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_umin, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // UMIN    <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 

// IF_SVE_AE_3A
theEmitter->emitIns_R_R_R(INS_sve_mul, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // MUL     <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_smulh, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SMULH   <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_umulh, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // UMULH   <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 

// IF_SVE_AF_3A
theEmitter->emitIns_R_R_R(INS_sve_andv, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // ANDV    <V><d>, <Pg>, <Zn>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_eorv, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // EORV    <V><d>, <Pg>, <Zn>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_orv, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // ORV     <V><d>, <Pg>, <Zn>.<T> 

// IF_SVE_AG_3A
theEmitter->emitIns_R_R_R(INS_sve_andqv, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // ANDQV   <Vd>.<T>, <Pg>, <Zn>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_eorqv, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // EORQV   <Vd>.<T>, <Pg>, <Zn>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_orqv, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // ORQV    <Vd>.<T>, <Pg>, <Zn>.<Tb> 

// IF_SVE_AH_3A
theEmitter->emitIns_R_R_R(INS_sve_movprfx, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // MOVPRFX <Zd>.<T>, <Pg>/<ZM>, <Zn>.<T> 

// IF_SVE_AI_3A
theEmitter->emitIns_R_R_R(INS_sve_saddv, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SADDV   <Dd>, <Pg>, <Zn>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_uaddv, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // UADDV   <Dd>, <Pg>, <Zn>.<T> 

// IF_SVE_AJ_3A
theEmitter->emitIns_R_R_R(INS_sve_addqv, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // ADDQV   <Vd>.<T>, <Pg>, <Zn>.<Tb> 

// IF_SVE_AK_3A
theEmitter->emitIns_R_R_R(INS_sve_smaxv, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SMAXV   <V><d>, <Pg>, <Zn>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_sminv, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SMINV   <V><d>, <Pg>, <Zn>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_umaxv, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // UMAXV   <V><d>, <Pg>, <Zn>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_uminv, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // UMINV   <V><d>, <Pg>, <Zn>.<T> 

// IF_SVE_AL_3A
theEmitter->emitIns_R_R_R(INS_sve_smaxqv, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SMAXQV  <Vd>.<T>, <Pg>, <Zn>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_sminqv, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SMINQV  <Vd>.<T>, <Pg>, <Zn>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_umaxqv, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // UMAXQV  <Vd>.<T>, <Pg>, <Zn>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_uminqv, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // UMINQV  <Vd>.<T>, <Pg>, <Zn>.<Tb> 

// IF_SVE_AM_2A
theEmitter->emitIns_R_R_I(INS_sve_asr, EA_SCALABLE, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // ASR     <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, #<const> 
theEmitter->emitIns_R_R_I(INS_sve_asrd, EA_SCALABLE, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // ASRD    <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, #<const> 
theEmitter->emitIns_R_R_I(INS_sve_lsl, EA_SCALABLE, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // LSL     <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, #<const> 
theEmitter->emitIns_R_R_I(INS_sve_lsr, EA_SCALABLE, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // LSR     <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, #<const> 
theEmitter->emitIns_R_R_I(INS_sve_sqshl, EA_SCALABLE, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQSHL   <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, #<const> 
theEmitter->emitIns_R_R_I(INS_sve_sqshlu, EA_SCALABLE, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQSHLU  <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, #<const> 
theEmitter->emitIns_R_R_I(INS_sve_srshr, EA_SCALABLE, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SRSHR   <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, #<const> 
theEmitter->emitIns_R_R_I(INS_sve_uqshl, EA_SCALABLE, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // UQSHL   <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, #<const> 
theEmitter->emitIns_R_R_I(INS_sve_urshr, EA_SCALABLE, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // URSHR   <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, #<const> 

// IF_SVE_AN_3A
theEmitter->emitIns_R_R_R(INS_sve_asr, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // ASR     <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_asrr, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // ASRR    <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_lsl, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // LSL     <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_lslr, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // LSLR    <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_lsr, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // LSR     <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_lsrr, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // LSRR    <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 

// IF_SVE_AO_3A
theEmitter->emitIns_R_R_R(INS_sve_asr, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // ASR     <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.D 
theEmitter->emitIns_R_R_R(INS_sve_lsl, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // LSL     <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.D 
theEmitter->emitIns_R_R_R(INS_sve_lsr, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // LSR     <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.D 

// IF_SVE_AP_3A
theEmitter->emitIns_R_R_R(INS_sve_cls, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // CLS     <Zd>.<T>, <Pg>/M, <Zn>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_clz, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // CLZ     <Zd>.<T>, <Pg>/M, <Zn>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_cnot, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // CNOT    <Zd>.<T>, <Pg>/M, <Zn>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_cnt, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // CNT     <Zd>.<T>, <Pg>/M, <Zn>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_fabs, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FABS    <Zd>.<T>, <Pg>/M, <Zn>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_fneg, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FNEG    <Zd>.<T>, <Pg>/M, <Zn>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_not, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // NOT     <Zd>.<T>, <Pg>/M, <Zn>.<T> 

// IF_SVE_AQ_3A
theEmitter->emitIns_R_R_R(INS_sve_abs, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // ABS     <Zd>.<T>, <Pg>/M, <Zn>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_neg, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // NEG     <Zd>.<T>, <Pg>/M, <Zn>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_sxtb, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SXTB    <Zd>.<T>, <Pg>/M, <Zn>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_sxth, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SXTH    <Zd>.<T>, <Pg>/M, <Zn>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_sxtw, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SXTW    <Zd>.D, <Pg>/M, <Zn>.D 
theEmitter->emitIns_R_R_R(INS_sve_uxtb, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // UXTB    <Zd>.<T>, <Pg>/M, <Zn>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_uxth, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // UXTH    <Zd>.<T>, <Pg>/M, <Zn>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_uxtw, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // UXTW    <Zd>.D, <Pg>/M, <Zn>.D 

// IF_SVE_AR_4A
theEmitter->emitIns_R_R_R_R(INS_sve_mla, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // MLA     <Zda>.<T>, <Pg>/M, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R_R(INS_sve_mls, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // MLS     <Zda>.<T>, <Pg>/M, <Zn>.<T>, <Zm>.<T> 

// IF_SVE_AS_4A
theEmitter->emitIns_R_R_R_R(INS_sve_mad, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // MAD     <Zdn>.<T>, <Pg>/M, <Zm>.<T>, <Za>.<T> 
theEmitter->emitIns_R_R_R_R(INS_sve_msb, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // MSB     <Zdn>.<T>, <Pg>/M, <Zm>.<T>, <Za>.<T> 

// IF_SVE_AT_3A
theEmitter->emitIns_R_R_R(INS_sve_add, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // ADD     <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_sqadd, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SQADD   <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_sqsub, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SQSUB   <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_sub, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SUB     <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_uqadd, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // UQADD   <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_uqsub, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // UQSUB   <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 

// IF_SVE_AT_3B
theEmitter->emitIns_R_R_R(INS_sve_addpt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // ADDPT   <Zd>.D, <Zn>.D, <Zm>.D 
theEmitter->emitIns_R_R_R(INS_sve_subpt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SUBPT   <Zd>.D, <Zn>.D, <Zm>.D 

// IF_SVE_AU_3A
theEmitter->emitIns_R_R_R(INS_sve_and, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // AND     <Zd>.D, <Zn>.D, <Zm>.D 
theEmitter->emitIns_R_R_R(INS_sve_bic, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // BIC     <Zd>.D, <Zn>.D, <Zm>.D 
theEmitter->emitIns_R_R_R(INS_sve_eor, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // EOR     <Zd>.D, <Zn>.D, <Zm>.D 
theEmitter->emitIns_R_R_R(INS_sve_mov, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // MOV     <Zd>.D, <Zn>.D 
theEmitter->emitIns_R_R_R(INS_sve_orr, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // ORR     <Zd>.D, <Zn>.D, <Zm>.D 

// IF_SVE_AV_3A
theEmitter->emitIns_R_R_R(INS_sve_bcax, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // BCAX    <Zdn>.D, <Zdn>.D, <Zm>.D, <Zk>.D 
theEmitter->emitIns_R_R_R(INS_sve_bsl, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // BSL     <Zdn>.D, <Zdn>.D, <Zm>.D, <Zk>.D 
theEmitter->emitIns_R_R_R(INS_sve_bsl1n, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // BSL1N   <Zdn>.D, <Zdn>.D, <Zm>.D, <Zk>.D 
theEmitter->emitIns_R_R_R(INS_sve_bsl2n, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // BSL2N   <Zdn>.D, <Zdn>.D, <Zm>.D, <Zk>.D 
theEmitter->emitIns_R_R_R(INS_sve_eor3, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // EOR3    <Zdn>.D, <Zdn>.D, <Zm>.D, <Zk>.D 
theEmitter->emitIns_R_R_R(INS_sve_nbsl, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // NBSL    <Zdn>.D, <Zdn>.D, <Zm>.D, <Zk>.D 

// IF_SVE_AW_2A
theEmitter->emitIns_R_R_I(INS_sve_xar, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // XAR     <Zdn>.<T>, <Zdn>.<T>, <Zm>.<T>, #<const> 

// IF_SVE_AX_1A
theEmitter->emitIns_R_I(INS_sve_index, EA_SCALABLE, REG_V0, 5, INS_OPTS_SCALABLE_B);  // INDEX   <Zd>.<T>, #<imm1>, #<imm2> 

// IF_SVE_AY_2A
theEmitter->emitIns_R_R_I(INS_sve_index, EA_SCALABLE, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // INDEX   <Zd>.<T>, #<imm>, <R><m> 

// IF_SVE_AZ_2A
theEmitter->emitIns_R_R_I(INS_sve_index, EA_SCALABLE, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // INDEX   <Zd>.<T>, <R><n>, #<imm> 

// IF_SVE_BA_3A
theEmitter->emitIns_R_R_R(INS_sve_index, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // INDEX   <Zd>.<T>, <R><n>, <R><m> 

// IF_SVE_BB_2A
theEmitter->emitIns_R_R_I(INS_sve_addpl, EA_SCALABLE, REG_R0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // ADDPL   <Xd|SP>, <Xn|SP>, #<imm> 
theEmitter->emitIns_R_R_I(INS_sve_addvl, EA_SCALABLE, REG_R0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // ADDVL   <Xd|SP>, <Xn|SP>, #<imm> 

// IF_SVE_BC_1A
theEmitter->emitIns_R_I(INS_sve_rdvl, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // RDVL    <Xd>, #<imm> 

// IF_SVE_BD_3A
theEmitter->emitIns_R_R_R(INS_sve_mul, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // MUL     <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_smulh, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SMULH   <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_umulh, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // UMULH   <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 

// IF_SVE_BD_3B
theEmitter->emitIns_R_R_R(INS_sve_pmul, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // PMUL    <Zd>.B, <Zn>.B, <Zm>.B 

// IF_SVE_BE_3A
theEmitter->emitIns_R_R_R(INS_sve_sqdmulh, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SQDMULH <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_sqrdmulh, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SQRDMULH <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 

// IF_SVE_BF_2A
theEmitter->emitIns_R_R_I(INS_sve_asr, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // ASR     <Zd>.<T>, <Zn>.<T>, #<const> 
theEmitter->emitIns_R_R_I(INS_sve_lsl, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // LSL     <Zd>.<T>, <Zn>.<T>, #<const> 
theEmitter->emitIns_R_R_I(INS_sve_lsr, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // LSR     <Zd>.<T>, <Zn>.<T>, #<const> 

// IF_SVE_BG_3A
theEmitter->emitIns_R_R_R(INS_sve_asr, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // ASR     <Zd>.<T>, <Zn>.<T>, <Zm>.D 
theEmitter->emitIns_R_R_R(INS_sve_lsl, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // LSL     <Zd>.<T>, <Zn>.<T>, <Zm>.D 
theEmitter->emitIns_R_R_R(INS_sve_lsr, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // LSR     <Zd>.<T>, <Zn>.<T>, <Zm>.D 

// IF_SVE_BH_3A
theEmitter->emitIns_R_R_R(INS_sve_adr, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // ADR     <Zd>.<T>, [<Zn>.<T>, <Zm>.<T>{, <mod><amount>}] 

// IF_SVE_BH_3B
theEmitter->emitIns_R_R_R(INS_sve_adr, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // ADR     <Zd>.D, [<Zn>.D, <Zm>.D, SXTW{<amount>}] 

// IF_SVE_BH_3B_A
theEmitter->emitIns_R_R_R(INS_sve_adr, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // ADR     <Zd>.D, [<Zn>.D, <Zm>.D, UXTW{<amount>}] 

// IF_SVE_BI_2A
theEmitter->emitIns_R_R(INS_sve_movprfx, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // MOVPRFX <Zd>, <Zn> 

// IF_SVE_BJ_2A
theEmitter->emitIns_R_R(INS_sve_fexpa, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // FEXPA   <Zd>.<T>, <Zn>.<T> 

// IF_SVE_BK_3A
theEmitter->emitIns_R_R_R(INS_sve_ftssel, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // FTSSEL  <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 

// IF_SVE_BL_1A
theEmitter->emitIns_R_I(INS_sve_cntb, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // CNTB    <Xd>{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_cntd, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // CNTD    <Xd>{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_cnth, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // CNTH    <Xd>{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_cntw, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // CNTW    <Xd>{, <pattern>{, MUL #<imm>}} 

// IF_SVE_BM_1A
theEmitter->emitIns_R_I(INS_sve_decb, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // DECB    <Xdn>{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_decd, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // DECD    <Xdn>{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_dech, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // DECH    <Xdn>{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_decw, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // DECW    <Xdn>{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_incb, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // INCB    <Xdn>{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_incd, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // INCD    <Xdn>{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_inch, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // INCH    <Xdn>{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_incw, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // INCW    <Xdn>{, <pattern>{, MUL #<imm>}} 

// IF_SVE_BN_1A
theEmitter->emitIns_R_I(INS_sve_decd, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // DECD    <Zdn>.D{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_dech, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // DECH    <Zdn>.H{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_decw, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // DECW    <Zdn>.S{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_incd, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // INCD    <Zdn>.D{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_inch, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // INCH    <Zdn>.H{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_incw, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // INCW    <Zdn>.S{, <pattern>{, MUL #<imm>}} 

// IF_SVE_BO_1A
theEmitter->emitIns_R_I(INS_sve_sqdecb, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // SQDECB  <Xdn>, <Wdn>{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_sqdecd, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // SQDECD  <Xdn>, <Wdn>{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_sqdech, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // SQDECH  <Xdn>, <Wdn>{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_sqdecw, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // SQDECW  <Xdn>, <Wdn>{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_sqincb, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // SQINCB  <Xdn>, <Wdn>{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_sqincd, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // SQINCD  <Xdn>, <Wdn>{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_sqinch, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // SQINCH  <Xdn>, <Wdn>{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_sqincw, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // SQINCW  <Xdn>, <Wdn>{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_uqdecb, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // UQDECB  <Wdn>{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_uqdecd, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // UQDECD  <Wdn>{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_uqdech, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // UQDECH  <Wdn>{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_uqdecw, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // UQDECW  <Wdn>{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_uqincb, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // UQINCB  <Wdn>{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_uqincd, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // UQINCD  <Wdn>{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_uqinch, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // UQINCH  <Wdn>{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_uqincw, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // UQINCW  <Wdn>{, <pattern>{, MUL #<imm>}} 

// IF_SVE_BP_1A
theEmitter->emitIns_R_I(INS_sve_sqdecd, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // SQDECD  <Zdn>.D{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_sqdech, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // SQDECH  <Zdn>.H{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_sqdecw, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // SQDECW  <Zdn>.S{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_sqincd, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // SQINCD  <Zdn>.D{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_sqinch, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // SQINCH  <Zdn>.H{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_sqincw, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // SQINCW  <Zdn>.S{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_uqdecd, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // UQDECD  <Zdn>.D{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_uqdech, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // UQDECH  <Zdn>.H{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_uqdecw, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // UQDECW  <Zdn>.S{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_uqincd, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // UQINCD  <Zdn>.D{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_uqinch, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // UQINCH  <Zdn>.H{, <pattern>{, MUL #<imm>}} 
theEmitter->emitIns_R_I(INS_sve_uqincw, EA_SCALABLE, REG_R0, 5, INS_OPTS_SCALABLE_B);  // UQINCW  <Zdn>.S{, <pattern>{, MUL #<imm>}} 

// IF_SVE_BQ_2A
theEmitter->emitIns_R_R_I(INS_sve_ext, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // EXT     <Zd>.B, {<Zn1>.B, <Zn2>.B }, #<imm> 

// IF_SVE_BQ_2B
theEmitter->emitIns_R_R_I(INS_sve_ext, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // EXT     <Zdn>.B, <Zdn>.B, <Zm>.B, #<imm> 

// IF_SVE_BR_3A
theEmitter->emitIns_R_R_R(INS_sve_trn1, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // TRN1    <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_trn2, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // TRN2    <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_uzp1, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // UZP1    <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_uzp2, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // UZP2    <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_zip1, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // ZIP1    <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_zip2, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // ZIP2    <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 

// IF_SVE_BR_3B
theEmitter->emitIns_R_R_R(INS_sve_trn1, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // TRN1    <Zd>.Q, <Zn>.Q, <Zm>.Q 
theEmitter->emitIns_R_R_R(INS_sve_trn2, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // TRN2    <Zd>.Q, <Zn>.Q, <Zm>.Q 
theEmitter->emitIns_R_R_R(INS_sve_uzp1, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // UZP1    <Zd>.Q, <Zn>.Q, <Zm>.Q 
theEmitter->emitIns_R_R_R(INS_sve_uzp2, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // UZP2    <Zd>.Q, <Zn>.Q, <Zm>.Q 
theEmitter->emitIns_R_R_R(INS_sve_zip1, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // ZIP1    <Zd>.Q, <Zn>.Q, <Zm>.Q 
theEmitter->emitIns_R_R_R(INS_sve_zip2, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // ZIP2    <Zd>.Q, <Zn>.Q, <Zm>.Q 

// IF_SVE_BS_1A
theEmitter->emitIns_R_I(INS_sve_and, EA_SCALABLE, REG_V0, 5, INS_OPTS_SCALABLE_B);  // AND     <Zdn>.<T>, <Zdn>.<T>, #<const> 
theEmitter->emitIns_R_I(INS_sve_bic, EA_SCALABLE, REG_V0, 5, INS_OPTS_SCALABLE_B);  // BIC     <Zdn>.<T>, <Zdn>.<T>, #<const> 
theEmitter->emitIns_R_I(INS_sve_eon, EA_SCALABLE, REG_V0, 5, INS_OPTS_SCALABLE_B);  // EON     <Zdn>.<T>, <Zdn>.<T>, #<const> 
theEmitter->emitIns_R_I(INS_sve_eor, EA_SCALABLE, REG_V0, 5, INS_OPTS_SCALABLE_B);  // EOR     <Zdn>.<T>, <Zdn>.<T>, #<const> 
theEmitter->emitIns_R_I(INS_sve_orn, EA_SCALABLE, REG_V0, 5, INS_OPTS_SCALABLE_B);  // ORN     <Zdn>.<T>, <Zdn>.<T>, #<const> 
theEmitter->emitIns_R_I(INS_sve_orr, EA_SCALABLE, REG_V0, 5, INS_OPTS_SCALABLE_B);  // ORR     <Zdn>.<T>, <Zdn>.<T>, #<const> 

// IF_SVE_BT_1A
theEmitter->emitIns_R_I(INS_sve_dupm, EA_SCALABLE, REG_V0, 5, INS_OPTS_SCALABLE_B);  // DUPM    <Zd>.<T>, #<const> 
theEmitter->emitIns_R_I(INS_sve_mov, EA_SCALABLE, REG_V0, 5, INS_OPTS_SCALABLE_B);  // MOV     <Zd>.<T>, #<const> 

// IF_SVE_BU_2A
theEmitter->emitIns_R_R_I(INS_sve_fcpy, EA_SCALABLE, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // FCPY    <Zd>.<T>, <Pg>/M, #<const> 
theEmitter->emitIns_R_R_I(INS_sve_fmov, EA_SCALABLE, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // FMOV    <Zd>.<T>, <Pg>/M, #<const> 

// IF_SVE_BV_2A
theEmitter->emitIns_R_R_I(INS_sve_cpy, EA_SCALABLE, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // CPY     <Zd>.<T>, <Pg>/Z, #<imm>{, <shift>} 
theEmitter->emitIns_R_R_I(INS_sve_mov, EA_SCALABLE, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // MOV     <Zd>.<T>, <Pg>/Z, #<imm>{, <shift>} 

// IF_SVE_BV_2A_A
theEmitter->emitIns_R_R_I(INS_sve_cpy, EA_SCALABLE, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // CPY     <Zd>.<T>, <Pg>/M, #<imm>{, <shift>} 

// IF_SVE_BV_2A_J
theEmitter->emitIns_R_R_I(INS_sve_mov, EA_SCALABLE, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // MOV     <Zd>.<T>, <Pg>/M, #<imm>{, <shift>} 

// IF_SVE_BV_2B
theEmitter->emitIns_R_R(INS_sve_fmov, EA_SCALABLE, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FMOV    <Zd>.<T>, <Pg>/M, #0.0 

// IF_SVE_BW_2A
theEmitter->emitIns_R_R_I(INS_sve_dup, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // DUP     <Zd>.<T>, <Zn>.<T>[<imm>] 
theEmitter->emitIns_R_R_I(INS_sve_mov, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // MOV     <Zd>.<T>, <Zn>.<T>[<imm>] 

// IF_SVE_BX_2A
theEmitter->emitIns_R_R_I(INS_sve_dupq, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // DUPQ    <Zd>.<T>, <Zn>.<T>[<imm>] 

// IF_SVE_BY_2A
theEmitter->emitIns_R_R_I(INS_sve_extq, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // EXTQ    <Zdn>.B, <Zdn>.B, <Zm>.B, #<imm> 

// IF_SVE_BZ_3A
theEmitter->emitIns_R_R_R(INS_sve_tbl, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // TBL     <Zd>.<T>, {<Zn>.<T>}, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_tbx, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // TBX     <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 

// IF_SVE_BZ_3A_A
theEmitter->emitIns_R_R_R(INS_sve_tbl, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // TBL     <Zd>.<T>, {<Zn1>.<T>, <Zn2>.<T>}, <Zm>.<T> 

// IF_SVE_CA_3A
theEmitter->emitIns_R_R_R(INS_sve_tbxq, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // TBXQ    <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 

// IF_SVE_CB_2A
theEmitter->emitIns_R_R(INS_sve_dup, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // DUP     <Zd>.<T>, <R><n|SP> 
theEmitter->emitIns_R_R(INS_sve_mov, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // MOV     <Zd>.<T>, <R><n|SP> 

// IF_SVE_CC_2A
theEmitter->emitIns_R_R(INS_sve_insr, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // INSR    <Zdn>.<T>, <V><m> 

// IF_SVE_CD_2A
theEmitter->emitIns_R_R(INS_sve_insr, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // INSR    <Zdn>.<T>, <R><m> 

// IF_SVE_CE_2A
theEmitter->emitIns_R_R(INS_sve_pmov, EA_SCALABLE, REG_V0, REG_P0, INS_OPTS_SCALABLE_B);  // PMOV    <Pd>.B, <Zn> 

// IF_SVE_CE_2B
theEmitter->emitIns_R_R_I(INS_sve_pmov, EA_SCALABLE, REG_V0, REG_P0, 5, INS_OPTS_SCALABLE_B);  // PMOV    <Pd>.D, <Zn>[<imm>] 

// IF_SVE_CE_2C
theEmitter->emitIns_R_R_I(INS_sve_pmov, EA_SCALABLE, REG_V0, REG_P0, 5, INS_OPTS_SCALABLE_B);  // PMOV    <Pd>.H, <Zn>[<imm>] 

// IF_SVE_CE_2D
theEmitter->emitIns_R_R_I(INS_sve_pmov, EA_SCALABLE, REG_V0, REG_P0, 5, INS_OPTS_SCALABLE_B);  // PMOV    <Pd>.S, <Zn>[<imm>] 

// IF_SVE_CF_2A
theEmitter->emitIns_R_R(INS_sve_pmov, EA_SCALABLE, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // PMOV    <Zd>, <Pn>.B 

// IF_SVE_CF_2B
theEmitter->emitIns_R_R_I(INS_sve_pmov, EA_SCALABLE, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // PMOV    <Zd>[<imm>], <Pn>.D 

// IF_SVE_CF_2C
theEmitter->emitIns_R_R_I(INS_sve_pmov, EA_SCALABLE, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // PMOV    <Zd>[<imm>], <Pn>.H 

// IF_SVE_CF_2D
theEmitter->emitIns_R_R_I(INS_sve_pmov, EA_SCALABLE, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // PMOV    <Zd>[<imm>], <Pn>.S 

// IF_SVE_CG_2A
theEmitter->emitIns_R_R(INS_sve_rev, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // REV     <Zd>.<T>, <Zn>.<T> 

// IF_SVE_CH_2A
theEmitter->emitIns_R_R(INS_sve_sunpkhi, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SUNPKHI <Zd>.<T>, <Zn>.<Tb> 
theEmitter->emitIns_R_R(INS_sve_sunpklo, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SUNPKLO <Zd>.<T>, <Zn>.<Tb> 
theEmitter->emitIns_R_R(INS_sve_uunpkhi, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // UUNPKHI <Zd>.<T>, <Zn>.<Tb> 
theEmitter->emitIns_R_R(INS_sve_uunpklo, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // UUNPKLO <Zd>.<T>, <Zn>.<Tb> 

// IF_SVE_CI_3A
theEmitter->emitIns_R_R_R(INS_sve_trn1, EA_SCALABLE, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // TRN1    <Pd>.<T>, <Pn>.<T>, <Pm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_trn2, EA_SCALABLE, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // TRN2    <Pd>.<T>, <Pn>.<T>, <Pm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_uzp1, EA_SCALABLE, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // UZP1    <Pd>.<T>, <Pn>.<T>, <Pm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_uzp2, EA_SCALABLE, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // UZP2    <Pd>.<T>, <Pn>.<T>, <Pm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_zip1, EA_SCALABLE, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // ZIP1    <Pd>.<T>, <Pn>.<T>, <Pm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_zip2, EA_SCALABLE, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // ZIP2    <Pd>.<T>, <Pn>.<T>, <Pm>.<T> 

// IF_SVE_CJ_2A
theEmitter->emitIns_R_R(INS_sve_rev, EA_SCALABLE, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // REV     <Pd>.<T>, <Pn>.<T> 

// IF_SVE_CK_2A
theEmitter->emitIns_R_R(INS_sve_punpkhi, EA_SCALABLE, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // PUNPKHI <Pd>.H, <Pn>.B 
theEmitter->emitIns_R_R(INS_sve_punpklo, EA_SCALABLE, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // PUNPKLO <Pd>.H, <Pn>.B 

// IF_SVE_CL_3A
theEmitter->emitIns_R_R_R(INS_sve_compact, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // COMPACT <Zd>.<T>, <Pg>, <Zn>.<T> 

// IF_SVE_CM_3A
theEmitter->emitIns_R_R_R(INS_sve_clasta, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // CLASTA  <Zdn>.<T>, <Pg>, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_clastb, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // CLASTB  <Zdn>.<T>, <Pg>, <Zdn>.<T>, <Zm>.<T> 

// IF_SVE_CN_3A
theEmitter->emitIns_R_R_R(INS_sve_clasta, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // CLASTA  <V><dn>, <Pg>, <V><dn>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_clastb, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // CLASTB  <V><dn>, <Pg>, <V><dn>, <Zm>.<T> 

// IF_SVE_CO_3A
theEmitter->emitIns_R_R_R(INS_sve_clasta, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // CLASTA  <R><dn>, <Pg>, <R><dn>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_clastb, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // CLASTB  <R><dn>, <Pg>, <R><dn>, <Zm>.<T> 

// IF_SVE_CP_3A
theEmitter->emitIns_R_R_R(INS_sve_cpy, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // CPY     <Zd>.<T>, <Pg>/M, <V><n> 
theEmitter->emitIns_R_R_R(INS_sve_mov, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // MOV     <Zd>.<T>, <Pg>/M, <V><n> 

// IF_SVE_CQ_3A
theEmitter->emitIns_R_R_R(INS_sve_cpy, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // CPY     <Zd>.<T>, <Pg>/M, <R><n|SP> 
theEmitter->emitIns_R_R_R(INS_sve_mov, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // MOV     <Zd>.<T>, <Pg>/M, <R><n|SP> 

// IF_SVE_CR_3A
theEmitter->emitIns_R_R_R(INS_sve_lasta, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // LASTA   <V><d>, <Pg>, <Zn>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_lastb, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // LASTB   <V><d>, <Pg>, <Zn>.<T> 

// IF_SVE_CS_3A
theEmitter->emitIns_R_R_R(INS_sve_lasta, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // LASTA   <R><d>, <Pg>, <Zn>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_lastb, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // LASTB   <R><d>, <Pg>, <Zn>.<T> 

// IF_SVE_CT_3A
theEmitter->emitIns_R_R_R(INS_sve_revd, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // REVD    <Zd>.Q, <Pg>/M, <Zn>.Q 

// IF_SVE_CU_3A
theEmitter->emitIns_R_R_R(INS_sve_rbit, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // RBIT    <Zd>.<T>, <Pg>/M, <Zn>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_revb, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // REVB    <Zd>.<T>, <Pg>/M, <Zn>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_revh, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // REVH    <Zd>.<T>, <Pg>/M, <Zn>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_revw, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // REVW    <Zd>.D, <Pg>/M, <Zn>.D 

// IF_SVE_CV_3A
theEmitter->emitIns_R_R_R(INS_sve_splice, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SPLICE  <Zd>.<T>, <Pv>, {<Zn1>.<T>, <Zn2>.<T>} 

// IF_SVE_CV_3B
theEmitter->emitIns_R_R_R(INS_sve_splice, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SPLICE  <Zdn>.<T>, <Pv>, <Zdn>.<T>, <Zm>.<T> 

// IF_SVE_CW_4A
theEmitter->emitIns_R_R_R_R(INS_sve_mov, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // MOV     <Zd>.<T>, <Pv>/M, <Zn>.<T> 
theEmitter->emitIns_R_R_R_R(INS_sve_sel, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SEL     <Zd>.<T>, <Pv>, <Zn>.<T>, <Zm>.<T> 

// IF_SVE_CX_4A
theEmitter->emitIns_R_R_R_R(INS_sve_cmpeq, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // CMPEQ   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R_R(INS_sve_cmpge, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // CMPGE   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R_R(INS_sve_cmpgt, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // CMPGT   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R_R(INS_sve_cmphi, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // CMPHI   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R_R(INS_sve_cmphs, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // CMPHS   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R_R(INS_sve_cmple, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // CMPLE   <Pd>.<T>, <Pg>/Z, <Zm>.<T>, <Zn>.<T> 
theEmitter->emitIns_R_R_R_R(INS_sve_cmplo, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // CMPLO   <Pd>.<T>, <Pg>/Z, <Zm>.<T>, <Zn>.<T> 
theEmitter->emitIns_R_R_R_R(INS_sve_cmpls, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // CMPLS   <Pd>.<T>, <Pg>/Z, <Zm>.<T>, <Zn>.<T> 
theEmitter->emitIns_R_R_R_R(INS_sve_cmplt, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // CMPLT   <Pd>.<T>, <Pg>/Z, <Zm>.<T>, <Zn>.<T> 
theEmitter->emitIns_R_R_R_R(INS_sve_cmpne, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // CMPNE   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, <Zm>.<T> 

// IF_SVE_CX_4A_A
theEmitter->emitIns_R_R_R_R(INS_sve_cmpeq, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // CMPEQ   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, <Zm>.D 
theEmitter->emitIns_R_R_R_R(INS_sve_cmpge, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // CMPGE   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, <Zm>.D 
theEmitter->emitIns_R_R_R_R(INS_sve_cmpgt, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // CMPGT   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, <Zm>.D 
theEmitter->emitIns_R_R_R_R(INS_sve_cmphi, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // CMPHI   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, <Zm>.D 
theEmitter->emitIns_R_R_R_R(INS_sve_cmphs, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // CMPHS   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, <Zm>.D 
theEmitter->emitIns_R_R_R_R(INS_sve_cmple, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // CMPLE   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, <Zm>.D 
theEmitter->emitIns_R_R_R_R(INS_sve_cmplo, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // CMPLO   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, <Zm>.D 
theEmitter->emitIns_R_R_R_R(INS_sve_cmpls, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // CMPLS   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, <Zm>.D 
theEmitter->emitIns_R_R_R_R(INS_sve_cmplt, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // CMPLT   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, <Zm>.D 
theEmitter->emitIns_R_R_R_R(INS_sve_cmpne, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // CMPNE   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, <Zm>.D 

// IF_SVE_CY_3A
theEmitter->emitIns_R_R_R_I(INS_sve_cmpeq, EA_SCALABLE, REG_V0, REG_P0, REG_P0, 5, INS_OPTS_SCALABLE_B);  // CMPEQ   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, #<imm> 
theEmitter->emitIns_R_R_R_I(INS_sve_cmpge, EA_SCALABLE, REG_V0, REG_P0, REG_P0, 5, INS_OPTS_SCALABLE_B);  // CMPGE   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, #<imm> 
theEmitter->emitIns_R_R_R_I(INS_sve_cmpgt, EA_SCALABLE, REG_V0, REG_P0, REG_P0, 5, INS_OPTS_SCALABLE_B);  // CMPGT   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, #<imm> 
theEmitter->emitIns_R_R_R_I(INS_sve_cmple, EA_SCALABLE, REG_V0, REG_P0, REG_P0, 5, INS_OPTS_SCALABLE_B);  // CMPLE   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, #<imm> 
theEmitter->emitIns_R_R_R_I(INS_sve_cmplt, EA_SCALABLE, REG_V0, REG_P0, REG_P0, 5, INS_OPTS_SCALABLE_B);  // CMPLT   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, #<imm> 
theEmitter->emitIns_R_R_R_I(INS_sve_cmpne, EA_SCALABLE, REG_V0, REG_P0, REG_P0, 5, INS_OPTS_SCALABLE_B);  // CMPNE   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, #<imm> 

// IF_SVE_CY_3B
theEmitter->emitIns_R_R_R_I(INS_sve_cmphi, EA_SCALABLE, REG_V0, REG_P0, REG_P0, 5, INS_OPTS_SCALABLE_B);  // CMPHI   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, #<imm> 
theEmitter->emitIns_R_R_R_I(INS_sve_cmphs, EA_SCALABLE, REG_V0, REG_P0, REG_P0, 5, INS_OPTS_SCALABLE_B);  // CMPHS   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, #<imm> 
theEmitter->emitIns_R_R_R_I(INS_sve_cmplo, EA_SCALABLE, REG_V0, REG_P0, REG_P0, 5, INS_OPTS_SCALABLE_B);  // CMPLO   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, #<imm> 
theEmitter->emitIns_R_R_R_I(INS_sve_cmpls, EA_SCALABLE, REG_V0, REG_P0, REG_P0, 5, INS_OPTS_SCALABLE_B);  // CMPLS   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, #<imm> 

// IF_SVE_CZ_4A
theEmitter->emitIns_R_R_R_R(INS_sve_and, EA_SCALABLE, REG_P0, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // AND     <Pd>.B, <Pg>/Z, <Pn>.B, <Pm>.B 
theEmitter->emitIns_R_R_R_R(INS_sve_ands, EA_SCALABLE, REG_P0, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // ANDS    <Pd>.B, <Pg>/Z, <Pn>.B, <Pm>.B 
theEmitter->emitIns_R_R_R_R(INS_sve_bic, EA_SCALABLE, REG_P0, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // BIC     <Pd>.B, <Pg>/Z, <Pn>.B, <Pm>.B 
theEmitter->emitIns_R_R_R_R(INS_sve_bics, EA_SCALABLE, REG_P0, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // BICS    <Pd>.B, <Pg>/Z, <Pn>.B, <Pm>.B 
theEmitter->emitIns_R_R_R_R(INS_sve_eor, EA_SCALABLE, REG_P0, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // EOR     <Pd>.B, <Pg>/Z, <Pn>.B, <Pm>.B 
theEmitter->emitIns_R_R_R_R(INS_sve_eors, EA_SCALABLE, REG_P0, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // EORS    <Pd>.B, <Pg>/Z, <Pn>.B, <Pm>.B 
theEmitter->emitIns_R_R_R_R(INS_sve_mov, EA_SCALABLE, REG_P0, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // MOV     <Pd>.B, <Pg>/Z, <Pn>.B 
theEmitter->emitIns_R_R_R_R(INS_sve_movs, EA_SCALABLE, REG_P0, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // MOVS    <Pd>.B, <Pg>/Z, <Pn>.B 
theEmitter->emitIns_R_R_R_R(INS_sve_nand, EA_SCALABLE, REG_P0, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // NAND    <Pd>.B, <Pg>/Z, <Pn>.B, <Pm>.B 
theEmitter->emitIns_R_R_R_R(INS_sve_nands, EA_SCALABLE, REG_P0, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // NANDS   <Pd>.B, <Pg>/Z, <Pn>.B, <Pm>.B 
theEmitter->emitIns_R_R_R_R(INS_sve_nor, EA_SCALABLE, REG_P0, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // NOR     <Pd>.B, <Pg>/Z, <Pn>.B, <Pm>.B 
theEmitter->emitIns_R_R_R_R(INS_sve_nors, EA_SCALABLE, REG_P0, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // NORS    <Pd>.B, <Pg>/Z, <Pn>.B, <Pm>.B 
theEmitter->emitIns_R_R_R_R(INS_sve_not, EA_SCALABLE, REG_P0, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // NOT     <Pd>.B, <Pg>/Z, <Pn>.B 
theEmitter->emitIns_R_R_R_R(INS_sve_nots, EA_SCALABLE, REG_P0, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // NOTS    <Pd>.B, <Pg>/Z, <Pn>.B 
theEmitter->emitIns_R_R_R_R(INS_sve_orn, EA_SCALABLE, REG_P0, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // ORN     <Pd>.B, <Pg>/Z, <Pn>.B, <Pm>.B 
theEmitter->emitIns_R_R_R_R(INS_sve_orns, EA_SCALABLE, REG_P0, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // ORNS    <Pd>.B, <Pg>/Z, <Pn>.B, <Pm>.B 
theEmitter->emitIns_R_R_R_R(INS_sve_orr, EA_SCALABLE, REG_P0, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // ORR     <Pd>.B, <Pg>/Z, <Pn>.B, <Pm>.B 
theEmitter->emitIns_R_R_R_R(INS_sve_orrs, EA_SCALABLE, REG_P0, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // ORRS    <Pd>.B, <Pg>/Z, <Pn>.B, <Pm>.B 
theEmitter->emitIns_R_R_R_R(INS_sve_sel, EA_SCALABLE, REG_P0, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // SEL     <Pd>.B, <Pg>, <Pn>.B, <Pm>.B 

// IF_SVE_CZ_4A_A
theEmitter->emitIns_R_R_R_R(INS_sve_movs, EA_SCALABLE, REG_P0, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // MOVS    <Pd>.B, <Pn>.B 

// IF_SVE_CZ_4A_K
theEmitter->emitIns_R_R_R_R(INS_sve_mov, EA_SCALABLE, REG_P0, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // MOV     <Pd>.B, <Pg>/M, <Pn>.B 

// IF_SVE_CZ_4A_L
theEmitter->emitIns_R_R_R_R(INS_sve_mov, EA_SCALABLE, REG_P0, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // MOV     <Pd>.B, <Pn>.B 

// IF_SVE_DA_4A
theEmitter->emitIns_R_R_R_R(INS_sve_brkpa, EA_SCALABLE, REG_P0, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // BRKPA   <Pd>.B, <Pg>/Z, <Pn>.B, <Pm>.B 
theEmitter->emitIns_R_R_R_R(INS_sve_brkpas, EA_SCALABLE, REG_P0, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // BRKPAS  <Pd>.B, <Pg>/Z, <Pn>.B, <Pm>.B 
theEmitter->emitIns_R_R_R_R(INS_sve_brkpb, EA_SCALABLE, REG_P0, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // BRKPB   <Pd>.B, <Pg>/Z, <Pn>.B, <Pm>.B 
theEmitter->emitIns_R_R_R_R(INS_sve_brkpbs, EA_SCALABLE, REG_P0, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // BRKPBS  <Pd>.B, <Pg>/Z, <Pn>.B, <Pm>.B 

// IF_SVE_DB_3A
theEmitter->emitIns_R_R_R(INS_sve_brka, EA_SCALABLE, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // BRKA    <Pd>.B, <Pg>/<ZM>, <Pn>.B 
theEmitter->emitIns_R_R_R(INS_sve_brkb, EA_SCALABLE, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // BRKB    <Pd>.B, <Pg>/<ZM>, <Pn>.B 

// IF_SVE_DB_3B
theEmitter->emitIns_R_R_R(INS_sve_brkas, EA_SCALABLE, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // BRKAS   <Pd>.B, <Pg>/Z, <Pn>.B 
theEmitter->emitIns_R_R_R(INS_sve_brkbs, EA_SCALABLE, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // BRKBS   <Pd>.B, <Pg>/Z, <Pn>.B 

// IF_SVE_DC_3A
theEmitter->emitIns_R_R_R(INS_sve_brkn, EA_SCALABLE, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // BRKN    <Pdm>.B, <Pg>/Z, <Pn>.B, <Pdm>.B 
theEmitter->emitIns_R_R_R(INS_sve_brkns, EA_SCALABLE, REG_P0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // BRKNS   <Pdm>.B, <Pg>/Z, <Pn>.B, <Pdm>.B 

// IF_SVE_DD_2A
theEmitter->emitIns_R_R(INS_sve_pfirst, EA_SCALABLE, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // PFIRST  <Pdn>.B, <Pg>, <Pdn>.B 

// IF_SVE_DE_1A
theEmitter->emitIns_R(INS_sve_ptrue, EA_SCALABLE, REG_P0, INS_OPTS_SCALABLE_B);  // PTRUE   <Pd>.<T>{, <pattern>} 
theEmitter->emitIns_R(INS_sve_ptrues, EA_SCALABLE, REG_P0, INS_OPTS_SCALABLE_B);  // PTRUES  <Pd>.<T>{, <pattern>} 

// IF_SVE_DF_2A
theEmitter->emitIns_R_R(INS_sve_pnext, EA_SCALABLE, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // PNEXT   <Pdn>.<T>, <Pv>, <Pdn>.<T> 

// IF_SVE_DG_2A
theEmitter->emitIns_R_R(INS_sve_rdffr, EA_SCALABLE, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // RDFFR   <Pd>.B, <Pg>/Z 
theEmitter->emitIns_R_R(INS_sve_rdffrs, EA_SCALABLE, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // RDFFRS  <Pd>.B, <Pg>/Z 

// IF_SVE_DH_1A
theEmitter->emitIns_R(INS_sve_rdffr, EA_SCALABLE, REG_P0, INS_OPTS_SCALABLE_B);  // RDFFR   <Pd>.B 

// IF_SVE_DI_2A
theEmitter->emitIns_R_R(INS_sve_ptest, EA_SCALABLE, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // PTEST   <Pg>, <Pn>.B 

// IF_SVE_DJ_1A
theEmitter->emitIns_R(INS_sve_pfalse, EA_SCALABLE, REG_P0, INS_OPTS_SCALABLE_B);  // PFALSE  <Pd>.B 

// IF_SVE_DK_3A
theEmitter->emitIns_R_R_R(INS_sve_cntp, EA_SCALABLE, REG_P0, REG_P0, REG_R0, INS_OPTS_SCALABLE_B);  // CNTP    <Xd>, <Pg>, <Pn>.<T> 

// IF_SVE_DL_2A
theEmitter->emitIns_R_R(INS_sve_cntp, EA_SCALABLE, REG_P0, REG_R0, INS_OPTS_SCALABLE_B);  // CNTP    <Xd>, <PNn>.<T>, <vl> 

// IF_SVE_DM_2A
theEmitter->emitIns_R_R(INS_sve_decp, EA_SCALABLE, REG_P0, REG_R0, INS_OPTS_SCALABLE_B);  // DECP    <Xdn>, <Pm>.<T> 
theEmitter->emitIns_R_R(INS_sve_incp, EA_SCALABLE, REG_P0, REG_R0, INS_OPTS_SCALABLE_B);  // INCP    <Xdn>, <Pm>.<T> 

// IF_SVE_DN_2A
theEmitter->emitIns_R_R(INS_sve_decp, EA_SCALABLE, REG_P0, REG_R0, INS_OPTS_SCALABLE_B);  // DECP    <Zdn>.<T>, <Pm>.<T> 
theEmitter->emitIns_R_R(INS_sve_incp, EA_SCALABLE, REG_P0, REG_R0, INS_OPTS_SCALABLE_B);  // INCP    <Zdn>.<T>, <Pm>.<T> 

// IF_SVE_DO_2A
theEmitter->emitIns_R_R(INS_sve_sqdecp, EA_SCALABLE, REG_P0, REG_R0, INS_OPTS_SCALABLE_B);  // SQDECP  <Xdn>, <Pm>.<T>, <Wdn> 
theEmitter->emitIns_R_R(INS_sve_sqincp, EA_SCALABLE, REG_P0, REG_R0, INS_OPTS_SCALABLE_B);  // SQINCP  <Xdn>, <Pm>.<T>, <Wdn> 
theEmitter->emitIns_R_R(INS_sve_uqdecp, EA_SCALABLE, REG_P0, REG_R0, INS_OPTS_SCALABLE_B);  // UQDECP  <Wdn>, <Pm>.<T> 
theEmitter->emitIns_R_R(INS_sve_uqincp, EA_SCALABLE, REG_P0, REG_R0, INS_OPTS_SCALABLE_B);  // UQINCP  <Wdn>, <Pm>.<T> 

// IF_SVE_DP_2A
theEmitter->emitIns_R_R(INS_sve_sqdecp, EA_SCALABLE, REG_P0, REG_R0, INS_OPTS_SCALABLE_B);  // SQDECP  <Zdn>.<T>, <Pm>.<T> 
theEmitter->emitIns_R_R(INS_sve_sqincp, EA_SCALABLE, REG_P0, REG_R0, INS_OPTS_SCALABLE_B);  // SQINCP  <Zdn>.<T>, <Pm>.<T> 
theEmitter->emitIns_R_R(INS_sve_uqdecp, EA_SCALABLE, REG_P0, REG_R0, INS_OPTS_SCALABLE_B);  // UQDECP  <Zdn>.<T>, <Pm>.<T> 
theEmitter->emitIns_R_R(INS_sve_uqincp, EA_SCALABLE, REG_P0, REG_R0, INS_OPTS_SCALABLE_B);  // UQINCP  <Zdn>.<T>, <Pm>.<T> 

// IF_SVE_DQ_0A
theEmitter->emitIns_TODO(INS_sve_setffr, EA_SCALABLE, , INS_OPTS_SCALABLE_B);  // SETFFR   

// IF_SVE_DR_1A
theEmitter->emitIns_R(INS_sve_wrffr, EA_SCALABLE, REG_P0, INS_OPTS_SCALABLE_B);  // WRFFR   <Pn>.B 

// IF_SVE_DS_2A
theEmitter->emitIns_R_R(INS_sve_ctermeq, EA_SCALABLE, REG_R0, REG_R0, INS_OPTS_SCALABLE_B);  // CTERMEQ <R><n>, <R><m> 
theEmitter->emitIns_R_R(INS_sve_ctermne, EA_SCALABLE, REG_R0, REG_R0, INS_OPTS_SCALABLE_B);  // CTERMNE <R><n>, <R><m> 

// IF_SVE_DT_3A
theEmitter->emitIns_R_R_R(INS_sve_whilege, EA_SCALABLE, REG_P0, REG_R0, REG_R0, INS_OPTS_SCALABLE_B);  // WHILEGE <Pd>.<T>, <R><n>, <R><m> 
theEmitter->emitIns_R_R_R(INS_sve_whilegt, EA_SCALABLE, REG_P0, REG_R0, REG_R0, INS_OPTS_SCALABLE_B);  // WHILEGT <Pd>.<T>, <R><n>, <R><m> 
theEmitter->emitIns_R_R_R(INS_sve_whilehi, EA_SCALABLE, REG_P0, REG_R0, REG_R0, INS_OPTS_SCALABLE_B);  // WHILEHI <Pd>.<T>, <R><n>, <R><m> 
theEmitter->emitIns_R_R_R(INS_sve_whilehs, EA_SCALABLE, REG_P0, REG_R0, REG_R0, INS_OPTS_SCALABLE_B);  // WHILEHS <Pd>.<T>, <R><n>, <R><m> 
theEmitter->emitIns_R_R_R(INS_sve_whilele, EA_SCALABLE, REG_P0, REG_R0, REG_R0, INS_OPTS_SCALABLE_B);  // WHILELE <Pd>.<T>, <R><n>, <R><m> 
theEmitter->emitIns_R_R_R(INS_sve_whilelo, EA_SCALABLE, REG_P0, REG_R0, REG_R0, INS_OPTS_SCALABLE_B);  // WHILELO <Pd>.<T>, <R><n>, <R><m> 
theEmitter->emitIns_R_R_R(INS_sve_whilels, EA_SCALABLE, REG_P0, REG_R0, REG_R0, INS_OPTS_SCALABLE_B);  // WHILELS <Pd>.<T>, <R><n>, <R><m> 
theEmitter->emitIns_R_R_R(INS_sve_whilelt, EA_SCALABLE, REG_P0, REG_R0, REG_R0, INS_OPTS_SCALABLE_B);  // WHILELT <Pd>.<T>, <R><n>, <R><m> 

// IF_SVE_DU_3A
theEmitter->emitIns_R_R_R(INS_sve_whilerw, EA_SCALABLE, REG_P0, REG_R0, REG_R0, INS_OPTS_SCALABLE_B);  // WHILERW <Pd>.<T>, <Xn>, <Xm> 
theEmitter->emitIns_R_R_R(INS_sve_whilewr, EA_SCALABLE, REG_P0, REG_R0, REG_R0, INS_OPTS_SCALABLE_B);  // WHILEWR <Pd>.<T>, <Xn>, <Xm> 

// IF_SVE_DV_4A
theEmitter->emitIns_R_R_R_R_I(INS_sve_psel, EA_SCALABLE, REG_P0, REG_P0, REG_P0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // PSEL    <Pd>, <Pn>, <Pm>.<T>[<Wv>, <imm>] 

// IF_SVE_DW_2A
theEmitter->emitIns_R_R_I(INS_sve_pext, EA_SCALABLE, REG_P0, REG_P0, 5, INS_OPTS_SCALABLE_B);  // PEXT    <Pd>.<T>, <PNn>[<imm>] 

// IF_SVE_DW_2B
theEmitter->emitIns_R_R_I(INS_sve_pext, EA_SCALABLE, REG_P0, REG_P0, 5, INS_OPTS_SCALABLE_B);  // PEXT    {<Pd1>.<T>, <Pd2>.<T>}, <PNn>[<imm>] 

// IF_SVE_DX_3A
theEmitter->emitIns_R_R_R(INS_sve_whilege, EA_SCALABLE, REG_P0, REG_R0, REG_R0, INS_OPTS_SCALABLE_B);  // WHILEGE {<Pd1>.<T>, <Pd2>.<T>}, <Xn>, <Xm> 
theEmitter->emitIns_R_R_R(INS_sve_whilegt, EA_SCALABLE, REG_P0, REG_R0, REG_R0, INS_OPTS_SCALABLE_B);  // WHILEGT {<Pd1>.<T>, <Pd2>.<T>}, <Xn>, <Xm> 
theEmitter->emitIns_R_R_R(INS_sve_whilehi, EA_SCALABLE, REG_P0, REG_R0, REG_R0, INS_OPTS_SCALABLE_B);  // WHILEHI {<Pd1>.<T>, <Pd2>.<T>}, <Xn>, <Xm> 
theEmitter->emitIns_R_R_R(INS_sve_whilehs, EA_SCALABLE, REG_P0, REG_R0, REG_R0, INS_OPTS_SCALABLE_B);  // WHILEHS {<Pd1>.<T>, <Pd2>.<T>}, <Xn>, <Xm> 
theEmitter->emitIns_R_R_R(INS_sve_whilele, EA_SCALABLE, REG_P0, REG_R0, REG_R0, INS_OPTS_SCALABLE_B);  // WHILELE {<Pd1>.<T>, <Pd2>.<T>}, <Xn>, <Xm> 
theEmitter->emitIns_R_R_R(INS_sve_whilelo, EA_SCALABLE, REG_P0, REG_R0, REG_R0, INS_OPTS_SCALABLE_B);  // WHILELO {<Pd1>.<T>, <Pd2>.<T>}, <Xn>, <Xm> 
theEmitter->emitIns_R_R_R(INS_sve_whilels, EA_SCALABLE, REG_P0, REG_R0, REG_R0, INS_OPTS_SCALABLE_B);  // WHILELS {<Pd1>.<T>, <Pd2>.<T>}, <Xn>, <Xm> 
theEmitter->emitIns_R_R_R(INS_sve_whilelt, EA_SCALABLE, REG_P0, REG_R0, REG_R0, INS_OPTS_SCALABLE_B);  // WHILELT {<Pd1>.<T>, <Pd2>.<T>}, <Xn>, <Xm> 

// IF_SVE_DY_3A
theEmitter->emitIns_R_R_R(INS_sve_whilege, EA_SCALABLE, REG_P0, REG_R0, REG_R0, INS_OPTS_SCALABLE_B);  // WHILEGE <PNd>.<T>, <Xn>, <Xm>, <vl> 
theEmitter->emitIns_R_R_R(INS_sve_whilegt, EA_SCALABLE, REG_P0, REG_R0, REG_R0, INS_OPTS_SCALABLE_B);  // WHILEGT <PNd>.<T>, <Xn>, <Xm>, <vl> 
theEmitter->emitIns_R_R_R(INS_sve_whilehi, EA_SCALABLE, REG_P0, REG_R0, REG_R0, INS_OPTS_SCALABLE_B);  // WHILEHI <PNd>.<T>, <Xn>, <Xm>, <vl> 
theEmitter->emitIns_R_R_R(INS_sve_whilehs, EA_SCALABLE, REG_P0, REG_R0, REG_R0, INS_OPTS_SCALABLE_B);  // WHILEHS <PNd>.<T>, <Xn>, <Xm>, <vl> 
theEmitter->emitIns_R_R_R(INS_sve_whilele, EA_SCALABLE, REG_P0, REG_R0, REG_R0, INS_OPTS_SCALABLE_B);  // WHILELE <PNd>.<T>, <Xn>, <Xm>, <vl> 
theEmitter->emitIns_R_R_R(INS_sve_whilelo, EA_SCALABLE, REG_P0, REG_R0, REG_R0, INS_OPTS_SCALABLE_B);  // WHILELO <PNd>.<T>, <Xn>, <Xm>, <vl> 
theEmitter->emitIns_R_R_R(INS_sve_whilels, EA_SCALABLE, REG_P0, REG_R0, REG_R0, INS_OPTS_SCALABLE_B);  // WHILELS <PNd>.<T>, <Xn>, <Xm>, <vl> 
theEmitter->emitIns_R_R_R(INS_sve_whilelt, EA_SCALABLE, REG_P0, REG_R0, REG_R0, INS_OPTS_SCALABLE_B);  // WHILELT <PNd>.<T>, <Xn>, <Xm>, <vl> 

// IF_SVE_DZ_1A
theEmitter->emitIns_R(INS_sve_ptrue, EA_SCALABLE, REG_P0, INS_OPTS_SCALABLE_B);  // PTRUE   <PNd>.<T> 

// IF_SVE_EA_1A
theEmitter->emitIns_R_I(INS_sve_fdup, EA_SCALABLE, REG_V0, 5, INS_OPTS_SCALABLE_B);  // FDUP    <Zd>.<T>, #<const> 
theEmitter->emitIns_R_I(INS_sve_fmov, EA_SCALABLE, REG_V0, 5, INS_OPTS_SCALABLE_B);  // FMOV    <Zd>.<T>, #<const> 

// IF_SVE_EB_1A
theEmitter->emitIns_R_I(INS_sve_dup, EA_SCALABLE, REG_V0, 5, INS_OPTS_SCALABLE_B);  // DUP     <Zd>.<T>, #<imm>{, <shift>} 
theEmitter->emitIns_R_I(INS_sve_mov, EA_SCALABLE, REG_V0, 5, INS_OPTS_SCALABLE_B);  // MOV     <Zd>.<T>, #<imm>{, <shift>} 

// IF_SVE_EB_1B
theEmitter->emitIns_R(INS_sve_fmov, EA_SCALABLE, REG_V0, INS_OPTS_SCALABLE_B);  // FMOV    <Zd>.<T>, #0.0 

// IF_SVE_EC_1A
theEmitter->emitIns_R_I(INS_sve_add, EA_SCALABLE, REG_V0, 5, INS_OPTS_SCALABLE_B);  // ADD     <Zdn>.<T>, <Zdn>.<T>, #<imm>{, <shift>} 
theEmitter->emitIns_R_I(INS_sve_sqadd, EA_SCALABLE, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQADD   <Zdn>.<T>, <Zdn>.<T>, #<imm>{, <shift>} 
theEmitter->emitIns_R_I(INS_sve_sqsub, EA_SCALABLE, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQSUB   <Zdn>.<T>, <Zdn>.<T>, #<imm>{, <shift>} 
theEmitter->emitIns_R_I(INS_sve_sub, EA_SCALABLE, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SUB     <Zdn>.<T>, <Zdn>.<T>, #<imm>{, <shift>} 
theEmitter->emitIns_R_I(INS_sve_subr, EA_SCALABLE, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SUBR    <Zdn>.<T>, <Zdn>.<T>, #<imm>{, <shift>} 
theEmitter->emitIns_R_I(INS_sve_uqadd, EA_SCALABLE, REG_V0, 5, INS_OPTS_SCALABLE_B);  // UQADD   <Zdn>.<T>, <Zdn>.<T>, #<imm>{, <shift>} 
theEmitter->emitIns_R_I(INS_sve_uqsub, EA_SCALABLE, REG_V0, 5, INS_OPTS_SCALABLE_B);  // UQSUB   <Zdn>.<T>, <Zdn>.<T>, #<imm>{, <shift>} 

// IF_SVE_ED_1A
theEmitter->emitIns_R_I(INS_sve_smax, EA_SCALABLE, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SMAX    <Zdn>.<T>, <Zdn>.<T>, #<imm> 
theEmitter->emitIns_R_I(INS_sve_smin, EA_SCALABLE, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SMIN    <Zdn>.<T>, <Zdn>.<T>, #<imm> 
theEmitter->emitIns_R_I(INS_sve_umax, EA_SCALABLE, REG_V0, 5, INS_OPTS_SCALABLE_B);  // UMAX    <Zdn>.<T>, <Zdn>.<T>, #<imm> 
theEmitter->emitIns_R_I(INS_sve_umin, EA_SCALABLE, REG_V0, 5, INS_OPTS_SCALABLE_B);  // UMIN    <Zdn>.<T>, <Zdn>.<T>, #<imm> 

// IF_SVE_EE_1A
theEmitter->emitIns_R_I(INS_sve_mul, EA_SCALABLE, REG_V0, 5, INS_OPTS_SCALABLE_B);  // MUL     <Zdn>.<T>, <Zdn>.<T>, #<imm> 

// IF_SVE_EF_3A
theEmitter->emitIns_R_R_R(INS_sve_sdot, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SDOT    <Zda>.S, <Zn>.H, <Zm>.H 
theEmitter->emitIns_R_R_R(INS_sve_udot, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // UDOT    <Zda>.S, <Zn>.H, <Zm>.H 

// IF_SVE_EG_3A
theEmitter->emitIns_R_R_R_I(INS_sve_sdot, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SDOT    <Zda>.S, <Zn>.H, <Zm>.H[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_udot, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // UDOT    <Zda>.S, <Zn>.H, <Zm>.H[<imm>] 

// IF_SVE_EH_3A
theEmitter->emitIns_R_R_R(INS_sve_sdot, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SDOT    <Zda>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_udot, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // UDOT    <Zda>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 

// IF_SVE_EI_3A
theEmitter->emitIns_R_R_R(INS_sve_usdot, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // USDOT   <Zda>.S, <Zn>.B, <Zm>.B 

// IF_SVE_EJ_3A
theEmitter->emitIns_R_R_R(INS_sve_cdot, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // CDOT    <Zda>.<T>, <Zn>.<Tb>, <Zm>.<Tb>, <const> 

// IF_SVE_EK_3A
theEmitter->emitIns_R_R_R(INS_sve_cmla, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // CMLA    <Zda>.<T>, <Zn>.<T>, <Zm>.<T>, <const> 
theEmitter->emitIns_R_R_R(INS_sve_sqrdcmlah, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SQRDCMLAH <Zda>.<T>, <Zn>.<T>, <Zm>.<T>, <const> 

// IF_SVE_EL_3A
theEmitter->emitIns_R_R_R(INS_sve_smlalb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SMLALB  <Zda>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_smlalt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SMLALT  <Zda>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_smlslb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SMLSLB  <Zda>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_smlslt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SMLSLT  <Zda>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_umlalb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // UMLALB  <Zda>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_umlalt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // UMLALT  <Zda>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_umlslb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // UMLSLB  <Zda>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_umlslt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // UMLSLT  <Zda>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 

// IF_SVE_EM_3A
theEmitter->emitIns_R_R_R(INS_sve_sqrdmlah, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SQRDMLAH <Zda>.<T>, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_sqrdmlsh, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SQRDMLSH <Zda>.<T>, <Zn>.<T>, <Zm>.<T> 

// IF_SVE_EN_3A
theEmitter->emitIns_R_R_R(INS_sve_sqdmlalbt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SQDMLALBT <Zda>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_sqdmlslbt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SQDMLSLBT <Zda>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 

// IF_SVE_EO_3A
theEmitter->emitIns_R_R_R(INS_sve_sqdmlalb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SQDMLALB <Zda>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_sqdmlalt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SQDMLALT <Zda>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_sqdmlslb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SQDMLSLB <Zda>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_sqdmlslt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SQDMLSLT <Zda>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 

// IF_SVE_EP_3A
theEmitter->emitIns_R_R_R(INS_sve_shadd, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SHADD   <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_shsub, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SHSUB   <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_shsubr, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SHSUBR  <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_srhadd, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SRHADD  <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_uhadd, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // UHADD   <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_uhsub, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // UHSUB   <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_uhsubr, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // UHSUBR  <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_urhadd, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // URHADD  <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 

// IF_SVE_EQ_3A
theEmitter->emitIns_R_R_R(INS_sve_sadalp, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SADALP  <Zda>.<T>, <Pg>/M, <Zn>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_uadalp, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // UADALP  <Zda>.<T>, <Pg>/M, <Zn>.<Tb> 

// IF_SVE_ER_3A
theEmitter->emitIns_R_R_R(INS_sve_addp, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // ADDP    <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_smaxp, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SMAXP   <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_sminp, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SMINP   <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_umaxp, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // UMAXP   <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_uminp, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // UMINP   <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 

// IF_SVE_ES_3A
theEmitter->emitIns_R_R_R(INS_sve_sqabs, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SQABS   <Zd>.<T>, <Pg>/M, <Zn>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_sqneg, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SQNEG   <Zd>.<T>, <Pg>/M, <Zn>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_urecpe, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // URECPE  <Zd>.S, <Pg>/M, <Zn>.S 
theEmitter->emitIns_R_R_R(INS_sve_ursqrte, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // URSQRTE <Zd>.S, <Pg>/M, <Zn>.S 

// IF_SVE_ET_3A
theEmitter->emitIns_R_R_R(INS_sve_sqadd, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SQADD   <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_sqsub, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SQSUB   <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_sqsubr, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SQSUBR  <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_suqadd, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SUQADD  <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_uqadd, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // UQADD   <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_uqsub, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // UQSUB   <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_uqsubr, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // UQSUBR  <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_usqadd, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // USQADD  <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 

// IF_SVE_EU_3A
theEmitter->emitIns_R_R_R(INS_sve_sqrshl, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SQRSHL  <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_sqrshlr, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SQRSHLR <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_sqshl, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SQSHL   <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_sqshlr, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SQSHLR  <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_srshl, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SRSHL   <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_srshlr, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SRSHLR  <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_uqrshl, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // UQRSHL  <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_uqrshlr, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // UQRSHLR <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_uqshl, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // UQSHL   <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_uqshlr, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // UQSHLR  <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_urshl, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // URSHL   <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_urshlr, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // URSHLR  <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 

// IF_SVE_EV_3A
theEmitter->emitIns_R_R_R(INS_sve_sclamp, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SCLAMP  <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_uclamp, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // UCLAMP  <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 

// IF_SVE_EW_3A
theEmitter->emitIns_R_R_R(INS_sve_mlapt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // MLAPT   <Zda>.D, <Zn>.D, <Zm>.D 

// IF_SVE_EW_3B
theEmitter->emitIns_R_R_R(INS_sve_madpt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // MADPT   <Zdn>.D, <Zm>.D, <Za>.D 

// IF_SVE_EX_3A
theEmitter->emitIns_R_R_R(INS_sve_tblq, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // TBLQ    <Zd>.<T>, {<Zn>.<T>}, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_uzpq1, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // UZPQ1   <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_uzpq2, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // UZPQ2   <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_zipq1, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // ZIPQ1   <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_zipq2, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // ZIPQ2   <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 

// IF_SVE_EY_3A
theEmitter->emitIns_R_R_R_I(INS_sve_sdot, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SDOT    <Zda>.S, <Zn>.B, <Zm>.B[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_udot, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // UDOT    <Zda>.S, <Zn>.B, <Zm>.B[<imm>] 

// IF_SVE_EY_3B
theEmitter->emitIns_R_R_R_I(INS_sve_sdot, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SDOT    <Zda>.D, <Zn>.H, <Zm>.H[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_udot, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // UDOT    <Zda>.D, <Zn>.H, <Zm>.H[<imm>] 

// IF_SVE_EZ_3A
theEmitter->emitIns_R_R_R_I(INS_sve_sudot, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SUDOT   <Zda>.S, <Zn>.B, <Zm>.B[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_usdot, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // USDOT   <Zda>.S, <Zn>.B, <Zm>.B[<imm>] 

// IF_SVE_FA_3A
theEmitter->emitIns_R_R_R_I(INS_sve_cdot, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // CDOT    <Zda>.S, <Zn>.B, <Zm>.B[<imm>], <const> 

// IF_SVE_FA_3B
theEmitter->emitIns_R_R_R_I(INS_sve_cdot, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // CDOT    <Zda>.D, <Zn>.H, <Zm>.H[<imm>], <const> 

// IF_SVE_FB_3A
theEmitter->emitIns_R_R_R_I(INS_sve_cmla, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // CMLA    <Zda>.H, <Zn>.H, <Zm>.H[<imm>], <const> 

// IF_SVE_FB_3B
theEmitter->emitIns_R_R_R_I(INS_sve_cmla, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // CMLA    <Zda>.S, <Zn>.S, <Zm>.S[<imm>], <const> 

// IF_SVE_FC_3A
theEmitter->emitIns_R_R_R_I(INS_sve_sqrdcmlah, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQRDCMLAH <Zda>.H, <Zn>.H, <Zm>.H[<imm>], <const> 

// IF_SVE_FC_3B
theEmitter->emitIns_R_R_R_I(INS_sve_sqrdcmlah, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQRDCMLAH <Zda>.S, <Zn>.S, <Zm>.S[<imm>], <const> 

// IF_SVE_FD_3A
theEmitter->emitIns_R_R_R_I(INS_sve_mul, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // MUL     <Zd>.H, <Zn>.H, <Zm>.H[<imm>] 

// IF_SVE_FD_3B
theEmitter->emitIns_R_R_R_I(INS_sve_mul, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // MUL     <Zd>.S, <Zn>.S, <Zm>.S[<imm>] 

// IF_SVE_FD_3C
theEmitter->emitIns_R_R_R_I(INS_sve_mul, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // MUL     <Zd>.D, <Zn>.D, <Zm>.D[<imm>] 

// IF_SVE_FE_3A
theEmitter->emitIns_R_R_R_I(INS_sve_smullb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SMULLB  <Zd>.S, <Zn>.H, <Zm>.H[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_smullt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SMULLT  <Zd>.S, <Zn>.H, <Zm>.H[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_umullb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // UMULLB  <Zd>.S, <Zn>.H, <Zm>.H[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_umullt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // UMULLT  <Zd>.S, <Zn>.H, <Zm>.H[<imm>] 

// IF_SVE_FE_3B
theEmitter->emitIns_R_R_R_I(INS_sve_smullb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SMULLB  <Zd>.D, <Zn>.S, <Zm>.S[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_smullt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SMULLT  <Zd>.D, <Zn>.S, <Zm>.S[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_umullb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // UMULLB  <Zd>.D, <Zn>.S, <Zm>.S[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_umullt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // UMULLT  <Zd>.D, <Zn>.S, <Zm>.S[<imm>] 

// IF_SVE_FF_3A
theEmitter->emitIns_R_R_R_I(INS_sve_mla, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // MLA     <Zda>.H, <Zn>.H, <Zm>.H[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_mls, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // MLS     <Zda>.H, <Zn>.H, <Zm>.H[<imm>] 

// IF_SVE_FF_3B
theEmitter->emitIns_R_R_R_I(INS_sve_mla, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // MLA     <Zda>.S, <Zn>.S, <Zm>.S[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_mls, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // MLS     <Zda>.S, <Zn>.S, <Zm>.S[<imm>] 

// IF_SVE_FF_3C
theEmitter->emitIns_R_R_R_I(INS_sve_mla, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // MLA     <Zda>.D, <Zn>.D, <Zm>.D[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_mls, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // MLS     <Zda>.D, <Zn>.D, <Zm>.D[<imm>] 

// IF_SVE_FG_3A
theEmitter->emitIns_R_R_R_I(INS_sve_smlalb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SMLALB  <Zda>.S, <Zn>.H, <Zm>.H[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_smlalt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SMLALT  <Zda>.S, <Zn>.H, <Zm>.H[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_smlslb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SMLSLB  <Zda>.S, <Zn>.H, <Zm>.H[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_smlslt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SMLSLT  <Zda>.S, <Zn>.H, <Zm>.H[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_umlalb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // UMLALB  <Zda>.S, <Zn>.H, <Zm>.H[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_umlalt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // UMLALT  <Zda>.S, <Zn>.H, <Zm>.H[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_umlslb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // UMLSLB  <Zda>.S, <Zn>.H, <Zm>.H[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_umlslt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // UMLSLT  <Zda>.S, <Zn>.H, <Zm>.H[<imm>] 

// IF_SVE_FG_3B
theEmitter->emitIns_R_R_R_I(INS_sve_smlalb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SMLALB  <Zda>.D, <Zn>.S, <Zm>.S[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_smlalt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SMLALT  <Zda>.D, <Zn>.S, <Zm>.S[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_smlslb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SMLSLB  <Zda>.D, <Zn>.S, <Zm>.S[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_smlslt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SMLSLT  <Zda>.D, <Zn>.S, <Zm>.S[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_umlalb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // UMLALB  <Zda>.D, <Zn>.S, <Zm>.S[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_umlalt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // UMLALT  <Zda>.D, <Zn>.S, <Zm>.S[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_umlslb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // UMLSLB  <Zda>.D, <Zn>.S, <Zm>.S[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_umlslt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // UMLSLT  <Zda>.D, <Zn>.S, <Zm>.S[<imm>] 

// IF_SVE_FH_3A
theEmitter->emitIns_R_R_R_I(INS_sve_sqdmullb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQDMULLB <Zd>.S, <Zn>.H, <Zm>.H[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_sqdmullt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQDMULLT <Zd>.S, <Zn>.H, <Zm>.H[<imm>] 

// IF_SVE_FH_3B
theEmitter->emitIns_R_R_R_I(INS_sve_sqdmullb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQDMULLB <Zd>.D, <Zn>.S, <Zm>.S[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_sqdmullt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQDMULLT <Zd>.D, <Zn>.S, <Zm>.S[<imm>] 

// IF_SVE_FI_3A
theEmitter->emitIns_R_R_R_I(INS_sve_sqdmulh, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQDMULH <Zd>.H, <Zn>.H, <Zm>.H[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_sqrdmulh, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQRDMULH <Zd>.H, <Zn>.H, <Zm>.H[<imm>] 

// IF_SVE_FI_3B
theEmitter->emitIns_R_R_R_I(INS_sve_sqdmulh, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQDMULH <Zd>.S, <Zn>.S, <Zm>.S[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_sqrdmulh, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQRDMULH <Zd>.S, <Zn>.S, <Zm>.S[<imm>] 

// IF_SVE_FI_3C
theEmitter->emitIns_R_R_R_I(INS_sve_sqdmulh, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQDMULH <Zd>.D, <Zn>.D, <Zm>.D[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_sqrdmulh, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQRDMULH <Zd>.D, <Zn>.D, <Zm>.D[<imm>] 

// IF_SVE_FJ_3A
theEmitter->emitIns_R_R_R_I(INS_sve_sqdmlalb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQDMLALB <Zda>.S, <Zn>.H, <Zm>.H[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_sqdmlalt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQDMLALT <Zda>.S, <Zn>.H, <Zm>.H[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_sqdmlslb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQDMLSLB <Zda>.S, <Zn>.H, <Zm>.H[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_sqdmlslt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQDMLSLT <Zda>.S, <Zn>.H, <Zm>.H[<imm>] 

// IF_SVE_FJ_3B
theEmitter->emitIns_R_R_R_I(INS_sve_sqdmlalb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQDMLALB <Zda>.D, <Zn>.S, <Zm>.S[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_sqdmlalt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQDMLALT <Zda>.D, <Zn>.S, <Zm>.S[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_sqdmlslb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQDMLSLB <Zda>.D, <Zn>.S, <Zm>.S[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_sqdmlslt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQDMLSLT <Zda>.D, <Zn>.S, <Zm>.S[<imm>] 

// IF_SVE_FK_3A
theEmitter->emitIns_R_R_R_I(INS_sve_sqrdmlah, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQRDMLAH <Zda>.H, <Zn>.H, <Zm>.H[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_sqrdmlsh, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQRDMLSH <Zda>.H, <Zn>.H, <Zm>.H[<imm>] 

// IF_SVE_FK_3B
theEmitter->emitIns_R_R_R_I(INS_sve_sqrdmlah, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQRDMLAH <Zda>.S, <Zn>.S, <Zm>.S[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_sqrdmlsh, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQRDMLSH <Zda>.S, <Zn>.S, <Zm>.S[<imm>] 

// IF_SVE_FK_3C
theEmitter->emitIns_R_R_R_I(INS_sve_sqrdmlah, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQRDMLAH <Zda>.D, <Zn>.D, <Zm>.D[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_sqrdmlsh, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQRDMLSH <Zda>.D, <Zn>.D, <Zm>.D[<imm>] 

// IF_SVE_FL_3A
theEmitter->emitIns_R_R_R(INS_sve_sabdlb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SABDLB  <Zd>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_sabdlt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SABDLT  <Zd>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_saddlb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SADDLB  <Zd>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_saddlt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SADDLT  <Zd>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_ssublb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SSUBLB  <Zd>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_ssublt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SSUBLT  <Zd>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_uabdlb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // UABDLB  <Zd>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_uabdlt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // UABDLT  <Zd>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_uaddlb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // UADDLB  <Zd>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_uaddlt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // UADDLT  <Zd>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_usublb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // USUBLB  <Zd>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_usublt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // USUBLT  <Zd>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 

// IF_SVE_FM_3A
theEmitter->emitIns_R_R_R(INS_sve_saddwb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SADDWB  <Zd>.<T>, <Zn>.<T>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_saddwt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SADDWT  <Zd>.<T>, <Zn>.<T>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_ssubwb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SSUBWB  <Zd>.<T>, <Zn>.<T>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_ssubwt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SSUBWT  <Zd>.<T>, <Zn>.<T>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_uaddwb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // UADDWB  <Zd>.<T>, <Zn>.<T>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_uaddwt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // UADDWT  <Zd>.<T>, <Zn>.<T>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_usubwb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // USUBWB  <Zd>.<T>, <Zn>.<T>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_usubwt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // USUBWT  <Zd>.<T>, <Zn>.<T>, <Zm>.<Tb> 

// IF_SVE_FN_3A
theEmitter->emitIns_R_R_R(INS_sve_pmullb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // PMULLB  <Zd>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_pmullt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // PMULLT  <Zd>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_smullb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SMULLB  <Zd>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_smullt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SMULLT  <Zd>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_sqdmullb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SQDMULLB <Zd>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_sqdmullt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SQDMULLT <Zd>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_umullb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // UMULLB  <Zd>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_umullt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // UMULLT  <Zd>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 

// IF_SVE_FN_3B
theEmitter->emitIns_R_R_R(INS_sve_pmullb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // PMULLB  <Zd>.Q, <Zn>.D, <Zm>.D 
theEmitter->emitIns_R_R_R(INS_sve_pmullt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // PMULLT  <Zd>.Q, <Zn>.D, <Zm>.D 

// IF_SVE_FO_3A
theEmitter->emitIns_R_R_R(INS_sve_smmla, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SMMLA   <Zda>.S, <Zn>.B, <Zm>.B 
theEmitter->emitIns_R_R_R(INS_sve_ummla, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // UMMLA   <Zda>.S, <Zn>.B, <Zm>.B 
theEmitter->emitIns_R_R_R(INS_sve_usmmla, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // USMMLA  <Zda>.S, <Zn>.B, <Zm>.B 

// IF_SVE_FP_3A
theEmitter->emitIns_R_R_R(INS_sve_eorbt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // EORBT   <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_eortb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // EORTB   <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 

// IF_SVE_FQ_3A
theEmitter->emitIns_R_R_R(INS_sve_bdep, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // BDEP    <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_bext, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // BEXT    <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_bgrp, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // BGRP    <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 

// IF_SVE_FR_2A
theEmitter->emitIns_R_R_I(INS_sve_sshllb, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SSHLLB  <Zd>.<T>, <Zn>.<Tb>, #<const> 
theEmitter->emitIns_R_R_I(INS_sve_sshllt, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SSHLLT  <Zd>.<T>, <Zn>.<Tb>, #<const> 
theEmitter->emitIns_R_R_I(INS_sve_ushllb, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // USHLLB  <Zd>.<T>, <Zn>.<Tb>, #<const> 
theEmitter->emitIns_R_R_I(INS_sve_ushllt, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // USHLLT  <Zd>.<T>, <Zn>.<Tb>, #<const> 

// IF_SVE_FS_3A
theEmitter->emitIns_R_R_R(INS_sve_saddlbt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SADDLBT <Zd>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_ssublbt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SSUBLBT <Zd>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_ssubltb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SSUBLTB <Zd>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 

// IF_SVE_FT_2A
theEmitter->emitIns_R_R_I(INS_sve_sli, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SLI     <Zd>.<T>, <Zn>.<T>, #<const> 
theEmitter->emitIns_R_R_I(INS_sve_sri, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SRI     <Zd>.<T>, <Zn>.<T>, #<const> 

// IF_SVE_FU_2A
theEmitter->emitIns_R_R_I(INS_sve_srsra, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SRSRA   <Zda>.<T>, <Zn>.<T>, #<const> 
theEmitter->emitIns_R_R_I(INS_sve_ssra, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SSRA    <Zda>.<T>, <Zn>.<T>, #<const> 
theEmitter->emitIns_R_R_I(INS_sve_ursra, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // URSRA   <Zda>.<T>, <Zn>.<T>, #<const> 
theEmitter->emitIns_R_R_I(INS_sve_usra, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // USRA    <Zda>.<T>, <Zn>.<T>, #<const> 

// IF_SVE_FV_2A
theEmitter->emitIns_R_R(INS_sve_cadd, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // CADD    <Zdn>.<T>, <Zdn>.<T>, <Zm>.<T>, <const> 
theEmitter->emitIns_R_R(INS_sve_sqcadd, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SQCADD  <Zdn>.<T>, <Zdn>.<T>, <Zm>.<T>, <const> 

// IF_SVE_FW_3A
theEmitter->emitIns_R_R_R(INS_sve_saba, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SABA    <Zda>.<T>, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_uaba, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // UABA    <Zda>.<T>, <Zn>.<T>, <Zm>.<T> 

// IF_SVE_FX_3A
theEmitter->emitIns_R_R_R(INS_sve_sabalb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SABALB  <Zda>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_sabalt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SABALT  <Zda>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_uabalb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // UABALB  <Zda>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_uabalt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // UABALT  <Zda>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 

// IF_SVE_FY_3A
theEmitter->emitIns_R_R_R(INS_sve_adclb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // ADCLB   <Zda>.<T>, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_adclt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // ADCLT   <Zda>.<T>, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_sbclb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SBCLB   <Zda>.<T>, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_sbclt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SBCLT   <Zda>.<T>, <Zn>.<T>, <Zm>.<T> 

// IF_SVE_FZ_2A
theEmitter->emitIns_R_R(INS_sve_sqcvtn, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SQCVTN  <Zd>.H, {<Zn1>.S-<Zn2>.S } 
theEmitter->emitIns_R_R(INS_sve_sqcvtun, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SQCVTUN <Zd>.H, {<Zn1>.S-<Zn2>.S } 
theEmitter->emitIns_R_R(INS_sve_uqcvtn, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // UQCVTN  <Zd>.H, {<Zn1>.S-<Zn2>.S } 

// IF_SVE_GA_2A
theEmitter->emitIns_R_R_I(INS_sve_sqrshrn, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQRSHRN <Zd>.H, {<Zn1>.S-<Zn2>.S }, #<const> 
theEmitter->emitIns_R_R_I(INS_sve_sqrshrun, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQRSHRUN <Zd>.H, {<Zn1>.S-<Zn2>.S }, #<const> 
theEmitter->emitIns_R_R_I(INS_sve_uqrshrn, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // UQRSHRN <Zd>.H, {<Zn1>.S-<Zn2>.S }, #<const> 

// IF_SVE_GB_2A
theEmitter->emitIns_R_R_I(INS_sve_rshrnb, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // RSHRNB  <Zd>.<T>, <Zn>.<Tb>, #<const> 
theEmitter->emitIns_R_R_I(INS_sve_rshrnt, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // RSHRNT  <Zd>.<T>, <Zn>.<Tb>, #<const> 
theEmitter->emitIns_R_R_I(INS_sve_shrnb, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SHRNB   <Zd>.<T>, <Zn>.<Tb>, #<const> 
theEmitter->emitIns_R_R_I(INS_sve_shrnt, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SHRNT   <Zd>.<T>, <Zn>.<Tb>, #<const> 
theEmitter->emitIns_R_R_I(INS_sve_sqrshrnb, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQRSHRNB <Zd>.<T>, <Zn>.<Tb>, #<const> 
theEmitter->emitIns_R_R_I(INS_sve_sqrshrnt, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQRSHRNT <Zd>.<T>, <Zn>.<Tb>, #<const> 
theEmitter->emitIns_R_R_I(INS_sve_sqrshrunb, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQRSHRUNB <Zd>.<T>, <Zn>.<Tb>, #<const> 
theEmitter->emitIns_R_R_I(INS_sve_sqrshrunt, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQRSHRUNT <Zd>.<T>, <Zn>.<Tb>, #<const> 
theEmitter->emitIns_R_R_I(INS_sve_sqshrnb, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQSHRNB <Zd>.<T>, <Zn>.<Tb>, #<const> 
theEmitter->emitIns_R_R_I(INS_sve_sqshrnt, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQSHRNT <Zd>.<T>, <Zn>.<Tb>, #<const> 
theEmitter->emitIns_R_R_I(INS_sve_sqshrunb, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQSHRUNB <Zd>.<T>, <Zn>.<Tb>, #<const> 
theEmitter->emitIns_R_R_I(INS_sve_sqshrunt, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // SQSHRUNT <Zd>.<T>, <Zn>.<Tb>, #<const> 
theEmitter->emitIns_R_R_I(INS_sve_uqrshrnb, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // UQRSHRNB <Zd>.<T>, <Zn>.<Tb>, #<const> 
theEmitter->emitIns_R_R_I(INS_sve_uqrshrnt, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // UQRSHRNT <Zd>.<T>, <Zn>.<Tb>, #<const> 
theEmitter->emitIns_R_R_I(INS_sve_uqshrnb, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // UQSHRNB <Zd>.<T>, <Zn>.<Tb>, #<const> 
theEmitter->emitIns_R_R_I(INS_sve_uqshrnt, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // UQSHRNT <Zd>.<T>, <Zn>.<Tb>, #<const> 

// IF_SVE_GC_3A
theEmitter->emitIns_R_R_R(INS_sve_addhnb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // ADDHNB  <Zd>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_addhnt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // ADDHNT  <Zd>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_raddhnb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // RADDHNB <Zd>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_raddhnt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // RADDHNT <Zd>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_rsubhnb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // RSUBHNB <Zd>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_rsubhnt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // RSUBHNT <Zd>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_subhnb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SUBHNB  <Zd>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_subhnt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SUBHNT  <Zd>.<T>, <Zn>.<Tb>, <Zm>.<Tb> 

// IF_SVE_GD_2A
theEmitter->emitIns_R_R(INS_sve_sqxtnb, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SQXTNB  <Zd>.<T>, <Zn>.<Tb> 
theEmitter->emitIns_R_R(INS_sve_sqxtnt, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SQXTNT  <Zd>.<T>, <Zn>.<Tb> 
theEmitter->emitIns_R_R(INS_sve_sqxtunb, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SQXTUNB <Zd>.<T>, <Zn>.<Tb> 
theEmitter->emitIns_R_R(INS_sve_sqxtunt, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SQXTUNT <Zd>.<T>, <Zn>.<Tb> 
theEmitter->emitIns_R_R(INS_sve_uqxtnb, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // UQXTNB  <Zd>.<T>, <Zn>.<Tb> 
theEmitter->emitIns_R_R(INS_sve_uqxtnt, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // UQXTNT  <Zd>.<T>, <Zn>.<Tb> 

// IF_SVE_GE_4A
theEmitter->emitIns_R_R_R_R(INS_sve_match, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // MATCH   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R_R(INS_sve_nmatch, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // NMATCH  <Pd>.<T>, <Pg>/Z, <Zn>.<T>, <Zm>.<T> 

// IF_SVE_GF_3A
theEmitter->emitIns_R_R_R(INS_sve_histseg, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // HISTSEG <Zd>.B, <Zn>.B, <Zm>.B 

// IF_SVE_GG_3A
theEmitter->emitIns_R_R_R_I(INS_sve_luti2, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // LUTI2   <Zd>.B, {<Zn>.B }, <Zm>[<index>] 

// IF_SVE_GG_3B
theEmitter->emitIns_R_R_R_I(INS_sve_luti2, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // LUTI2   <Zd>.H, {<Zn>.H }, <Zm>[<index>] 

// IF_SVE_GH_3A
theEmitter->emitIns_R_R_R_I(INS_sve_luti4, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // LUTI4   <Zd>.B, {<Zn>.B }, <Zm>[<index>] 

// IF_SVE_GH_3B
theEmitter->emitIns_R_R_R_I(INS_sve_luti4, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // LUTI4   <Zd>.H, {<Zn1>.H, <Zn2>.H }, <Zm>[<index>] 

// IF_SVE_GH_3B_B
theEmitter->emitIns_R_R_R_I(INS_sve_luti4, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // LUTI4   <Zd>.H, {<Zn>.H }, <Zm>[<index>] 

// IF_SVE_GI_4A
theEmitter->emitIns_R_R_R_R(INS_sve_histcnt, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // HISTCNT <Zd>.<T>, <Pg>/Z, <Zn>.<T>, <Zm>.<T> 

// IF_SVE_GJ_3A
theEmitter->emitIns_R_R_R(INS_sve_rax1, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // RAX1    <Zd>.D, <Zn>.D, <Zm>.D 
theEmitter->emitIns_R_R_R(INS_sve_sm4ekey, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SM4EKEY <Zd>.S, <Zn>.S, <Zm>.S 

// IF_SVE_GK_2A
theEmitter->emitIns_R_R(INS_sve_aesd, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // AESD    <Zdn>.B, <Zdn>.B, <Zm>.B 
theEmitter->emitIns_R_R(INS_sve_aese, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // AESE    <Zdn>.B, <Zdn>.B, <Zm>.B 
theEmitter->emitIns_R_R(INS_sve_sm4e, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // SM4E    <Zdn>.S, <Zdn>.S, <Zm>.S 

// IF_SVE_GL_1A
theEmitter->emitIns_R(INS_sve_aesimc, EA_SCALABLE, REG_V0, INS_OPTS_SCALABLE_B);  // AESIMC  <Zdn>.B, <Zdn>.B 
theEmitter->emitIns_R(INS_sve_aesmc, EA_SCALABLE, REG_V0, INS_OPTS_SCALABLE_B);  // AESMC   <Zdn>.B, <Zdn>.B 

// IF_SVE_GM_3A
theEmitter->emitIns_R_R_R_I(INS_sve_fmlalb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // FMLALB  <Zda>.H, <Zn>.B, <Zm>.B[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_fmlalt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // FMLALT  <Zda>.H, <Zn>.B, <Zm>.B[<imm>] 

// IF_SVE_GN_3A
theEmitter->emitIns_R_R_R(INS_sve_fmlalb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // FMLALB  <Zda>.H, <Zn>.B, <Zm>.B 
theEmitter->emitIns_R_R_R(INS_sve_fmlalt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // FMLALT  <Zda>.H, <Zn>.B, <Zm>.B 

// IF_SVE_GO_3A
theEmitter->emitIns_R_R_R(INS_sve_fmlallbb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // FMLALLBB <Zda>.S, <Zn>.B, <Zm>.B 
theEmitter->emitIns_R_R_R(INS_sve_fmlallbt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // FMLALLBT <Zda>.S, <Zn>.B, <Zm>.B 
theEmitter->emitIns_R_R_R(INS_sve_fmlalltb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // FMLALLTB <Zda>.S, <Zn>.B, <Zm>.B 
theEmitter->emitIns_R_R_R(INS_sve_fmlalltt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // FMLALLTT <Zda>.S, <Zn>.B, <Zm>.B 

// IF_SVE_GP_3A
theEmitter->emitIns_R_R_R(INS_sve_fcadd, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FCADD   <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T>, <const> 

// IF_SVE_GQ_3A
theEmitter->emitIns_R_R_R(INS_sve_bfcvtnt, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // BFCVTNT <Zd>.H, <Pg>/M, <Zn>.S 
theEmitter->emitIns_R_R_R(INS_sve_fcvtlt, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FCVTLT  <Zd>.D, <Pg>/M, <Zn>.S 
theEmitter->emitIns_R_R_R(INS_sve_fcvtnt, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FCVTNT  <Zd>.S, <Pg>/M, <Zn>.D 
theEmitter->emitIns_R_R_R(INS_sve_fcvtxnt, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FCVTXNT <Zd>.S, <Pg>/M, <Zn>.D 

// IF_SVE_GR_3A
theEmitter->emitIns_R_R_R(INS_sve_faddp, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FADDP   <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_fmaxnmp, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FMAXNMP <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_fmaxp, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FMAXP   <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_fminnmp, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FMINNMP <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_fminp, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FMINP   <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 

// IF_SVE_GS_3A
theEmitter->emitIns_R_R_R(INS_sve_faddqv, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FADDQV  <Vd>.<T>, <Pg>, <Zn>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_fmaxnmqv, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FMAXNMQV <Vd>.<T>, <Pg>, <Zn>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_fmaxqv, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FMAXQV  <Vd>.<T>, <Pg>, <Zn>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_fminnmqv, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FMINNMQV <Vd>.<T>, <Pg>, <Zn>.<Tb> 
theEmitter->emitIns_R_R_R(INS_sve_fminqv, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FMINQV  <Vd>.<T>, <Pg>, <Zn>.<Tb> 

// IF_SVE_GT_4A
theEmitter->emitIns_R_R_R_R(INS_sve_fcmla, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FCMLA   <Zda>.<T>, <Pg>/M, <Zn>.<T>, <Zm>.<T>, <const> 

// IF_SVE_GU_3A
theEmitter->emitIns_R_R_R_I(INS_sve_fmla, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // FMLA    <Zda>.S, <Zn>.S, <Zm>.S[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_fmls, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // FMLS    <Zda>.S, <Zn>.S, <Zm>.S[<imm>] 

// IF_SVE_GU_3B
theEmitter->emitIns_R_R_R_I(INS_sve_fmla, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // FMLA    <Zda>.D, <Zn>.D, <Zm>.D[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_fmls, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // FMLS    <Zda>.D, <Zn>.D, <Zm>.D[<imm>] 

// IF_SVE_GU_3C
theEmitter->emitIns_R_R_R_I(INS_sve_bfmla, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // BFMLA   <Zda>.H, <Zn>.H, <Zm>.H[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_bfmls, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // BFMLS   <Zda>.H, <Zn>.H, <Zm>.H[<imm>] 

// IF_SVE_GV_3A
theEmitter->emitIns_R_R_R_I(INS_sve_fcmla, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // FCMLA   <Zda>.S, <Zn>.S, <Zm>.S[<imm>], <const> 

// IF_SVE_GW_3A
theEmitter->emitIns_R_R_R(INS_sve_fclamp, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // FCLAMP  <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 

// IF_SVE_GW_3B
theEmitter->emitIns_R_R_R(INS_sve_bfclamp, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // BFCLAMP <Zd>.H, <Zn>.H, <Zm>.H 

// IF_SVE_GX_3A
theEmitter->emitIns_R_R_R_I(INS_sve_fmul, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // FMUL    <Zd>.S, <Zn>.S, <Zm>.S[<imm>] 

// IF_SVE_GX_3B
theEmitter->emitIns_R_R_R_I(INS_sve_fmul, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // FMUL    <Zd>.D, <Zn>.D, <Zm>.D[<imm>] 

// IF_SVE_GX_3C
theEmitter->emitIns_R_R_R_I(INS_sve_bfmul, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // BFMUL   <Zd>.H, <Zn>.H, <Zm>.H[<imm>] 

// IF_SVE_GY_3A
theEmitter->emitIns_R_R_R_I(INS_sve_fdot, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // FDOT    <Zda>.H, <Zn>.B, <Zm>.B[<imm>] 

// IF_SVE_GY_3B
theEmitter->emitIns_R_R_R_I(INS_sve_bfdot, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // BFDOT   <Zda>.S, <Zn>.H, <Zm>.H[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_fdot, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // FDOT    <Zda>.S, <Zn>.H, <Zm>.H[<imm>] 

// IF_SVE_GY_3B_D
theEmitter->emitIns_R_R_R_I(INS_sve_fdot, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // FDOT    <Zda>.S, <Zn>.B, <Zm>.B[<imm>] 

// IF_SVE_GZ_3A
theEmitter->emitIns_R_R_R_I(INS_sve_bfmlalb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // BFMLALB <Zda>.S, <Zn>.H, <Zm>.H[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_bfmlalt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // BFMLALT <Zda>.S, <Zn>.H, <Zm>.H[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_bfmlslb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // BFMLSLB <Zda>.S, <Zn>.H, <Zm>.H[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_bfmlslt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // BFMLSLT <Zda>.S, <Zn>.H, <Zm>.H[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_fmlalb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // FMLALB  <Zda>.S, <Zn>.H, <Zm>.H[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_fmlalt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // FMLALT  <Zda>.S, <Zn>.H, <Zm>.H[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_fmlslb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // FMLSLB  <Zda>.S, <Zn>.H, <Zm>.H[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_fmlslt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // FMLSLT  <Zda>.S, <Zn>.H, <Zm>.H[<imm>] 

// IF_SVE_HA_3A
theEmitter->emitIns_R_R_R(INS_sve_bfdot, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // BFDOT   <Zda>.S, <Zn>.H, <Zm>.H 
theEmitter->emitIns_R_R_R(INS_sve_fdot, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // FDOT    <Zda>.S, <Zn>.H, <Zm>.H 

// IF_SVE_HA_3A_E
theEmitter->emitIns_R_R_R(INS_sve_fdot, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // FDOT    <Zda>.H, <Zn>.B, <Zm>.B 

// IF_SVE_HA_3A_F
theEmitter->emitIns_R_R_R(INS_sve_fdot, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // FDOT    <Zda>.S, <Zn>.B, <Zm>.B 

// IF_SVE_HB_3A
theEmitter->emitIns_R_R_R(INS_sve_bfmlalb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // BFMLALB <Zda>.S, <Zn>.H, <Zm>.H 
theEmitter->emitIns_R_R_R(INS_sve_bfmlalt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // BFMLALT <Zda>.S, <Zn>.H, <Zm>.H 
theEmitter->emitIns_R_R_R(INS_sve_bfmlslb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // BFMLSLB <Zda>.S, <Zn>.H, <Zm>.H 
theEmitter->emitIns_R_R_R(INS_sve_bfmlslt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // BFMLSLT <Zda>.S, <Zn>.H, <Zm>.H 
theEmitter->emitIns_R_R_R(INS_sve_fmlalb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // FMLALB  <Zda>.S, <Zn>.H, <Zm>.H 
theEmitter->emitIns_R_R_R(INS_sve_fmlalt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // FMLALT  <Zda>.S, <Zn>.H, <Zm>.H 
theEmitter->emitIns_R_R_R(INS_sve_fmlslb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // FMLSLB  <Zda>.S, <Zn>.H, <Zm>.H 
theEmitter->emitIns_R_R_R(INS_sve_fmlslt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // FMLSLT  <Zda>.S, <Zn>.H, <Zm>.H 

// IF_SVE_HC_3A
theEmitter->emitIns_R_R_R_I(INS_sve_fmlallbb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // FMLALLBB <Zda>.S, <Zn>.B, <Zm>.B[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_fmlallbt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // FMLALLBT <Zda>.S, <Zn>.B, <Zm>.B[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_fmlalltb, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // FMLALLTB <Zda>.S, <Zn>.B, <Zm>.B[<imm>] 
theEmitter->emitIns_R_R_R_I(INS_sve_fmlalltt, EA_SCALABLE, REG_V0, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // FMLALLTT <Zda>.S, <Zn>.B, <Zm>.B[<imm>] 

// IF_SVE_HD_3A
theEmitter->emitIns_R_R_R(INS_sve_bfmmla, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // BFMMLA  <Zda>.S, <Zn>.H, <Zm>.H 

// IF_SVE_HD_3A_A
theEmitter->emitIns_R_R_R(INS_sve_fmmla, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // FMMLA   <Zda>.D, <Zn>.D, <Zm>.D 

// IF_SVE_HE_3A
theEmitter->emitIns_R_R_R(INS_sve_faddv, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FADDV   <V><d>, <Pg>, <Zn>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_fmaxnmv, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FMAXNMV <V><d>, <Pg>, <Zn>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_fmaxv, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FMAXV   <V><d>, <Pg>, <Zn>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_fminnmv, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FMINNMV <V><d>, <Pg>, <Zn>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_fminv, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FMINV   <V><d>, <Pg>, <Zn>.<T> 

// IF_SVE_HF_2A
theEmitter->emitIns_R_R(INS_sve_frecpe, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // FRECPE  <Zd>.<T>, <Zn>.<T> 
theEmitter->emitIns_R_R(INS_sve_frsqrte, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // FRSQRTE <Zd>.<T>, <Zn>.<T> 

// IF_SVE_HG_2A
theEmitter->emitIns_R_R(INS_sve_bfcvtn, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // BFCVTN  <Zd>.B, {<Zn1>.H-<Zn2>.H } 
theEmitter->emitIns_R_R(INS_sve_fcvtn, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // FCVTN   <Zd>.B, {<Zn1>.H-<Zn2>.H } 
theEmitter->emitIns_R_R(INS_sve_fcvtnb, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // FCVTNB  <Zd>.B, {<Zn1>.S-<Zn2>.S } 
theEmitter->emitIns_R_R(INS_sve_fcvtnt, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // FCVTNT  <Zd>.B, {<Zn1>.S-<Zn2>.S } 

// IF_SVE_HH_2A
theEmitter->emitIns_R_R(INS_sve_bf1cvt, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // BF1CVT  <Zd>.H, <Zn>.B 
theEmitter->emitIns_R_R(INS_sve_bf1cvtlt, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // BF1CVTLT <Zd>.H, <Zn>.B 
theEmitter->emitIns_R_R(INS_sve_bf2cvt, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // BF2CVT  <Zd>.H, <Zn>.B 
theEmitter->emitIns_R_R(INS_sve_bf2cvtlt, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // BF2CVTLT <Zd>.H, <Zn>.B 
theEmitter->emitIns_R_R(INS_sve_f1cvt, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // F1CVT   <Zd>.H, <Zn>.B 
theEmitter->emitIns_R_R(INS_sve_f1cvtlt, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // F1CVTLT <Zd>.H, <Zn>.B 
theEmitter->emitIns_R_R(INS_sve_f2cvt, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // F2CVT   <Zd>.H, <Zn>.B 
theEmitter->emitIns_R_R(INS_sve_f2cvtlt, EA_SCALABLE, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // F2CVTLT <Zd>.H, <Zn>.B 

// IF_SVE_HI_3A
theEmitter->emitIns_R_R_R(INS_sve_fcmeq, EA_SCALABLE, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // FCMEQ   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, #0.0 
theEmitter->emitIns_R_R_R(INS_sve_fcmge, EA_SCALABLE, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // FCMGE   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, #0.0 
theEmitter->emitIns_R_R_R(INS_sve_fcmgt, EA_SCALABLE, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // FCMGT   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, #0.0 
theEmitter->emitIns_R_R_R(INS_sve_fcmle, EA_SCALABLE, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // FCMLE   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, #0.0 
theEmitter->emitIns_R_R_R(INS_sve_fcmlt, EA_SCALABLE, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // FCMLT   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, #0.0 
theEmitter->emitIns_R_R_R(INS_sve_fcmne, EA_SCALABLE, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // FCMNE   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, #0.0 

// IF_SVE_HJ_3A
theEmitter->emitIns_R_R_R(INS_sve_fadda, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FADDA   <V><dn>, <Pg>, <V><dn>, <Zm>.<T> 

// IF_SVE_HK_3A
theEmitter->emitIns_R_R_R(INS_sve_fadd, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // FADD    <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_fmul, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // FMUL    <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_frecps, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // FRECPS  <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_frsqrts, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // FRSQRTS <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_fsub, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // FSUB    <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_ftsmul, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // FTSMUL  <Zd>.<T>, <Zn>.<T>, <Zm>.<T> 

// IF_SVE_HK_3B
theEmitter->emitIns_R_R_R(INS_sve_bfadd, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // BFADD   <Zd>.H, <Zn>.H, <Zm>.H 
theEmitter->emitIns_R_R_R(INS_sve_bfmul, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // BFMUL   <Zd>.H, <Zn>.H, <Zm>.H 
theEmitter->emitIns_R_R_R(INS_sve_bfsub, EA_SCALABLE, REG_V0, REG_V0, REG_V0, INS_OPTS_SCALABLE_B);  // BFSUB   <Zd>.H, <Zn>.H, <Zm>.H 

// IF_SVE_HL_3A
theEmitter->emitIns_R_R_R(INS_sve_fabd, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FABD    <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_fadd, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FADD    <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_famax, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FAMAX   <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_famin, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FAMIN   <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_fdiv, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FDIV    <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_fdivr, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FDIVR   <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_fmax, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FMAX    <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_fmaxnm, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FMAXNM  <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_fmin, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FMIN    <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_fminnm, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FMINNM  <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_fmul, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FMUL    <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_fmulx, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FMULX   <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_fscale, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FSCALE  <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_fsub, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FSUB    <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_fsubr, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FSUBR   <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <Zm>.<T> 

// IF_SVE_HL_3B
theEmitter->emitIns_R_R_R(INS_sve_bfadd, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // BFADD   <Zdn>.H, <Pg>/M, <Zdn>.H, <Zm>.H 
theEmitter->emitIns_R_R_R(INS_sve_bfmax, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // BFMAX   <Zdn>.H, <Pg>/M, <Zdn>.H, <Zm>.H 
theEmitter->emitIns_R_R_R(INS_sve_bfmaxnm, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // BFMAXNM <Zdn>.H, <Pg>/M, <Zdn>.H, <Zm>.H 
theEmitter->emitIns_R_R_R(INS_sve_bfmin, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // BFMIN   <Zdn>.H, <Pg>/M, <Zdn>.H, <Zm>.H 
theEmitter->emitIns_R_R_R(INS_sve_bfminnm, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // BFMINNM <Zdn>.H, <Pg>/M, <Zdn>.H, <Zm>.H 
theEmitter->emitIns_R_R_R(INS_sve_bfmul, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // BFMUL   <Zdn>.H, <Pg>/M, <Zdn>.H, <Zm>.H 
theEmitter->emitIns_R_R_R(INS_sve_bfsub, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // BFSUB   <Zdn>.H, <Pg>/M, <Zdn>.H, <Zm>.H 

// IF_SVE_HM_2A
theEmitter->emitIns_R_R_I(INS_sve_fadd, EA_SCALABLE, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // FADD    <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <const> 
theEmitter->emitIns_R_R_I(INS_sve_fmax, EA_SCALABLE, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // FMAX    <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <const> 
theEmitter->emitIns_R_R_I(INS_sve_fmaxnm, EA_SCALABLE, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // FMAXNM  <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <const> 
theEmitter->emitIns_R_R_I(INS_sve_fmin, EA_SCALABLE, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // FMIN    <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <const> 
theEmitter->emitIns_R_R_I(INS_sve_fminnm, EA_SCALABLE, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // FMINNM  <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <const> 
theEmitter->emitIns_R_R_I(INS_sve_fmul, EA_SCALABLE, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // FMUL    <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <const> 
theEmitter->emitIns_R_R_I(INS_sve_fsub, EA_SCALABLE, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // FSUB    <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <const> 
theEmitter->emitIns_R_R_I(INS_sve_fsubr, EA_SCALABLE, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // FSUBR   <Zdn>.<T>, <Pg>/M, <Zdn>.<T>, <const> 

// IF_SVE_HN_2A
theEmitter->emitIns_R_R_I(INS_sve_ftmad, EA_SCALABLE, REG_V0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // FTMAD   <Zdn>.<T>, <Zdn>.<T>, <Zm>.<T>, #<imm> 

// IF_SVE_HO_3A
theEmitter->emitIns_R_R_R(INS_sve_bfcvt, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // BFCVT   <Zd>.H, <Pg>/M, <Zn>.S 
theEmitter->emitIns_R_R_R(INS_sve_fcvt, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FCVT    <Zd>.D, <Pg>/M, <Zn>.S 
theEmitter->emitIns_R_R_R(INS_sve_fcvtx, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FCVTX   <Zd>.S, <Pg>/M, <Zn>.D 

// IF_SVE_HO_3A_B
theEmitter->emitIns_R_R_R(INS_sve_fcvt, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FCVT    <Zd>.S, <Pg>/M, <Zn>.D 

// IF_SVE_HP_3A
theEmitter->emitIns_R_R_R(INS_sve_flogb, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FLOGB   <Zd>.<T>, <Pg>/M, <Zn>.<T> 

// IF_SVE_HP_3B
theEmitter->emitIns_R_R_R(INS_sve_fcvtzs, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FCVTZS  <Zd>.S, <Pg>/M, <Zn>.S 
theEmitter->emitIns_R_R_R(INS_sve_fcvtzu, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FCVTZU  <Zd>.S, <Pg>/M, <Zn>.S 

// IF_SVE_HP_3B_H
theEmitter->emitIns_R_R_R(INS_sve_fcvtzs, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FCVTZS  <Zd>.D, <Pg>/M, <Zn>.S 
theEmitter->emitIns_R_R_R(INS_sve_fcvtzu, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FCVTZU  <Zd>.D, <Pg>/M, <Zn>.S 

// IF_SVE_HP_3B_I
theEmitter->emitIns_R_R_R(INS_sve_fcvtzs, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FCVTZS  <Zd>.S, <Pg>/M, <Zn>.D 
theEmitter->emitIns_R_R_R(INS_sve_fcvtzu, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FCVTZU  <Zd>.S, <Pg>/M, <Zn>.D 

// IF_SVE_HP_3B_J
theEmitter->emitIns_R_R_R(INS_sve_fcvtzs, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FCVTZS  <Zd>.D, <Pg>/M, <Zn>.D 
theEmitter->emitIns_R_R_R(INS_sve_fcvtzu, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FCVTZU  <Zd>.D, <Pg>/M, <Zn>.D 

// IF_SVE_HQ_3A
theEmitter->emitIns_R_R_R(INS_sve_frinta, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FRINTA  <Zd>.<T>, <Pg>/M, <Zn>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_frinti, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FRINTI  <Zd>.<T>, <Pg>/M, <Zn>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_frintm, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FRINTM  <Zd>.<T>, <Pg>/M, <Zn>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_frintn, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FRINTN  <Zd>.<T>, <Pg>/M, <Zn>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_frintp, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FRINTP  <Zd>.<T>, <Pg>/M, <Zn>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_frintx, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FRINTX  <Zd>.<T>, <Pg>/M, <Zn>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_frintz, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FRINTZ  <Zd>.<T>, <Pg>/M, <Zn>.<T> 

// IF_SVE_HR_3A
theEmitter->emitIns_R_R_R(INS_sve_frecpx, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FRECPX  <Zd>.<T>, <Pg>/M, <Zn>.<T> 
theEmitter->emitIns_R_R_R(INS_sve_fsqrt, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FSQRT   <Zd>.<T>, <Pg>/M, <Zn>.<T> 

// IF_SVE_HS_3A
theEmitter->emitIns_R_R_R(INS_sve_scvtf, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SCVTF   <Zd>.S, <Pg>/M, <Zn>.S 
theEmitter->emitIns_R_R_R(INS_sve_ucvtf, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // UCVTF   <Zd>.S, <Pg>/M, <Zn>.S 

// IF_SVE_HS_3A_H
theEmitter->emitIns_R_R_R(INS_sve_scvtf, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SCVTF   <Zd>.D, <Pg>/M, <Zn>.S 
theEmitter->emitIns_R_R_R(INS_sve_ucvtf, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // UCVTF   <Zd>.D, <Pg>/M, <Zn>.S 

// IF_SVE_HS_3A_I
theEmitter->emitIns_R_R_R(INS_sve_scvtf, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SCVTF   <Zd>.S, <Pg>/M, <Zn>.D 
theEmitter->emitIns_R_R_R(INS_sve_ucvtf, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // UCVTF   <Zd>.S, <Pg>/M, <Zn>.D 

// IF_SVE_HS_3A_J
theEmitter->emitIns_R_R_R(INS_sve_scvtf, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // SCVTF   <Zd>.D, <Pg>/M, <Zn>.D 
theEmitter->emitIns_R_R_R(INS_sve_ucvtf, EA_SCALABLE, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // UCVTF   <Zd>.D, <Pg>/M, <Zn>.D 

// IF_SVE_HT_4A
theEmitter->emitIns_R_R_R_R(INS_sve_facge, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // FACGE   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R_R(INS_sve_facgt, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // FACGT   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R_R(INS_sve_facle, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // FACLE   <Pd>.<T>, <Pg>/Z, <Zm>.<T>, <Zn>.<T> 
theEmitter->emitIns_R_R_R_R(INS_sve_faclt, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // FACLT   <Pd>.<T>, <Pg>/Z, <Zm>.<T>, <Zn>.<T> 
theEmitter->emitIns_R_R_R_R(INS_sve_fcmeq, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // FCMEQ   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R_R(INS_sve_fcmge, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // FCMGE   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R_R(INS_sve_fcmgt, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // FCMGT   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R_R(INS_sve_fcmle, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // FCMLE   <Pd>.<T>, <Pg>/Z, <Zm>.<T>, <Zn>.<T> 
theEmitter->emitIns_R_R_R_R(INS_sve_fcmlt, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // FCMLT   <Pd>.<T>, <Pg>/Z, <Zm>.<T>, <Zn>.<T> 
theEmitter->emitIns_R_R_R_R(INS_sve_fcmne, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // FCMNE   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R_R(INS_sve_fcmuo, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_P0, INS_OPTS_SCALABLE_B);  // FCMUO   <Pd>.<T>, <Pg>/Z, <Zn>.<T>, <Zm>.<T> 

// IF_SVE_HU_4A
theEmitter->emitIns_R_R_R_R(INS_sve_fmla, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FMLA    <Zda>.<T>, <Pg>/M, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R_R(INS_sve_fmls, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FMLS    <Zda>.<T>, <Pg>/M, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R_R(INS_sve_fnmla, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FNMLA   <Zda>.<T>, <Pg>/M, <Zn>.<T>, <Zm>.<T> 
theEmitter->emitIns_R_R_R_R(INS_sve_fnmls, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FNMLS   <Zda>.<T>, <Pg>/M, <Zn>.<T>, <Zm>.<T> 

// IF_SVE_HU_4B
theEmitter->emitIns_R_R_R_R(INS_sve_bfmla, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // BFMLA   <Zda>.H, <Pg>/M, <Zn>.H, <Zm>.H 
theEmitter->emitIns_R_R_R_R(INS_sve_bfmls, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // BFMLS   <Zda>.H, <Pg>/M, <Zn>.H, <Zm>.H 

// IF_SVE_HV_4A
theEmitter->emitIns_R_R_R_R(INS_sve_fmad, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FMAD    <Zdn>.<T>, <Pg>/M, <Zm>.<T>, <Za>.<T> 
theEmitter->emitIns_R_R_R_R(INS_sve_fmsb, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FMSB    <Zdn>.<T>, <Pg>/M, <Zm>.<T>, <Za>.<T> 
theEmitter->emitIns_R_R_R_R(INS_sve_fnmad, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FNMAD   <Zdn>.<T>, <Pg>/M, <Zm>.<T>, <Za>.<T> 
theEmitter->emitIns_R_R_R_R(INS_sve_fnmsb, EA_SCALABLE, REG_V0, REG_V0, REG_P0, REG_V0, INS_OPTS_SCALABLE_B);  // FNMSB   <Zdn>.<T>, <Pg>/M, <Zm>.<T>, <Za>.<T> 

// IF_SVE_HW_4A
theEmitter->emitIns_R_R_R_R(INS_sve_ld1b, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1B    {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D, <mod>] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld1h, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1H    {<Zt>.S }, <Pg>/Z, [<Xn|SP>, <Zm>.S, <mod> #1] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld1sb, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1SB   {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D, <mod>] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld1sh, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1SH   {<Zt>.S }, <Pg>/Z, [<Xn|SP>, <Zm>.S, <mod> #1] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld1w, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1W    {<Zt>.S }, <Pg>/Z, [<Xn|SP>, <Zm>.S, <mod> #2] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1b, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1B  {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D, <mod>] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1h, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1H  {<Zt>.S }, <Pg>/Z, [<Xn|SP>, <Zm>.S, <mod> #1] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1sb, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1SB {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D, <mod>] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1sh, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1SH {<Zt>.S }, <Pg>/Z, [<Xn|SP>, <Zm>.S, <mod> #1] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1w, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1W  {<Zt>.S }, <Pg>/Z, [<Xn|SP>, <Zm>.S, <mod> #2] 

// IF_SVE_HW_4A_A
theEmitter->emitIns_R_R_R_R(INS_sve_ld1b, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1B    {<Zt>.S }, <Pg>/Z, [<Xn|SP>, <Zm>.S, <mod>] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld1h, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1H    {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D, <mod> #1] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld1sb, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1SB   {<Zt>.S }, <Pg>/Z, [<Xn|SP>, <Zm>.S, <mod>] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld1sh, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1SH   {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D, <mod> #1] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld1w, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1W    {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D, <mod> #2] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1b, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1B  {<Zt>.S }, <Pg>/Z, [<Xn|SP>, <Zm>.S, <mod>] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1h, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1H  {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D, <mod> #1] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1sb, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1SB {<Zt>.S }, <Pg>/Z, [<Xn|SP>, <Zm>.S, <mod>] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1sh, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1SH {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D, <mod> #1] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1w, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1W  {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D, <mod> #2] 

// IF_SVE_HW_4A_B
theEmitter->emitIns_R_R_R_R(INS_sve_ld1h, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1H    {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D, <mod>] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld1sh, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1SH   {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D, <mod>] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld1w, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1W    {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D, <mod>] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1h, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1H  {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D, <mod>] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1sh, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1SH {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D, <mod>] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1w, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1W  {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D, <mod>] 

// IF_SVE_HW_4A_C
theEmitter->emitIns_R_R_R_R(INS_sve_ld1h, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1H    {<Zt>.S }, <Pg>/Z, [<Xn|SP>, <Zm>.S, <mod>] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld1sh, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1SH   {<Zt>.S }, <Pg>/Z, [<Xn|SP>, <Zm>.S, <mod>] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld1w, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1W    {<Zt>.S }, <Pg>/Z, [<Xn|SP>, <Zm>.S, <mod>] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1h, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1H  {<Zt>.S }, <Pg>/Z, [<Xn|SP>, <Zm>.S, <mod>] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1sh, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1SH {<Zt>.S }, <Pg>/Z, [<Xn|SP>, <Zm>.S, <mod>] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1w, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1W  {<Zt>.S }, <Pg>/Z, [<Xn|SP>, <Zm>.S, <mod>] 

// IF_SVE_HW_4B
theEmitter->emitIns_R_R_R_R(INS_sve_ld1b, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1B    {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld1h, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1H    {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D, LSL #1] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld1sb, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1SB   {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld1sh, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1SH   {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D, LSL #1] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld1w, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1W    {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D, LSL #2] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1b, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1B  {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1h, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1H  {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D, LSL #1] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1sb, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1SB {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1sh, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1SH {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D, LSL #1] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1w, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1W  {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D, LSL #2] 

// IF_SVE_HW_4B_D
theEmitter->emitIns_R_R_R_R(INS_sve_ld1h, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1H    {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld1sh, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1SH   {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld1w, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1W    {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1h, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1H  {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1sh, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1SH {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1w, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1W  {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D] 

// IF_SVE_HX_3A_B
theEmitter->emitIns_R_R_R_I(INS_sve_ld1b, EA_SCALABLE, REG_V0, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // LD1B    {<Zt>.D }, <Pg>/Z, [<Zn>.D{, #<imm>}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ld1sb, EA_SCALABLE, REG_V0, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // LD1SB   {<Zt>.D }, <Pg>/Z, [<Zn>.D{, #<imm>}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ldff1b, EA_SCALABLE, REG_V0, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // LDFF1B  {<Zt>.D }, <Pg>/Z, [<Zn>.D{, #<imm>}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ldff1sb, EA_SCALABLE, REG_V0, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // LDFF1SB {<Zt>.D }, <Pg>/Z, [<Zn>.D{, #<imm>}] 

// IF_SVE_HX_3A_E
theEmitter->emitIns_R_R_R_I(INS_sve_ld1h, EA_SCALABLE, REG_V0, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // LD1H    {<Zt>.D }, <Pg>/Z, [<Zn>.D{, #<imm>}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ld1sh, EA_SCALABLE, REG_V0, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // LD1SH   {<Zt>.D }, <Pg>/Z, [<Zn>.D{, #<imm>}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ld1w, EA_SCALABLE, REG_V0, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // LD1W    {<Zt>.D }, <Pg>/Z, [<Zn>.D{, #<imm>}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ldff1h, EA_SCALABLE, REG_V0, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // LDFF1H  {<Zt>.D }, <Pg>/Z, [<Zn>.D{, #<imm>}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ldff1sh, EA_SCALABLE, REG_V0, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // LDFF1SH {<Zt>.D }, <Pg>/Z, [<Zn>.D{, #<imm>}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ldff1w, EA_SCALABLE, REG_V0, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // LDFF1W  {<Zt>.D }, <Pg>/Z, [<Zn>.D{, #<imm>}] 

// IF_SVE_HY_3A
theEmitter->emitIns_R_R_R(INS_sve_prfb, EA_SCALABLE, REG_V0, REG_P0, REG_R0, INS_OPTS_SCALABLE_B);  // PRFB    <prfop>, <Pg>, [<Xn|SP>, <Zm>.S, <mod>] 
theEmitter->emitIns_R_R_R(INS_sve_prfd, EA_SCALABLE, REG_V0, REG_P0, REG_R0, INS_OPTS_SCALABLE_B);  // PRFD    <prfop>, <Pg>, [<Xn|SP>, <Zm>.S, <mod> #3] 
theEmitter->emitIns_R_R_R(INS_sve_prfh, EA_SCALABLE, REG_V0, REG_P0, REG_R0, INS_OPTS_SCALABLE_B);  // PRFH    <prfop>, <Pg>, [<Xn|SP>, <Zm>.S, <mod> #1] 
theEmitter->emitIns_R_R_R(INS_sve_prfw, EA_SCALABLE, REG_V0, REG_P0, REG_R0, INS_OPTS_SCALABLE_B);  // PRFW    <prfop>, <Pg>, [<Xn|SP>, <Zm>.S, <mod> #2] 

// IF_SVE_HY_3A_A
theEmitter->emitIns_R_R_R(INS_sve_prfb, EA_SCALABLE, REG_V0, REG_P0, REG_R0, INS_OPTS_SCALABLE_B);  // PRFB    <prfop>, <Pg>, [<Xn|SP>, <Zm>.D, <mod>] 
theEmitter->emitIns_R_R_R(INS_sve_prfd, EA_SCALABLE, REG_V0, REG_P0, REG_R0, INS_OPTS_SCALABLE_B);  // PRFD    <prfop>, <Pg>, [<Xn|SP>, <Zm>.D, <mod> #3] 
theEmitter->emitIns_R_R_R(INS_sve_prfh, EA_SCALABLE, REG_V0, REG_P0, REG_R0, INS_OPTS_SCALABLE_B);  // PRFH    <prfop>, <Pg>, [<Xn|SP>, <Zm>.D, <mod> #1] 
theEmitter->emitIns_R_R_R(INS_sve_prfw, EA_SCALABLE, REG_V0, REG_P0, REG_R0, INS_OPTS_SCALABLE_B);  // PRFW    <prfop>, <Pg>, [<Xn|SP>, <Zm>.D, <mod> #2] 

// IF_SVE_HY_3B
theEmitter->emitIns_R_R_R(INS_sve_prfb, EA_SCALABLE, REG_V0, REG_P0, REG_R0, INS_OPTS_SCALABLE_B);  // PRFB    <prfop>, <Pg>, [<Xn|SP>, <Zm>.D] 
theEmitter->emitIns_R_R_R(INS_sve_prfd, EA_SCALABLE, REG_V0, REG_P0, REG_R0, INS_OPTS_SCALABLE_B);  // PRFD    <prfop>, <Pg>, [<Xn|SP>, <Zm>.D, LSL #3] 
theEmitter->emitIns_R_R_R(INS_sve_prfh, EA_SCALABLE, REG_V0, REG_P0, REG_R0, INS_OPTS_SCALABLE_B);  // PRFH    <prfop>, <Pg>, [<Xn|SP>, <Zm>.D, LSL #1] 
theEmitter->emitIns_R_R_R(INS_sve_prfw, EA_SCALABLE, REG_V0, REG_P0, REG_R0, INS_OPTS_SCALABLE_B);  // PRFW    <prfop>, <Pg>, [<Xn|SP>, <Zm>.D, LSL #2] 

// IF_SVE_HZ_2A_B
theEmitter->emitIns_R_R_I(INS_sve_prfb, EA_SCALABLE, REG_V0, REG_P0, 5, INS_OPTS_SCALABLE_B);  // PRFB    <prfop>, <Pg>, [<Zn>.D{, #<imm>}] 
theEmitter->emitIns_R_R_I(INS_sve_prfd, EA_SCALABLE, REG_V0, REG_P0, 5, INS_OPTS_SCALABLE_B);  // PRFD    <prfop>, <Pg>, [<Zn>.D{, #<imm>}] 
theEmitter->emitIns_R_R_I(INS_sve_prfh, EA_SCALABLE, REG_V0, REG_P0, 5, INS_OPTS_SCALABLE_B);  // PRFH    <prfop>, <Pg>, [<Zn>.D{, #<imm>}] 
theEmitter->emitIns_R_R_I(INS_sve_prfw, EA_SCALABLE, REG_V0, REG_P0, 5, INS_OPTS_SCALABLE_B);  // PRFW    <prfop>, <Pg>, [<Zn>.D{, #<imm>}] 

// IF_SVE_IA_2A
theEmitter->emitIns_R_R_I(INS_sve_prfb, EA_SCALABLE, REG_P0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // PRFB    <prfop>, <Pg>, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_I(INS_sve_prfd, EA_SCALABLE, REG_P0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // PRFD    <prfop>, <Pg>, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_I(INS_sve_prfh, EA_SCALABLE, REG_P0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // PRFH    <prfop>, <Pg>, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_I(INS_sve_prfw, EA_SCALABLE, REG_P0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // PRFW    <prfop>, <Pg>, [<Xn|SP>{, #<imm>, MUL VL}] 

// IF_SVE_IB_3A
theEmitter->emitIns_R_R_R(INS_sve_prfb, EA_SCALABLE, REG_V0, REG_P0, REG_R0, INS_OPTS_SCALABLE_B);  // PRFB    <prfop>, <Pg>, [<Xn|SP>, <Xm>] 
theEmitter->emitIns_R_R_R(INS_sve_prfd, EA_SCALABLE, REG_V0, REG_P0, REG_R0, INS_OPTS_SCALABLE_B);  // PRFD    <prfop>, <Pg>, [<Xn|SP>, <Xm>, LSL #3] 
theEmitter->emitIns_R_R_R(INS_sve_prfh, EA_SCALABLE, REG_V0, REG_P0, REG_R0, INS_OPTS_SCALABLE_B);  // PRFH    <prfop>, <Pg>, [<Xn|SP>, <Xm>, LSL #1] 
theEmitter->emitIns_R_R_R(INS_sve_prfw, EA_SCALABLE, REG_V0, REG_P0, REG_R0, INS_OPTS_SCALABLE_B);  // PRFW    <prfop>, <Pg>, [<Xn|SP>, <Xm>, LSL #2] 

// IF_SVE_IC_3A
theEmitter->emitIns_R_R_R_I(INS_sve_ld1rd, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD1RD   {<Zt>.D }, <Pg>/Z, [<Xn|SP>{, #<imm>}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ld1rsw, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD1RSW  {<Zt>.D }, <Pg>/Z, [<Xn|SP>{, #<imm>}] 

// IF_SVE_IC_3A_A
theEmitter->emitIns_R_R_R_I(INS_sve_ld1rsh, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD1RSH  {<Zt>.D }, <Pg>/Z, [<Xn|SP>{, #<imm>}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ld1rw, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD1RW   {<Zt>.D }, <Pg>/Z, [<Xn|SP>{, #<imm>}] 

// IF_SVE_IC_3A_B
theEmitter->emitIns_R_R_R_I(INS_sve_ld1rh, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD1RH   {<Zt>.D }, <Pg>/Z, [<Xn|SP>{, #<imm>}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ld1rsb, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD1RSB  {<Zt>.D }, <Pg>/Z, [<Xn|SP>{, #<imm>}] 

// IF_SVE_IC_3A_C
theEmitter->emitIns_R_R_R_I(INS_sve_ld1rb, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD1RB   {<Zt>.D }, <Pg>/Z, [<Xn|SP>{, #<imm>}] 

// IF_SVE_ID_2A
theEmitter->emitIns_R_R_I(INS_sve_ldr, EA_SCALABLE, REG_P0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LDR     <Pt>, [<Xn|SP>{, #<imm>, MUL VL}] 

// IF_SVE_IE_2A
theEmitter->emitIns_R_R_I(INS_sve_ldr, EA_SCALABLE, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LDR     <Zt>, [<Xn|SP>{, #<imm>, MUL VL}] 

// IF_SVE_IF_4A
theEmitter->emitIns_R_R_R_R(INS_sve_ldnt1b, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDNT1B  {<Zt>.S }, <Pg>/Z, [<Zn>.S{, <Xm>}] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldnt1h, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDNT1H  {<Zt>.S }, <Pg>/Z, [<Zn>.S{, <Xm>}] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldnt1sb, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDNT1SB {<Zt>.S }, <Pg>/Z, [<Zn>.S{, <Xm>}] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldnt1sh, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDNT1SH {<Zt>.S }, <Pg>/Z, [<Zn>.S{, <Xm>}] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldnt1w, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDNT1W  {<Zt>.S }, <Pg>/Z, [<Zn>.S{, <Xm>}] 

// IF_SVE_IF_4A_A
theEmitter->emitIns_R_R_R_R(INS_sve_ldnt1b, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDNT1B  {<Zt>.D }, <Pg>/Z, [<Zn>.D{, <Xm>}] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldnt1h, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDNT1H  {<Zt>.D }, <Pg>/Z, [<Zn>.D{, <Xm>}] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldnt1sb, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDNT1SB {<Zt>.D }, <Pg>/Z, [<Zn>.D{, <Xm>}] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldnt1sh, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDNT1SH {<Zt>.D }, <Pg>/Z, [<Zn>.D{, <Xm>}] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldnt1w, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDNT1W  {<Zt>.D }, <Pg>/Z, [<Zn>.D{, <Xm>}] 

// IF_SVE_IG_4A
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1d, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1D  {<Zt>.D }, <Pg>/Z, [<Xn|SP>{, <Xm>, LSL #3}] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1sw, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1SW {<Zt>.D }, <Pg>/Z, [<Xn|SP>{, <Xm>, LSL #2}] 

// IF_SVE_IG_4A_D
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1sb, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1SB {<Zt>.D }, <Pg>/Z, [<Xn|SP>{, <Xm>}] 

// IF_SVE_IG_4A_E
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1b, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1B  {<Zt>.D }, <Pg>/Z, [<Xn|SP>{, <Xm>}] 

// IF_SVE_IG_4A_F
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1sh, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1SH {<Zt>.D }, <Pg>/Z, [<Xn|SP>{, <Xm>, LSL #1}] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1w, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1W  {<Zt>.D }, <Pg>/Z, [<Xn|SP>{, <Xm>, LSL #2}] 

// IF_SVE_IG_4A_G
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1h, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1H  {<Zt>.D }, <Pg>/Z, [<Xn|SP>{, <Xm>, LSL #1}] 

// IF_SVE_IH_3A
theEmitter->emitIns_R_R_R_I(INS_sve_ld1d, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD1D    {<Zt>.D }, <Pg>/Z, [<Xn|SP>{, #<imm>, MUL VL}] 

// IF_SVE_IH_3A_A
theEmitter->emitIns_R_R_R_I(INS_sve_ld1d, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD1D    {<Zt>.Q }, <Pg>/Z, [<Xn|SP>{, #<imm>, MUL VL}] 

// IF_SVE_IH_3A_F
theEmitter->emitIns_R_R_R_I(INS_sve_ld1w, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD1W    {<Zt>.D }, <Pg>/Z, [<Xn|SP>{, #<imm>, MUL VL}] 

// IF_SVE_II_4A
theEmitter->emitIns_R_R_R_R(INS_sve_ld1d, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1D    {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Xm>, LSL #3] 

// IF_SVE_II_4A_B
theEmitter->emitIns_R_R_R_R(INS_sve_ld1d, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1D    {<Zt>.Q }, <Pg>/Z, [<Xn|SP>, <Xm>, LSL #3] 

// IF_SVE_II_4A_H
theEmitter->emitIns_R_R_R_R(INS_sve_ld1w, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1W    {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Xm>, LSL #2] 

// IF_SVE_IJ_3A
theEmitter->emitIns_R_R_R_I(INS_sve_ld1sw, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD1SW   {<Zt>.D }, <Pg>/Z, [<Xn|SP>{, #<imm>, MUL VL}] 

// IF_SVE_IJ_3A_D
theEmitter->emitIns_R_R_R_I(INS_sve_ld1sb, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD1SB   {<Zt>.D }, <Pg>/Z, [<Xn|SP>{, #<imm>, MUL VL}] 

// IF_SVE_IJ_3A_E
theEmitter->emitIns_R_R_R_I(INS_sve_ld1b, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD1B    {<Zt>.D }, <Pg>/Z, [<Xn|SP>{, #<imm>, MUL VL}] 

// IF_SVE_IJ_3A_F
theEmitter->emitIns_R_R_R_I(INS_sve_ld1sh, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD1SH   {<Zt>.D }, <Pg>/Z, [<Xn|SP>{, #<imm>, MUL VL}] 

// IF_SVE_IJ_3A_G
theEmitter->emitIns_R_R_R_I(INS_sve_ld1h, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD1H    {<Zt>.D }, <Pg>/Z, [<Xn|SP>{, #<imm>, MUL VL}] 

// IF_SVE_IK_4A
theEmitter->emitIns_R_R_R_R(INS_sve_ld1sw, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1SW   {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Xm>, LSL #2] 

// IF_SVE_IK_4A_F
theEmitter->emitIns_R_R_R_R(INS_sve_ld1sb, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1SB   {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Xm>] 

// IF_SVE_IK_4A_G
theEmitter->emitIns_R_R_R_R(INS_sve_ld1sh, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1SH   {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Xm>, LSL #1] 

// IF_SVE_IK_4A_H
theEmitter->emitIns_R_R_R_R(INS_sve_ld1b, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1B    {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Xm>] 

// IF_SVE_IK_4A_I
theEmitter->emitIns_R_R_R_R(INS_sve_ld1h, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1H    {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Xm>, LSL #1] 

// IF_SVE_IL_3A
theEmitter->emitIns_R_R_R_I(INS_sve_ldnf1d, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LDNF1D  {<Zt>.D }, <Pg>/Z, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ldnf1sw, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LDNF1SW {<Zt>.D }, <Pg>/Z, [<Xn|SP>{, #<imm>, MUL VL}] 

// IF_SVE_IL_3A_A
theEmitter->emitIns_R_R_R_I(INS_sve_ldnf1sh, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LDNF1SH {<Zt>.D }, <Pg>/Z, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ldnf1w, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LDNF1W  {<Zt>.D }, <Pg>/Z, [<Xn|SP>{, #<imm>, MUL VL}] 

// IF_SVE_IL_3A_B
theEmitter->emitIns_R_R_R_I(INS_sve_ldnf1h, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LDNF1H  {<Zt>.D }, <Pg>/Z, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ldnf1sb, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LDNF1SB {<Zt>.D }, <Pg>/Z, [<Xn|SP>{, #<imm>, MUL VL}] 

// IF_SVE_IL_3A_C
theEmitter->emitIns_R_R_R_I(INS_sve_ldnf1b, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LDNF1B  {<Zt>.D }, <Pg>/Z, [<Xn|SP>{, #<imm>, MUL VL}] 

// IF_SVE_IM_3A
theEmitter->emitIns_R_R_R_I(INS_sve_ldnt1b, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LDNT1B  {<Zt>.B }, <Pg>/Z, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ldnt1d, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LDNT1D  {<Zt>.D }, <Pg>/Z, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ldnt1h, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LDNT1H  {<Zt>.H }, <Pg>/Z, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ldnt1w, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LDNT1W  {<Zt>.S }, <Pg>/Z, [<Xn|SP>{, #<imm>, MUL VL}] 

// IF_SVE_IN_4A
theEmitter->emitIns_R_R_R_R(INS_sve_ldnt1b, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDNT1B  {<Zt>.B }, <Pg>/Z, [<Xn|SP>, <Xm>] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldnt1d, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDNT1D  {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Xm>, LSL #3] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldnt1h, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDNT1H  {<Zt>.H }, <Pg>/Z, [<Xn|SP>, <Xm>, LSL #1] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldnt1w, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDNT1W  {<Zt>.S }, <Pg>/Z, [<Xn|SP>, <Xm>, LSL #2] 

// IF_SVE_IO_3A
theEmitter->emitIns_R_R_R_I(INS_sve_ld1rob, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD1ROB  {<Zt>.B }, <Pg>/Z, [<Xn|SP>{, #<imm>}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ld1rod, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD1ROD  {<Zt>.D }, <Pg>/Z, [<Xn|SP>{, #<imm>}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ld1roh, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD1ROH  {<Zt>.H }, <Pg>/Z, [<Xn|SP>{, #<imm>}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ld1row, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD1ROW  {<Zt>.S }, <Pg>/Z, [<Xn|SP>{, #<imm>}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ld1rqb, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD1RQB  {<Zt>.B }, <Pg>/Z, [<Xn|SP>{, #<imm>}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ld1rqd, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD1RQD  {<Zt>.D }, <Pg>/Z, [<Xn|SP>{, #<imm>}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ld1rqh, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD1RQH  {<Zt>.H }, <Pg>/Z, [<Xn|SP>{, #<imm>}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ld1rqw, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD1RQW  {<Zt>.S }, <Pg>/Z, [<Xn|SP>{, #<imm>}] 

// IF_SVE_IP_4A
theEmitter->emitIns_R_R_R_R(INS_sve_ld1rob, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1ROB  {<Zt>.B }, <Pg>/Z, [<Xn|SP>, <Xm>] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld1rod, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1ROD  {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Xm>, LSL #3] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld1roh, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1ROH  {<Zt>.H }, <Pg>/Z, [<Xn|SP>, <Xm>, LSL #1] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld1row, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1ROW  {<Zt>.S }, <Pg>/Z, [<Xn|SP>, <Xm>, LSL #2] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld1rqb, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1RQB  {<Zt>.B }, <Pg>/Z, [<Xn|SP>, <Xm>] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld1rqd, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1RQD  {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Xm>, LSL #3] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld1rqh, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1RQH  {<Zt>.H }, <Pg>/Z, [<Xn|SP>, <Xm>, LSL #1] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld1rqw, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1RQW  {<Zt>.S }, <Pg>/Z, [<Xn|SP>, <Xm>, LSL #2] 

// IF_SVE_IQ_3A
theEmitter->emitIns_R_R_R_I(INS_sve_ld2q, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD2Q    {<Zt1>.Q, <Zt2>.Q }, <Pg>/Z, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ld3q, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD3Q    {<Zt1>.Q, <Zt2>.Q, <Zt3>.Q }, <Pg>/Z, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ld4q, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD4Q    {<Zt1>.Q, <Zt2>.Q, <Zt3>.Q, <Zt4>.Q }, <Pg>/Z, [<Xn|SP>{, #<imm>, MUL VL}] 

// IF_SVE_IR_4A
theEmitter->emitIns_R_R_R_R(INS_sve_ld2q, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD2Q    {<Zt1>.Q, <Zt2>.Q }, <Pg>/Z, [<Xn|SP>, <Xm>, LSL #4] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld3q, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD3Q    {<Zt1>.Q, <Zt2>.Q, <Zt3>.Q }, <Pg>/Z, [<Xn|SP>, <Xm>, LSL #4] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld4q, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD4Q    {<Zt1>.Q, <Zt2>.Q, <Zt3>.Q, <Zt4>.Q }, <Pg>/Z, [<Xn|SP>, <Xm>, LSL #4] 

// IF_SVE_IS_3A
theEmitter->emitIns_R_R_R_I(INS_sve_ld2b, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD2B    {<Zt1>.B, <Zt2>.B }, <Pg>/Z, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ld2d, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD2D    {<Zt1>.D, <Zt2>.D }, <Pg>/Z, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ld2h, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD2H    {<Zt1>.H, <Zt2>.H }, <Pg>/Z, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ld2w, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD2W    {<Zt1>.S, <Zt2>.S }, <Pg>/Z, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ld3b, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD3B    {<Zt1>.B, <Zt2>.B, <Zt3>.B }, <Pg>/Z, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ld3d, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD3D    {<Zt1>.D, <Zt2>.D, <Zt3>.D }, <Pg>/Z, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ld3h, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD3H    {<Zt1>.H, <Zt2>.H, <Zt3>.H }, <Pg>/Z, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ld3w, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD3W    {<Zt1>.S, <Zt2>.S, <Zt3>.S }, <Pg>/Z, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ld4b, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD4B    {<Zt1>.B, <Zt2>.B, <Zt3>.B, <Zt4>.B }, <Pg>/Z, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ld4d, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD4D    {<Zt1>.D, <Zt2>.D, <Zt3>.D, <Zt4>.D }, <Pg>/Z, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ld4h, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD4H    {<Zt1>.H, <Zt2>.H, <Zt3>.H, <Zt4>.H }, <Pg>/Z, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ld4w, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // LD4W    {<Zt1>.S, <Zt2>.S, <Zt3>.S, <Zt4>.S }, <Pg>/Z, [<Xn|SP>{, #<imm>, MUL VL}] 

// IF_SVE_IT_4A
theEmitter->emitIns_R_R_R_R(INS_sve_ld2b, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD2B    {<Zt1>.B, <Zt2>.B }, <Pg>/Z, [<Xn|SP>, <Xm>] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld2d, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD2D    {<Zt1>.D, <Zt2>.D }, <Pg>/Z, [<Xn|SP>, <Xm>, LSL #3] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld2h, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD2H    {<Zt1>.H, <Zt2>.H }, <Pg>/Z, [<Xn|SP>, <Xm>, LSL #1] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld2w, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD2W    {<Zt1>.S, <Zt2>.S }, <Pg>/Z, [<Xn|SP>, <Xm>, LSL #2] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld3b, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD3B    {<Zt1>.B, <Zt2>.B, <Zt3>.B }, <Pg>/Z, [<Xn|SP>, <Xm>] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld3d, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD3D    {<Zt1>.D, <Zt2>.D, <Zt3>.D }, <Pg>/Z, [<Xn|SP>, <Xm>, LSL #3] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld3h, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD3H    {<Zt1>.H, <Zt2>.H, <Zt3>.H }, <Pg>/Z, [<Xn|SP>, <Xm>, LSL #1] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld3w, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD3W    {<Zt1>.S, <Zt2>.S, <Zt3>.S }, <Pg>/Z, [<Xn|SP>, <Xm>, LSL #2] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld4b, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD4B    {<Zt1>.B, <Zt2>.B, <Zt3>.B, <Zt4>.B }, <Pg>/Z, [<Xn|SP>, <Xm>] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld4d, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD4D    {<Zt1>.D, <Zt2>.D, <Zt3>.D, <Zt4>.D }, <Pg>/Z, [<Xn|SP>, <Xm>, LSL #3] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld4h, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD4H    {<Zt1>.H, <Zt2>.H, <Zt3>.H, <Zt4>.H }, <Pg>/Z, [<Xn|SP>, <Xm>, LSL #1] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld4w, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD4W    {<Zt1>.S, <Zt2>.S, <Zt3>.S, <Zt4>.S }, <Pg>/Z, [<Xn|SP>, <Xm>, LSL #2] 

// IF_SVE_IU_4A
theEmitter->emitIns_R_R_R_R(INS_sve_ld1d, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1D    {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D, <mod> #3] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld1sw, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1SW   {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D, <mod> #2] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1d, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1D  {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D, <mod> #3] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1sw, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1SW {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D, <mod> #2] 

// IF_SVE_IU_4A_A
theEmitter->emitIns_R_R_R_R(INS_sve_ld1sw, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1SW   {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D, <mod>] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1d, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1D  {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D, <mod>] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1sw, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1SW {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D, <mod>] 

// IF_SVE_IU_4A_C
theEmitter->emitIns_R_R_R_R(INS_sve_ld1d, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1D    {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D, <mod>] 

// IF_SVE_IU_4B
theEmitter->emitIns_R_R_R_R(INS_sve_ld1d, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1D    {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D, LSL #3] 
theEmitter->emitIns_R_R_R_R(INS_sve_ld1sw, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1SW   {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D, LSL #2] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1d, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1D  {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D, LSL #3] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1sw, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1SW {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D, LSL #2] 

// IF_SVE_IU_4B_B
theEmitter->emitIns_R_R_R_R(INS_sve_ld1sw, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1SW   {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1d, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1D  {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldff1sw, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDFF1SW {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D] 

// IF_SVE_IU_4B_D
theEmitter->emitIns_R_R_R_R(INS_sve_ld1d, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1D    {<Zt>.D }, <Pg>/Z, [<Xn|SP>, <Zm>.D] 

// IF_SVE_IV_3A
theEmitter->emitIns_R_R_R_I(INS_sve_ld1d, EA_SCALABLE, REG_V0, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // LD1D    {<Zt>.D }, <Pg>/Z, [<Zn>.D{, #<imm>}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ld1sw, EA_SCALABLE, REG_V0, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // LD1SW   {<Zt>.D }, <Pg>/Z, [<Zn>.D{, #<imm>}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ldff1d, EA_SCALABLE, REG_V0, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // LDFF1D  {<Zt>.D }, <Pg>/Z, [<Zn>.D{, #<imm>}] 
theEmitter->emitIns_R_R_R_I(INS_sve_ldff1sw, EA_SCALABLE, REG_V0, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // LDFF1SW {<Zt>.D }, <Pg>/Z, [<Zn>.D{, #<imm>}] 

// IF_SVE_IW_4A
theEmitter->emitIns_R_R_R_R(INS_sve_ld1q, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LD1Q    {<Zt>.Q }, <Pg>/Z, [<Zn>.D{, <Xm>}] 

// IF_SVE_IX_4A
theEmitter->emitIns_R_R_R_R(INS_sve_ldnt1d, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDNT1D  {<Zt>.D }, <Pg>/Z, [<Zn>.D{, <Xm>}] 
theEmitter->emitIns_R_R_R_R(INS_sve_ldnt1sw, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // LDNT1SW {<Zt>.D }, <Pg>/Z, [<Zn>.D{, <Xm>}] 

// IF_SVE_IY_4A
theEmitter->emitIns_R_R_R_R(INS_sve_st1q, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST1Q    {<Zt>.Q }, <Pg>, [<Zn>.D{, <Xm>}] 

// IF_SVE_IZ_4A
theEmitter->emitIns_R_R_R_R(INS_sve_stnt1b, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // STNT1B  {<Zt>.S }, <Pg>, [<Zn>.S{, <Xm>}] 
theEmitter->emitIns_R_R_R_R(INS_sve_stnt1h, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // STNT1H  {<Zt>.S }, <Pg>, [<Zn>.S{, <Xm>}] 
theEmitter->emitIns_R_R_R_R(INS_sve_stnt1w, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // STNT1W  {<Zt>.S }, <Pg>, [<Zn>.S{, <Xm>}] 

// IF_SVE_IZ_4A_A
theEmitter->emitIns_R_R_R_R(INS_sve_stnt1b, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // STNT1B  {<Zt>.D }, <Pg>, [<Zn>.D{, <Xm>}] 
theEmitter->emitIns_R_R_R_R(INS_sve_stnt1h, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // STNT1H  {<Zt>.D }, <Pg>, [<Zn>.D{, <Xm>}] 
theEmitter->emitIns_R_R_R_R(INS_sve_stnt1w, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // STNT1W  {<Zt>.D }, <Pg>, [<Zn>.D{, <Xm>}] 

// IF_SVE_JA_4A
theEmitter->emitIns_R_R_R_R(INS_sve_stnt1d, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // STNT1D  {<Zt>.D }, <Pg>, [<Zn>.D{, <Xm>}] 

// IF_SVE_JB_4A
theEmitter->emitIns_R_R_R_R(INS_sve_stnt1b, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // STNT1B  {<Zt>.B }, <Pg>, [<Xn|SP>, <Xm>] 
theEmitter->emitIns_R_R_R_R(INS_sve_stnt1d, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // STNT1D  {<Zt>.D }, <Pg>, [<Xn|SP>, <Xm>, LSL #3] 
theEmitter->emitIns_R_R_R_R(INS_sve_stnt1h, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // STNT1H  {<Zt>.H }, <Pg>, [<Xn|SP>, <Xm>, LSL #1] 
theEmitter->emitIns_R_R_R_R(INS_sve_stnt1w, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // STNT1W  {<Zt>.S }, <Pg>, [<Xn|SP>, <Xm>, LSL #2] 

// IF_SVE_JC_4A
theEmitter->emitIns_R_R_R_R(INS_sve_st2b, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST2B    {<Zt1>.B, <Zt2>.B }, <Pg>, [<Xn|SP>, <Xm>] 
theEmitter->emitIns_R_R_R_R(INS_sve_st2d, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST2D    {<Zt1>.D, <Zt2>.D }, <Pg>, [<Xn|SP>, <Xm>, LSL #3] 
theEmitter->emitIns_R_R_R_R(INS_sve_st2h, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST2H    {<Zt1>.H, <Zt2>.H }, <Pg>, [<Xn|SP>, <Xm>, LSL #1] 
theEmitter->emitIns_R_R_R_R(INS_sve_st2w, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST2W    {<Zt1>.S, <Zt2>.S }, <Pg>, [<Xn|SP>, <Xm>, LSL #2] 
theEmitter->emitIns_R_R_R_R(INS_sve_st3b, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST3B    {<Zt1>.B, <Zt2>.B, <Zt3>.B }, <Pg>, [<Xn|SP>, <Xm>] 
theEmitter->emitIns_R_R_R_R(INS_sve_st3d, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST3D    {<Zt1>.D, <Zt2>.D, <Zt3>.D }, <Pg>, [<Xn|SP>, <Xm>, LSL #3] 
theEmitter->emitIns_R_R_R_R(INS_sve_st3h, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST3H    {<Zt1>.H, <Zt2>.H, <Zt3>.H }, <Pg>, [<Xn|SP>, <Xm>, LSL #1] 
theEmitter->emitIns_R_R_R_R(INS_sve_st3w, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST3W    {<Zt1>.S, <Zt2>.S, <Zt3>.S }, <Pg>, [<Xn|SP>, <Xm>, LSL #2] 
theEmitter->emitIns_R_R_R_R(INS_sve_st4b, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST4B    {<Zt1>.B, <Zt2>.B, <Zt3>.B, <Zt4>.B }, <Pg>, [<Xn|SP>, <Xm>] 
theEmitter->emitIns_R_R_R_R(INS_sve_st4d, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST4D    {<Zt1>.D, <Zt2>.D, <Zt3>.D, <Zt4>.D }, <Pg>, [<Xn|SP>, <Xm>, LSL #3] 
theEmitter->emitIns_R_R_R_R(INS_sve_st4h, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST4H    {<Zt1>.H, <Zt2>.H, <Zt3>.H, <Zt4>.H }, <Pg>, [<Xn|SP>, <Xm>, LSL #1] 
theEmitter->emitIns_R_R_R_R(INS_sve_st4w, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST4W    {<Zt1>.S, <Zt2>.S, <Zt3>.S, <Zt4>.S }, <Pg>, [<Xn|SP>, <Xm>, LSL #2] 

// IF_SVE_JD_4A
theEmitter->emitIns_R_R_R_R(INS_sve_st1b, EA_SCALABLE, REG_P0, REG_V0, REG_R0, REG_R0, INS_OPTS_SCALABLE_B);  // ST1B    {<Zt>.<T>}, <Pg>, [<Xn|SP>, <Xm>] 
theEmitter->emitIns_R_R_R_R(INS_sve_st1h, EA_SCALABLE, REG_P0, REG_V0, REG_R0, REG_R0, INS_OPTS_SCALABLE_B);  // ST1H    {<Zt>.<T>}, <Pg>, [<Xn|SP>, <Xm>, LSL #1] 

// IF_SVE_JD_4B
theEmitter->emitIns_R_R_R_R(INS_sve_st1w, EA_SCALABLE, REG_P0, REG_V0, REG_R0, REG_R0, INS_OPTS_SCALABLE_B);  // ST1W    {<Zt>.<T>}, <Pg>, [<Xn|SP>, <Xm>, LSL #2] 

// IF_SVE_JD_4C
theEmitter->emitIns_R_R_R_R(INS_sve_st1d, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST1D    {<Zt>.D }, <Pg>, [<Xn|SP>, <Xm>, LSL #3] 
theEmitter->emitIns_R_R_R_R(INS_sve_st1w, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST1W    {<Zt>.Q }, <Pg>, [<Xn|SP>, <Xm>, LSL #2] 

// IF_SVE_JD_4C_A
theEmitter->emitIns_R_R_R_R(INS_sve_st1d, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST1D    {<Zt>.Q }, <Pg>, [<Xn|SP>, <Xm>, LSL #3] 

// IF_SVE_JE_3A
theEmitter->emitIns_R_R_R_I(INS_sve_st2q, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // ST2Q    {<Zt1>.Q, <Zt2>.Q }, <Pg>, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_R_I(INS_sve_st3q, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // ST3Q    {<Zt1>.Q, <Zt2>.Q, <Zt3>.Q }, <Pg>, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_R_I(INS_sve_st4q, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // ST4Q    {<Zt1>.Q, <Zt2>.Q, <Zt3>.Q, <Zt4>.Q }, <Pg>, [<Xn|SP>{, #<imm>, MUL VL}] 

// IF_SVE_JF_4A
theEmitter->emitIns_R_R_R_R(INS_sve_st2q, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST2Q    {<Zt1>.Q, <Zt2>.Q }, <Pg>, [<Xn|SP>, <Xm>, LSL #4] 
theEmitter->emitIns_R_R_R_R(INS_sve_st3q, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST3Q    {<Zt1>.Q, <Zt2>.Q, <Zt3>.Q }, <Pg>, [<Xn|SP>, <Xm>, LSL #4] 
theEmitter->emitIns_R_R_R_R(INS_sve_st4q, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST4Q    {<Zt1>.Q, <Zt2>.Q, <Zt3>.Q, <Zt4>.Q }, <Pg>, [<Xn|SP>, <Xm>, LSL #4] 

// IF_SVE_JG_2A
theEmitter->emitIns_R_R_I(INS_sve_str, EA_SCALABLE, REG_P0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // STR     <Pt>, [<Xn|SP>{, #<imm>, MUL VL}] 

// IF_SVE_JH_2A
theEmitter->emitIns_R_R_I(INS_sve_str, EA_SCALABLE, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // STR     <Zt>, [<Xn|SP>{, #<imm>, MUL VL}] 

// IF_SVE_JI_3A_A
theEmitter->emitIns_R_R_R_I(INS_sve_st1b, EA_SCALABLE, REG_V0, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // ST1B    {<Zt>.D }, <Pg>, [<Zn>.D{, #<imm>}] 
theEmitter->emitIns_R_R_R_I(INS_sve_st1h, EA_SCALABLE, REG_V0, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // ST1H    {<Zt>.D }, <Pg>, [<Zn>.D{, #<imm>}] 
theEmitter->emitIns_R_R_R_I(INS_sve_st1w, EA_SCALABLE, REG_V0, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // ST1W    {<Zt>.D }, <Pg>, [<Zn>.D{, #<imm>}] 

// IF_SVE_JJ_4A
theEmitter->emitIns_R_R_R_R(INS_sve_st1d, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST1D    {<Zt>.D }, <Pg>, [<Xn|SP>, <Zm>.D, <mod> #3] 
theEmitter->emitIns_R_R_R_R(INS_sve_st1h, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST1H    {<Zt>.S }, <Pg>, [<Xn|SP>, <Zm>.S, <mod> #1] 
theEmitter->emitIns_R_R_R_R(INS_sve_st1w, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST1W    {<Zt>.S }, <Pg>, [<Xn|SP>, <Zm>.S, <mod> #2] 

// IF_SVE_JJ_4A_B
theEmitter->emitIns_R_R_R_R(INS_sve_st1d, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST1D    {<Zt>.D }, <Pg>, [<Xn|SP>, <Zm>.D, <mod>] 
theEmitter->emitIns_R_R_R_R(INS_sve_st1h, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST1H    {<Zt>.D }, <Pg>, [<Xn|SP>, <Zm>.D, <mod> #1] 
theEmitter->emitIns_R_R_R_R(INS_sve_st1w, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST1W    {<Zt>.D }, <Pg>, [<Xn|SP>, <Zm>.D, <mod> #2] 

// IF_SVE_JJ_4A_C
theEmitter->emitIns_R_R_R_R(INS_sve_st1h, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST1H    {<Zt>.D }, <Pg>, [<Xn|SP>, <Zm>.D, <mod>] 
theEmitter->emitIns_R_R_R_R(INS_sve_st1w, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST1W    {<Zt>.D }, <Pg>, [<Xn|SP>, <Zm>.D, <mod>] 

// IF_SVE_JJ_4A_D
theEmitter->emitIns_R_R_R_R(INS_sve_st1h, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST1H    {<Zt>.S }, <Pg>, [<Xn|SP>, <Zm>.S, <mod>] 
theEmitter->emitIns_R_R_R_R(INS_sve_st1w, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST1W    {<Zt>.S }, <Pg>, [<Xn|SP>, <Zm>.S, <mod>] 

// IF_SVE_JJ_4B
theEmitter->emitIns_R_R_R_R(INS_sve_st1d, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST1D    {<Zt>.D }, <Pg>, [<Xn|SP>, <Zm>.D, LSL #3] 
theEmitter->emitIns_R_R_R_R(INS_sve_st1h, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST1H    {<Zt>.D }, <Pg>, [<Xn|SP>, <Zm>.D, LSL #1] 
theEmitter->emitIns_R_R_R_R(INS_sve_st1w, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST1W    {<Zt>.D }, <Pg>, [<Xn|SP>, <Zm>.D, LSL #2] 

// IF_SVE_JJ_4B_C
theEmitter->emitIns_R_R_R_R(INS_sve_st1d, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST1D    {<Zt>.D }, <Pg>, [<Xn|SP>, <Zm>.D] 

// IF_SVE_JJ_4B_E
theEmitter->emitIns_R_R_R_R(INS_sve_st1h, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST1H    {<Zt>.D }, <Pg>, [<Xn|SP>, <Zm>.D] 
theEmitter->emitIns_R_R_R_R(INS_sve_st1w, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST1W    {<Zt>.D }, <Pg>, [<Xn|SP>, <Zm>.D] 

// IF_SVE_JK_4A
theEmitter->emitIns_R_R_R_R(INS_sve_st1b, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST1B    {<Zt>.D }, <Pg>, [<Xn|SP>, <Zm>.D, <mod>] 

// IF_SVE_JK_4A_B
theEmitter->emitIns_R_R_R_R(INS_sve_st1b, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST1B    {<Zt>.S }, <Pg>, [<Xn|SP>, <Zm>.S, <mod>] 

// IF_SVE_JK_4B
theEmitter->emitIns_R_R_R_R(INS_sve_st1b, EA_SCALABLE, REG_V0, REG_P0, REG_V0, REG_R0, INS_OPTS_SCALABLE_B);  // ST1B    {<Zt>.D }, <Pg>, [<Xn|SP>, <Zm>.D] 

// IF_SVE_JL_3A
theEmitter->emitIns_R_R_R_I(INS_sve_st1d, EA_SCALABLE, REG_V0, REG_P0, REG_V0, 5, INS_OPTS_SCALABLE_B);  // ST1D    {<Zt>.D }, <Pg>, [<Zn>.D{, #<imm>}] 

// IF_SVE_JM_3A
theEmitter->emitIns_R_R_R_I(INS_sve_stnt1b, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // STNT1B  {<Zt>.B }, <Pg>, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_R_I(INS_sve_stnt1d, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // STNT1D  {<Zt>.D }, <Pg>, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_R_I(INS_sve_stnt1h, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // STNT1H  {<Zt>.H }, <Pg>, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_R_I(INS_sve_stnt1w, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // STNT1W  {<Zt>.S }, <Pg>, [<Xn|SP>{, #<imm>, MUL VL}] 

// IF_SVE_JN_3A
theEmitter->emitIns_R_R_R_I(INS_sve_st1b, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // ST1B    {<Zt>.<T>}, <Pg>, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_R_I(INS_sve_st1h, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // ST1H    {<Zt>.<T>}, <Pg>, [<Xn|SP>{, #<imm>, MUL VL}] 

// IF_SVE_JN_3B
theEmitter->emitIns_R_R_R_I(INS_sve_st1w, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // ST1W    {<Zt>.<T>}, <Pg>, [<Xn|SP>{, #<imm>, MUL VL}] 

// IF_SVE_JN_3C
theEmitter->emitIns_R_R_R_I(INS_sve_st1d, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // ST1D    {<Zt>.D }, <Pg>, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_R_I(INS_sve_st1w, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // ST1W    {<Zt>.Q }, <Pg>, [<Xn|SP>{, #<imm>, MUL VL}] 

// IF_SVE_JN_3C_D
theEmitter->emitIns_R_R_R_I(INS_sve_st1d, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // ST1D    {<Zt>.Q }, <Pg>, [<Xn|SP>{, #<imm>, MUL VL}] 

// IF_SVE_JO_3A
theEmitter->emitIns_R_R_R_I(INS_sve_st2b, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // ST2B    {<Zt1>.B, <Zt2>.B }, <Pg>, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_R_I(INS_sve_st2d, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // ST2D    {<Zt1>.D, <Zt2>.D }, <Pg>, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_R_I(INS_sve_st2h, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // ST2H    {<Zt1>.H, <Zt2>.H }, <Pg>, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_R_I(INS_sve_st2w, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // ST2W    {<Zt1>.S, <Zt2>.S }, <Pg>, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_R_I(INS_sve_st3b, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // ST3B    {<Zt1>.B, <Zt2>.B, <Zt3>.B }, <Pg>, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_R_I(INS_sve_st3d, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // ST3D    {<Zt1>.D, <Zt2>.D, <Zt3>.D }, <Pg>, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_R_I(INS_sve_st3h, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // ST3H    {<Zt1>.H, <Zt2>.H, <Zt3>.H }, <Pg>, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_R_I(INS_sve_st3w, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // ST3W    {<Zt1>.S, <Zt2>.S, <Zt3>.S }, <Pg>, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_R_I(INS_sve_st4b, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // ST4B    {<Zt1>.B, <Zt2>.B, <Zt3>.B, <Zt4>.B }, <Pg>, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_R_I(INS_sve_st4d, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // ST4D    {<Zt1>.D, <Zt2>.D, <Zt3>.D, <Zt4>.D }, <Pg>, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_R_I(INS_sve_st4h, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // ST4H    {<Zt1>.H, <Zt2>.H, <Zt3>.H, <Zt4>.H }, <Pg>, [<Xn|SP>{, #<imm>, MUL VL}] 
theEmitter->emitIns_R_R_R_I(INS_sve_st4w, EA_SCALABLE, REG_P0, REG_V0, REG_R0, 5, INS_OPTS_SCALABLE_B);  // ST4W    {<Zt1>.S, <Zt2>.S, <Zt3>.S, <Zt4>.S }, <Pg>, [<Xn|SP>{, #<imm>, MUL VL}] 
