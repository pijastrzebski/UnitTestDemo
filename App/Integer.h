#pragma once
#include "IElement.h"

class Integer : public IElement
{
public:
	Integer(int value) : m_value(value) {}

	int eval() const override
	{
		return m_value;
	}

private:
	int m_value;
};
