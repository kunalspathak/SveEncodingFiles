// Throughput
#define PERFSCORE_THROUGHPUT_ZERO 0.0f
#define PERFSCORE_THROUGHPUT_6X (1.0f / 6.0f)f
#define PERFSCORE_THROUGHPUT_5X 0.2f
#define PERFSCORE_THROUGHPUT_4X 0.25f
#define PERFSCORE_THROUGHPUT_3X (1.0f / 3.0f)f
#define PERFSCORE_THROUGHPUT_2X 0.5f
#define PERFSCORE_THROUGHPUT_1C 1.0f
#define PERFSCORE_THROUGHPUT_2C 2.0f
#define PERFSCORE_THROUGHPUT_3C 3.0f
#define PERFSCORE_THROUGHPUT_4C 4.0f
#define PERFSCORE_THROUGHPUT_5C 5.0f
#define PERFSCORE_THROUGHPUT_6C 6.0f
#define PERFSCORE_THROUGHPUT_7C 7.0f
#define PERFSCORE_THROUGHPUT_8C 8.0f
#define PERFSCORE_THROUGHPUT_9C 9.0f
#define PERFSCORE_THROUGHPUT_10C 10.0f
#define PERFSCORE_THROUGHPUT_13C 13.0f
#define PERFSCORE_THROUGHPUT_19C 19.0f
#define PERFSCORE_THROUGHPUT_25C 25.0f
#define PERFSCORE_THROUGHPUT_33C 33.0f
#define PERFSCORE_THROUGHPUT_50C 50.0f
#define PERFSCORE_THROUGHPUT_52C 52.0f
#define PERFSCORE_THROUGHPUT_57C 57.0f
#define PERFSCORE_THROUGHPUT_140C 140.0f
#define PERFSCORE_THROUGHPUT_2f_3fC (2.0f / 3.0f)f
#define PERFSCORE_THROUGHPUT_2f_9fC (2.0f / 9.0f)f
#define PERFSCORE_THROUGHPUT_9X (1.0f / 9.0f)f
#define PERFSCORE_THROUGHPUT_12X (1.0f / 12.0f)f
#define PERFSCORE_THROUGHPUT_14X (1.0f / 14.0f)f
#define PERFSCORE_THROUGHPUT_11X (1.0f / 11.0f)f
#define PERFSCORE_THROUGHPUT_20X (1.0f / 20.0f)f
// Latency
#define PERFSCORE_LATENCY_ZERO 0.0f
#define PERFSCORE_LATENCY_1C 1.0f
#define PERFSCORE_LATENCY_2C 2.0f
#define PERFSCORE_LATENCY_3C 3.0f
#define PERFSCORE_LATENCY_4C 4.0f
#define PERFSCORE_LATENCY_5C 5.0f
#define PERFSCORE_LATENCY_6C 6.0f
#define PERFSCORE_LATENCY_7C 7.0f
#define PERFSCORE_LATENCY_8C 8.0f
#define PERFSCORE_LATENCY_9C 9.0f
#define PERFSCORE_LATENCY_10C 10.0f
#define PERFSCORE_LATENCY_11C 11.0f
#define PERFSCORE_LATENCY_12C 12.0f
#define PERFSCORE_LATENCY_13C 13.0f
#define PERFSCORE_LATENCY_15C 15.0f
#define PERFSCORE_LATENCY_16C 16.0f
#define PERFSCORE_LATENCY_18C 18.0f
#define PERFSCORE_LATENCY_20C 20.0f
#define PERFSCORE_LATENCY_22C 22.0f
#define PERFSCORE_LATENCY_23C 23.0f
#define PERFSCORE_LATENCY_26C 26.0f
#define PERFSCORE_LATENCY_62C 62.0f
#define PERFSCORE_LATENCY_69C 69.0f
#define PERFSCORE_LATENCY_140C 140.0f
#define PERFSCORE_LATENCY_400C 400.0f

