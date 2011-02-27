#include "test_mf_has_type_ct.hpp"
#include <boost/mpl/assert.hpp>

int main()
  {
  
  using namespace boost::mpl::placeholders;
  
  // NoOtherType does not exist at all
  
  BOOST_MPL_ASSERT((boost::tti::mf_has_type
                      <
                      boost::tti::has_type_NoOtherType<_,_>,
                      boost::mpl::identity<AnotherType>,
                      boost::mpl::identity<float>
                      >
                  ));
  
  return 0;

  }
