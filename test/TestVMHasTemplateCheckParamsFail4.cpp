#include "TestVMHasTemplateCheckParams.hpp"
#include <boost/mpl/assert.hpp>

int main()
  {
  
  // Wrong template parameters
  
  BOOST_MPL_ASSERT((tti::WrongParameters2ForMP<AnotherType>));
  
  return 0;

  }
