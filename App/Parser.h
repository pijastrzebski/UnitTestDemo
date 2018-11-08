#pragma once
#include "IElement.h"
#include <memory>
#include <vector>
#include "Token.h"

class Parser
{
public:
	Parser& parse(const std::vector<Token>& tokens);

	auto getElement() const { return m_element; }

private:
	std::shared_ptr<IElement> m_element;
};
