#pragma once
#include <memory>
#include "IElement.h"

enum class EBinaryType { addition, subtraction };

class BinaryOperation : IElement
{
public:

	int eval() const override;

private:
	std::shared_ptr<IElement> leftHandSite, rightHandSite;
	EBinaryType m_eType;
};