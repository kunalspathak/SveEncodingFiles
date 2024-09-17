case IF_SVE_AA_3A:       // ........xx...... ...gggmmmmmddddd -- SVE bitwise logical operations (predicated)
case IF_SVE_AB_3A:       // ........xx...... ...gggmmmmmddddd -- SVE integer add/subtract vectors (predicated)
case IF_SVE_AC_3A:       // ........xx...... ...gggmmmmmddddd -- SVE integer divide vectors (predicated)
case IF_SVE_AD_3A:       // ........xx...... ...gggmmmmmddddd -- SVE integer min/max/difference (predicated)
case IF_SVE_AE_3A:       // ........xx...... ...gggmmmmmddddd -- SVE integer multiply vectors (predicated)
case IF_SVE_AN_3A:       // ........xx...... ...gggmmmmmddddd -- SVE bitwise shift by vector (predicated)
case IF_SVE_AO_3A:       // ........xx...... ...gggmmmmmddddd -- SVE bitwise shift by wide elements (predicated)
case IF_SVE_CM_3A:       // ........xx...... ...gggmmmmmddddd -- SVE conditionally broadcast element to vector
case IF_SVE_CN_3A:       // ........xx...... ...gggmmmmmddddd -- SVE conditionally extract element to SIMD&FP scalar
case IF_SVE_CO_3A:       // ........xx...... ...gggmmmmmddddd -- SVE conditionally extract element to general register
case IF_SVE_EP_3A:       // ........xx...... ...gggmmmmmddddd -- SVE2 integer halving add/subtract (predicated)
case IF_SVE_ER_3A:       // ........xx...... ...gggmmmmmddddd -- SVE2 integer pairwise arithmetic
case IF_SVE_ET_3A:       // ........xx...... ...gggmmmmmddddd -- SVE2 saturating add/subtract
case IF_SVE_EU_3A:       // ........xx...... ...gggmmmmmddddd -- SVE2 saturating/rounding bitwise shift left (predicated)
case IF_SVE_GR_3A:       // ........xx...... ...gggmmmmmddddd -- SVE2 floating-point pairwise operations
case IF_SVE_HJ_3A:       // ........xx...... ...gggmmmmmddddd -- SVE floating-point serial reduction (predicated)
case IF_SVE_HL_3A:       // ........xx...... ...gggmmmmmddddd -- SVE floating-point arithmetic (predicated)
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // mmmmm
   emitDispPredicateReg(id->idReg20(), PREDICATE_MERGE, id->idInsOpt(), true); // ggg
   emitDispSveReg(id->idReg30(), id->idInsOpt(), true); // ddddd
   break;
case IF_SVE_AB_3B:       // ................ ...gggmmmmmddddd -- SVE integer add/subtract vectors (predicated)
case IF_SVE_HL_3B:       // ................ ...gggmmmmmddddd -- SVE floating-point arithmetic (predicated)
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // mmmmm
   emitDispPredicateReg(id->idReg20(), PREDICATE_MERGE, id->idInsOpt(), true); // ggg
   emitDispSveReg(id->idReg30(), id->idInsOpt(), true); // ddddd
   break;
case IF_SVE_AF_3A:       // ........xx...... ...gggnnnnnddddd -- SVE bitwise logical reduction (predicated)
case IF_SVE_AG_3A:       // ........xx...... ...gggnnnnnddddd -- SVE bitwise logical reduction (quadwords)
case IF_SVE_AI_3A:       // ........xx...... ...gggnnnnnddddd -- SVE integer add reduction (predicated)
case IF_SVE_AJ_3A:       // ........xx...... ...gggnnnnnddddd -- SVE integer add reduction (quadwords)
case IF_SVE_AK_3A:       // ........xx...... ...gggnnnnnddddd -- SVE integer min/max reduction (predicated)
case IF_SVE_AL_3A:       // ........xx...... ...gggnnnnnddddd -- SVE integer min/max reduction (quadwords)
case IF_SVE_AP_3A:       // ........xx...... ...gggnnnnnddddd -- SVE bitwise unary operations (predicated)
case IF_SVE_AQ_3A:       // ........xx...... ...gggnnnnnddddd -- SVE integer unary operations (predicated)
case IF_SVE_CL_3A:       // ........xx...... ...gggnnnnnddddd -- SVE compress active elements
case IF_SVE_CP_3A:       // ........xx...... ...gggnnnnnddddd -- SVE copy SIMD&FP scalar register to vector (predicated)
case IF_SVE_CQ_3A:       // ........xx...... ...gggnnnnnddddd -- SVE copy general register to vector (predicated)
case IF_SVE_CR_3A:       // ........xx...... ...gggnnnnnddddd -- SVE extract element to SIMD&FP scalar register
case IF_SVE_CS_3A:       // ........xx...... ...gggnnnnnddddd -- SVE extract element to general register
case IF_SVE_CU_3A:       // ........xx...... ...gggnnnnnddddd -- SVE reverse within elements
case IF_SVE_EQ_3A:       // ........xx...... ...gggnnnnnddddd -- SVE2 integer pairwise add and accumulate long
case IF_SVE_ES_3A:       // ........xx...... ...gggnnnnnddddd -- SVE2 integer unary operations (predicated)
case IF_SVE_GS_3A:       // ........xx...... ...gggnnnnnddddd -- SVE floating-point recursive reduction (quadwords)
case IF_SVE_HE_3A:       // ........xx...... ...gggnnnnnddddd -- SVE floating-point recursive reduction
case IF_SVE_HQ_3A:       // ........xx...... ...gggnnnnnddddd -- SVE floating-point round to integral value
case IF_SVE_HR_3A:       // ........xx...... ...gggnnnnnddddd -- SVE floating-point unary operations
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // nnnnn
   emitDispPredicateReg(id->idReg20(), PREDICATE_ZERO, id->idInsOpt(), true); // ggg
   emitDispVectorReg(id->idReg30(), id->idInsOpt(), true); // ddddd
   break;
case IF_SVE_AH_3A:       // ........xx.....M ...gggnnnnnddddd -- SVE constructive prefix (predicated)
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // nnnnn
   emitDispPredicateReg(id->idReg20(), PREDICATE_ZERO, id->idInsOpt(), true); // ggg
   emitDispSveReg(id->idReg30(), id->idInsOpt(), true); // ddddd
   break;
case IF_SVE_AM_2A:       // ........xx...... ...gggxxiiiddddd -- SVE bitwise shift by immediate (predicated)
   emitDispPredicateReg(id->idReg10(), PREDICATE_MERGE, id->idInsOpt(), true); // ggg
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // ddddd
   emitDispImm(); // iii
   break;
case IF_SVE_AR_4A:       // ........xx.mmmmm ...gggnnnnnddddd -- SVE integer multiply-accumulate writing addend (predicated)
case IF_SVE_GI_4A:       // ........xx.mmmmm ...gggnnnnnddddd -- SVE2 histogram generation (vector)
case IF_SVE_HU_4A:       // ........xx.mmmmm ...gggnnnnnddddd -- SVE floating-point multiply-accumulate writing addend
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // mmmmm
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // nnnnn
   emitDispPredicateReg(id->idReg30(), PREDICATE_MERGE, id->idInsOpt(), true); // ggg
   emitDispSveReg(id->idReg40(), id->idInsOpt(), true); // ddddd
   break;
case IF_SVE_AS_4A:       // ........xx.mmmmm ...gggaaaaaddddd -- SVE integer multiply-add writing multiplicand (predicated)
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // aaaaa
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // mmmmm
   emitDispPredicateReg(id->idReg30(), PREDICATE_MERGE, id->idInsOpt(), true); // ggg
   emitDispSveReg(id->idReg40(), id->idInsOpt(), true); // ddddd
   break;
