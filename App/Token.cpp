#include "Token.h"
#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

Token::Token(const ETokenType& type, string&& text) :
	m_eType(type),
	m_text(std::move(text))
{
}

void Token::createLexicon(const string& text)
{	
	ostringstream buffer;

	auto createIntegerTokenFromBuffer = [&]() {
		if (!buffer.str().empty())
		{
			m_lexiconVec.emplace_back(ETokenType::integer, buffer.str());
			buffer.str("");
		}
	};

	try
	{
		std::for_each(text.begin(), text.end(), [&](auto ch) mutable
		{
			switch (ch)
			{
			case '+':
				createIntegerTokenFromBuffer();
				m_lexiconVec.emplace_back(ETokenType::plus, "+");
				break;
			case '-':
				createIntegerTokenFromBuffer();
				m_lexiconVec.emplace_back(ETokenType::minus, "-");
				break;
			case '(':
				createIntegerTokenFromBuffer();
				m_lexiconVec.emplace_back(ETokenType::leftParen, "(");
				break;
			case ')':
				createIntegerTokenFromBuffer();
				m_lexiconVec.emplace_back(ETokenType::rightParen, ")");
				break;
			default:
				if (isdigit(ch))
				{
					buffer << ch;
				}
				else
				{
					throw runtime_error("Unknown Symbol: '" + to_string(ch) + "'");
				}
				break;
			}
		});
	}
	catch (...)
	{
	}
}
