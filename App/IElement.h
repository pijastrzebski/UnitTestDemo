#pragma once

struct IElement
{
	virtual ~IElement() = default;
	virtual int eval() const = 0;
};