case IF_SVE_AT_3A:       // ........xx.mmmmm ......nnnnnddddd -- SVE integer add/subtract vectors (unpredicated)
case IF_SVE_BA_3A:       // ........xx.mmmmm ......nnnnnddddd -- SVE index generation (register start, register increment)
case IF_SVE_BD_3A:       // ........xx.mmmmm ......nnnnnddddd -- SVE2 integer multiply vectors (unpredicated)
case IF_SVE_BE_3A:       // ........xx.mmmmm ......nnnnnddddd -- SVE2 signed saturating doubling multiply high (unpredicated)
case IF_SVE_BG_3A:       // ........xx.mmmmm ......nnnnnddddd -- SVE bitwise shift by wide elements (unpredicated)
case IF_SVE_BK_3A:       // ........xx.mmmmm ......nnnnnddddd -- SVE floating-point trig select coefficient
case IF_SVE_BR_3A:       // ........xx.mmmmm ......nnnnnddddd -- SVE permute vector segments
case IF_SVE_BZ_3A:       // ........xx.mmmmm ......nnnnnddddd -- SVE table lookup (three sources)
case IF_SVE_BZ_3A_A:     // ........xx.mmmmm ......nnnnnddddd -- SVE table lookup (three sources)
case IF_SVE_CA_3A:       // ........xx.mmmmm ......nnnnnddddd -- sve_int_perm_tbxquads
case IF_SVE_EH_3A:       // ........xx.mmmmm ......nnnnnddddd -- SVE integer dot product (unpredicated)
case IF_SVE_EL_3A:       // ........xx.mmmmm ......nnnnnddddd -- SVE2 integer multiply-add long
case IF_SVE_EM_3A:       // ........xx.mmmmm ......nnnnnddddd -- SVE2 saturating multiply-add high
case IF_SVE_EN_3A:       // ........xx.mmmmm ......nnnnnddddd -- SVE2 saturating multiply-add interleaved long
case IF_SVE_EO_3A:       // ........xx.mmmmm ......nnnnnddddd -- SVE2 saturating multiply-add long
case IF_SVE_EV_3A:       // ........xx.mmmmm ......nnnnnddddd -- SVE integer clamp
case IF_SVE_EX_3A:       // ........xx.mmmmm ......nnnnnddddd -- SVE permute vector elements (quadwords)
case IF_SVE_FL_3A:       // ........xx.mmmmm ......nnnnnddddd -- SVE2 integer add/subtract long
case IF_SVE_FM_3A:       // ........xx.mmmmm ......nnnnnddddd -- SVE2 integer add/subtract wide
case IF_SVE_FN_3A:       // ........xx.mmmmm ......nnnnnddddd -- SVE2 integer multiply long
case IF_SVE_FP_3A:       // ........xx.mmmmm ......nnnnnddddd -- SVE2 bitwise exclusive-or interleaved
case IF_SVE_FQ_3A:       // ........xx.mmmmm ......nnnnnddddd -- SVE2 bitwise permute
case IF_SVE_FS_3A:       // ........xx.mmmmm ......nnnnnddddd -- SVE2 integer add/subtract interleaved long
case IF_SVE_FW_3A:       // ........xx.mmmmm ......nnnnnddddd -- SVE2 integer absolute difference and accumulate
case IF_SVE_FX_3A:       // ........xx.mmmmm ......nnnnnddddd -- SVE2 integer absolute difference and accumulate long
case IF_SVE_GC_3A:       // ........xx.mmmmm ......nnnnnddddd -- SVE2 integer add/subtract narrow high part
case IF_SVE_GF_3A:       // ........xx.mmmmm ......nnnnnddddd -- SVE2 histogram generation (segment)
case IF_SVE_GW_3A:       // ........xx.mmmmm ......nnnnnddddd -- SVE FP clamp
case IF_SVE_HK_3A:       // ........xx.mmmmm ......nnnnnddddd -- SVE floating-point arithmetic (unpredicated)
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // mmmmm
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // nnnnn
   emitDispSveReg(id->idReg30(), id->idInsOpt(), true); // ddddd
   break;
case IF_SVE_AT_3B:       // ...........mmmmm ......nnnnnddddd -- SVE integer add/subtract vectors (unpredicated)
case IF_SVE_AU_3A:       // ...........mmmmm ......nnnnnddddd -- SVE bitwise logical operations (unpredicated)
case IF_SVE_BD_3B:       // ...........mmmmm ......nnnnnddddd -- SVE2 integer multiply vectors (unpredicated)
case IF_SVE_BR_3B:       // ...........mmmmm ......nnnnnddddd -- SVE permute vector segments
case IF_SVE_EF_3A:       // ...........mmmmm ......nnnnnddddd -- SVE two-way dot product
case IF_SVE_EI_3A:       // ...........mmmmm ......nnnnnddddd -- SVE mixed sign dot product
case IF_SVE_EW_3A:       // ...........mmmmm ......nnnnnddddd -- SVE2 multiply-add (checked pointer)
case IF_SVE_FN_3B:       // ...........mmmmm ......nnnnnddddd -- SVE2 integer multiply long
case IF_SVE_FO_3A:       // ...........mmmmm ......nnnnnddddd -- SVE integer matrix multiply accumulate
case IF_SVE_GJ_3A:       // ...........mmmmm ......nnnnnddddd -- SVE2 crypto constructive binary operations
case IF_SVE_GN_3A:       // ...........mmmmm ......nnnnnddddd -- SVE2 FP8 multiply-add long
case IF_SVE_GO_3A:       // ...........mmmmm ......nnnnnddddd -- SVE2 FP8 multiply-add long long
case IF_SVE_GW_3B:       // ...........mmmmm ......nnnnnddddd -- SVE FP clamp
case IF_SVE_HA_3A:       // ...........mmmmm ......nnnnnddddd -- SVE BFloat16 floating-point dot product
case IF_SVE_HA_3A_E:     // ...........mmmmm ......nnnnnddddd -- SVE BFloat16 floating-point dot product
case IF_SVE_HA_3A_F:     // ...........mmmmm ......nnnnnddddd -- SVE BFloat16 floating-point dot product
case IF_SVE_HB_3A:       // ...........mmmmm ......nnnnnddddd -- SVE floating-point multiply-add long
case IF_SVE_HD_3A:       // ...........mmmmm ......nnnnnddddd -- SVE floating point matrix multiply accumulate
case IF_SVE_HD_3A_A:     // ...........mmmmm ......nnnnnddddd -- SVE floating point matrix multiply accumulate
case IF_SVE_HK_3B:       // ...........mmmmm ......nnnnnddddd -- SVE floating-point arithmetic (unpredicated)
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // mmmmm
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // nnnnn
   emitDispSveReg(id->idReg30(), id->idInsOpt(), true); // ddddd
   break;
case IF_SVE_AV_3A:       // ...........mmmmm ......kkkkkddddd -- SVE2 bitwise ternary operations
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // kkkkk
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // mmmmm
   emitDispSveReg(id->idReg30(), id->idInsOpt(), true); // ddddd
   break;
case IF_SVE_AW_2A:       // ........xx.xxiii ......mmmmmddddd -- sve_int_rotate_imm
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // mmmmm
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // ddddd
   emitDispImm(); // iii
   break;
case IF_SVE_AX_1A:       // ........xx.iiiii ......iiiiiddddd -- SVE index generation (immediate start, immediate increment)
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // ddddd
   emitDispImm(); // iiiii
   emitDispImm(); // iiiii
   break;
case IF_SVE_AY_2A:       // ........xx.mmmmm ......iiiiiddddd -- SVE index generation (immediate start, register increment)
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // ddddd
   emitDispImm(); // iiiii
   emitDispReg(id->idReg20(), id->idInsOpt(), true); // mmmmm
   break;
case IF_SVE_AZ_2A:       // ........xx.iiiii ......nnnnnddddd -- SVE index generation (register start, immediate increment)
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // ddddd
   emitDispReg(id->idReg20(), id->idInsOpt(), true); // nnnnn
   emitDispImm(); // iiiii
   break;
case IF_SVE_BB_2A:       // ...........nnnnn .....iiiiiiddddd -- SVE stack frame adjustment
   emitDispReg(id->idReg10(), id->idInsOpt(), true); // ddddd
   emitDispImm(); // iiiiii
   emitDispReg(id->idReg20(), id->idInsOpt(), true); // nnnnn
   break;
case IF_SVE_BC_1A:       // ................ .....iiiiiiddddd -- SVE stack frame size
   emitDispReg(id->idReg10(), id->idInsOpt(), true); // ddddd
   emitDispImm(); // iiiiii
   break;
case IF_SVE_BF_2A:       // ........xx.xxiii ......nnnnnddddd -- SVE bitwise shift by immediate (unpredicated)
case IF_SVE_FT_2A:       // ........xx.xxiii ......nnnnnddddd -- SVE2 bitwise shift and insert
case IF_SVE_FU_2A:       // ........xx.xxiii ......nnnnnddddd -- SVE2 bitwise shift right and accumulate
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // nnnnn
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // ddddd
   emitDispImm(); // iii
   break;
case IF_SVE_BH_3A:       // .........x.mmmmm ....hhnnnnnddddd -- SVE address generation
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // mmmmm
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // nnnnn
   emitDispSveReg(id->idReg30(), id->idInsOpt(), true); // ddddd
   break;
case IF_SVE_BH_3B:       // ...........mmmmm ....hhnnnnnddddd -- SVE address generation
case IF_SVE_BH_3B_A:     // ...........mmmmm ....hhnnnnnddddd -- SVE address generation
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // mmmmm
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // nnnnn
   emitDispSveReg(id->idReg30(), id->idInsOpt(), true); // ddddd
   break;
case IF_SVE_BI_2A:       // ................ ......nnnnnddddd -- SVE constructive prefix (unpredicated)
case IF_SVE_HH_2A:       // ................ ......nnnnnddddd -- SVE2 FP8 upconverts
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // nnnnn
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // ddddd
   break;
