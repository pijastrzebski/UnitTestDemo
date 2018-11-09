#include "gmock/gmock.h"
#include "gtest/gtest.h"

#include "Token.h"
#include "TokenFixture.h"

/*  
   
	Types of tests

		Simple Tests - TEST()
		Test Fixtures - TEST_F()

	Assertions
 
		ASSERT_EQ(expected, result);
		ASSERT_NE(..., ...)
		ASSERT_STREQ(str1, str2);
		ASSERT_STRCASEEQ(str1, str2);

	Expectations (non-fatal assertions)

		EXPECT_EQ(expected, result);
		EXPECT_NE(..., ...)
		

*/

TEST(GTestTest, GoogleTestFrameworkInitTest)
{

}

TEST(TokenTest, TokenInitTest)
{
    Token test;
}

TEST_F(TokenFixture, TestClassFixtureTest)
{
	
}

