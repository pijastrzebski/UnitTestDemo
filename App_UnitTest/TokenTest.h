#pragma once

#include "Token.h"
#include <memory>

struct TokenTest : Token
{
	TokenTest(Token* token) : m_token(token) {}

	std::unique_ptr<Token> m_token;
};