case IF_SVE_BJ_2A:       // ........xx...... ......nnnnnddddd -- SVE floating-point exponential accelerator
case IF_SVE_CB_2A:       // ........xx...... ......nnnnnddddd -- SVE broadcast general register
case IF_SVE_CG_2A:       // ........xx...... ......nnnnnddddd -- SVE reverse vector elements
case IF_SVE_CH_2A:       // ........xx...... ......nnnnnddddd -- SVE unpack vector elements
case IF_SVE_HF_2A:       // ........xx...... ......nnnnnddddd -- SVE floating-point reciprocal estimate (unpredicated)
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // nnnnn
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // ddddd
   break;
case IF_SVE_BL_1A:       // ............iiii ......pppppddddd -- SVE element count
case IF_SVE_BM_1A:       // ............iiii ......pppppddddd -- SVE inc/dec register by element count
case IF_SVE_BN_1A:       // ............iiii ......pppppddddd -- SVE inc/dec vector by element count
case IF_SVE_BP_1A:       // ............iiii ......pppppddddd -- SVE saturating inc/dec vector by element count
   emitDispReg(id->idReg10(), id->idInsOpt(), true); // ddddd
   emitDispImm(); // iiii
   break;
case IF_SVE_BO_1A:       // ...........Xiiii ......pppppddddd -- SVE saturating inc/dec register by element count
case IF_SVE_BO_1A_A:     // ...........Xiiii ......pppppddddd -- SVE saturating inc/dec register by element count
   emitDispReg(id->idReg10(), id->idInsOpt(), true); // ddddd
   emitDispImm(); // iiii
   break;
case IF_SVE_BQ_2A:       // ...........iiiii ...iiinnnnnddddd -- SVE extract vector (immediate offset, destructive)
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // nnnnn
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // ddddd
   emitDispImm(); // iii
   emitDispImm(); // iiiii
   break;
case IF_SVE_BQ_2B:       // ...........iiiii ...iiimmmmmddddd -- SVE extract vector (immediate offset, destructive)
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // mmmmm
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // ddddd
   emitDispImm(); // iii
   emitDispImm(); // iiiii
   break;
case IF_SVE_BS_1A:       // ..............ii iiiiiiiiiiiddddd -- SVE bitwise logical with immediate (unpredicated)
case IF_SVE_BT_1A:       // ..............ii iiiiiiiiiiiddddd -- SVE broadcast bitmask immediate
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // ddddd
   emitDispImm(); // iiiiiiiiiiiii
   break;
case IF_SVE_BU_2A:       // ........xx..gggg ...iiiiiiiiddddd -- SVE copy floating-point immediate (predicated)
   emitDispPredicateReg(id->idReg10(), PREDICATE_MERGE, id->idInsOpt(), true); // gggg
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // ddddd
   emitDispImm(); // iiiiiiii
   break;
case IF_SVE_BV_2A:       // ........xx..gggg ..hiiiiiiiiddddd -- SVE copy integer immediate (predicated)
case IF_SVE_BV_2A_A:     // ........xx..gggg ..hiiiiiiiiddddd -- SVE copy integer immediate (predicated)
case IF_SVE_BV_2A_J:     // ........xx..gggg ..hiiiiiiiiddddd -- SVE copy integer immediate (predicated)
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // gggg
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // ddddd
   emitDispImm(); // iiiiiiii
   break;
case IF_SVE_BV_2B:       // ........xx..gggg ...........ddddd -- SVE copy integer immediate (predicated)
   emitDispPredicateReg(id->idReg10(), PREDICATE_MERGE, id->idInsOpt(), true); // gggg
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // ddddd
   break;
case IF_SVE_BW_2A:       // ........ii.xxxxx ......nnnnnddddd -- SVE broadcast indexed element
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // nnnnn
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // ddddd
   emitDispImm(); // ii
   break;
case IF_SVE_BX_2A:       // ...........ixxxx ......nnnnnddddd -- sve_int_perm_dupq_i
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // nnnnn
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // ddddd
   emitDispImm1l(); // i
   break;
case IF_SVE_BY_2A:       // ............iiii ......mmmmmddddd -- sve_int_perm_extq
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // mmmmm
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // ddddd
   emitDispImm(); // iiii
   break;
case IF_SVE_CC_2A:       // ........xx...... ......mmmmmddddd -- SVE insert SIMD&FP scalar register
case IF_SVE_CD_2A:       // ........xx...... ......mmmmmddddd -- SVE insert general register
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // ddddd
   emitDispVectorReg(id->idReg20(), id->idInsOpt(), true); // mmmmm
   break;
case IF_SVE_CE_2A:       // ................ ......nnnnn.DDDD -- SVE move predicate from vector
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // nnnnn
   emitDispPredicateReg(id->idReg20(), PREDICATE_ZERO, id->idInsOpt(), true); // DDDD
   break;
case IF_SVE_CE_2B:       // .........i...ii. ......nnnnn.DDDD -- SVE move predicate from vector
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // nnnnn
   emitDispPredicateReg(id->idReg20(), PREDICATE_ZERO, id->idInsOpt(), true); // DDDD
   emitDispImm3l(); // ii
   emitDispImm3h(); // i
   break;
case IF_SVE_CE_2C:       // ..............i. ......nnnnn.DDDD -- SVE move predicate from vector
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // nnnnn
   emitDispPredicateReg(id->idReg20(), PREDICATE_ZERO, id->idInsOpt(), true); // DDDD
   emitDispImm1l(); // i
   break;
case IF_SVE_CE_2D:       // .............ii. ......nnnnn.DDDD -- SVE move predicate from vector
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // nnnnn
   emitDispPredicateReg(id->idReg20(), PREDICATE_ZERO, id->idInsOpt(), true); // DDDD
   emitDispImm2(); // ii
   break;
case IF_SVE_CF_2A:       // ................ .......NNNNddddd -- SVE move predicate into vector
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // NNNN
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // ddddd
   break;
case IF_SVE_CF_2B:       // .........i...ii. .......NNNNddddd -- SVE move predicate into vector
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // NNNN
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // ddddd
   emitDispImm3l(); // ii
   emitDispImm3h(); // i
   break;
case IF_SVE_CF_2C:       // ..............i. .......NNNNddddd -- SVE move predicate into vector
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // NNNN
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // ddddd
   emitDispImm1l(); // i
   break;
case IF_SVE_CF_2D:       // .............ii. .......NNNNddddd -- SVE move predicate into vector
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // NNNN
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // ddddd
   emitDispImm2(); // ii
   break;
case IF_SVE_CI_3A:       // ........xx..MMMM .......NNNN.DDDD -- SVE permute predicate elements
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // MMMM
   emitDispPredicateReg(id->idReg20(), PREDICATE_ZERO, id->idInsOpt(), true); // NNNN
   emitDispPredicateReg(id->idReg30(), PREDICATE_ZERO, id->idInsOpt(), true); // DDDD
   break;
case IF_SVE_CJ_2A:       // ........xx...... .......NNNN.DDDD -- SVE reverse predicate elements
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // NNNN
   emitDispPredicateReg(id->idReg20(), PREDICATE_ZERO, id->idInsOpt(), true); // DDDD
   break;
case IF_SVE_CK_2A:       // ................ .......NNNN.DDDD -- SVE unpack predicate elements
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // NNNN
   emitDispPredicateReg(id->idReg20(), PREDICATE_ZERO, id->idInsOpt(), true); // DDDD
   break;
case IF_SVE_CT_3A:       // ................ ...gggnnnnnddddd -- SVE reverse doublewords
case IF_SVE_GQ_3A:       // ................ ...gggnnnnnddddd -- SVE floating-point convert precision odd elements
case IF_SVE_HO_3A:       // ................ ...gggnnnnnddddd -- SVE floating-point convert precision
case IF_SVE_HO_3A_B:     // ................ ...gggnnnnnddddd -- SVE floating-point convert precision
case IF_SVE_HP_3B:       // ................ ...gggnnnnnddddd -- SVE floating-point convert to integer
case IF_SVE_HP_3B_H:     // ................ ...gggnnnnnddddd -- SVE floating-point convert to integer
case IF_SVE_HP_3B_I:     // ................ ...gggnnnnnddddd -- SVE floating-point convert to integer
case IF_SVE_HP_3B_J:     // ................ ...gggnnnnnddddd -- SVE floating-point convert to integer
case IF_SVE_HS_3A:       // ................ ...gggnnnnnddddd -- SVE integer convert to floating-point
case IF_SVE_HS_3A_H:     // ................ ...gggnnnnnddddd -- SVE integer convert to floating-point
case IF_SVE_HS_3A_I:     // ................ ...gggnnnnnddddd -- SVE integer convert to floating-point
case IF_SVE_HS_3A_J:     // ................ ...gggnnnnnddddd -- SVE integer convert to floating-point
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // nnnnn
   emitDispPredicateReg(id->idReg20(), PREDICATE_MERGE, id->idInsOpt(), true); // ggg
   emitDispSveReg(id->idReg30(), id->idInsOpt(), true); // ddddd
   break;
