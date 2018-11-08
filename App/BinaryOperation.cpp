#include "BinaryOperation.h"

int BinaryOperation::eval() const
{
	auto left = leftHandSite->eval();
	auto right = rightHandSite->eval();

	if (m_eType == EBinaryType::addition)
	{
		return left + right;
	}
	else
	{
		return left - right;
	}

}
