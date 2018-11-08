#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

enum class ETokenType
{
	integer, plus, minus, leftParen, rightParen
};

using namespace std;

class Token
{
public:
	Token() = default;
    Token(const ETokenType& type, string&& text);
    ~Token() = default;

	void createLexicon(const string& text);
	auto getTokens() const { return m_lexiconVec; }
	auto getTokenType() const { return m_eType; }

protected:
	vector<Token> m_lexiconVec;

private:
	ETokenType m_eType;
	string m_text;

	friend inline ostream& operator << (ostream& os, const Token& token);

};

ostream& operator << (ostream& os, const Token& token)
{
	return os << "  ` " << token.m_text << " `  ";
}


