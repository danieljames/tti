#include "test_has_member_function.hpp"
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
  BOOST_TEST((tti::has_member_function_VoidFunction<AType,void>::value));
  BOOST_TEST((tti::FunctionReturningInt<AType,int>::value));
  BOOST_TEST((tti::FunctionReturningInt<AnotherType,double,boost::mpl::vector<int> >::value));
  BOOST_TEST((tti::has_member_function_aFunction<AnotherType,AType,boost::mpl::vector<int> >::value));
  BOOST_TEST((tti::AnotherIntFunction<AnotherType,int,boost::mpl::vector<AType> >::value));
  BOOST_TEST((tti::has_member_function_sFunction<AnotherType,AType::AnIntType,boost::mpl::vector<int,long,double> >::value));
  BOOST_TEST((!tti::has_member_function_someFunctionMember<AnotherType,AType,boost::mpl::vector<long,int> >::value));
  
  return boost::report_errors();

  }
