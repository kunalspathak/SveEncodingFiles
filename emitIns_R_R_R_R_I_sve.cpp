case INS_sve_psel:
   assert(insOptsScalable(id->idInsOpt()));
   assert(isPredicateRegister(reg10)); // MMMM
   assert(isPredicateRegister(reg20)); // NNNN
   assert(isPredicateRegister(reg30)); // DDDD
   assert(isValidGeneralRegister(reg40)); // vv
   assert(isValidVectorElemsize(opt)); // xxx
   assert(isValidVectorElemsize(opt)); // x
   assert(isValidimm1l()); // i
   fmt = IF_SVE_DV_4A;
   break;

