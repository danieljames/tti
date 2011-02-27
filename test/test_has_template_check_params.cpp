#include "test_has_template_cp.hpp"
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
  BOOST_TEST(boost::tti::has_template_check_params_ATPMemberTemplate<AType>::value);
  BOOST_TEST(boost::tti::HaveCL<AType>::value);
  BOOST_TEST(boost::tti::has_template_check_params_AMemberTemplate<AType>::value);
  BOOST_TEST(boost::tti::HaveAnotherMT<AType>::value);
  BOOST_TEST(boost::tti::has_template_check_params_SomeMemberTemplate<AnotherType>::value);
  BOOST_TEST(boost::tti::ATemplateWithParms<AnotherType>::value);
  BOOST_TEST(boost::tti::has_template_check_params_SimpleTMP<AnotherType>::value);
  BOOST_TEST(!boost::tti::has_template_check_params_TemplateNotExist<AnotherType>::value);

  return boost::report_errors();

  }
