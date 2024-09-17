/*****************************************************************************
 *
 *  Returns the specific encoding of the given CPU instruction and format
 */

emitter::code_t emitter::emitInsCodeSve(instruction ins, insFormat fmt)
{
    // clang-format off
    const static code_t insCodes1[] =
    {
        #define   INST1(id, nm, info, fmt, e1                                                       ) e1,
        #define   INST2(id, nm, info, fmt, e1, e2                                                   ) e1,
        #define   INST3(id, nm, info, fmt, e1, e2, e3                                               ) e1,
        #define   INST4(id, nm, info, fmt, e1, e2, e3, e4                                           ) e1,
        #define   INST5(id, nm, info, fmt, e1, e2, e3, e4, e5                                       ) e1,
        #define   INST6(id, nm, info, fmt, e1, e2, e3, e4, e5, e6                                   ) e1,
        #define   INST7(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7                               ) e1,
        #define   INST8(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8                           ) e1,
        #define   INST9(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9                       ) e1,
        #define  INST11(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11             ) e1,
        #define  INST13(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13   ) e1,
        #include "instrsarm64_sve.h"
    };

    const static code_t insCodes2[] =
    {
        #define   INST1(id, nm, info, fmt, e1                                                       ) 
        #define   INST2(id, nm, info, fmt, e1, e2                                                   ) e2,
        #define   INST3(id, nm, info, fmt, e1, e2, e3                                               ) e2,
        #define   INST4(id, nm, info, fmt, e1, e2, e3, e4                                           ) e2,
        #define   INST5(id, nm, info, fmt, e1, e2, e3, e4, e5                                       ) e2,
        #define   INST6(id, nm, info, fmt, e1, e2, e3, e4, e5, e6                                   ) e2,
        #define   INST7(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7                               ) e2,
        #define   INST8(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8                           ) e2,
        #define   INST9(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9                       ) e2,
        #define  INST11(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11             ) e2,
        #define  INST13(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13   ) e2,
        #include "instrsarm64_sve.h"
    };

    const static code_t insCodes3[] =
    {
        #define   INST1(id, nm, info, fmt, e1                                                       ) 
        #define   INST2(id, nm, info, fmt, e1, e2                                                   ) 
        #define   INST3(id, nm, info, fmt, e1, e2, e3                                               ) e3,
        #define   INST4(id, nm, info, fmt, e1, e2, e3, e4                                           ) e3,
        #define   INST5(id, nm, info, fmt, e1, e2, e3, e4, e5                                       ) e3,
        #define   INST6(id, nm, info, fmt, e1, e2, e3, e4, e5, e6                                   ) e3,
        #define   INST7(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7                               ) e3,
        #define   INST8(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8                           ) e3,
        #define   INST9(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9                       ) e3,
        #define  INST11(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11             ) e3,
        #define  INST13(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13   ) e3,
        #include "instrsarm64_sve.h"
    };

    const static code_t insCodes4[] =
    {
        #define   INST1(id, nm, info, fmt, e1                                                       ) 
        #define   INST2(id, nm, info, fmt, e1, e2                                                   ) 
        #define   INST3(id, nm, info, fmt, e1, e2, e3                                               ) 
        #define   INST4(id, nm, info, fmt, e1, e2, e3, e4                                           ) e4,
        #define   INST5(id, nm, info, fmt, e1, e2, e3, e4, e5                                       ) e4,
        #define   INST6(id, nm, info, fmt, e1, e2, e3, e4, e5, e6                                   ) e4,
        #define   INST7(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7                               ) e4,
        #define   INST8(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8                           ) e4,
        #define   INST9(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9                       ) e4,
        #define  INST11(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11             ) e4,
        #define  INST13(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13   ) e4,
        #include "instrsarm64_sve.h"
    };

    const static code_t insCodes5[] =
    {
        #define   INST1(id, nm, info, fmt, e1                                                       ) 
        #define   INST2(id, nm, info, fmt, e1, e2                                                   ) 
        #define   INST3(id, nm, info, fmt, e1, e2, e3                                               ) 
        #define   INST4(id, nm, info, fmt, e1, e2, e3, e4                                           ) 
        #define   INST5(id, nm, info, fmt, e1, e2, e3, e4, e5                                       ) e5,
        #define   INST6(id, nm, info, fmt, e1, e2, e3, e4, e5, e6                                   ) e5,
        #define   INST7(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7                               ) e5,
        #define   INST8(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8                           ) e5,
        #define   INST9(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9                       ) e5,
        #define  INST11(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11             ) e5,
        #define  INST13(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13   ) e5,
        #include "instrsarm64_sve.h"
    };

    const static code_t insCodes6[] =
    {
        #define   INST1(id, nm, info, fmt, e1                                                       ) 
        #define   INST2(id, nm, info, fmt, e1, e2                                                   ) 
        #define   INST3(id, nm, info, fmt, e1, e2, e3                                               ) 
        #define   INST4(id, nm, info, fmt, e1, e2, e3, e4                                           ) 
        #define   INST5(id, nm, info, fmt, e1, e2, e3, e4, e5                                       ) 
        #define   INST6(id, nm, info, fmt, e1, e2, e3, e4, e5, e6                                   ) e6,
        #define   INST7(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7                               ) e6,
        #define   INST8(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8                           ) e6,
        #define   INST9(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9                       ) e6,
        #define  INST11(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11             ) e6,
        #define  INST13(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13   ) e6,
        #include "instrsarm64_sve.h"
    };

    const static code_t insCodes7[] =
    {
        #define   INST1(id, nm, info, fmt, e1                                                       ) 
        #define   INST2(id, nm, info, fmt, e1, e2                                                   ) 
        #define   INST3(id, nm, info, fmt, e1, e2, e3                                               ) 
        #define   INST4(id, nm, info, fmt, e1, e2, e3, e4                                           ) 
        #define   INST5(id, nm, info, fmt, e1, e2, e3, e4, e5                                       ) 
        #define   INST6(id, nm, info, fmt, e1, e2, e3, e4, e5, e6                                   ) 
        #define   INST7(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7                               ) e7,
        #define   INST8(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8                           ) e7,
        #define   INST9(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9                       ) e7,
        #define  INST11(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11             ) e7,
        #define  INST13(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13   ) e7,
        #include "instrsarm64_sve.h"
    };

    const static code_t insCodes8[] =
    {
        #define   INST1(id, nm, info, fmt, e1                                                       ) 
        #define   INST2(id, nm, info, fmt, e1, e2                                                   ) 
        #define   INST3(id, nm, info, fmt, e1, e2, e3                                               ) 
        #define   INST4(id, nm, info, fmt, e1, e2, e3, e4                                           ) 
        #define   INST5(id, nm, info, fmt, e1, e2, e3, e4, e5                                       ) 
        #define   INST6(id, nm, info, fmt, e1, e2, e3, e4, e5, e6                                   ) 
        #define   INST7(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7                               ) 
        #define   INST8(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8                           ) e8,
        #define   INST9(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9                       ) e8,
        #define  INST11(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11             ) e8,
        #define  INST13(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13   ) e8,
        #include "instrsarm64_sve.h"
    };

    const static code_t insCodes9[] =
    {
        #define   INST1(id, nm, info, fmt, e1                                                       ) 
        #define   INST2(id, nm, info, fmt, e1, e2                                                   ) 
        #define   INST3(id, nm, info, fmt, e1, e2, e3                                               ) 
        #define   INST4(id, nm, info, fmt, e1, e2, e3, e4                                           ) 
        #define   INST5(id, nm, info, fmt, e1, e2, e3, e4, e5                                       ) 
        #define   INST6(id, nm, info, fmt, e1, e2, e3, e4, e5, e6                                   ) 
        #define   INST7(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7                               ) 
        #define   INST8(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8                           ) 
        #define   INST9(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9                       ) e9,
        #define  INST11(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11             ) e9,
        #define  INST13(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13   ) e9,
        #include "instrsarm64_sve.h"
    };

    const static code_t insCodes10[] =
    {
        #define   INST1(id, nm, info, fmt, e1                                                       ) 
        #define   INST2(id, nm, info, fmt, e1, e2                                                   ) 
        #define   INST3(id, nm, info, fmt, e1, e2, e3                                               ) 
        #define   INST4(id, nm, info, fmt, e1, e2, e3, e4                                           ) 
        #define   INST5(id, nm, info, fmt, e1, e2, e3, e4, e5                                       ) 
        #define   INST6(id, nm, info, fmt, e1, e2, e3, e4, e5, e6                                   ) 
        #define   INST7(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7                               ) 
        #define   INST8(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8                           ) 
        #define   INST9(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9                       ) 
        #define  INST11(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11             ) e10,
        #define  INST13(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13   ) e10,
        #include "instrsarm64_sve.h"
    };

    const static code_t insCodes11[] =
    {
        #define   INST1(id, nm, info, fmt, e1                                                       ) 
        #define   INST2(id, nm, info, fmt, e1, e2                                                   ) 
        #define   INST3(id, nm, info, fmt, e1, e2, e3                                               ) 
        #define   INST4(id, nm, info, fmt, e1, e2, e3, e4                                           ) 
        #define   INST5(id, nm, info, fmt, e1, e2, e3, e4, e5                                       ) 
        #define   INST6(id, nm, info, fmt, e1, e2, e3, e4, e5, e6                                   ) 
        #define   INST7(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7                               ) 
        #define   INST8(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8                           ) 
        #define   INST9(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9                       ) 
        #define  INST11(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11             ) e11,
        #define  INST13(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13   ) e11,
        #include "instrsarm64_sve.h"
    };

    const static code_t insCodes12[] =
    {
        #define   INST1(id, nm, info, fmt, e1                                                       ) 
        #define   INST2(id, nm, info, fmt, e1, e2                                                   ) 
        #define   INST3(id, nm, info, fmt, e1, e2, e3                                               ) 
        #define   INST4(id, nm, info, fmt, e1, e2, e3, e4                                           ) 
        #define   INST5(id, nm, info, fmt, e1, e2, e3, e4, e5                                       ) 
        #define   INST6(id, nm, info, fmt, e1, e2, e3, e4, e5, e6                                   ) 
        #define   INST7(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7                               ) 
        #define   INST8(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8                           ) 
        #define   INST9(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9                       ) 
        #define  INST11(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11             ) 
        #define  INST13(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13   ) e12,
        #include "instrsarm64_sve.h"
    };

    const static code_t insCodes13[] =
    {
        #define   INST1(id, nm, info, fmt, e1                                                       ) 
        #define   INST2(id, nm, info, fmt, e1, e2                                                   ) 
        #define   INST3(id, nm, info, fmt, e1, e2, e3                                               ) 
        #define   INST4(id, nm, info, fmt, e1, e2, e3, e4                                           ) 
        #define   INST5(id, nm, info, fmt, e1, e2, e3, e4, e5                                       ) 
        #define   INST6(id, nm, info, fmt, e1, e2, e3, e4, e5, e6                                   ) 
        #define   INST7(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7                               ) 
        #define   INST8(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8                           ) 
        #define   INST9(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9                       ) 
        #define  INST11(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11             ) 
        #define  INST13(id, nm, info, fmt, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13   ) e13,
        #include "instrsarm64_sve.h"
    };

    // clang-format on
    const static insFormat formatEncode13A[13] = {IF_SVE_AU_3A, IF_SVE_BT_1A, IF_SVE_BV_2A, IF_SVE_BV_2A_J, IF_SVE_BW_2A, IF_SVE_CB_2A, IF_SVE_CP_3A, IF_SVE_CQ_3A, IF_SVE_CW_4A, IF_SVE_CZ_4A, IF_SVE_CZ_4A_K, IF_SVE_CZ_4A_L, IF_SVE_EB_1A};
    const static insFormat formatEncode11A[11] = {IF_SVE_JD_4B, IF_SVE_JD_4C, IF_SVE_JI_3A_A, IF_SVE_JJ_4A, IF_SVE_JJ_4A_B, IF_SVE_JJ_4A_C, IF_SVE_JJ_4A_D, IF_SVE_JJ_4B, IF_SVE_JJ_4B_E, IF_SVE_JN_3B, IF_SVE_JN_3C};
    const static insFormat formatEncode9A[9] = {IF_SVE_HW_4A, IF_SVE_HW_4A_A, IF_SVE_HW_4A_B, IF_SVE_HW_4A_C, IF_SVE_HW_4B, IF_SVE_HW_4B_D, IF_SVE_HX_3A_E, IF_SVE_IJ_3A_F, IF_SVE_IK_4A_G};
    const static insFormat formatEncode9B[9] = {IF_SVE_HW_4A, IF_SVE_HW_4A_A, IF_SVE_HW_4A_B, IF_SVE_HW_4A_C, IF_SVE_HW_4B, IF_SVE_HW_4B_D, IF_SVE_HX_3A_E, IF_SVE_IJ_3A_G, IF_SVE_IK_4A_I};
    const static insFormat formatEncode9C[9] = {IF_SVE_HW_4A, IF_SVE_HW_4A_A, IF_SVE_HW_4A_B, IF_SVE_HW_4A_C, IF_SVE_HW_4B, IF_SVE_HW_4B_D, IF_SVE_HX_3A_E, IF_SVE_IH_3A_F, IF_SVE_II_4A_H};
    const static insFormat formatEncode9D[9] = {IF_SVE_IH_3A, IF_SVE_IH_3A_A, IF_SVE_II_4A, IF_SVE_II_4A_B, IF_SVE_IU_4A, IF_SVE_IU_4A_C, IF_SVE_IU_4B, IF_SVE_IU_4B_D, IF_SVE_IV_3A};
    const static insFormat formatEncode9E[9] = {IF_SVE_JD_4A, IF_SVE_JI_3A_A, IF_SVE_JJ_4A, IF_SVE_JJ_4A_B, IF_SVE_JJ_4A_C, IF_SVE_JJ_4A_D, IF_SVE_JJ_4B, IF_SVE_JJ_4B_E, IF_SVE_JN_3A};
    const static insFormat formatEncode9F[9] = {IF_SVE_JD_4C, IF_SVE_JD_4C_A, IF_SVE_JJ_4A, IF_SVE_JJ_4A_B, IF_SVE_JJ_4B, IF_SVE_JJ_4B_C, IF_SVE_JL_3A, IF_SVE_JN_3C, IF_SVE_JN_3C_D};
    const static insFormat formatEncode8A[8] = {IF_SVE_CE_2A, IF_SVE_CE_2B, IF_SVE_CE_2C, IF_SVE_CE_2D, IF_SVE_CF_2A, IF_SVE_CF_2B, IF_SVE_CF_2C, IF_SVE_CF_2D};
    const static insFormat formatEncode8B[8] = {IF_SVE_HW_4A, IF_SVE_HW_4A_A, IF_SVE_HW_4A_B, IF_SVE_HW_4A_C, IF_SVE_HW_4B, IF_SVE_HW_4B_D, IF_SVE_HX_3A_E, IF_SVE_IG_4A_F};
    const static insFormat formatEncode8C[8] = {IF_SVE_HW_4A, IF_SVE_HW_4A_A, IF_SVE_HW_4A_B, IF_SVE_HW_4A_C, IF_SVE_HW_4B, IF_SVE_HW_4B_D, IF_SVE_HX_3A_E, IF_SVE_IG_4A_G};
    const static insFormat formatEncode7A[7] = {IF_SVE_IJ_3A, IF_SVE_IK_4A, IF_SVE_IU_4A, IF_SVE_IU_4A_A, IF_SVE_IU_4B, IF_SVE_IU_4B_B, IF_SVE_IV_3A};
    const static insFormat formatEncode6A[6] = {IF_SVE_AE_3A, IF_SVE_BD_3A, IF_SVE_EE_1A, IF_SVE_FD_3A, IF_SVE_FD_3B, IF_SVE_FD_3C};
    const static insFormat formatEncode6B[6] = {IF_SVE_GY_3A, IF_SVE_GY_3B, IF_SVE_GY_3B_D, IF_SVE_HA_3A, IF_SVE_HA_3A_E, IF_SVE_HA_3A_F};
    const static insFormat formatEncode6C[6] = {IF_SVE_HW_4A, IF_SVE_HW_4A_A, IF_SVE_HW_4B, IF_SVE_HX_3A_B, IF_SVE_IJ_3A_D, IF_SVE_IK_4A_F};
    const static insFormat formatEncode6D[6] = {IF_SVE_HW_4A, IF_SVE_HW_4A_A, IF_SVE_HW_4B, IF_SVE_HX_3A_B, IF_SVE_IJ_3A_E, IF_SVE_IK_4A_H};
    const static insFormat formatEncode6E[6] = {IF_SVE_HY_3A, IF_SVE_HY_3A_A, IF_SVE_HY_3B, IF_SVE_HZ_2A_B, IF_SVE_IA_2A, IF_SVE_IB_3A};
    const static insFormat formatEncode6F[6] = {IF_SVE_IG_4A, IF_SVE_IU_4A, IF_SVE_IU_4A_A, IF_SVE_IU_4B, IF_SVE_IU_4B_B, IF_SVE_IV_3A};
    const static insFormat formatEncode6G[6] = {IF_SVE_JD_4A, IF_SVE_JI_3A_A, IF_SVE_JK_4A, IF_SVE_JK_4A_B, IF_SVE_JK_4B, IF_SVE_JN_3A};
    const static insFormat formatEncode5A[5] = {IF_SVE_AM_2A, IF_SVE_AN_3A, IF_SVE_AO_3A, IF_SVE_BF_2A, IF_SVE_BG_3A};
    const static insFormat formatEncode5B[5] = {IF_SVE_GX_3A, IF_SVE_GX_3B, IF_SVE_HK_3A, IF_SVE_HL_3A, IF_SVE_HM_2A};
    const static insFormat formatEncode5C[5] = {IF_SVE_EF_3A, IF_SVE_EG_3A, IF_SVE_EH_3A, IF_SVE_EY_3A, IF_SVE_EY_3B};
    const static insFormat formatEncode5D[5] = {IF_SVE_HW_4A, IF_SVE_HW_4A_A, IF_SVE_HW_4B, IF_SVE_HX_3A_B, IF_SVE_IG_4A_D};
    const static insFormat formatEncode5E[5] = {IF_SVE_HW_4A, IF_SVE_HW_4A_A, IF_SVE_HW_4B, IF_SVE_HX_3A_B, IF_SVE_IG_4A_E};
    const static insFormat formatEncode4A[4] = {IF_SVE_AA_3A, IF_SVE_AU_3A, IF_SVE_BS_1A, IF_SVE_CZ_4A};
    const static insFormat formatEncode4B[4] = {IF_SVE_BU_2A, IF_SVE_BV_2B, IF_SVE_EA_1A, IF_SVE_EB_1B};
    const static insFormat formatEncode4C[4] = {IF_SVE_HS_3A, IF_SVE_HS_3A_H, IF_SVE_HS_3A_I, IF_SVE_HS_3A_J};
    const static insFormat formatEncode4D[4] = {IF_SVE_HP_3B, IF_SVE_HP_3B_H, IF_SVE_HP_3B_I, IF_SVE_HP_3B_J};
    const static insFormat formatEncode4E[4] = {IF_SVE_BE_3A, IF_SVE_FI_3A, IF_SVE_FI_3B, IF_SVE_FI_3C};
    const static insFormat formatEncode4F[4] = {IF_SVE_EM_3A, IF_SVE_FK_3A, IF_SVE_FK_3B, IF_SVE_FK_3C};
    const static insFormat formatEncode4G[4] = {IF_SVE_AR_4A, IF_SVE_FF_3A, IF_SVE_FF_3B, IF_SVE_FF_3C};
    const static insFormat formatEncode4H[4] = {IF_SVE_GM_3A, IF_SVE_GN_3A, IF_SVE_GZ_3A, IF_SVE_HB_3A};
    const static insFormat formatEncode4I[4] = {IF_SVE_AX_1A, IF_SVE_AY_2A, IF_SVE_AZ_2A, IF_SVE_BA_3A};
    const static insFormat formatEncode4J[4] = {IF_SVE_BV_2A, IF_SVE_BV_2A_A, IF_SVE_CP_3A, IF_SVE_CQ_3A};
    const static insFormat formatEncode4K[4] = {IF_SVE_IF_4A, IF_SVE_IF_4A_A, IF_SVE_IM_3A, IF_SVE_IN_4A};
    const static insFormat formatEncode4L[4] = {IF_SVE_IZ_4A, IF_SVE_IZ_4A_A, IF_SVE_JB_4A, IF_SVE_JM_3A};
    const static insFormat formatEncode3A[3] = {IF_SVE_AB_3A, IF_SVE_AT_3A, IF_SVE_EC_1A};
    const static insFormat formatEncode3B[3] = {IF_SVE_BH_3A, IF_SVE_BH_3B, IF_SVE_BH_3B_A};
    const static insFormat formatEncode3C[3] = {IF_SVE_BW_2A, IF_SVE_CB_2A, IF_SVE_EB_1A};
    const static insFormat formatEncode3D[3] = {IF_SVE_BR_3A, IF_SVE_BR_3B, IF_SVE_CI_3A};
    const static insFormat formatEncode3E[3] = {IF_SVE_AT_3A, IF_SVE_EC_1A, IF_SVE_ET_3A};
    const static insFormat formatEncode3F[3] = {IF_SVE_GU_3A, IF_SVE_GU_3B, IF_SVE_HU_4A};
    const static insFormat formatEncode3G[3] = {IF_SVE_GH_3A, IF_SVE_GH_3B, IF_SVE_GH_3B_B};
    const static insFormat formatEncode3H[3] = {IF_SVE_HK_3A, IF_SVE_HL_3A, IF_SVE_HM_2A};
    const static insFormat formatEncode3I[3] = {IF_SVE_CM_3A, IF_SVE_CN_3A, IF_SVE_CO_3A};
    const static insFormat formatEncode3J[3] = {IF_SVE_CX_4A, IF_SVE_CX_4A_A, IF_SVE_CY_3A};
    const static insFormat formatEncode3K[3] = {IF_SVE_CX_4A, IF_SVE_CX_4A_A, IF_SVE_CY_3B};
    const static insFormat formatEncode3L[3] = {IF_SVE_DT_3A, IF_SVE_DX_3A, IF_SVE_DY_3A};
    const static insFormat formatEncode3M[3] = {IF_SVE_EJ_3A, IF_SVE_FA_3A, IF_SVE_FA_3B};
    const static insFormat formatEncode3N[3] = {IF_SVE_EK_3A, IF_SVE_FB_3A, IF_SVE_FB_3B};
    const static insFormat formatEncode3O[3] = {IF_SVE_EK_3A, IF_SVE_FC_3A, IF_SVE_FC_3B};
    const static insFormat formatEncode3P[3] = {IF_SVE_EL_3A, IF_SVE_FG_3A, IF_SVE_FG_3B};
    const static insFormat formatEncode3Q[3] = {IF_SVE_EO_3A, IF_SVE_FJ_3A, IF_SVE_FJ_3B};
    const static insFormat formatEncode3R[3] = {IF_SVE_FE_3A, IF_SVE_FE_3B, IF_SVE_FN_3A};
    const static insFormat formatEncode3S[3] = {IF_SVE_FH_3A, IF_SVE_FH_3B, IF_SVE_FN_3A};
    const static insFormat formatEncode3T[3] = {IF_SVE_GX_3C, IF_SVE_HK_3B, IF_SVE_HL_3B};
    const static insFormat formatEncode3U[3] = {IF_SVE_IM_3A, IF_SVE_IN_4A, IF_SVE_IX_4A};
    const static insFormat formatEncode3V[3] = {IF_SVE_JA_4A, IF_SVE_JB_4A, IF_SVE_JM_3A};
    const static insFormat formatEncode2AA[2] = {IF_SVE_ID_2A, IF_SVE_IE_2A};
    const static insFormat formatEncode2AB[2] = {IF_SVE_JG_2A, IF_SVE_JH_2A};
    const static insFormat formatEncode2AC[2] = {IF_SVE_AD_3A, IF_SVE_ED_1A};
    const static insFormat formatEncode2AD[2] = {IF_SVE_AB_3B, IF_SVE_AT_3B};
    const static insFormat formatEncode2AE[2] = {IF_SVE_CG_2A, IF_SVE_CJ_2A};
    const static insFormat formatEncode2AF[2] = {IF_SVE_AE_3A, IF_SVE_BD_3A};
    const static insFormat formatEncode2AG[2] = {IF_SVE_BS_1A, IF_SVE_CZ_4A};
    const static insFormat formatEncode2AH[2] = {IF_SVE_BQ_2A, IF_SVE_BQ_2B};
    const static insFormat formatEncode2AI[2] = {IF_SVE_AM_2A, IF_SVE_EU_3A};
    const static insFormat formatEncode2AJ[2] = {IF_SVE_HI_3A, IF_SVE_HT_4A};
    const static insFormat formatEncode2AK[2] = {IF_SVE_BZ_3A, IF_SVE_BZ_3A_A};
    const static insFormat formatEncode2AL[2] = {IF_SVE_GG_3A, IF_SVE_GG_3B};
    const static insFormat formatEncode2AM[2] = {IF_SVE_HL_3A, IF_SVE_HM_2A};
    const static insFormat formatEncode2AN[2] = {IF_SVE_EI_3A, IF_SVE_EZ_3A};
    const static insFormat formatEncode2AO[2] = {IF_SVE_GT_4A, IF_SVE_GV_3A};
    const static insFormat formatEncode2AP[2] = {IF_SVE_GY_3B, IF_SVE_HA_3A};
    const static insFormat formatEncode2AQ[2] = {IF_SVE_GO_3A, IF_SVE_HC_3A};
    const static insFormat formatEncode2AR[2] = {IF_SVE_AP_3A, IF_SVE_CZ_4A};
    const static insFormat formatEncode2AS[2] = {IF_SVE_HO_3A, IF_SVE_HO_3A_B};
    const static insFormat formatEncode2AT[2] = {IF_SVE_AB_3A, IF_SVE_EC_1A};
    const static insFormat formatEncode2AU[2] = {IF_SVE_AH_3A, IF_SVE_BI_2A};
    const static insFormat formatEncode2AV[2] = {IF_SVE_BM_1A, IF_SVE_BN_1A};
    const static insFormat formatEncode2AW[2] = {IF_SVE_BO_1A, IF_SVE_BP_1A};
    const static insFormat formatEncode2AX[2] = {IF_SVE_CC_2A, IF_SVE_CD_2A};
    const static insFormat formatEncode2AY[2] = {IF_SVE_CR_3A, IF_SVE_CS_3A};
    const static insFormat formatEncode2AZ[2] = {IF_SVE_CV_3A, IF_SVE_CV_3B};
    const static insFormat formatEncode2BA[2] = {IF_SVE_CW_4A, IF_SVE_CZ_4A};
    const static insFormat formatEncode2BB[2] = {IF_SVE_CZ_4A, IF_SVE_CZ_4A_A};
    const static insFormat formatEncode2BC[2] = {IF_SVE_DE_1A, IF_SVE_DZ_1A};
    const static insFormat formatEncode2BD[2] = {IF_SVE_DG_2A, IF_SVE_DH_1A};
    const static insFormat formatEncode2BE[2] = {IF_SVE_DK_3A, IF_SVE_DL_2A};
    const static insFormat formatEncode2BF[2] = {IF_SVE_DM_2A, IF_SVE_DN_2A};
    const static insFormat formatEncode2BG[2] = {IF_SVE_DO_2A, IF_SVE_DP_2A};
    const static insFormat formatEncode2BH[2] = {IF_SVE_DW_2A, IF_SVE_DW_2B};
    const static insFormat formatEncode2BI[2] = {IF_SVE_FN_3A, IF_SVE_FN_3B};
    const static insFormat formatEncode2BJ[2] = {IF_SVE_GQ_3A, IF_SVE_HG_2A};
    const static insFormat formatEncode2BK[2] = {IF_SVE_GU_3C, IF_SVE_HU_4B};
    const static insFormat formatEncode2BL[2] = {IF_SVE_GZ_3A, IF_SVE_HB_3A};
    const static insFormat formatEncode2BM[2] = {IF_SVE_HK_3B, IF_SVE_HL_3B};
    const static insFormat formatEncode2BN[2] = {IF_SVE_IF_4A, IF_SVE_IF_4A_A};
    const static insFormat formatEncode2BO[2] = {IF_SVE_IO_3A, IF_SVE_IP_4A};
    const static insFormat formatEncode2BP[2] = {IF_SVE_IQ_3A, IF_SVE_IR_4A};
    const static insFormat formatEncode2BQ[2] = {IF_SVE_IS_3A, IF_SVE_IT_4A};
    const static insFormat formatEncode2BR[2] = {IF_SVE_JC_4A, IF_SVE_JO_3A};
    const static insFormat formatEncode2BS[2] = {IF_SVE_JE_3A, IF_SVE_JF_4A};

    code_t    code           = BAD_CODE;
    insFormat insFmt         = emitInsFormat(ins);
    bool      encoding_found = false;
    int       index          = -1;

    switch (insFmt)
    {
        case IF_SVE_13A:
            for (index = 0; index < 13; index++)
            {
                if (fmt == formatEncode13A[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_11A:
            for (index = 0; index < 11; index++)
            {
                if (fmt == formatEncode11A[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_9A:
            for (index = 0; index < 9; index++)
            {
                if (fmt == formatEncode9A[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_9B:
            for (index = 0; index < 9; index++)
            {
                if (fmt == formatEncode9B[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_9C:
            for (index = 0; index < 9; index++)
            {
                if (fmt == formatEncode9C[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_9D:
            for (index = 0; index < 9; index++)
            {
                if (fmt == formatEncode9D[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_9E:
            for (index = 0; index < 9; index++)
            {
                if (fmt == formatEncode9E[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_9F:
            for (index = 0; index < 9; index++)
            {
                if (fmt == formatEncode9F[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_8A:
            for (index = 0; index < 8; index++)
            {
                if (fmt == formatEncode8A[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_8B:
            for (index = 0; index < 8; index++)
            {
                if (fmt == formatEncode8B[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_8C:
            for (index = 0; index < 8; index++)
            {
                if (fmt == formatEncode8C[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_7A:
            for (index = 0; index < 7; index++)
            {
                if (fmt == formatEncode7A[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_6A:
            for (index = 0; index < 6; index++)
            {
                if (fmt == formatEncode6A[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_6B:
            for (index = 0; index < 6; index++)
            {
                if (fmt == formatEncode6B[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_6C:
            for (index = 0; index < 6; index++)
            {
                if (fmt == formatEncode6C[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_6D:
            for (index = 0; index < 6; index++)
            {
                if (fmt == formatEncode6D[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_6E:
            for (index = 0; index < 6; index++)
            {
                if (fmt == formatEncode6E[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_6F:
            for (index = 0; index < 6; index++)
            {
                if (fmt == formatEncode6F[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_6G:
            for (index = 0; index < 6; index++)
            {
                if (fmt == formatEncode6G[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_5A:
            for (index = 0; index < 5; index++)
            {
                if (fmt == formatEncode5A[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_5B:
            for (index = 0; index < 5; index++)
            {
                if (fmt == formatEncode5B[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_5C:
            for (index = 0; index < 5; index++)
            {
                if (fmt == formatEncode5C[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_5D:
            for (index = 0; index < 5; index++)
            {
                if (fmt == formatEncode5D[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_5E:
            for (index = 0; index < 5; index++)
            {
                if (fmt == formatEncode5E[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_4A:
            for (index = 0; index < 4; index++)
            {
                if (fmt == formatEncode4A[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_4B:
            for (index = 0; index < 4; index++)
            {
                if (fmt == formatEncode4B[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_4C:
            for (index = 0; index < 4; index++)
            {
                if (fmt == formatEncode4C[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_4D:
            for (index = 0; index < 4; index++)
            {
                if (fmt == formatEncode4D[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_4E:
            for (index = 0; index < 4; index++)
            {
                if (fmt == formatEncode4E[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_4F:
            for (index = 0; index < 4; index++)
            {
                if (fmt == formatEncode4F[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_4G:
            for (index = 0; index < 4; index++)
            {
                if (fmt == formatEncode4G[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_4H:
            for (index = 0; index < 4; index++)
            {
                if (fmt == formatEncode4H[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_4I:
            for (index = 0; index < 4; index++)
            {
                if (fmt == formatEncode4I[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_4J:
            for (index = 0; index < 4; index++)
            {
                if (fmt == formatEncode4J[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_4K:
            for (index = 0; index < 4; index++)
            {
                if (fmt == formatEncode4K[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_4L:
            for (index = 0; index < 4; index++)
            {
                if (fmt == formatEncode4L[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_3A:
            for (index = 0; index < 3; index++)
            {
                if (fmt == formatEncode3A[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_3B:
            for (index = 0; index < 3; index++)
            {
                if (fmt == formatEncode3B[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_3C:
            for (index = 0; index < 3; index++)
            {
                if (fmt == formatEncode3C[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_3D:
            for (index = 0; index < 3; index++)
            {
                if (fmt == formatEncode3D[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_3E:
            for (index = 0; index < 3; index++)
            {
                if (fmt == formatEncode3E[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_3F:
            for (index = 0; index < 3; index++)
            {
                if (fmt == formatEncode3F[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_3G:
            for (index = 0; index < 3; index++)
            {
                if (fmt == formatEncode3G[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_3H:
            for (index = 0; index < 3; index++)
            {
                if (fmt == formatEncode3H[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_3I:
            for (index = 0; index < 3; index++)
            {
                if (fmt == formatEncode3I[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_3J:
            for (index = 0; index < 3; index++)
            {
                if (fmt == formatEncode3J[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_3K:
            for (index = 0; index < 3; index++)
            {
                if (fmt == formatEncode3K[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_3L:
            for (index = 0; index < 3; index++)
            {
                if (fmt == formatEncode3L[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_3M:
            for (index = 0; index < 3; index++)
            {
                if (fmt == formatEncode3M[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_3N:
            for (index = 0; index < 3; index++)
            {
                if (fmt == formatEncode3N[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_3O:
            for (index = 0; index < 3; index++)
            {
                if (fmt == formatEncode3O[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_3P:
            for (index = 0; index < 3; index++)
            {
                if (fmt == formatEncode3P[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_3Q:
            for (index = 0; index < 3; index++)
            {
                if (fmt == formatEncode3Q[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_3R:
            for (index = 0; index < 3; index++)
            {
                if (fmt == formatEncode3R[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_3S:
            for (index = 0; index < 3; index++)
            {
                if (fmt == formatEncode3S[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_3T:
            for (index = 0; index < 3; index++)
            {
                if (fmt == formatEncode3T[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_3U:
            for (index = 0; index < 3; index++)
            {
                if (fmt == formatEncode3U[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_3V:
            for (index = 0; index < 3; index++)
            {
                if (fmt == formatEncode3V[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2AA:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2AA[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2AB:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2AB[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2AC:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2AC[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2AD:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2AD[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2AE:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2AE[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2AF:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2AF[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2AG:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2AG[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2AH:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2AH[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2AI:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2AI[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2AJ:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2AJ[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2AK:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2AK[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2AL:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2AL[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2AM:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2AM[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2AN:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2AN[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2AO:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2AO[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2AP:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2AP[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2AQ:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2AQ[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2AR:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2AR[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2AS:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2AS[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2AT:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2AT[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2AU:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2AU[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2AV:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2AV[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2AW:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2AW[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2AX:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2AX[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2AY:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2AY[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2AZ:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2AZ[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2BA:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2BA[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2BB:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2BB[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2BC:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2BC[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2BD:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2BD[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2BE:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2BE[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2BF:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2BF[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2BG:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2BG[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2BH:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2BH[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2BI:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2BI[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2BJ:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2BJ[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2BK:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2BK[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2BL:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2BL[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2BM:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2BM[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2BN:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2BN[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2BO:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2BO[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2BP:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2BP[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2BQ:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2BQ[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2BR:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2BR[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        case IF_SVE_2BS:
            for (index = 0; index < 2; index++)
            {
                if (fmt == formatEncode2BS[index])
                {
                    encoding_found = true;
                    break;
                }
            }
            break;
        default:
            if (fmt == insFmt)
            {
                encoding_found = true;
                index          = 0;
            }
            else
            {
                encoding_found = false;
            }
            break;
    }

    assert(encoding_found);

    ins = ((unsigned)ins - INS_sve_invalid);

    switch (index)
    {
        case 0:
            assert(ins < ArrLen(insCodes1));
            code = insCodes1 [ins];
            break;
        case 1:
            assert(ins < ArrLen(insCodes2));
            code = insCodes2 [ins];
            break;
        case 2:
            assert(ins < ArrLen(insCodes3));
            code = insCodes3 [ins];
            break;
        case 3:
            assert(ins < ArrLen(insCodes4));
            code = insCodes4 [ins];
            break;
        case 4:
            assert(ins < ArrLen(insCodes5));
            code = insCodes5 [ins];
            break;
        case 5:
            assert(ins < ArrLen(insCodes6));
            code = insCodes6 [ins];
            break;
        case 6:
            assert(ins < ArrLen(insCodes7));
            code = insCodes7 [ins];
            break;
        case 7:
            assert(ins < ArrLen(insCodes8));
            code = insCodes8 [ins];
            break;
        case 8:
            assert(ins < ArrLen(insCodes9));
            code = insCodes9 [ins];
            break;
        case 9:
            assert(ins < ArrLen(insCodes10));
            code = insCodes10 [ins];
            break;
        case 10:
            assert(ins < ArrLen(insCodes11));
            code = insCodes11 [ins];
            break;
        case 11:
            assert(ins < ArrLen(insCodes12));
            code = insCodes12 [ins];
            break;
        case 12:
            assert(ins < ArrLen(insCodes13));
            code = insCodes13 [ins];
            break;
    }

    assert((code != BAD_CODE));

    return code;
}
