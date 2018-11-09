#pragma once
#include "IElement.h"
#include <memory>
#include <vector>
#include "Token.h"

#include "IParser.h"

class Parser : public IParser
{
public:
	Parser& parse(const std::vector<Token>& tokens);

	auto getElement() const { return m_element; }

	bool justDoIt() const override;

private:
	void specialPrivateMethod() const { std::cout << "Private Method()\n"; }

	std::shared_ptr<IElement> m_element;

};