case IF_SVE_AA_3A:        // ........xx...... ...gggmmmmmddddd -- SVE bitwise logical operations (predicated)
    switch(ins)
    {
        case INS_sve_and:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_orr:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_eor:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_bic:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_AB_3A:        // ........xx...... ...gggmmmmmddddd -- SVE integer add/subtract vectors (predicated)
    switch(ins)
    {
        case INS_sve_add:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_sub:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_subr:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_AC_3A:        // ........xx...... ...gggmmmmmddddd -- SVE integer divide vectors (predicated)
    switch(ins)
    {
        case INS_sve_udiv:
            result.insThroughput = PERFSCORE_THROUGHPUT_20X;
            result.insLatency    = PERFSCORE_LATENCY_20C;
        case INS_sve_sdiv:
            result.insThroughput = PERFSCORE_THROUGHPUT_20X;
            result.insLatency    = PERFSCORE_LATENCY_20C;
        case INS_sve_sdivr:
            result.insThroughput = PERFSCORE_THROUGHPUT_20X;
            result.insLatency    = PERFSCORE_LATENCY_20C;
        case INS_sve_udivr:
            result.insThroughput = PERFSCORE_THROUGHPUT_20X;
            result.insLatency    = PERFSCORE_LATENCY_20C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_AD_3A:        // ........xx...... ...gggmmmmmddddd -- SVE integer min/max/difference (predicated)
    switch(ins)
    {
        case INS_sve_smax:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_umax:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_smin:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_umin:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_sabd:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uabd:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_AE_3A:        // ........xx...... ...gggmmmmmddddd -- SVE integer multiply vectors (predicated)
    switch(ins)
    {
        case INS_sve_mul:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        case INS_sve_smulh:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        case INS_sve_umulh:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_AN_3A:        // ........xx...... ...gggmmmmmddddd -- SVE bitwise shift by vector (predicated)
    switch(ins)
    {
        case INS_sve_asr:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_lsl:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_lsr:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_asrr:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_lsrr:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_lslr:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_AO_3A:        // ........xx...... ...gggmmmmmddddd -- SVE bitwise shift by wide elements (predicated)
    switch(ins)
    {
        case INS_sve_asr:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_lsl:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_lsr:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_CM_3A:        // ........xx...... ...gggmmmmmddddd -- SVE conditionally broadcast element to vector
    switch(ins)
    {
        case INS_sve_clasta:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_clastb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_CN_3A:        // ........xx...... ...gggmmmmmddddd -- SVE conditionally extract element to SIMD&FP scalar
    switch(ins)
    {
        case INS_sve_clasta:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_clastb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_CO_3A:        // ........xx...... ...gggmmmmmddddd -- SVE conditionally extract element to general register
    switch(ins)
    {
        case INS_sve_clasta:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_clastb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_EP_3A:        // ........xx...... ...gggmmmmmddddd -- SVE2 integer halving add/subtract (predicated)
    switch(ins)
    {
        case INS_sve_shadd:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_srhadd:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_shsub:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uhadd:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_urhadd:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uhsub:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_shsubr:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uhsubr:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_ER_3A:        // ........xx...... ...gggmmmmmddddd -- SVE2 integer pairwise arithmetic
    switch(ins)
    {
        case INS_sve_addp:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_smaxp:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_sminp:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_umaxp:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_uminp:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_ET_3A:        // ........xx...... ...gggmmmmmddddd -- SVE2 saturating add/subtract
    switch(ins)
    {
        case INS_sve_sqadd:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_sqsub:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uqadd:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uqsub:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_suqadd:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_usqadd:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_sqsubr:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uqsubr:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_EU_3A:        // ........xx...... ...gggmmmmmddddd -- SVE2 saturating/rounding bitwise shift left (predicated)
    switch(ins)
    {
        case INS_sve_sqshl:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_uqshl:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_srshl:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_sqrshl:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_urshl:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_uqrshl:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_srshlr:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_urshlr:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_sqshlr:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_uqshlr:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_sqrshlr:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_uqrshlr:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_GR_3A:        // ........xx...... ...gggmmmmmddddd -- SVE2 floating-point pairwise operations
    switch(ins)
    {
        case INS_sve_fmaxnmp:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_faddp:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_fmaxp:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_fminnmp:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_fminp:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_HJ_3A:        // ........xx...... ...gggmmmmmddddd -- SVE floating-point serial reduction (predicated)
    switch(ins)
    {
        case INS_sve_fadda:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_HL_3A:        // ........xx...... ...gggmmmmmddddd -- SVE floating-point arithmetic (predicated)
    switch(ins)
    {
        case INS_sve_fmulx:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_fabd:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_fmul:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_fmaxnm:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_fadd:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_fmax:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_fminnm:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_fsub:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_famax:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_fmin:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_fdiv:
            result.insThroughput = PERFSCORE_THROUGHPUT_14X;
            result.insLatency    = PERFSCORE_LATENCY_15C;
        case INS_sve_famin:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_fscale:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_fsubr:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_fdivr:
            result.insThroughput = PERFSCORE_THROUGHPUT_14X;
            result.insLatency    = PERFSCORE_LATENCY_15C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_AB_3B:        // ................ ...gggmmmmmddddd -- SVE integer add/subtract vectors (predicated)
    switch(ins)
    {
        case INS_sve_addpt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_subpt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_HL_3B:        // ................ ...gggmmmmmddddd -- SVE floating-point arithmetic (predicated)
    switch(ins)
    {
        case INS_sve_bfmul:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_bfadd:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_bfsub:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_bfmaxnm:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_bfminnm:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_bfmax:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_bfmin:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_AF_3A:        // ........xx...... ...gggnnnnnddddd -- SVE bitwise logical reduction (predicated)
    switch(ins)
    {
        case INS_sve_orv:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        case INS_sve_eorv:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        case INS_sve_andv:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_AG_3A:        // ........xx...... ...gggnnnnnddddd -- SVE bitwise logical reduction (quadwords)
    switch(ins)
    {
        case INS_sve_orqv:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_eorqv:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_andqv:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_AI_3A:        // ........xx...... ...gggnnnnnddddd -- SVE integer add reduction (predicated)
    switch(ins)
    {
        case INS_sve_saddv:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        case INS_sve_uaddv:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_AJ_3A:        // ........xx...... ...gggnnnnnddddd -- SVE integer add reduction (quadwords)
    switch(ins)
    {
        case INS_sve_addqv:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_AK_3A:        // ........xx...... ...gggnnnnnddddd -- SVE integer min/max reduction (predicated)
    switch(ins)
    {
        case INS_sve_smaxv:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_sminv:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_umaxv:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_uminv:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_AL_3A:        // ........xx...... ...gggnnnnnddddd -- SVE integer min/max reduction (quadwords)
    switch(ins)
    {
        case INS_sve_smaxqv:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_umaxqv:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_sminqv:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_uminqv:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_AP_3A:        // ........xx...... ...gggnnnnnddddd -- SVE bitwise unary operations (predicated)
    switch(ins)
    {
        case INS_sve_clz:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_cls:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_cnt:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_fabs:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_not:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_fneg:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_cnot:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_AQ_3A:        // ........xx...... ...gggnnnnnddddd -- SVE integer unary operations (predicated)
    switch(ins)
    {
        case INS_sve_sxtb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_sxth:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_sxtw:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uxtb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uxth:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_neg:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_abs:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uxtw:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_CL_3A:        // ........xx...... ...gggnnnnnddddd -- SVE compress active elements
    switch(ins)
    {
        case INS_sve_compact:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_CP_3A:        // ........xx...... ...gggnnnnnddddd -- SVE copy SIMD&FP scalar register to vector (predicated)
    switch(ins)
    {
        case INS_sve_mov:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_cpy:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_CQ_3A:        // ........xx...... ...gggnnnnnddddd -- SVE copy general register to vector (predicated)
    switch(ins)
    {
        case INS_sve_mov:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_cpy:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_CR_3A:        // ........xx...... ...gggnnnnnddddd -- SVE extract element to SIMD&FP scalar register
    switch(ins)
    {
        case INS_sve_lasta:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        case INS_sve_lastb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_CS_3A:        // ........xx...... ...gggnnnnnddddd -- SVE extract element to general register
    switch(ins)
    {
        case INS_sve_lasta:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        case INS_sve_lastb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_CU_3A:        // ........xx...... ...gggnnnnnddddd -- SVE reverse within elements
    switch(ins)
    {
        case INS_sve_rbit:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_revb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_revh:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_revw:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_EQ_3A:        // ........xx...... ...gggnnnnnddddd -- SVE2 integer pairwise add and accumulate long
    switch(ins)
    {
        case INS_sve_sadalp:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_uadalp:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_ES_3A:        // ........xx...... ...gggnnnnnddddd -- SVE2 integer unary operations (predicated)
    switch(ins)
    {
        case INS_sve_sqabs:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_sqneg:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_urecpe:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_ursqrte:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_GS_3A:        // ........xx...... ...gggnnnnnddddd -- SVE floating-point recursive reduction (quadwords)
    switch(ins)
    {
        case INS_sve_faddqv:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_fmaxnmqv:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_fminnmqv:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_fmaxqv:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_fminqv:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_HE_3A:        // ........xx...... ...gggnnnnnddddd -- SVE floating-point recursive reduction
    switch(ins)
    {
        case INS_sve_fmaxnmv:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_fmaxv:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_fminnmv:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_fminv:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_faddv:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_HQ_3A:        // ........xx...... ...gggnnnnnddddd -- SVE floating-point round to integral value
    switch(ins)
    {
        case INS_sve_frintn:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_frintm:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_frintp:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_frintz:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_frinta:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_frintx:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_frinti:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_HR_3A:        // ........xx...... ...gggnnnnnddddd -- SVE floating-point unary operations
    switch(ins)
    {
        case INS_sve_frecpx:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_fsqrt:
            result.insThroughput = PERFSCORE_THROUGHPUT_14X;
            result.insLatency    = PERFSCORE_LATENCY_16C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_AH_3A:        // ........xx.....M ...gggnnnnnddddd -- SVE constructive prefix (predicated)
    switch(ins)
    {
        case INS_sve_movprfx:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_AM_2A:        // ........xx...... ...gggxxiiiddddd -- SVE bitwise shift by immediate (predicated)
    switch(ins)
    {
        case INS_sve_asr:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_lsl:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_lsr:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_srshr:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_sqshl:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_urshr:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_sqshlu:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_uqshl:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_asrd:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_AR_4A:        // ........xx.mmmmm ...gggnnnnnddddd -- SVE integer multiply-accumulate writing addend (predicated)
    switch(ins)
    {
        case INS_sve_mla:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        case INS_sve_mls:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_GI_4A:        // ........xx.mmmmm ...gggnnnnnddddd -- SVE2 histogram generation (vector)
    switch(ins)
    {
        case INS_sve_histcnt:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_HU_4A:        // ........xx.mmmmm ...gggnnnnnddddd -- SVE floating-point multiply-accumulate writing addend
    switch(ins)
    {
        case INS_sve_fmla:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_fmls:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_fnmla:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_fnmls:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_AS_4A:        // ........xx.mmmmm ...gggaaaaaddddd -- SVE integer multiply-add writing multiplicand (predicated)
    switch(ins)
    {
        case INS_sve_mad:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        case INS_sve_msb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_AT_3A:        // ........xx.mmmmm ......nnnnnddddd -- SVE integer add/subtract vectors (unpredicated)
    switch(ins)
    {
        case INS_sve_add:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_sub:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_sqadd:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_sqsub:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uqadd:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uqsub:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_BA_3A:        // ........xx.mmmmm ......nnnnnddddd -- SVE index generation (register start, register increment)
    switch(ins)
    {
        case INS_sve_index:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_8C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_BD_3A:        // ........xx.mmmmm ......nnnnnddddd -- SVE2 integer multiply vectors (unpredicated)
    switch(ins)
    {
        case INS_sve_mul:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        case INS_sve_smulh:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        case INS_sve_umulh:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_BE_3A:        // ........xx.mmmmm ......nnnnnddddd -- SVE2 signed saturating doubling multiply high (unpredicated)
    switch(ins)
    {
        case INS_sve_sqdmulh:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        case INS_sve_sqrdmulh:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_BG_3A:        // ........xx.mmmmm ......nnnnnddddd -- SVE bitwise shift by wide elements (unpredicated)
    switch(ins)
    {
        case INS_sve_asr:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_lsl:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_lsr:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_BK_3A:        // ........xx.mmmmm ......nnnnnddddd -- SVE floating-point trig select coefficient
    switch(ins)
    {
        case INS_sve_ftssel:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_BR_3A:        // ........xx.mmmmm ......nnnnnddddd -- SVE permute vector segments
    switch(ins)
    {
        case INS_sve_uzp1:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_trn1:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_zip1:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uzp2:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_trn2:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_zip2:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_BZ_3A:        // ........xx.mmmmm ......nnnnnddddd -- SVE table lookup (three sources)
    switch(ins)
    {
        case INS_sve_tbl:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_tbx:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_BZ_3A_A:      // ........xx.mmmmm ......nnnnnddddd -- SVE table lookup (three sources)
    switch(ins)
    {
        case INS_sve_tbl:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_CA_3A:        // ........xx.mmmmm ......nnnnnddddd -- sve_int_perm_tbxquads
    switch(ins)
    {
        case INS_sve_tbxq:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_EH_3A:        // ........xx.mmmmm ......nnnnnddddd -- SVE integer dot product (unpredicated)
    switch(ins)
    {
        case INS_sve_sdot:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_udot:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_EL_3A:        // ........xx.mmmmm ......nnnnnddddd -- SVE2 integer multiply-add long
    switch(ins)
    {
        case INS_sve_smlalb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_smlalt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_umlalb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_umlalt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_smlslb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_smlslt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_umlslb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_umlslt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_EM_3A:        // ........xx.mmmmm ......nnnnnddddd -- SVE2 saturating multiply-add high
    switch(ins)
    {
        case INS_sve_sqrdmlah:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        case INS_sve_sqrdmlsh:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_EN_3A:        // ........xx.mmmmm ......nnnnnddddd -- SVE2 saturating multiply-add interleaved long
    switch(ins)
    {
        case INS_sve_sqdmlalbt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_sqdmlslbt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_EO_3A:        // ........xx.mmmmm ......nnnnnddddd -- SVE2 saturating multiply-add long
    switch(ins)
    {
        case INS_sve_sqdmlalb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_sqdmlalt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_sqdmlslb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_sqdmlslt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_EV_3A:        // ........xx.mmmmm ......nnnnnddddd -- SVE integer clamp
    switch(ins)
    {
        case INS_sve_sclamp:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_uclamp:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_EX_3A:        // ........xx.mmmmm ......nnnnnddddd -- SVE permute vector elements (quadwords)
    switch(ins)
    {
        case INS_sve_zipq1:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_zipq2:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_uzpq1:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_uzpq2:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_tblq:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_FL_3A:        // ........xx.mmmmm ......nnnnnddddd -- SVE2 integer add/subtract long
    switch(ins)
    {
        case INS_sve_saddlb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_saddlt:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uaddlb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uaddlt:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_ssublb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_ssublt:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_usublb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_usublt:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_sabdlb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_sabdlt:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uabdlb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uabdlt:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_FM_3A:        // ........xx.mmmmm ......nnnnnddddd -- SVE2 integer add/subtract wide
    switch(ins)
    {
        case INS_sve_saddwb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_saddwt:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uaddwb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uaddwt:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_ssubwb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_ssubwt:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_usubwb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_usubwt:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_FN_3A:        // ........xx.mmmmm ......nnnnnddddd -- SVE2 integer multiply long
    switch(ins)
    {
        case INS_sve_smullb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_smullt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_umullb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_umullt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_sqdmullb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_sqdmullt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_pmullb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_pmullt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_FP_3A:        // ........xx.mmmmm ......nnnnnddddd -- SVE2 bitwise exclusive-or interleaved
    switch(ins)
    {
        case INS_sve_eorbt:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_eortb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_FQ_3A:        // ........xx.mmmmm ......nnnnnddddd -- SVE2 bitwise permute
    switch(ins)
    {
        case INS_sve_bext:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        case INS_sve_bdep:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        case INS_sve_bgrp:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_FS_3A:        // ........xx.mmmmm ......nnnnnddddd -- SVE2 integer add/subtract interleaved long
    switch(ins)
    {
        case INS_sve_saddlbt:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_ssublbt:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_ssubltb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_FW_3A:        // ........xx.mmmmm ......nnnnnddddd -- SVE2 integer absolute difference and accumulate
    switch(ins)
    {
        case INS_sve_saba:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_uaba:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_FX_3A:        // ........xx.mmmmm ......nnnnnddddd -- SVE2 integer absolute difference and accumulate long
    switch(ins)
    {
        case INS_sve_sabalb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_sabalt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_uabalb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_uabalt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_GC_3A:        // ........xx.mmmmm ......nnnnnddddd -- SVE2 integer add/subtract narrow high part
    switch(ins)
    {
        case INS_sve_addhnb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_addhnt:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_raddhnb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_raddhnt:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_subhnb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_subhnt:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_rsubhnb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_rsubhnt:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_GF_3A:        // ........xx.mmmmm ......nnnnnddddd -- SVE2 histogram generation (segment)
    switch(ins)
    {
        case INS_sve_histseg:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_GW_3A:        // ........xx.mmmmm ......nnnnnddddd -- SVE FP clamp
    switch(ins)
    {
        case INS_sve_fclamp:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_HK_3A:        // ........xx.mmmmm ......nnnnnddddd -- SVE floating-point arithmetic (unpredicated)
    switch(ins)
    {
        case INS_sve_frecps:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_frsqrts:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_fmul:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_fadd:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_fsub:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_ftsmul:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_AT_3B:        // ...........mmmmm ......nnnnnddddd -- SVE integer add/subtract vectors (unpredicated)
    switch(ins)
    {
        case INS_sve_addpt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_subpt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_AU_3A:        // ...........mmmmm ......nnnnnddddd -- SVE bitwise logical operations (unpredicated)
    switch(ins)
    {
        case INS_sve_mov:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_and:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_orr:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_eor:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_bic:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_BD_3B:        // ...........mmmmm ......nnnnnddddd -- SVE2 integer multiply vectors (unpredicated)
    switch(ins)
    {
        case INS_sve_pmul:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_BR_3B:        // ...........mmmmm ......nnnnnddddd -- SVE permute vector segments
    switch(ins)
    {
        case INS_sve_uzp1:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_trn1:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_zip1:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uzp2:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_trn2:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_zip2:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_EF_3A:        // ...........mmmmm ......nnnnnddddd -- SVE two-way dot product
    switch(ins)
    {
        case INS_sve_sdot:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_udot:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_EI_3A:        // ...........mmmmm ......nnnnnddddd -- SVE mixed sign dot product
    switch(ins)
    {
        case INS_sve_usdot:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_EW_3A:        // ...........mmmmm ......nnnnnddddd -- SVE2 multiply-add (checked pointer)
    switch(ins)
    {
        case INS_sve_mlapt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_FN_3B:        // ...........mmmmm ......nnnnnddddd -- SVE2 integer multiply long
    switch(ins)
    {
        case INS_sve_pmullb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_pmullt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_FO_3A:        // ...........mmmmm ......nnnnnddddd -- SVE integer matrix multiply accumulate
    switch(ins)
    {
        case INS_sve_smmla:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_usmmla:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_ummla:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_GJ_3A:        // ...........mmmmm ......nnnnnddddd -- SVE2 crypto constructive binary operations
    switch(ins)
    {
        case INS_sve_rax1:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_sm4ekey:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_GN_3A:        // ...........mmmmm ......nnnnnddddd -- SVE2 FP8 multiply-add long
    switch(ins)
    {
        case INS_sve_fmlalb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_fmlalt:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_GO_3A:        // ...........mmmmm ......nnnnnddddd -- SVE2 FP8 multiply-add long long
    switch(ins)
    {
        case INS_sve_fmlallbb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_fmlallbt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_fmlalltb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_fmlalltt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_GW_3B:        // ...........mmmmm ......nnnnnddddd -- SVE FP clamp
    switch(ins)
    {
        case INS_sve_bfclamp:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_HA_3A:        // ...........mmmmm ......nnnnnddddd -- SVE BFloat16 floating-point dot product
    switch(ins)
    {
        case INS_sve_fdot:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_bfdot:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_HA_3A_E:      // ...........mmmmm ......nnnnnddddd -- SVE BFloat16 floating-point dot product
    switch(ins)
    {
        case INS_sve_fdot:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_HA_3A_F:      // ...........mmmmm ......nnnnnddddd -- SVE BFloat16 floating-point dot product
    switch(ins)
    {
        case INS_sve_fdot:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_HB_3A:        // ...........mmmmm ......nnnnnddddd -- SVE floating-point multiply-add long
    switch(ins)
    {
        case INS_sve_fmlalb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_fmlalt:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_fmlslb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_fmlslt:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_bfmlalb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_bfmlalt:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_bfmlslb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_bfmlslt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_HD_3A:        // ...........mmmmm ......nnnnnddddd -- SVE floating point matrix multiply accumulate
    switch(ins)
    {
        case INS_sve_bfmmla:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_HD_3A_A:      // ...........mmmmm ......nnnnnddddd -- SVE floating point matrix multiply accumulate
    switch(ins)
    {
        case INS_sve_fmmla:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_HK_3B:        // ...........mmmmm ......nnnnnddddd -- SVE floating-point arithmetic (unpredicated)
    switch(ins)
    {
        case INS_sve_bfmul:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_bfadd:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_bfsub:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_AV_3A:        // ...........mmmmm ......kkkkkddddd -- SVE2 bitwise ternary operations
    switch(ins)
    {
        case INS_sve_bsl:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_eor3:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_bcax:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_bsl1n:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_bsl2n:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_nbsl:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_AW_2A:        // ........xx.xxiii ......mmmmmddddd -- sve_int_rotate_imm
    switch(ins)
    {
        case INS_sve_xar:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_AX_1A:        // ........xx.iiiii ......iiiiiddddd -- SVE index generation (immediate start, immediate increment)
    switch(ins)
    {
        case INS_sve_index:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_8C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_AY_2A:        // ........xx.mmmmm ......iiiiiddddd -- SVE index generation (immediate start, register increment)
    switch(ins)
    {
        case INS_sve_index:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_8C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_AZ_2A:        // ........xx.iiiii ......nnnnnddddd -- SVE index generation (register start, immediate increment)
    switch(ins)
    {
        case INS_sve_index:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_8C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_BB_2A:        // ...........nnnnn .....iiiiiiddddd -- SVE stack frame adjustment
    switch(ins)
    {
        case INS_sve_addvl:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_addpl:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_BC_1A:        // ................ .....iiiiiiddddd -- SVE stack frame size
    switch(ins)
    {
        case INS_sve_rdvl:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_BF_2A:        // ........xx.xxiii ......nnnnnddddd -- SVE bitwise shift by immediate (unpredicated)
    switch(ins)
    {
        case INS_sve_asr:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_lsl:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_lsr:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_FT_2A:        // ........xx.xxiii ......nnnnnddddd -- SVE2 bitwise shift and insert
    switch(ins)
    {
        case INS_sve_sri:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_sli:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_FU_2A:        // ........xx.xxiii ......nnnnnddddd -- SVE2 bitwise shift right and accumulate
    switch(ins)
    {
        case INS_sve_ssra:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_srsra:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_usra:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_ursra:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_BH_3A:        // .........x.mmmmm ....hhnnnnnddddd -- SVE address generation
    switch(ins)
    {
        case INS_sve_adr:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_BH_3B:        // ...........mmmmm ....hhnnnnnddddd -- SVE address generation
    switch(ins)
    {
        case INS_sve_adr:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_BH_3B_A:      // ...........mmmmm ....hhnnnnnddddd -- SVE address generation
    switch(ins)
    {
        case INS_sve_adr:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_BI_2A:        // ................ ......nnnnnddddd -- SVE constructive prefix (unpredicated)
    switch(ins)
    {
        case INS_sve_movprfx:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_HH_2A:        // ................ ......nnnnnddddd -- SVE2 FP8 upconverts
    switch(ins)
    {
        case INS_sve_f1cvt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_f2cvt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_bf1cvt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_bf2cvt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_f1cvtlt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_f2cvtlt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_bf1cvtlt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_bf2cvtlt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_BJ_2A:        // ........xx...... ......nnnnnddddd -- SVE floating-point exponential accelerator
    switch(ins)
    {
        case INS_sve_fexpa:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_CB_2A:        // ........xx...... ......nnnnnddddd -- SVE broadcast general register
    switch(ins)
    {
        case INS_sve_mov:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_dup:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_CG_2A:        // ........xx...... ......nnnnnddddd -- SVE reverse vector elements
    switch(ins)
    {
        case INS_sve_rev:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_CH_2A:        // ........xx...... ......nnnnnddddd -- SVE unpack vector elements
    switch(ins)
    {
        case INS_sve_sunpkhi:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_sunpklo:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uunpkhi:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uunpklo:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_HF_2A:        // ........xx...... ......nnnnnddddd -- SVE floating-point reciprocal estimate (unpredicated)
    switch(ins)
    {
        case INS_sve_frecpe:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_frsqrte:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_BL_1A:        // ............iiii ......pppppddddd -- SVE element count
    switch(ins)
    {
        case INS_sve_cntb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_cntd:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_cnth:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_cntw:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_BM_1A:        // ............iiii ......pppppddddd -- SVE inc/dec register by element count
    switch(ins)
    {
        case INS_sve_incb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_incd:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_inch:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_incw:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_decb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_decd:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_dech:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_decw:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_BN_1A:        // ............iiii ......pppppddddd -- SVE inc/dec vector by element count
    switch(ins)
    {
        case INS_sve_incd:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_inch:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_incw:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_decd:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_dech:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_decw:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_BP_1A:        // ............iiii ......pppppddddd -- SVE saturating inc/dec vector by element count
    switch(ins)
    {
        case INS_sve_sqinch:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uqinch:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_sqdech:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uqdech:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_sqincw:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uqincw:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_sqdecw:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uqdecw:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_sqincd:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uqincd:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_sqdecd:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uqdecd:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_BO_1A:        // ...........Xiiii ......pppppddddd -- SVE saturating inc/dec register by element count
    switch(ins)
    {
        case INS_sve_sqincb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uqincb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_sqdecb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uqdecb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_sqinch:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uqinch:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_sqdech:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uqdech:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_sqincw:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uqincw:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_sqdecw:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uqdecw:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_sqincd:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uqincd:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_sqdecd:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uqdecd:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_BQ_2A:        // ...........iiiii ...iiinnnnnddddd -- SVE extract vector (immediate offset, destructive)
    switch(ins)
    {
        case INS_sve_ext:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_BQ_2B:        // ...........iiiii ...iiimmmmmddddd -- SVE extract vector (immediate offset, destructive)
    switch(ins)
    {
        case INS_sve_ext:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_BS_1A:        // ..............ii iiiiiiiiiiiddddd -- SVE bitwise logical with immediate (unpredicated)
    switch(ins)
    {
        case INS_sve_and:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_orr:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_eor:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_bic:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_orn:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_eon:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_BT_1A:        // ..............ii iiiiiiiiiiiddddd -- SVE broadcast bitmask immediate
    switch(ins)
    {
        case INS_sve_mov:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_dupm:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_BU_2A:        // ........xx..gggg ...iiiiiiiiddddd -- SVE copy floating-point immediate (predicated)
    switch(ins)
    {
        case INS_sve_fmov:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_fcpy:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_BV_2A:        // ........xx..gggg ..hiiiiiiiiddddd -- SVE copy integer immediate (predicated)
    switch(ins)
    {
        case INS_sve_mov:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_cpy:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_BV_2A_A:      // ........xx..gggg ..hiiiiiiiiddddd -- SVE copy integer immediate (predicated)
    switch(ins)
    {
        case INS_sve_cpy:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_BV_2A_J:      // ........xx..gggg ..hiiiiiiiiddddd -- SVE copy integer immediate (predicated)
    switch(ins)
    {
        case INS_sve_mov:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_BV_2B:        // ........xx..gggg ...........ddddd -- SVE copy integer immediate (predicated)
    switch(ins)
    {
        case INS_sve_fmov:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_BW_2A:        // ........ii.xxxxx ......nnnnnddddd -- SVE broadcast indexed element
    switch(ins)
    {
        case INS_sve_mov:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_dup:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_BX_2A:        // ...........ixxxx ......nnnnnddddd -- sve_int_perm_dupq_i
    switch(ins)
    {
        case INS_sve_dupq:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_BY_2A:        // ............iiii ......mmmmmddddd -- sve_int_perm_extq
    switch(ins)
    {
        case INS_sve_extq:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_CC_2A:        // ........xx...... ......mmmmmddddd -- SVE insert SIMD&FP scalar register
    switch(ins)
    {
        case INS_sve_insr:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_CD_2A:        // ........xx...... ......mmmmmddddd -- SVE insert general register
    switch(ins)
    {
        case INS_sve_insr:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_CE_2A:        // ................ ......nnnnn.DDDD -- SVE move predicate from vector
    switch(ins)
    {
        case INS_sve_pmov:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_CE_2B:        // .........i...ii. ......nnnnn.DDDD -- SVE move predicate from vector
    switch(ins)
    {
        case INS_sve_pmov:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_CE_2C:        // ..............i. ......nnnnn.DDDD -- SVE move predicate from vector
    switch(ins)
    {
        case INS_sve_pmov:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_CE_2D:        // .............ii. ......nnnnn.DDDD -- SVE move predicate from vector
    switch(ins)
    {
        case INS_sve_pmov:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_CF_2A:        // ................ .......NNNNddddd -- SVE move predicate into vector
    switch(ins)
    {
        case INS_sve_pmov:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_CF_2B:        // .........i...ii. .......NNNNddddd -- SVE move predicate into vector
    switch(ins)
    {
        case INS_sve_pmov:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_CF_2C:        // ..............i. .......NNNNddddd -- SVE move predicate into vector
    switch(ins)
    {
        case INS_sve_pmov:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_CF_2D:        // .............ii. .......NNNNddddd -- SVE move predicate into vector
    switch(ins)
    {
        case INS_sve_pmov:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_CI_3A:        // ........xx..MMMM .......NNNN.DDDD -- SVE permute predicate elements
    switch(ins)
    {
        case INS_sve_uzp1:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_trn1:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_zip1:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uzp2:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_trn2:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_zip2:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_CJ_2A:        // ........xx...... .......NNNN.DDDD -- SVE reverse predicate elements
    switch(ins)
    {
        case INS_sve_rev:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_CK_2A:        // ................ .......NNNN.DDDD -- SVE unpack predicate elements
    switch(ins)
    {
        case INS_sve_punpkhi:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_punpklo:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_CT_3A:        // ................ ...gggnnnnnddddd -- SVE reverse doublewords
    switch(ins)
    {
        case INS_sve_revd:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_GQ_3A:        // ................ ...gggnnnnnddddd -- SVE floating-point convert precision odd elements
    switch(ins)
    {
        case INS_sve_fcvtxnt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_fcvtnt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_fcvtlt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_bfcvtnt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_HO_3A:        // ................ ...gggnnnnnddddd -- SVE floating-point convert precision
    switch(ins)
    {
        case INS_sve_fcvt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_bfcvt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_fcvtx:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_HO_3A_B:      // ................ ...gggnnnnnddddd -- SVE floating-point convert precision
    switch(ins)
    {
        case INS_sve_fcvt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_HP_3B:        // ................ ...gggnnnnnddddd -- SVE floating-point convert to integer
    switch(ins)
    {
        case INS_sve_fcvtzs:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_fcvtzu:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_HP_3B_H:      // ................ ...gggnnnnnddddd -- SVE floating-point convert to integer
    switch(ins)
    {
        case INS_sve_fcvtzs:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_fcvtzu:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_HP_3B_I:      // ................ ...gggnnnnnddddd -- SVE floating-point convert to integer
    switch(ins)
    {
        case INS_sve_fcvtzs:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_fcvtzu:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_HP_3B_J:      // ................ ...gggnnnnnddddd -- SVE floating-point convert to integer
    switch(ins)
    {
        case INS_sve_fcvtzs:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_fcvtzu:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_HS_3A:        // ................ ...gggnnnnnddddd -- SVE integer convert to floating-point
    switch(ins)
    {
        case INS_sve_scvtf:
            result.insThroughput = PERFSCORE_THROUGHPUT_4X;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        case INS_sve_ucvtf:
            result.insThroughput = PERFSCORE_THROUGHPUT_4X;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_HS_3A_H:      // ................ ...gggnnnnnddddd -- SVE integer convert to floating-point
    switch(ins)
    {
        case INS_sve_scvtf:
            result.insThroughput = PERFSCORE_THROUGHPUT_4X;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        case INS_sve_ucvtf:
            result.insThroughput = PERFSCORE_THROUGHPUT_4X;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_HS_3A_I:      // ................ ...gggnnnnnddddd -- SVE integer convert to floating-point
    switch(ins)
    {
        case INS_sve_scvtf:
            result.insThroughput = PERFSCORE_THROUGHPUT_4X;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        case INS_sve_ucvtf:
            result.insThroughput = PERFSCORE_THROUGHPUT_4X;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_HS_3A_J:      // ................ ...gggnnnnnddddd -- SVE integer convert to floating-point
    switch(ins)
    {
        case INS_sve_scvtf:
            result.insThroughput = PERFSCORE_THROUGHPUT_4X;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        case INS_sve_ucvtf:
            result.insThroughput = PERFSCORE_THROUGHPUT_4X;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_CV_3A:        // ........xx...... ...VVVnnnnnddddd -- SVE vector splice (destructive)
    switch(ins)
    {
        case INS_sve_splice:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_CV_3B:        // ........xx...... ...VVVmmmmmddddd -- SVE vector splice (destructive)
    switch(ins)
    {
        case INS_sve_splice:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_CW_4A:        // ........xx.mmmmm ..VVVVnnnnnddddd -- SVE select vector elements (predicated)
    switch(ins)
    {
        case INS_sve_mov:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_sel:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_CX_4A:        // ........xx.mmmmm ...gggnnnnn.DDDD -- SVE integer compare vectors
    switch(ins)
    {
        case INS_sve_cmpeq:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_cmpgt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_cmpge:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_cmphi:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_cmphs:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_cmpne:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_cmple:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_cmplo:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_cmpls:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_cmplt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_CX_4A_A:      // ........xx.mmmmm ...gggnnnnn.DDDD -- SVE integer compare vectors
    switch(ins)
    {
        case INS_sve_cmpeq:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_cmpgt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_cmpge:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_cmphi:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_cmphs:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_cmpne:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_cmple:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_cmplo:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_cmpls:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_cmplt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_GE_4A:        // ........xx.mmmmm ...gggnnnnn.DDDD -- SVE2 character match
    switch(ins)
    {
        case INS_sve_match:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_nmatch:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_HT_4A:        // ........xx.mmmmm ...gggnnnnn.DDDD -- SVE floating-point compare vectors
    switch(ins)
    {
        case INS_sve_fcmeq:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_fcmge:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_facge:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_fcmgt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_facgt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_fcmlt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_fcmle:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_fcmne:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_fcmuo:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_facle:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_faclt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_CY_3A:        // ........xx.iiiii ...gggnnnnn.DDDD -- SVE integer compare with unsigned immediate
    switch(ins)
    {
        case INS_sve_cmpeq:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_cmpgt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_cmpge:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_cmpne:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_cmple:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_cmplt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_CY_3B:        // ........xx.iiiii ii.gggnnnnn.DDDD -- SVE integer compare with unsigned immediate
    switch(ins)
    {
        case INS_sve_cmphi:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_cmphs:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_cmplo:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_cmpls:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_CZ_4A:        // ............MMMM ..gggg.NNNN.DDDD -- SVE predicate logical operations
    switch(ins)
    {
        case INS_sve_mov:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_and:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_orr:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_eor:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_ands:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_bic:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_orn:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_bics:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_not:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_sel:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_movs:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_eors:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_nots:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_nor:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_1C;
        case INS_sve_nand:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_1C;
        case INS_sve_orrs:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_orns:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_nors:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_nands:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_CZ_4A_A:      // ............MMMM ..gggg.NNNN.DDDD -- SVE predicate logical operations
    switch(ins)
    {
        case INS_sve_movs:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_CZ_4A_K:      // ............MMMM ..gggg.NNNN.DDDD -- SVE predicate logical operations
    switch(ins)
    {
        case INS_sve_mov:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_CZ_4A_L:      // ............MMMM ..gggg.NNNN.DDDD -- SVE predicate logical operations
    switch(ins)
    {
        case INS_sve_mov:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_DA_4A:        // ............MMMM ..gggg.NNNN.DDDD -- SVE propagate break from previous partition
    switch(ins)
    {
        case INS_sve_brkpa:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_brkpb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_brkpas:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_brkpbs:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_DB_3A:        // ................ ..gggg.NNNNMDDDD -- SVE partition break condition
    switch(ins)
    {
        case INS_sve_brka:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_brkb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_DB_3B:        // ................ ..gggg.NNNN.DDDD -- SVE partition break condition
    switch(ins)
    {
        case INS_sve_brkas:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_brkbs:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_DC_3A:        // ................ ..gggg.NNNN.MMMM -- SVE propagate break to next partition
    switch(ins)
    {
        case INS_sve_brkn:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_brkns:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_DD_2A:        // ................ .......gggg.DDDD -- SVE predicate first active
    switch(ins)
    {
        case INS_sve_pfirst:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_DG_2A:        // ................ .......gggg.DDDD -- SVE predicate read from FFR (predicated)
    switch(ins)
    {
        case INS_sve_rdffr:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_rdffrs:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_DE_1A:        // ........xx...... ......ppppp.DDDD -- SVE predicate initialize
    switch(ins)
    {
        case INS_sve_ptrue:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_ptrues:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_DF_2A:        // ........xx...... .......VVVV.DDDD -- SVE predicate next active
    switch(ins)
    {
        case INS_sve_pnext:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_DH_1A:        // ................ ............DDDD -- SVE predicate read from FFR (unpredicated)
    switch(ins)
    {
        case INS_sve_rdffr:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_DJ_1A:        // ................ ............DDDD -- SVE predicate zero
    switch(ins)
    {
        case INS_sve_pfalse:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_DI_2A:        // ................ ..gggg.NNNN..... -- SVE predicate test
    switch(ins)
    {
        case INS_sve_ptest:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_1C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_DK_3A:        // ........xx...... ..gggg.NNNNddddd -- SVE predicate count
    switch(ins)
    {
        case INS_sve_cntp:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_DL_2A:        // ........xx...... .....l.NNNNddddd -- SVE predicate count (predicate-as-counter)
    switch(ins)
    {
        case INS_sve_cntp:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_DM_2A:        // ........xx...... .......MMMMddddd -- SVE inc/dec register by predicate count
    switch(ins)
    {
        case INS_sve_incp:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_7C;
        case INS_sve_decp:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_7C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_DN_2A:        // ........xx...... .......MMMMddddd -- SVE inc/dec vector by predicate count
    switch(ins)
    {
        case INS_sve_incp:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_7C;
        case INS_sve_decp:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_7C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_DP_2A:        // ........xx...... .......MMMMddddd -- SVE saturating inc/dec vector by predicate count
    switch(ins)
    {
        case INS_sve_sqincp:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_7C;
        case INS_sve_uqincp:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_7C;
        case INS_sve_sqdecp:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_7C;
        case INS_sve_uqdecp:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_7C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_DO_2A:        // ........xx...... .....X.MMMMddddd -- SVE saturating inc/dec register by predicate count
    switch(ins)
    {
        case INS_sve_sqincp:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_7C;
        case INS_sve_uqincp:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_7C;
        case INS_sve_sqdecp:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_7C;
        case INS_sve_uqdecp:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_7C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_DQ_0A:        // ................ ................ -- SVE FFR initialise
    switch(ins)
    {
        case INS_sve_setffr:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_DR_1A:        // ................ .......NNNN..... -- SVE FFR write from predicate
    switch(ins)
    {
        case INS_sve_wrffr:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_DS_2A:        // .........x.mmmmm ......nnnnn..... -- SVE conditionally terminate scalars
    switch(ins)
    {
        case INS_sve_ctermeq:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_1C;
        case INS_sve_ctermne:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_1C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_DT_3A:        // ........xx.mmmmm ...X..nnnnn.DDDD -- SVE integer compare scalar count and limit
    switch(ins)
    {
        case INS_sve_whilege:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_whilegt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_whilelt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_whilele:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_whilehs:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_whilehi:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_whilelo:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_whilels:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_DU_3A:        // ........xx.mmmmm ......nnnnn.DDDD -- SVE pointer conflict compare
    switch(ins)
    {
        case INS_sve_whilewr:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_whilerw:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_DV_4A:        // ........ix.xxxvv ..NNNN.MMMM.DDDD -- SVE broadcast predicate element
    switch(ins)
    {
        case INS_sve_psel:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_DW_2A:        // ........xx...... ......iiNNN.DDDD -- SVE extract mask predicate from predicate-as-counter
    switch(ins)
    {
        case INS_sve_pext:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_DW_2B:        // ........xx...... .......iNNN.DDDD -- SVE extract mask predicate from predicate-as-counter
    switch(ins)
    {
        case INS_sve_pext:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_DX_3A:        // ........xx.mmmmm ......nnnnn.DDD. -- SVE integer compare scalar count and limit (predicate pair)
    switch(ins)
    {
        case INS_sve_whilege:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_whilegt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_whilelt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_whilele:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_whilehs:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_whilehi:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_whilelo:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_whilels:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_DY_3A:        // ........xx.mmmmm ..l...nnnnn..DDD -- SVE integer compare scalar count and limit (predicate-as-counter)
    switch(ins)
    {
        case INS_sve_whilege:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_whilegt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_whilelt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_whilele:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_whilehs:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_whilehi:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_whilelo:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_whilels:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_DZ_1A:        // ........xx...... .............DDD -- sve_int_pn_ptrue
    switch(ins)
    {
        case INS_sve_ptrue:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_EA_1A:        // ........xx...... ...iiiiiiiiddddd -- SVE broadcast floating-point immediate (unpredicated)
    switch(ins)
    {
        case INS_sve_fmov:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_fdup:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_ED_1A:        // ........xx...... ...iiiiiiiiddddd -- SVE integer min/max immediate (unpredicated)
    switch(ins)
    {
        case INS_sve_smax:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_umax:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_smin:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_umin:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_EE_1A:        // ........xx...... ...iiiiiiiiddddd -- SVE integer multiply immediate (unpredicated)
    switch(ins)
    {
        case INS_sve_mul:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_EB_1A:        // ........xx...... ..hiiiiiiiiddddd -- SVE broadcast integer immediate (unpredicated)
    switch(ins)
    {
        case INS_sve_mov:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_dup:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_EC_1A:        // ........xx...... ..hiiiiiiiiddddd -- SVE integer add/subtract immediate (unpredicated)
    switch(ins)
    {
        case INS_sve_add:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_sub:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_sqadd:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_sqsub:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uqadd:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_uqsub:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_subr:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_EB_1B:        // ........xx...... ...........ddddd -- SVE broadcast integer immediate (unpredicated)
    switch(ins)
    {
        case INS_sve_fmov:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_EG_3A:        // ...........iimmm ......nnnnnddddd -- SVE two-way dot product (indexed)
    switch(ins)
    {
        case INS_sve_sdot:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_udot:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_EY_3A:        // ...........iimmm ......nnnnnddddd -- SVE integer dot product (indexed)
    switch(ins)
    {
        case INS_sve_sdot:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_udot:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_EZ_3A:        // ...........iimmm ......nnnnnddddd -- SVE mixed sign dot product (indexed)
    switch(ins)
    {
        case INS_sve_usdot:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_sudot:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_FD_3B:        // ...........iimmm ......nnnnnddddd -- SVE2 integer multiply (indexed)
    switch(ins)
    {
        case INS_sve_mul:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_FF_3B:        // ...........iimmm ......nnnnnddddd -- SVE2 integer multiply-add (indexed)
    switch(ins)
    {
        case INS_sve_mla:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        case INS_sve_mls:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_FI_3B:        // ...........iimmm ......nnnnnddddd -- SVE2 saturating multiply high (indexed)
    switch(ins)
    {
        case INS_sve_sqdmulh:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        case INS_sve_sqrdmulh:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_FK_3B:        // ...........iimmm ......nnnnnddddd -- SVE2 saturating multiply-add high (indexed)
    switch(ins)
    {
        case INS_sve_sqrdmlah:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        case INS_sve_sqrdmlsh:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_GU_3A:        // ...........iimmm ......nnnnnddddd -- SVE floating-point multiply-add (indexed)
    switch(ins)
    {
        case INS_sve_fmla:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_fmls:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_GX_3A:        // ...........iimmm ......nnnnnddddd -- SVE floating-point multiply (indexed)
    switch(ins)
    {
        case INS_sve_fmul:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_GY_3B:        // ...........iimmm ......nnnnnddddd -- SVE BFloat16 floating-point dot product (indexed)
    switch(ins)
    {
        case INS_sve_fdot:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_bfdot:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_GY_3B_D:      // ...........iimmm ......nnnnnddddd -- SVE BFloat16 floating-point dot product (indexed)
    switch(ins)
    {
        case INS_sve_fdot:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_EJ_3A:        // ........xx.mmmmm ....rrnnnnnddddd -- SVE2 complex integer dot product
    switch(ins)
    {
        case INS_sve_cdot:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_EK_3A:        // ........xx.mmmmm ....rrnnnnnddddd -- SVE2 complex integer multiply-add
    switch(ins)
    {
        case INS_sve_cmla:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        case INS_sve_sqrdcmlah:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_EW_3B:        // ...........mmmmm ......aaaaaddddd -- SVE2 multiply-add (checked pointer)
    switch(ins)
    {
        case INS_sve_madpt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_EY_3B:        // ...........immmm ......nnnnnddddd -- SVE integer dot product (indexed)
    switch(ins)
    {
        case INS_sve_sdot:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_udot:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_FD_3C:        // ...........immmm ......nnnnnddddd -- SVE2 integer multiply (indexed)
    switch(ins)
    {
        case INS_sve_mul:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_FF_3C:        // ...........immmm ......nnnnnddddd -- SVE2 integer multiply-add (indexed)
    switch(ins)
    {
        case INS_sve_mla:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        case INS_sve_mls:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_FI_3C:        // ...........immmm ......nnnnnddddd -- SVE2 saturating multiply high (indexed)
    switch(ins)
    {
        case INS_sve_sqdmulh:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        case INS_sve_sqrdmulh:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_FK_3C:        // ...........immmm ......nnnnnddddd -- SVE2 saturating multiply-add high (indexed)
    switch(ins)
    {
        case INS_sve_sqrdmlah:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        case INS_sve_sqrdmlsh:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_GU_3B:        // ...........immmm ......nnnnnddddd -- SVE floating-point multiply-add (indexed)
    switch(ins)
    {
        case INS_sve_fmla:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_fmls:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_GX_3B:        // ...........immmm ......nnnnnddddd -- SVE floating-point multiply (indexed)
    switch(ins)
    {
        case INS_sve_fmul:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_FA_3A:        // ...........iimmm ....rrnnnnnddddd -- SVE2 complex integer dot product (indexed)
    switch(ins)
    {
        case INS_sve_cdot:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_FB_3A:        // ...........iimmm ....rrnnnnnddddd -- SVE2 complex integer multiply-add (indexed)
    switch(ins)
    {
        case INS_sve_cmla:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_FC_3A:        // ...........iimmm ....rrnnnnnddddd -- SVE2 complex saturating multiply-add (indexed)
    switch(ins)
    {
        case INS_sve_sqrdcmlah:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_FA_3B:        // ...........immmm ....rrnnnnnddddd -- SVE2 complex integer dot product (indexed)
    switch(ins)
    {
        case INS_sve_cdot:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_FB_3B:        // ...........immmm ....rrnnnnnddddd -- SVE2 complex integer multiply-add (indexed)
    switch(ins)
    {
        case INS_sve_cmla:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_FC_3B:        // ...........immmm ....rrnnnnnddddd -- SVE2 complex saturating multiply-add (indexed)
    switch(ins)
    {
        case INS_sve_sqrdcmlah:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_GV_3A:        // ...........immmm ....rrnnnnnddddd -- SVE floating-point complex multiply-add (indexed)
    switch(ins)
    {
        case INS_sve_fcmla:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_FD_3A:        // .........i.iimmm ......nnnnnddddd -- SVE2 integer multiply (indexed)
    switch(ins)
    {
        case INS_sve_mul:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_FF_3A:        // .........i.iimmm ......nnnnnddddd -- SVE2 integer multiply-add (indexed)
    switch(ins)
    {
        case INS_sve_mla:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        case INS_sve_mls:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_FI_3A:        // .........i.iimmm ......nnnnnddddd -- SVE2 saturating multiply high (indexed)
    switch(ins)
    {
        case INS_sve_sqdmulh:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        case INS_sve_sqrdmulh:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_FK_3A:        // .........i.iimmm ......nnnnnddddd -- SVE2 saturating multiply-add high (indexed)
    switch(ins)
    {
        case INS_sve_sqrdmlah:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        case INS_sve_sqrdmlsh:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_GU_3C:        // .........i.iimmm ......nnnnnddddd -- SVE floating-point multiply-add (indexed)
    switch(ins)
    {
        case INS_sve_bfmla:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_bfmls:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_GX_3C:        // .........i.iimmm ......nnnnnddddd -- SVE floating-point multiply (indexed)
    switch(ins)
    {
        case INS_sve_bfmul:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_FE_3A:        // ...........iimmm ....i.nnnnnddddd -- SVE2 integer multiply long (indexed)
    switch(ins)
    {
        case INS_sve_smullb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_smullt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_umullb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_umullt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_FG_3A:        // ...........iimmm ....i.nnnnnddddd -- SVE2 integer multiply-add long (indexed)
    switch(ins)
    {
        case INS_sve_smlalb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_smlalt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_umlalb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_umlalt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_smlslb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_smlslt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_umlslb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_umlslt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_FH_3A:        // ...........iimmm ....i.nnnnnddddd -- SVE2 saturating multiply (indexed)
    switch(ins)
    {
        case INS_sve_sqdmullb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_sqdmullt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_FJ_3A:        // ...........iimmm ....i.nnnnnddddd -- SVE2 saturating multiply-add (indexed)
    switch(ins)
    {
        case INS_sve_sqdmlalb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_sqdmlalt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_sqdmlslb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_sqdmlslt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_GY_3A:        // ...........iimmm ....i.nnnnnddddd -- SVE BFloat16 floating-point dot product (indexed)
    switch(ins)
    {
        case INS_sve_fdot:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_GZ_3A:        // ...........iimmm ....i.nnnnnddddd -- SVE floating-point multiply-add long (indexed)
    switch(ins)
    {
        case INS_sve_fmlalb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_fmlalt:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_fmlslb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_fmlslt:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_bfmlalb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_bfmlalt:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_bfmlslb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_bfmlslt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_FE_3B:        // ...........immmm ....i.nnnnnddddd -- SVE2 integer multiply long (indexed)
    switch(ins)
    {
        case INS_sve_smullb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_smullt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_umullb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_umullt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_FG_3B:        // ...........immmm ....i.nnnnnddddd -- SVE2 integer multiply-add long (indexed)
    switch(ins)
    {
        case INS_sve_smlalb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_smlalt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_umlalb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_umlalt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_smlslb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_smlslt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_umlslb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_umlslt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_FH_3B:        // ...........immmm ....i.nnnnnddddd -- SVE2 saturating multiply (indexed)
    switch(ins)
    {
        case INS_sve_sqdmullb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_sqdmullt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_FJ_3B:        // ...........immmm ....i.nnnnnddddd -- SVE2 saturating multiply-add (indexed)
    switch(ins)
    {
        case INS_sve_sqdmlalb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_sqdmlalt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_sqdmlslb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_sqdmlslt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_FR_2A:        // .........x.xxiii ......nnnnnddddd -- SVE2 bitwise shift left long
    switch(ins)
    {
        case INS_sve_sshllb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_sshllt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_ushllb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_ushllt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_GB_2A:        // .........x.xxiii ......nnnnnddddd -- SVE2 bitwise shift right narrow
    switch(ins)
    {
        case INS_sve_sqshrunb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_sqshrunt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_sqrshrunb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_sqrshrunt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_shrnb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_shrnt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_rshrnb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_rshrnt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_sqshrnb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_sqshrnt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_sqrshrnb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_sqrshrnt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_uqshrnb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_uqshrnt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_uqrshrnb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_uqrshrnt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_FV_2A:        // ........xx...... .....rmmmmmddddd -- SVE2 complex integer add
    switch(ins)
    {
        case INS_sve_cadd:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_sqcadd:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_FY_3A:        // .........x.mmmmm ......nnnnnddddd -- SVE2 integer add/subtract long with carry
    switch(ins)
    {
        case INS_sve_adclb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_adclt:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_sbclb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_sbclt:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_FZ_2A:        // ................ ......nnnn.ddddd -- SME2 multi-vec extract narrow
    switch(ins)
    {
        case INS_sve_sqcvtn:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_uqcvtn:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_sqcvtun:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_HG_2A:        // ................ ......nnnn.ddddd -- SVE2 FP8 downconverts
    switch(ins)
    {
        case INS_sve_fcvtn:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_bfcvtn:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_fcvtnt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_fcvtnb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_GA_2A:        // ............iiii ......nnnn.ddddd -- SME2 multi-vec shift narrow
    switch(ins)
    {
        case INS_sve_sqrshrn:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_sqrshrun:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_uqrshrn:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_GD_2A:        // .........x.xx... ......nnnnnddddd -- SVE2 saturating extract narrow
    switch(ins)
    {
        case INS_sve_sqxtnb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_sqxtnt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_uqxtnb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_uqxtnt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_sqxtunb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_sqxtunt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_GG_3A:        // ........ii.mmmmm ......nnnnnddddd -- SVE2 lookup table with 2-bit indices and 16-bit element size
    switch(ins)
    {
        case INS_sve_luti2:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_GH_3B:        // ........ii.mmmmm ......nnnnnddddd -- SVE2 lookup table with 4-bit indices and 16-bit element size
    switch(ins)
    {
        case INS_sve_luti4:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_GH_3B_B:      // ........ii.mmmmm ......nnnnnddddd -- SVE2 lookup table with 4-bit indices and 16-bit element size
    switch(ins)
    {
        case INS_sve_luti4:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_GG_3B:        // ........ii.mmmmm ...i..nnnnnddddd -- SVE2 lookup table with 2-bit indices and 16-bit element size
    switch(ins)
    {
        case INS_sve_luti2:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_GH_3A:        // ........i..mmmmm ......nnnnnddddd -- SVE2 lookup table with 4-bit indices and 16-bit element size
    switch(ins)
    {
        case INS_sve_luti4:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_GK_2A:        // ................ ......mmmmmddddd -- SVE2 crypto destructive binary operations
    switch(ins)
    {
        case INS_sve_aese:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_aesd:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_sm4e:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_GL_1A:        // ................ ...........ddddd -- SVE2 crypto unary operations
    switch(ins)
    {
        case INS_sve_aesmc:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_aesimc:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_GM_3A:        // ...........iimmm ....iinnnnnddddd -- SVE2 FP8 multiply-add long (indexed)
    switch(ins)
    {
        case INS_sve_fmlalb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_fmlalt:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_HC_3A:        // ...........iimmm ....iinnnnnddddd -- SVE2 FP8 multiply-add long long (indexed)
    switch(ins)
    {
        case INS_sve_fmlallbb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_fmlallbt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_fmlalltb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_fmlalltt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_GP_3A:        // ........xx.....r ...gggmmmmmddddd -- SVE floating-point complex add (predicated)
    switch(ins)
    {
        case INS_sve_fcadd:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_GT_4A:        // ........xx.mmmmm .rrgggnnnnnddddd -- SVE floating-point complex multiply-add (predicated)
    switch(ins)
    {
        case INS_sve_fcmla:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_5C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_HI_3A:        // ........xx...... ...gggnnnnn.DDDD -- SVE floating-point compare with zero
    switch(ins)
    {
        case INS_sve_fcmeq:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_fcmge:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_fcmgt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_fcmlt:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_fcmle:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_fcmne:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_HM_2A:        // ........xx...... ...ggg....iddddd -- SVE floating-point arithmetic with immediate (predicated)
    switch(ins)
    {
        case INS_sve_fmul:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        case INS_sve_fmaxnm:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_fadd:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_fmax:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_fminnm:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_fsub:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_fmin:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_fsubr:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_HN_2A:        // ........xx...iii ......mmmmmddddd -- SVE floating-point trig multiply-add coefficient
    switch(ins)
    {
        case INS_sve_ftmad:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_HP_3A:        // .............xx. ...gggnnnnnddddd -- SVE floating-point convert to integer
    switch(ins)
    {
        case INS_sve_flogb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_3C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_HU_4B:        // ...........mmmmm ...gggnnnnnddddd -- SVE floating-point multiply-accumulate writing addend
    switch(ins)
    {
        case INS_sve_bfmla:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_bfmls:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_HV_4A:        // ........xx.aaaaa ...gggmmmmmddddd -- SVE floating-point multiply-accumulate writing multiplicand
    switch(ins)
    {
        case INS_sve_fmad:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_fmsb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_fnmad:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_fnmsb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_HW_4A:        // .........h.mmmmm ...gggnnnnnttttt -- SVE 32-bit gather load (scalar plus 32-bit unscaled offsets)
    switch(ins)
    {
        case INS_sve_ld1sb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ldff1sb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ld1b:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ldff1b:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ld1sh:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ldff1sh:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ld1h:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ldff1h:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ld1w:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ldff1w:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_HW_4A_A:      // .........h.mmmmm ...gggnnnnnttttt -- SVE 32-bit gather load (scalar plus 32-bit unscaled offsets)
    switch(ins)
    {
        case INS_sve_ld1sb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ldff1sb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ld1b:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ldff1b:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ld1sh:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ldff1sh:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ld1h:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ldff1h:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ld1w:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ldff1w:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_HW_4A_B:      // .........h.mmmmm ...gggnnnnnttttt -- SVE 32-bit gather load (scalar plus 32-bit unscaled offsets)
    switch(ins)
    {
        case INS_sve_ld1sh:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ldff1sh:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ld1h:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ldff1h:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ld1w:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ldff1w:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_HW_4A_C:      // .........h.mmmmm ...gggnnnnnttttt -- SVE 32-bit gather load (scalar plus 32-bit unscaled offsets)
    switch(ins)
    {
        case INS_sve_ld1sh:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ldff1sh:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ld1h:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ldff1h:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ld1w:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ldff1w:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IU_4A:        // .........h.mmmmm ...gggnnnnnttttt -- SVE 64-bit gather load (scalar plus 32-bit unpacked scaled offsets)
    switch(ins)
    {
        case INS_sve_ldff1sw:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ldff1d:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ld1d:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ld1sw:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IU_4A_A:      // .........h.mmmmm ...gggnnnnnttttt -- SVE 64-bit gather load (scalar plus 32-bit unpacked scaled offsets)
    switch(ins)
    {
        case INS_sve_ldff1sw:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ldff1d:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ld1sw:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IU_4A_C:      // .........h.mmmmm ...gggnnnnnttttt -- SVE 64-bit gather load (scalar plus 32-bit unpacked scaled offsets)
    switch(ins)
    {
        case INS_sve_ld1d:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_HW_4B:        // ...........mmmmm ...gggnnnnnttttt -- SVE 32-bit gather load (scalar plus 32-bit unscaled offsets)
    switch(ins)
    {
        case INS_sve_ld1sb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ldff1sb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ld1b:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ldff1b:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ld1sh:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ldff1sh:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ld1h:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ldff1h:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ld1w:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ldff1w:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_HW_4B_D:      // ...........mmmmm ...gggnnnnnttttt -- SVE 32-bit gather load (scalar plus 32-bit unscaled offsets)
    switch(ins)
    {
        case INS_sve_ld1sh:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ldff1sh:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ld1h:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ldff1h:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ld1w:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ldff1w:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IF_4A:        // ...........mmmmm ...gggnnnnnttttt -- SVE2 32-bit gather non-temporal load (vector plus scalar)
    switch(ins)
    {
        case INS_sve_ldnt1sb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_10C;
        case INS_sve_ldnt1b:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_10C;
        case INS_sve_ldnt1sh:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_10C;
        case INS_sve_ldnt1h:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_10C;
        case INS_sve_ldnt1w:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_10C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IF_4A_A:      // ...........mmmmm ...gggnnnnnttttt -- SVE2 32-bit gather non-temporal load (vector plus scalar)
    switch(ins)
    {
        case INS_sve_ldnt1sb:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_10C;
        case INS_sve_ldnt1b:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_10C;
        case INS_sve_ldnt1sh:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_10C;
        case INS_sve_ldnt1h:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_10C;
        case INS_sve_ldnt1w:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_10C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IG_4A:        // ...........mmmmm ...gggnnnnnttttt -- SVE contiguous first-fault load (scalar plus scalar)
    switch(ins)
    {
        case INS_sve_ldff1sw:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ldff1d:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IG_4A_D:      // ...........mmmmm ...gggnnnnnttttt -- SVE contiguous first-fault load (scalar plus scalar)
    switch(ins)
    {
        case INS_sve_ldff1sb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IG_4A_E:      // ...........mmmmm ...gggnnnnnttttt -- SVE contiguous first-fault load (scalar plus scalar)
    switch(ins)
    {
        case INS_sve_ldff1b:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IG_4A_F:      // ...........mmmmm ...gggnnnnnttttt -- SVE contiguous first-fault load (scalar plus scalar)
    switch(ins)
    {
        case INS_sve_ldff1sh:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ldff1w:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IG_4A_G:      // ...........mmmmm ...gggnnnnnttttt -- SVE contiguous first-fault load (scalar plus scalar)
    switch(ins)
    {
        case INS_sve_ldff1h:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_II_4A:        // ...........mmmmm ...gggnnnnnttttt -- SVE contiguous load (quadwords, scalar plus scalar)
    switch(ins)
    {
        case INS_sve_ld1d:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_II_4A_B:      // ...........mmmmm ...gggnnnnnttttt -- SVE contiguous load (quadwords, scalar plus scalar)
    switch(ins)
    {
        case INS_sve_ld1d:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_II_4A_H:      // ...........mmmmm ...gggnnnnnttttt -- SVE contiguous load (quadwords, scalar plus scalar)
    switch(ins)
    {
        case INS_sve_ld1w:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IK_4A:        // ...........mmmmm ...gggnnnnnttttt -- SVE contiguous load (scalar plus scalar)
    switch(ins)
    {
        case INS_sve_ld1sw:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IK_4A_F:      // ...........mmmmm ...gggnnnnnttttt -- SVE contiguous load (scalar plus scalar)
    switch(ins)
    {
        case INS_sve_ld1sb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IK_4A_G:      // ...........mmmmm ...gggnnnnnttttt -- SVE contiguous load (scalar plus scalar)
    switch(ins)
    {
        case INS_sve_ld1sh:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IK_4A_H:      // ...........mmmmm ...gggnnnnnttttt -- SVE contiguous load (scalar plus scalar)
    switch(ins)
    {
        case INS_sve_ld1b:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IK_4A_I:      // ...........mmmmm ...gggnnnnnttttt -- SVE contiguous load (scalar plus scalar)
    switch(ins)
    {
        case INS_sve_ld1h:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IN_4A:        // ...........mmmmm ...gggnnnnnttttt -- SVE contiguous non-temporal load (scalar plus scalar)
    switch(ins)
    {
        case INS_sve_ldnt1b:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_10C;
        case INS_sve_ldnt1h:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_10C;
        case INS_sve_ldnt1w:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_10C;
        case INS_sve_ldnt1d:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_10C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IP_4A:        // ...........mmmmm ...gggnnnnnttttt -- SVE load and broadcast quadword (scalar plus scalar)
    switch(ins)
    {
        case INS_sve_ld1rqb:
            result.insThroughput = PERFSCORE_THROUGHPUT_3C;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        case INS_sve_ld1rob:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_ld1rqh:
            result.insThroughput = PERFSCORE_THROUGHPUT_3C;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        case INS_sve_ld1roh:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_ld1rqw:
            result.insThroughput = PERFSCORE_THROUGHPUT_3C;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        case INS_sve_ld1row:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_ld1rqd:
            result.insThroughput = PERFSCORE_THROUGHPUT_3C;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        case INS_sve_ld1rod:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IR_4A:        // ...........mmmmm ...gggnnnnnttttt -- SVE load multiple structures (quadwords, scalar plus scalar)
    switch(ins)
    {
        case INS_sve_ld2q:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_ld3q:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_ld4q:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IT_4A:        // ...........mmmmm ...gggnnnnnttttt -- SVE load multiple structures (scalar plus scalar)
    switch(ins)
    {
        case INS_sve_ld2b:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ld3b:
            result.insThroughput = PERFSCORE_THROUGHPUT_2f_3fC;
            result.insLatency    = PERFSCORE_LATENCY_10C;
        case INS_sve_ld4b:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_10C;
        case INS_sve_ld2h:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ld3h:
            result.insThroughput = PERFSCORE_THROUGHPUT_2f_3fC;
            result.insLatency    = PERFSCORE_LATENCY_10C;
        case INS_sve_ld4h:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_10C;
        case INS_sve_ld2w:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ld3w:
            result.insThroughput = PERFSCORE_THROUGHPUT_2f_3fC;
            result.insLatency    = PERFSCORE_LATENCY_10C;
        case INS_sve_ld4w:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_10C;
        case INS_sve_ld2d:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ld3d:
            result.insThroughput = PERFSCORE_THROUGHPUT_2f_3fC;
            result.insLatency    = PERFSCORE_LATENCY_10C;
        case INS_sve_ld4d:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_10C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IU_4B:        // ...........mmmmm ...gggnnnnnttttt -- SVE 64-bit gather load (scalar plus 32-bit unpacked scaled offsets)
    switch(ins)
    {
        case INS_sve_ldff1sw:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ldff1d:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ld1d:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ld1sw:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IU_4B_B:      // ...........mmmmm ...gggnnnnnttttt -- SVE 64-bit gather load (scalar plus 32-bit unpacked scaled offsets)
    switch(ins)
    {
        case INS_sve_ldff1sw:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ldff1d:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ld1sw:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IU_4B_D:      // ...........mmmmm ...gggnnnnnttttt -- SVE 64-bit gather load (scalar plus 32-bit unpacked scaled offsets)
    switch(ins)
    {
        case INS_sve_ld1d:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IW_4A:        // ...........mmmmm ...gggnnnnnttttt -- SVE2 128-bit gather load (vector plus scalar)
    switch(ins)
    {
        case INS_sve_ld1q:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IX_4A:        // ...........mmmmm ...gggnnnnnttttt -- SVE2 64-bit gather non-temporal load (vector plus scalar)
    switch(ins)
    {
        case INS_sve_ldnt1d:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_10C;
        case INS_sve_ldnt1sw:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_10C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IY_4A:        // ...........mmmmm ...gggnnnnnttttt -- SVE2 128-bit scatter store (vector plus scalar)
    switch(ins)
    {
        case INS_sve_st1q:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IZ_4A:        // ...........mmmmm ...gggnnnnnttttt -- SVE2 32-bit scatter non-temporal store (vector plus scalar)
    switch(ins)
    {
        case INS_sve_stnt1b:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_stnt1h:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_stnt1w:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IZ_4A_A:      // ...........mmmmm ...gggnnnnnttttt -- SVE2 32-bit scatter non-temporal store (vector plus scalar)
    switch(ins)
    {
        case INS_sve_stnt1b:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_stnt1h:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_stnt1w:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_JA_4A:        // ...........mmmmm ...gggnnnnnttttt -- SVE2 64-bit scatter non-temporal store (vector plus scalar)
    switch(ins)
    {
        case INS_sve_stnt1d:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_JB_4A:        // ...........mmmmm ...gggnnnnnttttt -- SVE contiguous non-temporal store (scalar plus scalar)
    switch(ins)
    {
        case INS_sve_stnt1b:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_stnt1h:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_stnt1w:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_stnt1d:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_JC_4A:        // ...........mmmmm ...gggnnnnnttttt -- SVE store multiple structures (scalar plus scalar)
    switch(ins)
    {
        case INS_sve_st2b:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_st3b:
            result.insThroughput = PERFSCORE_THROUGHPUT_2f_9fC;
            result.insLatency    = PERFSCORE_LATENCY_7C;
        case INS_sve_st4b:
            result.insThroughput = PERFSCORE_THROUGHPUT_9X;
            result.insLatency    = PERFSCORE_LATENCY_11C;
        case INS_sve_st2h:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_st3h:
            result.insThroughput = PERFSCORE_THROUGHPUT_2f_9fC;
            result.insLatency    = PERFSCORE_LATENCY_7C;
        case INS_sve_st4h:
            result.insThroughput = PERFSCORE_THROUGHPUT_9X;
            result.insLatency    = PERFSCORE_LATENCY_11C;
        case INS_sve_st2w:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_st3w:
            result.insThroughput = PERFSCORE_THROUGHPUT_2f_9fC;
            result.insLatency    = PERFSCORE_LATENCY_7C;
        case INS_sve_st4w:
            result.insThroughput = PERFSCORE_THROUGHPUT_9X;
            result.insLatency    = PERFSCORE_LATENCY_11C;
        case INS_sve_st2d:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_st3d:
            result.insThroughput = PERFSCORE_THROUGHPUT_2f_9fC;
            result.insLatency    = PERFSCORE_LATENCY_7C;
        case INS_sve_st4d:
            result.insThroughput = PERFSCORE_THROUGHPUT_9X;
            result.insLatency    = PERFSCORE_LATENCY_11C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_JD_4C:        // ...........mmmmm ...gggnnnnnttttt -- SVE contiguous store (scalar plus scalar)
    switch(ins)
    {
        case INS_sve_st1w:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_st1d:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_JD_4C_A:      // ...........mmmmm ...gggnnnnnttttt -- SVE contiguous store (scalar plus scalar)
    switch(ins)
    {
        case INS_sve_st1d:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_JF_4A:        // ...........mmmmm ...gggnnnnnttttt -- SVE store multiple structures (quadwords, scalar plus scalar)
    switch(ins)
    {
        case INS_sve_st2q:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_st3q:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_st4q:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_JJ_4B:        // ...........mmmmm ...gggnnnnnttttt -- SVE 64-bit scatter store (scalar plus 64-bit scaled offsets)
    switch(ins)
    {
        case INS_sve_st1h:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_st1w:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_st1d:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_JJ_4B_C:      // ...........mmmmm ...gggnnnnnttttt -- SVE 64-bit scatter store (scalar plus 64-bit scaled offsets)
    switch(ins)
    {
        case INS_sve_st1d:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_JJ_4B_E:      // ...........mmmmm ...gggnnnnnttttt -- SVE 64-bit scatter store (scalar plus 64-bit scaled offsets)
    switch(ins)
    {
        case INS_sve_st1h:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_st1w:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_JK_4B:        // ...........mmmmm ...gggnnnnnttttt -- SVE 64-bit scatter store (scalar plus 64-bit unscaled offsets)
    switch(ins)
    {
        case INS_sve_st1b:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_HX_3A_B:      // ...........iiiii ...gggnnnnnttttt -- SVE 32-bit gather load (vector plus immediate)
    switch(ins)
    {
        case INS_sve_ld1sb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ldff1sb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ld1b:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ldff1b:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_HX_3A_E:      // ...........iiiii ...gggnnnnnttttt -- SVE 32-bit gather load (vector plus immediate)
    switch(ins)
    {
        case INS_sve_ld1sh:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ldff1sh:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ld1h:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ldff1h:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ld1w:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ldff1w:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IV_3A:        // ...........iiiii ...gggnnnnnttttt -- SVE 64-bit gather load (vector plus immediate)
    switch(ins)
    {
        case INS_sve_ldff1sw:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ldff1d:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ld1d:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ld1sw:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_JI_3A_A:      // ...........iiiii ...gggnnnnnttttt -- SVE 32-bit scatter store (vector plus immediate)
    switch(ins)
    {
        case INS_sve_st1b:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_st1h:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_st1w:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_JL_3A:        // ...........iiiii ...gggnnnnnttttt -- SVE 64-bit scatter store (vector plus immediate)
    switch(ins)
    {
        case INS_sve_st1d:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_HY_3A:        // .........h.mmmmm ...gggnnnnn.oooo -- SVE 32-bit gather prefetch (scalar plus 32-bit scaled offsets)
    switch(ins)
    {
        case INS_sve_prfb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_prfh:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_prfw:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_prfd:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_HY_3A_A:      // .........h.mmmmm ...gggnnnnn.oooo -- SVE 32-bit gather prefetch (scalar plus 32-bit scaled offsets)
    switch(ins)
    {
        case INS_sve_prfb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_prfh:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_prfw:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_prfd:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_HY_3B:        // ...........mmmmm ...gggnnnnn.oooo -- SVE 32-bit gather prefetch (scalar plus 32-bit scaled offsets)
    switch(ins)
    {
        case INS_sve_prfb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_prfh:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_prfw:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_prfd:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IB_3A:        // ...........mmmmm ...gggnnnnn.oooo -- SVE contiguous prefetch (scalar plus scalar)
    switch(ins)
    {
        case INS_sve_prfb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_prfh:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_prfw:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_prfd:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_HZ_2A_B:      // ...........iiiii ...gggnnnnn.oooo -- SVE 32-bit gather prefetch (vector plus immediate)
    switch(ins)
    {
        case INS_sve_prfb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_prfh:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_prfw:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_prfd:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_IA_2A:        // ..........iiiiii ...gggnnnnn.oooo -- SVE contiguous prefetch (scalar plus immediate)
    switch(ins)
    {
        case INS_sve_prfb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_prfh:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_prfw:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_prfd:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_IC_3A:        // ..........iiiiii ...gggnnnnnttttt -- SVE load and broadcast element
    switch(ins)
    {
        case INS_sve_ld1rsw:
            result.insThroughput = PERFSCORE_THROUGHPUT_3C;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        case INS_sve_ld1rd:
            result.insThroughput = PERFSCORE_THROUGHPUT_3C;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IC_3A_A:      // ..........iiiiii ...gggnnnnnttttt -- SVE load and broadcast element
    switch(ins)
    {
        case INS_sve_ld1rsh:
            result.insThroughput = PERFSCORE_THROUGHPUT_3C;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        case INS_sve_ld1rw:
            result.insThroughput = PERFSCORE_THROUGHPUT_3C;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IC_3A_B:      // ..........iiiiii ...gggnnnnnttttt -- SVE load and broadcast element
    switch(ins)
    {
        case INS_sve_ld1rh:
            result.insThroughput = PERFSCORE_THROUGHPUT_3C;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        case INS_sve_ld1rsb:
            result.insThroughput = PERFSCORE_THROUGHPUT_3C;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IC_3A_C:      // ..........iiiiii ...gggnnnnnttttt -- SVE load and broadcast element
    switch(ins)
    {
        case INS_sve_ld1rb:
            result.insThroughput = PERFSCORE_THROUGHPUT_3C;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_ID_2A:        // ..........iiiiii ...iiinnnnn.TTTT -- SVE load predicate register
    switch(ins)
    {
        case INS_sve_ldr:
            result.insThroughput = PERFSCORE_THROUGHPUT_3C;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_JG_2A:        // ..........iiiiii ...iiinnnnn.TTTT -- SVE store predicate register
    switch(ins)
    {
        case INS_sve_str:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_IE_2A:        // ..........iiiiii ...iiinnnnnttttt -- SVE load vector register
    switch(ins)
    {
        case INS_sve_ldr:
            result.insThroughput = PERFSCORE_THROUGHPUT_3C;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_JH_2A:        // ..........iiiiii ...iiinnnnnttttt -- SVE store vector register
    switch(ins)
    {
        case INS_sve_str:
            result.insThroughput = PERFSCORE_THROUGHPUT_2C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_IH_3A:        // ............iiii ...gggnnnnnttttt -- SVE contiguous load (quadwords, scalar plus immediate)
    switch(ins)
    {
        case INS_sve_ld1d:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IH_3A_A:      // ............iiii ...gggnnnnnttttt -- SVE contiguous load (quadwords, scalar plus immediate)
    switch(ins)
    {
        case INS_sve_ld1d:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IH_3A_F:      // ............iiii ...gggnnnnnttttt -- SVE contiguous load (quadwords, scalar plus immediate)
    switch(ins)
    {
        case INS_sve_ld1w:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IJ_3A:        // ............iiii ...gggnnnnnttttt -- SVE contiguous load (scalar plus immediate)
    switch(ins)
    {
        case INS_sve_ld1sw:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IJ_3A_D:      // ............iiii ...gggnnnnnttttt -- SVE contiguous load (scalar plus immediate)
    switch(ins)
    {
        case INS_sve_ld1sb:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IJ_3A_E:      // ............iiii ...gggnnnnnttttt -- SVE contiguous load (scalar plus immediate)
    switch(ins)
    {
        case INS_sve_ld1b:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IJ_3A_F:      // ............iiii ...gggnnnnnttttt -- SVE contiguous load (scalar plus immediate)
    switch(ins)
    {
        case INS_sve_ld1sh:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IJ_3A_G:      // ............iiii ...gggnnnnnttttt -- SVE contiguous load (scalar plus immediate)
    switch(ins)
    {
        case INS_sve_ld1h:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IL_3A:        // ............iiii ...gggnnnnnttttt -- SVE contiguous non-fault load (scalar plus immediate)
    switch(ins)
    {
        case INS_sve_ldnf1sw:
            result.insThroughput = PERFSCORE_THROUGHPUT_3C;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        case INS_sve_ldnf1d:
            result.insThroughput = PERFSCORE_THROUGHPUT_3C;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IL_3A_A:      // ............iiii ...gggnnnnnttttt -- SVE contiguous non-fault load (scalar plus immediate)
    switch(ins)
    {
        case INS_sve_ldnf1sh:
            result.insThroughput = PERFSCORE_THROUGHPUT_3C;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        case INS_sve_ldnf1w:
            result.insThroughput = PERFSCORE_THROUGHPUT_3C;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IL_3A_B:      // ............iiii ...gggnnnnnttttt -- SVE contiguous non-fault load (scalar plus immediate)
    switch(ins)
    {
        case INS_sve_ldnf1h:
            result.insThroughput = PERFSCORE_THROUGHPUT_3C;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        case INS_sve_ldnf1sb:
            result.insThroughput = PERFSCORE_THROUGHPUT_3C;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IL_3A_C:      // ............iiii ...gggnnnnnttttt -- SVE contiguous non-fault load (scalar plus immediate)
    switch(ins)
    {
        case INS_sve_ldnf1b:
            result.insThroughput = PERFSCORE_THROUGHPUT_3C;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IM_3A:        // ............iiii ...gggnnnnnttttt -- SVE contiguous non-temporal load (scalar plus immediate)
    switch(ins)
    {
        case INS_sve_ldnt1b:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_10C;
        case INS_sve_ldnt1h:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_10C;
        case INS_sve_ldnt1w:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_10C;
        case INS_sve_ldnt1d:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_10C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IO_3A:        // ............iiii ...gggnnnnnttttt -- SVE load and broadcast quadword (scalar plus immediate)
    switch(ins)
    {
        case INS_sve_ld1rqb:
            result.insThroughput = PERFSCORE_THROUGHPUT_3C;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        case INS_sve_ld1rob:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_ld1rqh:
            result.insThroughput = PERFSCORE_THROUGHPUT_3C;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        case INS_sve_ld1roh:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_ld1rqw:
            result.insThroughput = PERFSCORE_THROUGHPUT_3C;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        case INS_sve_ld1row:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_ld1rqd:
            result.insThroughput = PERFSCORE_THROUGHPUT_3C;
            result.insLatency    = PERFSCORE_LATENCY_6C;
        case INS_sve_ld1rod:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IQ_3A:        // ............iiii ...gggnnnnnttttt -- SVE load multiple structures (quadwords, scalar plus immediate)
    switch(ins)
    {
        case INS_sve_ld2q:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_ld3q:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_ld4q:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_IS_3A:        // ............iiii ...gggnnnnnttttt -- SVE load multiple structures (scalar plus immediate)
    switch(ins)
    {
        case INS_sve_ld2b:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ld3b:
            result.insThroughput = PERFSCORE_THROUGHPUT_2f_3fC;
            result.insLatency    = PERFSCORE_LATENCY_10C;
        case INS_sve_ld4b:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_10C;
        case INS_sve_ld2h:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ld3h:
            result.insThroughput = PERFSCORE_THROUGHPUT_2f_3fC;
            result.insLatency    = PERFSCORE_LATENCY_10C;
        case INS_sve_ld4h:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_10C;
        case INS_sve_ld2w:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ld3w:
            result.insThroughput = PERFSCORE_THROUGHPUT_2f_3fC;
            result.insLatency    = PERFSCORE_LATENCY_10C;
        case INS_sve_ld4w:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_10C;
        case INS_sve_ld2d:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_9C;
        case INS_sve_ld3d:
            result.insThroughput = PERFSCORE_THROUGHPUT_2f_3fC;
            result.insLatency    = PERFSCORE_LATENCY_10C;
        case INS_sve_ld4d:
            result.insThroughput = PERFSCORE_THROUGHPUT_2X;
            result.insLatency    = PERFSCORE_LATENCY_10C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_JE_3A:        // ............iiii ...gggnnnnnttttt -- SVE store multiple structures (quadwords, scalar plus immediate)
    switch(ins)
    {
        case INS_sve_st2q:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_st3q:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        case INS_sve_st4q:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C; // need to fix
            result.insLatency    = PERFSCORE_LATENCY_1C; // need to fix
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_JM_3A:        // ............iiii ...gggnnnnnttttt -- SVE contiguous non-temporal store (scalar plus immediate)
    switch(ins)
    {
        case INS_sve_stnt1b:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_stnt1h:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_stnt1w:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_stnt1d:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_JN_3C:        // ............iiii ...gggnnnnnttttt -- SVE contiguous store (scalar plus immediate)
    switch(ins)
    {
        case INS_sve_st1w:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_st1d:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_JN_3C_D:      // ............iiii ...gggnnnnnttttt -- SVE contiguous store (scalar plus immediate)
    switch(ins)
    {
        case INS_sve_st1d:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_JO_3A:        // ............iiii ...gggnnnnnttttt -- SVE store multiple structures (scalar plus immediate)
    switch(ins)
    {
        case INS_sve_st2b:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_st3b:
            result.insThroughput = PERFSCORE_THROUGHPUT_2f_9fC;
            result.insLatency    = PERFSCORE_LATENCY_7C;
        case INS_sve_st4b:
            result.insThroughput = PERFSCORE_THROUGHPUT_9X;
            result.insLatency    = PERFSCORE_LATENCY_11C;
        case INS_sve_st2h:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_st3h:
            result.insThroughput = PERFSCORE_THROUGHPUT_2f_9fC;
            result.insLatency    = PERFSCORE_LATENCY_7C;
        case INS_sve_st4h:
            result.insThroughput = PERFSCORE_THROUGHPUT_9X;
            result.insLatency    = PERFSCORE_LATENCY_11C;
        case INS_sve_st2w:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_st3w:
            result.insThroughput = PERFSCORE_THROUGHPUT_2f_9fC;
            result.insLatency    = PERFSCORE_LATENCY_7C;
        case INS_sve_st4w:
            result.insThroughput = PERFSCORE_THROUGHPUT_9X;
            result.insLatency    = PERFSCORE_LATENCY_11C;
        case INS_sve_st2d:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_4C;
        case INS_sve_st3d:
            result.insThroughput = PERFSCORE_THROUGHPUT_2f_9fC;
            result.insLatency    = PERFSCORE_LATENCY_7C;
        case INS_sve_st4d:
            result.insThroughput = PERFSCORE_THROUGHPUT_9X;
            result.insLatency    = PERFSCORE_LATENCY_11C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_JD_4A:        // .........xxmmmmm ...gggnnnnnttttt -- SVE contiguous store (scalar plus scalar)
    switch(ins)
    {
        case INS_sve_st1b:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_st1h:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_JD_4B:        // ..........xmmmmm ...gggnnnnnttttt -- SVE contiguous store (scalar plus scalar)
    switch(ins)
    {
        case INS_sve_st1w:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_JJ_4A:        // ...........mmmmm .h.gggnnnnnttttt -- SVE 64-bit scatter store (scalar plus 64-bit scaled offsets)
    switch(ins)
    {
        case INS_sve_st1h:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_st1w:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_st1d:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_JJ_4A_B:      // ...........mmmmm .h.gggnnnnnttttt -- SVE 64-bit scatter store (scalar plus 64-bit scaled offsets)
    switch(ins)
    {
        case INS_sve_st1h:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_st1w:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_st1d:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_JJ_4A_C:      // ...........mmmmm .h.gggnnnnnttttt -- SVE 64-bit scatter store (scalar plus 64-bit scaled offsets)
    switch(ins)
    {
        case INS_sve_st1h:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_st1w:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_JJ_4A_D:      // ...........mmmmm .h.gggnnnnnttttt -- SVE 64-bit scatter store (scalar plus 64-bit scaled offsets)
    switch(ins)
    {
        case INS_sve_st1h:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_st1w:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_JK_4A:        // ...........mmmmm .h.gggnnnnnttttt -- SVE 64-bit scatter store (scalar plus 64-bit unscaled offsets)
    switch(ins)
    {
        case INS_sve_st1b:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
case IF_SVE_JK_4A_B:      // ...........mmmmm .h.gggnnnnnttttt -- SVE 64-bit scatter store (scalar plus 64-bit unscaled offsets)
    switch(ins)
    {
        case INS_sve_st1b:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_JN_3A:        // .........xx.iiii ...gggnnnnnttttt -- SVE contiguous store (scalar plus immediate)
    switch(ins)
    {
        case INS_sve_st1b:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        case INS_sve_st1h:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
case IF_SVE_JN_3B:        // ..........x.iiii ...gggnnnnnttttt -- SVE contiguous store (scalar plus immediate)
    switch(ins)
    {
        case INS_sve_st1w:
            result.insThroughput = PERFSCORE_THROUGHPUT_1C;
            result.insLatency    = PERFSCORE_LATENCY_2C;
        default:
            // all other instructions
            perfScoreUnhandledInstruction(id, &result);
            break;
    }
   break;
