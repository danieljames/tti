#include "test_has_type_ct.hpp"

int main()
  {
  
  // Typedef type does not exist ( BType is a nested type )
  
  boost::tti::has_type_BType<AType,BType> aVar;
  
  return 0;

  }