case IF_SVE_CV_3A:       // ........xx...... ...VVVnnnnnddddd -- SVE vector splice (destructive)
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // nnnnn
   emitDispPredicateReg(id->idReg20(), PREDICATE_ZERO, id->idInsOpt(), true); // VVV
   emitDispSveReg(id->idReg30(), id->idInsOpt(), true); // ddddd
   break;
case IF_SVE_CV_3B:       // ........xx...... ...VVVmmmmmddddd -- SVE vector splice (destructive)
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // mmmmm
   emitDispPredicateReg(id->idReg20(), PREDICATE_ZERO, id->idInsOpt(), true); // VVV
   emitDispSveReg(id->idReg30(), id->idInsOpt(), true); // ddddd
   break;
case IF_SVE_CW_4A:       // ........xx.mmmmm ..VVVVnnnnnddddd -- SVE select vector elements (predicated)
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // mmmmm
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // nnnnn
   emitDispPredicateReg(id->idReg30(), PREDICATE_ZERO, id->idInsOpt(), true); // VVVV
   emitDispSveReg(id->idReg40(), id->idInsOpt(), true); // ddddd
   break;
case IF_SVE_CX_4A:       // ........xx.mmmmm ...gggnnnnn.DDDD -- SVE integer compare vectors
case IF_SVE_CX_4A_A:     // ........xx.mmmmm ...gggnnnnn.DDDD -- SVE integer compare vectors
case IF_SVE_GE_4A:       // ........xx.mmmmm ...gggnnnnn.DDDD -- SVE2 character match
case IF_SVE_HT_4A:       // ........xx.mmmmm ...gggnnnnn.DDDD -- SVE floating-point compare vectors
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // mmmmm
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // nnnnn
   emitDispPredicateReg(id->idReg30(), PREDICATE_ZERO, id->idInsOpt(), true); // ggg
   emitDispPredicateReg(id->idReg40(), PREDICATE_ZERO, id->idInsOpt(), true); // DDDD
   break;
case IF_SVE_CY_3A:       // ........xx.iiiii ...gggnnnnn.DDDD -- SVE integer compare with unsigned immediate
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // nnnnn
   emitDispPredicateReg(id->idReg20(), PREDICATE_ZERO, id->idInsOpt(), true); // ggg
   emitDispPredicateReg(id->idReg30(), PREDICATE_ZERO, id->idInsOpt(), true); // DDDD
   emitDispImm(); // iiiii
   break;
case IF_SVE_CY_3B:       // ........xx.iiiii ii.gggnnnnn.DDDD -- SVE integer compare with unsigned immediate
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // nnnnn
   emitDispPredicateReg(id->idReg20(), PREDICATE_ZERO, id->idInsOpt(), true); // ggg
   emitDispPredicateReg(id->idReg30(), PREDICATE_ZERO, id->idInsOpt(), true); // DDDD
   emitDispImm(); // iiiiiii
   break;
case IF_SVE_CZ_4A:       // ............MMMM ..gggg.NNNN.DDDD -- SVE predicate logical operations
case IF_SVE_CZ_4A_A:     // ............MMMM ..gggg.NNNN.DDDD -- SVE predicate logical operations
case IF_SVE_CZ_4A_K:     // ............MMMM ..gggg.NNNN.DDDD -- SVE predicate logical operations
case IF_SVE_CZ_4A_L:     // ............MMMM ..gggg.NNNN.DDDD -- SVE predicate logical operations
case IF_SVE_DA_4A:       // ............MMMM ..gggg.NNNN.DDDD -- SVE propagate break from previous partition
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // MMMM
   emitDispPredicateReg(id->idReg20(), PREDICATE_ZERO, id->idInsOpt(), true); // NNNN
   emitDispPredicateReg(id->idReg30(), PREDICATE_ZERO, id->idInsOpt(), true); // gggg
   emitDispPredicateReg(id->idReg40(), PREDICATE_ZERO, id->idInsOpt(), true); // DDDD
   break;
case IF_SVE_DB_3A:       // ................ ..gggg.NNNNMDDDD -- SVE partition break condition
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // NNNN
   emitDispPredicateReg(id->idReg20(), PREDICATE_ZERO, id->idInsOpt(), true); // gggg
   emitDispPredicateReg(id->idReg30(), PREDICATE_ZERO, id->idInsOpt(), true); // DDDD
   break;
case IF_SVE_DB_3B:       // ................ ..gggg.NNNN.DDDD -- SVE partition break condition
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // NNNN
   emitDispPredicateReg(id->idReg20(), PREDICATE_ZERO, id->idInsOpt(), true); // gggg
   emitDispPredicateReg(id->idReg30(), PREDICATE_ZERO, id->idInsOpt(), true); // DDDD
   break;
case IF_SVE_DC_3A:       // ................ ..gggg.NNNN.MMMM -- SVE propagate break to next partition
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // NNNN
   emitDispPredicateReg(id->idReg20(), PREDICATE_ZERO, id->idInsOpt(), true); // gggg
   emitDispPredicateReg(id->idReg30(), PREDICATE_ZERO, id->idInsOpt(), true); // MMMM
   break;
case IF_SVE_DD_2A:       // ................ .......gggg.DDDD -- SVE predicate first active
case IF_SVE_DG_2A:       // ................ .......gggg.DDDD -- SVE predicate read from FFR (predicated)
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // gggg
   emitDispPredicateReg(id->idReg20(), PREDICATE_ZERO, id->idInsOpt(), true); // DDDD
   break;
case IF_SVE_DE_1A:       // ........xx...... ......ppppp.DDDD -- SVE predicate initialize
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // DDDD
   break;
case IF_SVE_DF_2A:       // ........xx...... .......VVVV.DDDD -- SVE predicate next active
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // VVVV
   emitDispPredicateReg(id->idReg20(), PREDICATE_ZERO, id->idInsOpt(), true); // DDDD
   break;
case IF_SVE_DH_1A:       // ................ ............DDDD -- SVE predicate read from FFR (unpredicated)
case IF_SVE_DJ_1A:       // ................ ............DDDD -- SVE predicate zero
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // DDDD
   break;
case IF_SVE_DI_2A:       // ................ ..gggg.NNNN..... -- SVE predicate test
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // NNNN
   emitDispPredicateReg(id->idReg20(), PREDICATE_ZERO, id->idInsOpt(), true); // gggg
   break;
case IF_SVE_DK_3A:       // ........xx...... ..gggg.NNNNddddd -- SVE predicate count
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // NNNN
   emitDispPredicateReg(id->idReg20(), PREDICATE_ZERO, id->idInsOpt(), true); // gggg
   emitDispReg(id->idReg30(), id->idInsOpt(), true); // ddddd
   break;
case IF_SVE_DL_2A:       // ........xx...... .....l.NNNNddddd -- SVE predicate count (predicate-as-counter)
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // NNNN
   emitDispReg(id->idReg20(), id->idInsOpt(), true); // ddddd
   break;
case IF_SVE_DM_2A:       // ........xx...... .......MMMMddddd -- SVE inc/dec register by predicate count
case IF_SVE_DN_2A:       // ........xx...... .......MMMMddddd -- SVE inc/dec vector by predicate count
case IF_SVE_DP_2A:       // ........xx...... .......MMMMddddd -- SVE saturating inc/dec vector by predicate count
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // MMMM
   emitDispReg(id->idReg20(), id->idInsOpt(), true); // ddddd
   break;
case IF_SVE_DO_2A:       // ........xx...... .....X.MMMMddddd -- SVE saturating inc/dec register by predicate count
case IF_SVE_DO_2A_A:     // ........xx...... .....X.MMMMddddd -- SVE saturating inc/dec register by predicate count
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // MMMM
   emitDispReg(id->idReg20(), id->idInsOpt(), true); // ddddd
   break;
case IF_SVE_DQ_0A:       // ................ ................ -- SVE FFR initialise
   break;
case IF_SVE_DR_1A:       // ................ .......NNNN..... -- SVE FFR write from predicate
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // NNNN
   break;
case IF_SVE_DS_2A:       // .........x.mmmmm ......nnnnn..... -- SVE conditionally terminate scalars
   emitDispReg(id->idReg10(), id->idInsOpt(), true); // nnnnn
   emitDispReg(id->idReg20(), id->idInsOpt(), true); // mmmmm
   break;
case IF_SVE_DT_3A:       // ........xx.mmmmm ...X..nnnnn.DDDD -- SVE integer compare scalar count and limit
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // DDDD
   emitDispReg(id->idReg20(), id->idInsOpt(), true); // nnnnn
   emitDispReg(id->idReg30(), id->idInsOpt(), true); // mmmmm
   break;
case IF_SVE_DU_3A:       // ........xx.mmmmm ......nnnnn.DDDD -- SVE pointer conflict compare
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // DDDD
   emitDispReg(id->idReg20(), id->idInsOpt(), true); // nnnnn
   emitDispReg(id->idReg30(), id->idInsOpt(), true); // mmmmm
   break;
