#include <iostream>
#include "shape.h"
#include "transform.h"

int main()
{
	////////////////////////try constructor 1//////////////////////// 
	Shape shape11;
	shape11.type = 3;
	std::cout << "Try constructor 1: " << shape11.getType() << std::endl;
	transform transform11(shape11);
	Shape shape12 = transform11.shift(1, 2, 3);
	std::cout << "shift: " << shape11.x1 << std::endl;
	transform transform12(shape12);
	Shape shape13 = transform12.scale(2);
	std::cout << "scale: " << shape13.x1 << std::endl;
	transform transform13(shape13);
	Shape shape14 = transform13.scaleX(2);
	std::cout << "scaleX: " << shape14.x1 << std::endl;
	transform transform14(shape14);
	Shape shape15 = transform14.scaleY(2);
	std::cout << "scaleY: " << shape15.x1 << std::endl;
	transform transform15(shape15);
	Shape shape16 = transform15.scaleZ(2);
	std::cout << "scaleZ: " << shape16.x1 << std::endl;
	////////////////////////try constructor 2//////////////////////// 
	Shape shape21(2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
	std::cout << "Try constructor 2: " << shape21.getType() << std::endl;
	transform transform21(shape21);
	Shape shape22 = transform21.shift(1, 3, 3);
	std::cout << "shift: " << shape22.x1 << std::endl;
	transform transform22(shape22);
	Shape shape23 = transform22.scale(2);
	std::cout << "scale: " << shape23.x1 << std::endl;
	transform transform23(shape23);
	Shape shape24 = transform23.scaleX(2);
	std::cout << "scaleX: " << shape24.x1 << std::endl;
	transform transform24(shape24);
	Shape shape25 = transform24.scaleY(2);
	std::cout << "scaleY: " << shape25.y1 << std::endl;
	transform transform25(shape25);
	Shape shape26 = transform25.scaleZ(2);
	std::cout << "scaleZ: " << shape26.z1 << std::endl;
	// for 	circle and cylinder no work in transform type;
	//Shape shape3(5, 1, 1, 1.5, 1.5);
	//std::cout << "Try constructor 3: " << shape3.getType() << std::endl; // here mistake because in this constructor no implementation of parameter 'type'
	//transform transform3(shape3);
	//transform3.shift(1, 2, 3);
}