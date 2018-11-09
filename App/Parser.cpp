#include "Parser.h"

Parser& Parser::parse(const std::vector<Token>& tokens)
{
	for (const auto& t : tokens)
	{
		switch (t.getTokenType())
		{
		case ETokenType::integer:
			break;
		case ETokenType::plus:
			break;
		case ETokenType::minus:
			break;
		case ETokenType::leftParen:
			break;
		case ETokenType::rightParen:
			break;
		}
	}

	return *this;
}

bool Parser::justDoIt() const
{
	return false; //TODO: to implement
}