case IF_SVE_DV_4A:       // ........ix.xxxvv ..NNNN.MMMM.DDDD -- SVE broadcast predicate element
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // MMMM
   emitDispPredicateReg(id->idReg20(), PREDICATE_ZERO, id->idInsOpt(), true); // NNNN
   emitDispPredicateReg(id->idReg30(), PREDICATE_ZERO, id->idInsOpt(), true); // DDDD
   emitDispReg(id->idReg40(), id->idInsOpt(), true); // vv
   emitDispImm1l(); // i
   break;
case IF_SVE_DW_2A:       // ........xx...... ......iiNNN.DDDD -- SVE extract mask predicate from predicate-as-counter
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // NNN
   emitDispPredicateReg(id->idReg20(), PREDICATE_ZERO, id->idInsOpt(), true); // DDDD
   emitDispImm(); // ii
   break;
case IF_SVE_DW_2B:       // ........xx...... .......iNNN.DDDD -- SVE extract mask predicate from predicate-as-counter
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // NNN
   emitDispPredicateReg(id->idReg20(), PREDICATE_ZERO, id->idInsOpt(), true); // DDDD
   emitDispImm1l(); // i
   break;
case IF_SVE_DX_3A:       // ........xx.mmmmm ......nnnnn.DDD. -- SVE integer compare scalar count and limit (predicate pair)
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // DDD
   emitDispReg(id->idReg20(), id->idInsOpt(), true); // nnnnn
   emitDispReg(id->idReg30(), id->idInsOpt(), true); // mmmmm
   break;
case IF_SVE_DY_3A:       // ........xx.mmmmm ..l...nnnnn..DDD -- SVE integer compare scalar count and limit (predicate-as-counter)
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // DDD
   emitDispReg(id->idReg20(), id->idInsOpt(), true); // nnnnn
   emitDispReg(id->idReg30(), id->idInsOpt(), true); // mmmmm
   break;
case IF_SVE_DZ_1A:       // ........xx...... .............DDD -- sve_int_pn_ptrue
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // DDD
   break;
case IF_SVE_EA_1A:       // ........xx...... ...iiiiiiiiddddd -- SVE broadcast floating-point immediate (unpredicated)
case IF_SVE_ED_1A:       // ........xx...... ...iiiiiiiiddddd -- SVE integer min/max immediate (unpredicated)
case IF_SVE_EE_1A:       // ........xx...... ...iiiiiiiiddddd -- SVE integer multiply immediate (unpredicated)
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // ddddd
   emitDispImm(); // iiiiiiii
   break;
case IF_SVE_EB_1A:       // ........xx...... ..hiiiiiiiiddddd -- SVE broadcast integer immediate (unpredicated)
case IF_SVE_EC_1A:       // ........xx...... ..hiiiiiiiiddddd -- SVE integer add/subtract immediate (unpredicated)
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // ddddd
   emitDispImm(); // iiiiiiii
   break;
case IF_SVE_EB_1B:       // ........xx...... ...........ddddd -- SVE broadcast integer immediate (unpredicated)
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // ddddd
   break;
case IF_SVE_EG_3A:       // ...........iimmm ......nnnnnddddd -- SVE two-way dot product (indexed)
case IF_SVE_EY_3A:       // ...........iimmm ......nnnnnddddd -- SVE integer dot product (indexed)
case IF_SVE_EZ_3A:       // ...........iimmm ......nnnnnddddd -- SVE mixed sign dot product (indexed)
case IF_SVE_FD_3B:       // ...........iimmm ......nnnnnddddd -- SVE2 integer multiply (indexed)
case IF_SVE_FF_3B:       // ...........iimmm ......nnnnnddddd -- SVE2 integer multiply-add (indexed)
case IF_SVE_FI_3B:       // ...........iimmm ......nnnnnddddd -- SVE2 saturating multiply high (indexed)
case IF_SVE_FK_3B:       // ...........iimmm ......nnnnnddddd -- SVE2 saturating multiply-add high (indexed)
case IF_SVE_GU_3A:       // ...........iimmm ......nnnnnddddd -- SVE floating-point multiply-add (indexed)
case IF_SVE_GX_3A:       // ...........iimmm ......nnnnnddddd -- SVE floating-point multiply (indexed)
case IF_SVE_GY_3B:       // ...........iimmm ......nnnnnddddd -- SVE BFloat16 floating-point dot product (indexed)
case IF_SVE_GY_3B_D:     // ...........iimmm ......nnnnnddddd -- SVE BFloat16 floating-point dot product (indexed)
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // mmm
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // nnnnn
   emitDispSveReg(id->idReg30(), id->idInsOpt(), true); // ddddd
   emitDispImm2(); // ii
   break;
case IF_SVE_EJ_3A:       // ........xx.mmmmm ....rrnnnnnddddd -- SVE2 complex integer dot product
case IF_SVE_EK_3A:       // ........xx.mmmmm ....rrnnnnnddddd -- SVE2 complex integer multiply-add
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // mmmmm
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // nnnnn
   emitDispSveReg(id->idReg30(), id->idInsOpt(), true); // ddddd
   break;
case IF_SVE_EW_3B:       // ...........mmmmm ......aaaaaddddd -- SVE2 multiply-add (checked pointer)
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // aaaaa
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // mmmmm
   emitDispSveReg(id->idReg30(), id->idInsOpt(), true); // ddddd
   break;
case IF_SVE_EY_3B:       // ...........immmm ......nnnnnddddd -- SVE integer dot product (indexed)
case IF_SVE_FD_3C:       // ...........immmm ......nnnnnddddd -- SVE2 integer multiply (indexed)
case IF_SVE_FF_3C:       // ...........immmm ......nnnnnddddd -- SVE2 integer multiply-add (indexed)
case IF_SVE_FI_3C:       // ...........immmm ......nnnnnddddd -- SVE2 saturating multiply high (indexed)
case IF_SVE_FK_3C:       // ...........immmm ......nnnnnddddd -- SVE2 saturating multiply-add high (indexed)
case IF_SVE_GU_3B:       // ...........immmm ......nnnnnddddd -- SVE floating-point multiply-add (indexed)
case IF_SVE_GX_3B:       // ...........immmm ......nnnnnddddd -- SVE floating-point multiply (indexed)
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // mmmm
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // nnnnn
   emitDispSveReg(id->idReg30(), id->idInsOpt(), true); // ddddd
   emitDispImm1l(); // i
   break;
case IF_SVE_FA_3A:       // ...........iimmm ....rrnnnnnddddd -- SVE2 complex integer dot product (indexed)
case IF_SVE_FB_3A:       // ...........iimmm ....rrnnnnnddddd -- SVE2 complex integer multiply-add (indexed)
case IF_SVE_FC_3A:       // ...........iimmm ....rrnnnnnddddd -- SVE2 complex saturating multiply-add (indexed)
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // mmm
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // nnnnn
   emitDispSveReg(id->idReg30(), id->idInsOpt(), true); // ddddd
   emitDispImm2(); // ii
   break;
case IF_SVE_FA_3B:       // ...........immmm ....rrnnnnnddddd -- SVE2 complex integer dot product (indexed)
case IF_SVE_FB_3B:       // ...........immmm ....rrnnnnnddddd -- SVE2 complex integer multiply-add (indexed)
case IF_SVE_FC_3B:       // ...........immmm ....rrnnnnnddddd -- SVE2 complex saturating multiply-add (indexed)
case IF_SVE_GV_3A:       // ...........immmm ....rrnnnnnddddd -- SVE floating-point complex multiply-add (indexed)
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // mmmm
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // nnnnn
   emitDispSveReg(id->idReg30(), id->idInsOpt(), true); // ddddd
   emitDispImm1l(); // i
   break;
case IF_SVE_FD_3A:       // .........i.iimmm ......nnnnnddddd -- SVE2 integer multiply (indexed)
case IF_SVE_FF_3A:       // .........i.iimmm ......nnnnnddddd -- SVE2 integer multiply-add (indexed)
case IF_SVE_FI_3A:       // .........i.iimmm ......nnnnnddddd -- SVE2 saturating multiply high (indexed)
case IF_SVE_FK_3A:       // .........i.iimmm ......nnnnnddddd -- SVE2 saturating multiply-add high (indexed)
case IF_SVE_GU_3C:       // .........i.iimmm ......nnnnnddddd -- SVE floating-point multiply-add (indexed)
case IF_SVE_GX_3C:       // .........i.iimmm ......nnnnnddddd -- SVE floating-point multiply (indexed)
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // mmm
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // nnnnn
   emitDispSveReg(id->idReg30(), id->idInsOpt(), true); // ddddd
   emitDispImm3l(); // ii
   emitDispImm3h(); // i
   break;
