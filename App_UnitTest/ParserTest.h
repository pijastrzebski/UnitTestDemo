#pragma once

#include "Parser.h"
#include <memory>

struct ParserTest : Parser
{
	ParserTest(Parser* parser) : m_parser(parser) {}

	std::unique_ptr<Parser> m_parser;
};