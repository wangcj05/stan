
#include <gtest/gtest.h>
#include "stan/prob/distributions/double_exponential.hpp"

TEST(ProbDistributions,DoubleExponential) {
  EXPECT_FLOAT_EQ(-0.6931472, stan::prob::double_exponential_log(1.0,1.0,1.0));
  EXPECT_FLOAT_EQ(-1.693147, stan::prob::double_exponential_log(2.0,1.0,1.0));
  EXPECT_FLOAT_EQ(-5.693147, stan::prob::double_exponential_log(-3.0,2.0,1.0));
  EXPECT_FLOAT_EQ(-1.886294, stan::prob::double_exponential_log(1.0,0.0,2.0));
  EXPECT_FLOAT_EQ(-0.8, stan::prob::double_exponential_log(1.9,2.3,0.5));
  EXPECT_FLOAT_EQ(-0.9068528, stan::prob::double_exponential_log(1.9,2.3,0.25));
}
TEST(ProbDistributions,DoubleExponentialPropto) {
  EXPECT_FLOAT_EQ(0.0, stan::prob::double_exponential_log<true>(1.0,1.0,1.0));
  EXPECT_FLOAT_EQ(0.0, stan::prob::double_exponential_log<true>(2.0,1.0,1.0));
  EXPECT_FLOAT_EQ(0.0, stan::prob::double_exponential_log<true>(-3.0,2.0,1.0));
  EXPECT_FLOAT_EQ(0.0, stan::prob::double_exponential_log<true>(1.0,0.0,2.0));
  EXPECT_FLOAT_EQ(0.0, stan::prob::double_exponential_log<true>(1.9,2.3,0.5));
  EXPECT_FLOAT_EQ(0.0, stan::prob::double_exponential_log<true>(1.9,2.3,0.25));
}
