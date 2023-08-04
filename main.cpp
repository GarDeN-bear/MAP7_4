#include <iostream>
#include "shape.h"
#include "line.h"
#include "transform.h"

int main()
{
	Line line(1, 1, 1, 1);
	std::cout << line.getType();
	line.scale(2);
}