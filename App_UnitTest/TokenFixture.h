#pragma once

#include "Token.h"
#include <gtest/gtest.h>

struct TokenFixture : Token, ::testing::Test
{
	TokenFixture() {}
	void SetUp() override {};
	void TearDown() override {};
};
