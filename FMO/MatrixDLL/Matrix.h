#pragma once

#include "MatrixDLL.h"

#include <vector>

using ElementType = float;

class Matrix
{
private:
	std::vector<std::vector<ElementType>> _elements;
};