case IF_SVE_FE_3A:       // ...........iimmm ....i.nnnnnddddd -- SVE2 integer multiply long (indexed)
case IF_SVE_FG_3A:       // ...........iimmm ....i.nnnnnddddd -- SVE2 integer multiply-add long (indexed)
case IF_SVE_FH_3A:       // ...........iimmm ....i.nnnnnddddd -- SVE2 saturating multiply (indexed)
case IF_SVE_FJ_3A:       // ...........iimmm ....i.nnnnnddddd -- SVE2 saturating multiply-add (indexed)
case IF_SVE_GY_3A:       // ...........iimmm ....i.nnnnnddddd -- SVE BFloat16 floating-point dot product (indexed)
case IF_SVE_GZ_3A:       // ...........iimmm ....i.nnnnnddddd -- SVE floating-point multiply-add long (indexed)
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // mmm
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // nnnnn
   emitDispSveReg(id->idReg30(), id->idInsOpt(), true); // ddddd
   emitDispImm3l(); // i
   emitDispImm3h(); // ii
   break;
case IF_SVE_FE_3B:       // ...........immmm ....i.nnnnnddddd -- SVE2 integer multiply long (indexed)
case IF_SVE_FG_3B:       // ...........immmm ....i.nnnnnddddd -- SVE2 integer multiply-add long (indexed)
case IF_SVE_FH_3B:       // ...........immmm ....i.nnnnnddddd -- SVE2 saturating multiply (indexed)
case IF_SVE_FJ_3B:       // ...........immmm ....i.nnnnnddddd -- SVE2 saturating multiply-add (indexed)
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // mmmm
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // nnnnn
   emitDispSveReg(id->idReg30(), id->idInsOpt(), true); // ddddd
   emitDispImm2l(); // i
   emitDispImm2h(); // i
   break;
case IF_SVE_FR_2A:       // .........x.xxiii ......nnnnnddddd -- SVE2 bitwise shift left long
case IF_SVE_GB_2A:       // .........x.xxiii ......nnnnnddddd -- SVE2 bitwise shift right narrow
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // nnnnn
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // ddddd
   emitDispImm(); // iii
   break;
case IF_SVE_FV_2A:       // ........xx...... .....rmmmmmddddd -- SVE2 complex integer add
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // mmmmm
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // ddddd
   break;
case IF_SVE_FY_3A:       // .........x.mmmmm ......nnnnnddddd -- SVE2 integer add/subtract long with carry
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // mmmmm
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // nnnnn
   emitDispSveReg(id->idReg30(), id->idInsOpt(), true); // ddddd
   break;
case IF_SVE_FZ_2A:       // ................ ......nnnn.ddddd -- SME2 multi-vec extract narrow
case IF_SVE_HG_2A:       // ................ ......nnnn.ddddd -- SVE2 FP8 downconverts
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // nnnn
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // ddddd
   break;
case IF_SVE_GA_2A:       // ............iiii ......nnnn.ddddd -- SME2 multi-vec shift narrow
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // nnnn
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // ddddd
   emitDispImm(); // iiii
   break;
case IF_SVE_GD_2A:       // .........x.xx... ......nnnnnddddd -- SVE2 saturating extract narrow
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // nnnnn
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // ddddd
   break;
case IF_SVE_GG_3A:       // ........ii.mmmmm ......nnnnnddddd -- SVE2 lookup table with 2-bit indices and 16-bit element size
case IF_SVE_GH_3B:       // ........ii.mmmmm ......nnnnnddddd -- SVE2 lookup table with 4-bit indices and 16-bit element size
case IF_SVE_GH_3B_B:     // ........ii.mmmmm ......nnnnnddddd -- SVE2 lookup table with 4-bit indices and 16-bit element size
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // mmmmm
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // nnnnn
   emitDispSveReg(id->idReg30(), id->idInsOpt(), true); // ddddd
   emitDispImm2(); // ii
   break;
case IF_SVE_GG_3B:       // ........ii.mmmmm ...i..nnnnnddddd -- SVE2 lookup table with 2-bit indices and 16-bit element size
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // mmmmm
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // nnnnn
   emitDispSveReg(id->idReg30(), id->idInsOpt(), true); // ddddd
   emitDispImm3l(); // i
   emitDispImm3h(); // ii
   break;
case IF_SVE_GH_3A:       // ........i..mmmmm ......nnnnnddddd -- SVE2 lookup table with 4-bit indices and 16-bit element size
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // mmmmm
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // nnnnn
   emitDispSveReg(id->idReg30(), id->idInsOpt(), true); // ddddd
   emitDispImm1l(); // i
   break;
case IF_SVE_GK_2A:       // ................ ......mmmmmddddd -- SVE2 crypto destructive binary operations
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // mmmmm
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // ddddd
   break;
case IF_SVE_GL_1A:       // ................ ...........ddddd -- SVE2 crypto unary operations
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // ddddd
   break;
case IF_SVE_GM_3A:       // ...........iimmm ....iinnnnnddddd -- SVE2 FP8 multiply-add long (indexed)
case IF_SVE_HC_3A:       // ...........iimmm ....iinnnnnddddd -- SVE2 FP8 multiply-add long long (indexed)
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // mmm
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // nnnnn
   emitDispSveReg(id->idReg30(), id->idInsOpt(), true); // ddddd
   emitDispImm4l(); // ii
   emitDispImm4h(); // ii
   break;
case IF_SVE_GP_3A:       // ........xx.....r ...gggmmmmmddddd -- SVE floating-point complex add (predicated)
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // mmmmm
   emitDispPredicateReg(id->idReg20(), PREDICATE_MERGE, id->idInsOpt(), true); // ggg
   emitDispSveReg(id->idReg30(), id->idInsOpt(), true); // ddddd
   break;
case IF_SVE_GT_4A:       // ........xx.mmmmm .rrgggnnnnnddddd -- SVE floating-point complex multiply-add (predicated)
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // mmmmm
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // nnnnn
   emitDispPredicateReg(id->idReg30(), PREDICATE_MERGE, id->idInsOpt(), true); // ggg
   emitDispSveReg(id->idReg40(), id->idInsOpt(), true); // ddddd
   break;
case IF_SVE_HI_3A:       // ........xx...... ...gggnnnnn.DDDD -- SVE floating-point compare with zero
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // nnnnn
   emitDispPredicateReg(id->idReg20(), PREDICATE_ZERO, id->idInsOpt(), true); // ggg
   emitDispPredicateReg(id->idReg30(), PREDICATE_ZERO, id->idInsOpt(), true); // DDDD
   break;
case IF_SVE_HM_2A:       // ........xx...... ...ggg....iddddd -- SVE floating-point arithmetic with immediate (predicated)
   emitDispPredicateReg(id->idReg10(), PREDICATE_MERGE, id->idInsOpt(), true); // ggg
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // ddddd
   emitDispImm1l(); // i
   break;
case IF_SVE_HN_2A:       // ........xx...iii ......mmmmmddddd -- SVE floating-point trig multiply-add coefficient
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // mmmmm
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // ddddd
   emitDispImm(); // iii
   break;
case IF_SVE_HP_3A:       // .............xx. ...gggnnnnnddddd -- SVE floating-point convert to integer
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // nnnnn
   emitDispPredicateReg(id->idReg20(), PREDICATE_MERGE, id->idInsOpt(), true); // ggg
   emitDispSveReg(id->idReg30(), id->idInsOpt(), true); // ddddd
   break;
case IF_SVE_HU_4B:       // ...........mmmmm ...gggnnnnnddddd -- SVE floating-point multiply-accumulate writing addend
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // mmmmm
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // nnnnn
   emitDispPredicateReg(id->idReg30(), PREDICATE_MERGE, id->idInsOpt(), true); // ggg
   emitDispSveReg(id->idReg40(), id->idInsOpt(), true); // ddddd
   break;
case IF_SVE_HV_4A:       // ........xx.aaaaa ...gggmmmmmddddd -- SVE floating-point multiply-accumulate writing multiplicand
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // aaaaa
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // mmmmm
   emitDispPredicateReg(id->idReg30(), PREDICATE_MERGE, id->idInsOpt(), true); // ggg
   emitDispSveReg(id->idReg40(), id->idInsOpt(), true); // ddddd
   break;
case IF_SVE_HW_4A:       // .........h.mmmmm ...gggnnnnnttttt -- SVE 32-bit gather load (scalar plus 32-bit unscaled offsets)
case IF_SVE_HW_4A_A:     // .........h.mmmmm ...gggnnnnnttttt -- SVE 32-bit gather load (scalar plus 32-bit unscaled offsets)
case IF_SVE_HW_4A_B:     // .........h.mmmmm ...gggnnnnnttttt -- SVE 32-bit gather load (scalar plus 32-bit unscaled offsets)
case IF_SVE_HW_4A_C:     // .........h.mmmmm ...gggnnnnnttttt -- SVE 32-bit gather load (scalar plus 32-bit unscaled offsets)
case IF_SVE_IU_4A:       // .........h.mmmmm ...gggnnnnnttttt -- SVE 64-bit gather load (scalar plus 32-bit unpacked scaled offsets)
case IF_SVE_IU_4A_A:     // .........h.mmmmm ...gggnnnnnttttt -- SVE 64-bit gather load (scalar plus 32-bit unpacked scaled offsets)
case IF_SVE_IU_4A_C:     // .........h.mmmmm ...gggnnnnnttttt -- SVE 64-bit gather load (scalar plus 32-bit unpacked scaled offsets)
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // mmmmm
   emitDispPredicateReg(id->idReg20(), PREDICATE_ZERO, id->idInsOpt(), true); // ggg
   emitDispSveReg(id->idReg30(), id->idInsOpt(), true); // ttttt
   emitDispReg(id->idReg40(), id->idInsOpt(), true); // nnnnn
   break;
