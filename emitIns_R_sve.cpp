case INS_sve_ptrue:
case INS_sve_ptrues:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isValidPattern()); // ppppp
   assert(isPredicateRegister(reg10)); // DDDD
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_DE_1A;
   break;

case INS_sve_rdffr:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // DDDD
   fmt = IF_SVE_DH_1A;
   break;

case INS_sve_pfalse:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // DDDD
   fmt = IF_SVE_DJ_1A;
   break;

case INS_sve_wrffr:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // NNNN
   fmt = IF_SVE_DR_1A;
   break;

case INS_sve_ptrue:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // DDD
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_DZ_1A;
   break;

case INS_sve_fmov:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // ddddd
   assert(isValidVectorElemsize(opt)); // xx
   fmt = IF_SVE_EB_1B;
   break;

case INS_sve_aesmc:
case INS_sve_aesimc:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isVectorRegister(reg10)); // ddddd
   fmt = IF_SVE_GL_1A;
   break;

