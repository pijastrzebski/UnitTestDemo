#pragma once

#include "Token.h"
#include <gtest/gtest.h>

struct TokenFixture : Token, ::testing::Test
{
	TokenFixture() {} // TODO: DI here
	void SetUp() override {};
	void TearDown() override {};
};