case IF_SVE_HW_4B:       // ...........mmmmm ...gggnnnnnttttt -- SVE 32-bit gather load (scalar plus 32-bit unscaled offsets)
case IF_SVE_HW_4B_D:     // ...........mmmmm ...gggnnnnnttttt -- SVE 32-bit gather load (scalar plus 32-bit unscaled offsets)
case IF_SVE_IF_4A:       // ...........mmmmm ...gggnnnnnttttt -- SVE2 32-bit gather non-temporal load (vector plus scalar)
case IF_SVE_IF_4A_A:     // ...........mmmmm ...gggnnnnnttttt -- SVE2 32-bit gather non-temporal load (vector plus scalar)
case IF_SVE_IG_4A:       // ...........mmmmm ...gggnnnnnttttt -- SVE contiguous first-fault load (scalar plus scalar)
case IF_SVE_IG_4A_D:     // ...........mmmmm ...gggnnnnnttttt -- SVE contiguous first-fault load (scalar plus scalar)
case IF_SVE_IG_4A_E:     // ...........mmmmm ...gggnnnnnttttt -- SVE contiguous first-fault load (scalar plus scalar)
case IF_SVE_IG_4A_F:     // ...........mmmmm ...gggnnnnnttttt -- SVE contiguous first-fault load (scalar plus scalar)
case IF_SVE_IG_4A_G:     // ...........mmmmm ...gggnnnnnttttt -- SVE contiguous first-fault load (scalar plus scalar)
case IF_SVE_II_4A:       // ...........mmmmm ...gggnnnnnttttt -- SVE contiguous load (quadwords, scalar plus scalar)
case IF_SVE_II_4A_B:     // ...........mmmmm ...gggnnnnnttttt -- SVE contiguous load (quadwords, scalar plus scalar)
case IF_SVE_II_4A_H:     // ...........mmmmm ...gggnnnnnttttt -- SVE contiguous load (quadwords, scalar plus scalar)
case IF_SVE_IK_4A:       // ...........mmmmm ...gggnnnnnttttt -- SVE contiguous load (scalar plus scalar)
case IF_SVE_IK_4A_F:     // ...........mmmmm ...gggnnnnnttttt -- SVE contiguous load (scalar plus scalar)
case IF_SVE_IK_4A_G:     // ...........mmmmm ...gggnnnnnttttt -- SVE contiguous load (scalar plus scalar)
case IF_SVE_IK_4A_H:     // ...........mmmmm ...gggnnnnnttttt -- SVE contiguous load (scalar plus scalar)
case IF_SVE_IK_4A_I:     // ...........mmmmm ...gggnnnnnttttt -- SVE contiguous load (scalar plus scalar)
case IF_SVE_IN_4A:       // ...........mmmmm ...gggnnnnnttttt -- SVE contiguous non-temporal load (scalar plus scalar)
case IF_SVE_IP_4A:       // ...........mmmmm ...gggnnnnnttttt -- SVE load and broadcast quadword (scalar plus scalar)
case IF_SVE_IR_4A:       // ...........mmmmm ...gggnnnnnttttt -- SVE load multiple structures (quadwords, scalar plus scalar)
case IF_SVE_IT_4A:       // ...........mmmmm ...gggnnnnnttttt -- SVE load multiple structures (scalar plus scalar)
case IF_SVE_IU_4B:       // ...........mmmmm ...gggnnnnnttttt -- SVE 64-bit gather load (scalar plus 32-bit unpacked scaled offsets)
case IF_SVE_IU_4B_B:     // ...........mmmmm ...gggnnnnnttttt -- SVE 64-bit gather load (scalar plus 32-bit unpacked scaled offsets)
case IF_SVE_IU_4B_D:     // ...........mmmmm ...gggnnnnnttttt -- SVE 64-bit gather load (scalar plus 32-bit unpacked scaled offsets)
case IF_SVE_IW_4A:       // ...........mmmmm ...gggnnnnnttttt -- SVE2 128-bit gather load (vector plus scalar)
case IF_SVE_IX_4A:       // ...........mmmmm ...gggnnnnnttttt -- SVE2 64-bit gather non-temporal load (vector plus scalar)
case IF_SVE_IY_4A:       // ...........mmmmm ...gggnnnnnttttt -- SVE2 128-bit scatter store (vector plus scalar)
case IF_SVE_IZ_4A:       // ...........mmmmm ...gggnnnnnttttt -- SVE2 32-bit scatter non-temporal store (vector plus scalar)
case IF_SVE_IZ_4A_A:     // ...........mmmmm ...gggnnnnnttttt -- SVE2 32-bit scatter non-temporal store (vector plus scalar)
case IF_SVE_JA_4A:       // ...........mmmmm ...gggnnnnnttttt -- SVE2 64-bit scatter non-temporal store (vector plus scalar)
case IF_SVE_JB_4A:       // ...........mmmmm ...gggnnnnnttttt -- SVE contiguous non-temporal store (scalar plus scalar)
case IF_SVE_JC_4A:       // ...........mmmmm ...gggnnnnnttttt -- SVE store multiple structures (scalar plus scalar)
case IF_SVE_JD_4C:       // ...........mmmmm ...gggnnnnnttttt -- SVE contiguous store (scalar plus scalar)
case IF_SVE_JD_4C_A:     // ...........mmmmm ...gggnnnnnttttt -- SVE contiguous store (scalar plus scalar)
case IF_SVE_JF_4A:       // ...........mmmmm ...gggnnnnnttttt -- SVE store multiple structures (quadwords, scalar plus scalar)
case IF_SVE_JJ_4B:       // ...........mmmmm ...gggnnnnnttttt -- SVE 64-bit scatter store (scalar plus 64-bit scaled offsets)
case IF_SVE_JJ_4B_C:     // ...........mmmmm ...gggnnnnnttttt -- SVE 64-bit scatter store (scalar plus 64-bit scaled offsets)
case IF_SVE_JJ_4B_E:     // ...........mmmmm ...gggnnnnnttttt -- SVE 64-bit scatter store (scalar plus 64-bit scaled offsets)
case IF_SVE_JK_4B:       // ...........mmmmm ...gggnnnnnttttt -- SVE 64-bit scatter store (scalar plus 64-bit unscaled offsets)
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // mmmmm
   emitDispPredicateReg(id->idReg20(), PREDICATE_ZERO, id->idInsOpt(), true); // ggg
   emitDispSveReg(id->idReg30(), id->idInsOpt(), true); // ttttt
   emitDispReg(id->idReg40(), id->idInsOpt(), true); // nnnnn
   break;
case IF_SVE_HX_3A:       // ...........iiiii ...gggnnnnnttttt -- SVE 32-bit gather load (vector plus immediate)
case IF_SVE_HX_3A_B:     // ...........iiiii ...gggnnnnnttttt -- SVE 32-bit gather load (vector plus immediate)
case IF_SVE_HX_3A_E:     // ...........iiiii ...gggnnnnnttttt -- SVE 32-bit gather load (vector plus immediate)
case IF_SVE_IV_3A:       // ...........iiiii ...gggnnnnnttttt -- SVE 64-bit gather load (vector plus immediate)
case IF_SVE_JI_3A:       // ...........iiiii ...gggnnnnnttttt -- SVE 32-bit scatter store (vector plus immediate)
case IF_SVE_JI_3A_A:     // ...........iiiii ...gggnnnnnttttt -- SVE 32-bit scatter store (vector plus immediate)
case IF_SVE_JL_3A:       // ...........iiiii ...gggnnnnnttttt -- SVE 64-bit scatter store (vector plus immediate)
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // nnnnn
   emitDispPredicateReg(id->idReg20(), PREDICATE_ZERO, id->idInsOpt(), true); // ggg
   emitDispSveReg(id->idReg30(), id->idInsOpt(), true); // ttttt
   emitDispImm(); // iiiii
   break;
case IF_SVE_HY_3A:       // .........h.mmmmm ...gggnnnnn.oooo -- SVE 32-bit gather prefetch (scalar plus 32-bit scaled offsets)
case IF_SVE_HY_3A_A:     // .........h.mmmmm ...gggnnnnn.oooo -- SVE 32-bit gather prefetch (scalar plus 32-bit scaled offsets)
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // mmmmm
   emitDispPredicateReg(id->idReg20(), PREDICATE_ZERO, id->idInsOpt(), true); // ggg
   emitDispReg(id->idReg30(), id->idInsOpt(), true); // nnnnn
   break;
