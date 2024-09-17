// Return an encoding for the specified 'V' register used in '9' thru '5' position.
static code_t insEncodeReg_V_9_to_5(regNumber reg);

// Return an encoding for the specified 'P' register used in '12' thru '10' position.
static code_t insEncodeReg_P_12_to_10(regNumber reg);

// Return an encoding for the specified 'V' register used in '4' thru '0' position.
static code_t insEncodeReg_V_4_to_0(regNumber reg);

// Return an encoding for the specified 'V' register used in '20' thru '16' position.
static code_t insEncodeReg_V_20_to_16(regNumber reg);

// Return an encoding for the specified 'R' register used in '20' thru '16' position.
static code_t insEncodeReg_R_20_to_16(regNumber reg);

// Return an encoding for the specified 'R' register used in '9' thru '5' position.
static code_t insEncodeReg_R_9_to_5(regNumber reg);

// Return an encoding for the specified 'R' register used in '4' thru '0' position.
static code_t insEncodeReg_R_4_to_0(regNumber reg);

// Return an encoding for the specified 'P' register used in '19' thru '16' position.
static code_t insEncodeReg_P_19_to_16(regNumber reg);

// Return an encoding for the specified 'P' register used in '3' thru '0' position.
static code_t insEncodeReg_P_3_to_0(regNumber reg);

// Return an encoding for the specified 'P' register used in '8' thru '5' position.
static code_t insEncodeReg_P_8_to_5(regNumber reg);

// Return an encoding for the specified 'P' register used in '13' thru '10' position.
static code_t insEncodeReg_P_13_to_10(regNumber reg);

// Return an encoding for the specified 'R' register used in '17' thru '16' position.
static code_t insEncodeReg_R_17_to_16(regNumber reg);

// Return an encoding for the specified 'P' register used in '7' thru '5' position.
static code_t insEncodeReg_P_7_to_5(regNumber reg);

// Return an encoding for the specified 'P' register used in '3' thru '1' position.
static code_t insEncodeReg_P_3_to_1(regNumber reg);

// Return an encoding for the specified 'P' register used in '2' thru '0' position.
static code_t insEncodeReg_P_2_to_0(regNumber reg);

// Return an encoding for the specified 'V' register used in '18' thru '16' position.
static code_t insEncodeReg_V_18_to_16(regNumber reg);

// Return an encoding for the specified 'V' register used in '19' thru '16' position.
static code_t insEncodeReg_V_19_to_16(regNumber reg);

// Return an encoding for the specified 'V' register used in '9' thru '6' position.
static code_t insEncodeReg_V_9_to_6(regNumber reg);

/*****************************************************************************
 *
 *  Return an encoding for the specified 'V' register used in '9' thru '5' position.
 */

/*static*/ emitter::code_t emitter::insEncodeReg_V_9_to_5(regNumber reg)
{
    assert(isVectorRegister(reg));
    emitter::code_t ureg = (emitter::code_t)reg - (emitter::code_t)REG_V0;
    assert((ureg >= 0) && (ureg <= 32));
    return ureg << 5;
}

/*****************************************************************************
 *
 *  Return an encoding for the specified 'P' register used in '12' thru '10' position.
 */

/*static*/ emitter::code_t emitter::insEncodeReg_P_12_to_10(regNumber reg)
{
    assert(isPredicateRegister(reg));
    emitter::code_t ureg = (emitter::code_t)reg - (emitter::code_t)REG_P0;
    assert((ureg >= 0) && (ureg <= 15));
    return ureg << 10;
}

/*****************************************************************************
 *
 *  Return an encoding for the specified 'V' register used in '4' thru '0' position.
 */

/*static*/ emitter::code_t emitter::insEncodeReg_V_4_to_0(regNumber reg)
{
    assert(isVectorRegister(reg));
    emitter::code_t ureg = (emitter::code_t)reg - (emitter::code_t)REG_V0;
    assert((ureg >= 0) && (ureg <= 32));
    return ureg << 0;
}

/*****************************************************************************
 *
 *  Return an encoding for the specified 'V' register used in '20' thru '16' position.
 */

/*static*/ emitter::code_t emitter::insEncodeReg_V_20_to_16(regNumber reg)
{
    assert(isVectorRegister(reg));
    emitter::code_t ureg = (emitter::code_t)reg - (emitter::code_t)REG_V0;
    assert((ureg >= 0) && (ureg <= 32));
    return ureg << 16;
}

/*****************************************************************************
 *
 *  Return an encoding for the specified 'R' register used in '20' thru '16' position.
 */

/*static*/ emitter::code_t emitter::insEncodeReg_R_20_to_16(regNumber reg)
{
    assert(isIntegerRegister(reg));
    emitter::code_t ureg = (emitter::code_t)reg;
    assert((ureg >= 0) && (ureg <= 32));
    return ureg << 16;
}

/*****************************************************************************
 *
 *  Return an encoding for the specified 'R' register used in '9' thru '5' position.
 */

/*static*/ emitter::code_t emitter::insEncodeReg_R_9_to_5(regNumber reg)
{
    assert(isIntegerRegister(reg));
    emitter::code_t ureg = (emitter::code_t)reg;
    assert((ureg >= 0) && (ureg <= 32));
    return ureg << 5;
}

/*****************************************************************************
 *
 *  Return an encoding for the specified 'R' register used in '4' thru '0' position.
 */

