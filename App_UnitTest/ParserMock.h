#pragma once

#include <gmock/gmock.h>
#include "IParser.h"

class ParserMock : public IParser
{
public:
	MOCK_CONST_METHOD0(justDoIt, bool());
};
