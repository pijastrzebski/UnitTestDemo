#include "Token.h"

int main()
{
	const string text{ "(13-8)-(5+3)" };

	Token token;
	token.createLexicon(text);

	for(const auto& t : token.getTokens())
	{
		std::cout << t;
	}

    return 0;
}