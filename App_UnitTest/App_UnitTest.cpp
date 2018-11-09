#include "gmock/gmock.h"
#include "gtest/gtest.h"

#include "Token.h"
#include "TokenFixture.h"
#include "ParserMock.h"
#include "Parser.h"
#include "ParserTest.h"

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

TEST(GTestTest, GoogleTestFrameworkInit)
{

}

TEST(TokenTest, TokenInitTest)
{
    Token test;
}

TEST_F(TokenFixture, TestClassFixtureTest)
{
	
}

TEST(GMockTest, ShouldReturnTrueIfMockIsInitialized)
{
	ParserMock mock;

	EXPECT_CALL(mock, justDoIt)
		.Times(1);

	ON_CALL(mock, justDoIt)
		.WillByDefault(testing::Return(true));

	auto resultOfCallingMock = mock.justDoIt();

	EXPECT_TRUE(resultOfCallingMock);

}

TEST(GMockTest2, WhatHappensIfWeWillNotUseMock)
{
	ParserTest parser(new Parser);

	auto resultOfCallingParser = parser.justDoIt();

	EXPECT_TRUE(resultOfCallingParser);

}