/*static*/ emitter::code_t emitter::insEncodeReg_R_4_to_0(regNumber reg)
{
    assert(isIntegerRegister(reg));
    emitter::code_t ureg = (emitter::code_t)reg;
    assert((ureg >= 0) && (ureg <= 32));
    return ureg << 0;
}

/*****************************************************************************
 *
 *  Return an encoding for the specified 'P' register used in '19' thru '16' position.
 */

/*static*/ emitter::code_t emitter::insEncodeReg_P_19_to_16(regNumber reg)
{
    assert(isPredicateRegister(reg));
    emitter::code_t ureg = (emitter::code_t)reg - (emitter::code_t)REG_P0;
    assert((ureg >= 0) && (ureg <= 15));
    return ureg << 16;
}

/*****************************************************************************
 *
 *  Return an encoding for the specified 'P' register used in '3' thru '0' position.
 */

/*static*/ emitter::code_t emitter::insEncodeReg_P_3_to_0(regNumber reg)
{
    assert(isPredicateRegister(reg));
    emitter::code_t ureg = (emitter::code_t)reg - (emitter::code_t)REG_P0;
    assert((ureg >= 0) && (ureg <= 15));
    return ureg << 0;
}

/*****************************************************************************
 *
 *  Return an encoding for the specified 'P' register used in '8' thru '5' position.
 */

/*static*/ emitter::code_t emitter::insEncodeReg_P_8_to_5(regNumber reg)
{
    assert(isPredicateRegister(reg));
    emitter::code_t ureg = (emitter::code_t)reg - (emitter::code_t)REG_P0;
    assert((ureg >= 0) && (ureg <= 15));
    return ureg << 5;
}

/*****************************************************************************
 *
 *  Return an encoding for the specified 'P' register used in '13' thru '10' position.
 */

/*static*/ emitter::code_t emitter::insEncodeReg_P_13_to_10(regNumber reg)
{
    assert(isPredicateRegister(reg));
    emitter::code_t ureg = (emitter::code_t)reg - (emitter::code_t)REG_P0;
    assert((ureg >= 0) && (ureg <= 15));
    return ureg << 10;
}

/*****************************************************************************
 *
 *  Return an encoding for the specified 'R' register used in '17' thru '16' position.
 */

/*static*/ emitter::code_t emitter::insEncodeReg_R_17_to_16(regNumber reg)
{
    assert(isIntegerRegister(reg));
    emitter::code_t ureg = (emitter::code_t)reg;
    assert((ureg >= 0) && (ureg <= 32));
    return ureg << 16;
}

/*****************************************************************************
 *
 *  Return an encoding for the specified 'P' register used in '7' thru '5' position.
 */

/*static*/ emitter::code_t emitter::insEncodeReg_P_7_to_5(regNumber reg)
{
    assert(isPredicateRegister(reg));
    emitter::code_t ureg = (emitter::code_t)reg - (emitter::code_t)REG_P0;
    assert((ureg >= 0) && (ureg <= 15));
    return ureg << 5;
}

/*****************************************************************************
 *
 *  Return an encoding for the specified 'P' register used in '3' thru '1' position.
 */

/*static*/ emitter::code_t emitter::insEncodeReg_P_3_to_1(regNumber reg)
{
    assert(isPredicateRegister(reg));
    emitter::code_t ureg = (emitter::code_t)reg - (emitter::code_t)REG_P0;
    assert((ureg >= 0) && (ureg <= 15));
    return ureg << 1;
}

/*****************************************************************************
 *
 *  Return an encoding for the specified 'P' register used in '2' thru '0' position.
 */

/*static*/ emitter::code_t emitter::insEncodeReg_P_2_to_0(regNumber reg)
{
    assert(isPredicateRegister(reg));
    emitter::code_t ureg = (emitter::code_t)reg - (emitter::code_t)REG_P0;
    assert((ureg >= 0) && (ureg <= 15));
    return ureg << 0;
}

/*****************************************************************************
 *
 *  Return an encoding for the specified 'V' register used in '18' thru '16' position.
 */

/*static*/ emitter::code_t emitter::insEncodeReg_V_18_to_16(regNumber reg)
{
    assert(isVectorRegister(reg));
    emitter::code_t ureg = (emitter::code_t)reg - (emitter::code_t)REG_V0;
    assert((ureg >= 0) && (ureg <= 32));
    return ureg << 16;
}

/*****************************************************************************
 *
 *  Return an encoding for the specified 'V' register used in '19' thru '16' position.
 */

/*static*/ emitter::code_t emitter::insEncodeReg_V_19_to_16(regNumber reg)
{
    assert(isVectorRegister(reg));
    emitter::code_t ureg = (emitter::code_t)reg - (emitter::code_t)REG_V0;
    assert((ureg >= 0) && (ureg <= 32));
    return ureg << 16;
}

/*****************************************************************************
 *
 *  Return an encoding for the specified 'V' register used in '9' thru '6' position.
 */

/*static*/ emitter::code_t emitter::insEncodeReg_V_9_to_6(regNumber reg)
{
    assert(isVectorRegister(reg));
    emitter::code_t ureg = (emitter::code_t)reg - (emitter::code_t)REG_V0;
    assert((ureg >= 0) && (ureg <= 32));
    return ureg << 6;
}