case IF_SVE_HY_3B:       // ...........mmmmm ...gggnnnnn.oooo -- SVE 32-bit gather prefetch (scalar plus 32-bit scaled offsets)
case IF_SVE_IB_3A:       // ...........mmmmm ...gggnnnnn.oooo -- SVE contiguous prefetch (scalar plus scalar)
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // mmmmm
   emitDispPredicateReg(id->idReg20(), PREDICATE_ZERO, id->idInsOpt(), true); // ggg
   emitDispReg(id->idReg30(), id->idInsOpt(), true); // nnnnn
   break;
case IF_SVE_HZ_2A:       // ...........iiiii ...gggnnnnn.oooo -- SVE 32-bit gather prefetch (vector plus immediate)
case IF_SVE_HZ_2A_B:     // ...........iiiii ...gggnnnnn.oooo -- SVE 32-bit gather prefetch (vector plus immediate)
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // nnnnn
   emitDispPredicateReg(id->idReg20(), PREDICATE_ZERO, id->idInsOpt(), true); // ggg
   emitDispImm(); // iiiii
   break;
case IF_SVE_IA_2A:       // ..........iiiiii ...gggnnnnn.oooo -- SVE contiguous prefetch (scalar plus immediate)
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // ggg
   emitDispReg(id->idReg20(), id->idInsOpt(), true); // nnnnn
   emitDispImm(); // iiiiii
   break;
case IF_SVE_IC_3A:       // ..........iiiiii ...gggnnnnnttttt -- SVE load and broadcast element
case IF_SVE_IC_3A_A:     // ..........iiiiii ...gggnnnnnttttt -- SVE load and broadcast element
case IF_SVE_IC_3A_B:     // ..........iiiiii ...gggnnnnnttttt -- SVE load and broadcast element
case IF_SVE_IC_3A_C:     // ..........iiiiii ...gggnnnnnttttt -- SVE load and broadcast element
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // ggg
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // ttttt
   emitDispReg(id->idReg30(), id->idInsOpt(), true); // nnnnn
   emitDispImm(); // iiiiii
   break;
case IF_SVE_ID_2A:       // ..........iiiiii ...iiinnnnn.TTTT -- SVE load predicate register
case IF_SVE_JG_2A:       // ..........iiiiii ...iiinnnnn.TTTT -- SVE store predicate register
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // TTTT
   emitDispReg(id->idReg20(), id->idInsOpt(), true); // nnnnn
   emitDispImm(); // iii
   emitDispImm(); // iiiiii
   break;
case IF_SVE_IE_2A:       // ..........iiiiii ...iiinnnnnttttt -- SVE load vector register
case IF_SVE_JH_2A:       // ..........iiiiii ...iiinnnnnttttt -- SVE store vector register
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // ttttt
   emitDispReg(id->idReg20(), id->idInsOpt(), true); // nnnnn
   emitDispImm(); // iii
   emitDispImm(); // iiiiii
   break;
case IF_SVE_IH_3A:       // ............iiii ...gggnnnnnttttt -- SVE contiguous load (quadwords, scalar plus immediate)
case IF_SVE_IH_3A_A:     // ............iiii ...gggnnnnnttttt -- SVE contiguous load (quadwords, scalar plus immediate)
case IF_SVE_IH_3A_F:     // ............iiii ...gggnnnnnttttt -- SVE contiguous load (quadwords, scalar plus immediate)
case IF_SVE_IJ_3A:       // ............iiii ...gggnnnnnttttt -- SVE contiguous load (scalar plus immediate)
case IF_SVE_IJ_3A_D:     // ............iiii ...gggnnnnnttttt -- SVE contiguous load (scalar plus immediate)
case IF_SVE_IJ_3A_E:     // ............iiii ...gggnnnnnttttt -- SVE contiguous load (scalar plus immediate)
case IF_SVE_IJ_3A_F:     // ............iiii ...gggnnnnnttttt -- SVE contiguous load (scalar plus immediate)
case IF_SVE_IJ_3A_G:     // ............iiii ...gggnnnnnttttt -- SVE contiguous load (scalar plus immediate)
case IF_SVE_IL_3A:       // ............iiii ...gggnnnnnttttt -- SVE contiguous non-fault load (scalar plus immediate)
case IF_SVE_IL_3A_A:     // ............iiii ...gggnnnnnttttt -- SVE contiguous non-fault load (scalar plus immediate)
case IF_SVE_IL_3A_B:     // ............iiii ...gggnnnnnttttt -- SVE contiguous non-fault load (scalar plus immediate)
case IF_SVE_IL_3A_C:     // ............iiii ...gggnnnnnttttt -- SVE contiguous non-fault load (scalar plus immediate)
case IF_SVE_IM_3A:       // ............iiii ...gggnnnnnttttt -- SVE contiguous non-temporal load (scalar plus immediate)
case IF_SVE_IO_3A:       // ............iiii ...gggnnnnnttttt -- SVE load and broadcast quadword (scalar plus immediate)
case IF_SVE_IQ_3A:       // ............iiii ...gggnnnnnttttt -- SVE load multiple structures (quadwords, scalar plus immediate)
case IF_SVE_IS_3A:       // ............iiii ...gggnnnnnttttt -- SVE load multiple structures (scalar plus immediate)
case IF_SVE_JE_3A:       // ............iiii ...gggnnnnnttttt -- SVE store multiple structures (quadwords, scalar plus immediate)
case IF_SVE_JM_3A:       // ............iiii ...gggnnnnnttttt -- SVE contiguous non-temporal store (scalar plus immediate)
case IF_SVE_JN_3C:       // ............iiii ...gggnnnnnttttt -- SVE contiguous store (scalar plus immediate)
case IF_SVE_JN_3C_D:     // ............iiii ...gggnnnnnttttt -- SVE contiguous store (scalar plus immediate)
case IF_SVE_JO_3A:       // ............iiii ...gggnnnnnttttt -- SVE store multiple structures (scalar plus immediate)
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // ggg
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // ttttt
   emitDispReg(id->idReg30(), id->idInsOpt(), true); // nnnnn
   emitDispImm(); // iiii
   break;
case IF_SVE_JD_4A:       // .........xxmmmmm ...gggnnnnnttttt -- SVE contiguous store (scalar plus scalar)
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // ggg
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // ttttt
   emitDispReg(id->idReg30(), id->idInsOpt(), true); // nnnnn
   emitDispReg(id->idReg40(), id->idInsOpt(), true); // mmmmm
   break;
case IF_SVE_JD_4B:       // ..........xmmmmm ...gggnnnnnttttt -- SVE contiguous store (scalar plus scalar)
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // ggg
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // ttttt
   emitDispReg(id->idReg30(), id->idInsOpt(), true); // nnnnn
   emitDispReg(id->idReg40(), id->idInsOpt(), true); // mmmmm
   break;
case IF_SVE_JJ_4A:       // ...........mmmmm .h.gggnnnnnttttt -- SVE 64-bit scatter store (scalar plus 64-bit scaled offsets)
case IF_SVE_JJ_4A_B:     // ...........mmmmm .h.gggnnnnnttttt -- SVE 64-bit scatter store (scalar plus 64-bit scaled offsets)
case IF_SVE_JJ_4A_C:     // ...........mmmmm .h.gggnnnnnttttt -- SVE 64-bit scatter store (scalar plus 64-bit scaled offsets)
case IF_SVE_JJ_4A_D:     // ...........mmmmm .h.gggnnnnnttttt -- SVE 64-bit scatter store (scalar plus 64-bit scaled offsets)
case IF_SVE_JK_4A:       // ...........mmmmm .h.gggnnnnnttttt -- SVE 64-bit scatter store (scalar plus 64-bit unscaled offsets)
case IF_SVE_JK_4A_B:     // ...........mmmmm .h.gggnnnnnttttt -- SVE 64-bit scatter store (scalar plus 64-bit unscaled offsets)
   emitDispSveReg(id->idReg10(), id->idInsOpt(), true); // mmmmm
   emitDispPredicateReg(id->idReg20(), PREDICATE_ZERO, id->idInsOpt(), true); // ggg
   emitDispSveReg(id->idReg30(), id->idInsOpt(), true); // ttttt
   emitDispReg(id->idReg40(), id->idInsOpt(), true); // nnnnn
   break;
case IF_SVE_JN_3A:       // .........xx.iiii ...gggnnnnnttttt -- SVE contiguous store (scalar plus immediate)
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // ggg
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // ttttt
   emitDispReg(id->idReg30(), id->idInsOpt(), true); // nnnnn
   emitDispImm(); // iiii
   break;
case IF_SVE_JN_3B:       // ..........x.iiii ...gggnnnnnttttt -- SVE contiguous store (scalar plus immediate)
   emitDispPredicateReg(id->idReg10(), PREDICATE_ZERO, id->idInsOpt(), true); // ggg
   emitDispSveReg(id->idReg20(), id->idInsOpt(), true); // ttttt
   emitDispReg(id->idReg30(), id->idInsOpt(), true); // nnnnn
   emitDispImm(); // iiii
   break;
