#define _USE_MATH_DEFINES
#include"shape.h"
#include<cmath>

void Shape::fillingCoordinates(const int& _x1, const int& _y1, const int& _z1, const int& _x2, const int& _y2, const int& _z2, const int& _x3, const int& _y3, const int& _z3, const int& _x4, const int& _y4, const int& _z4, const int& _x5, const int& _y5, const int& _z5, const int& _x6, const int& _y6, const int& _z6, const int& _x7, const int& _y7, const int& _z7, const int& _x8, const int& _y8, const int& _z8)
{
	switch (type)
	{
	case line:
		x1 = _x1; y1 = _y1;
		x2 = _x2; y2 = _y2;
		break;
	case sqr:
		x1 = _x1; y1 = _y1;
		x2 = _x2; y2 = _y2;
		x3 = _x3; y3 = _y3;
		x4 = _x4; y4 = _y4;
		break;
	case cube:
		x1 = _x1; y1 = _y1; z1 = _z1;
		x2 = _x2; y2 = _y2; z2 = _z2;
		x3 = _x3; y3 = _y3; z3 = _z3;
		x4 = _x4; y4 = _y4; z4 = _z4;
		x5 = _x5; y5 = _y5; z5 = _z5;
		x6 = _x6; y6 = _y6; z6 = _z6;
		x7 = _x7; y7 = _y7; z7 = _z7;
		x8 = _x8; y8 = _y8; z8 = _z8;
		break;
	default:
		break;
	}
}

void Shape::fillingCoordinates(const int& _x1, const int& _y1, const double& R, const double& H)
{
	switch (type)
	{
	case circle:
		x1 = _x1; y1 = _y1;
		radius = R;
		break;
	case cylinder:
		x1 = _x1; y1 = _y1;
		radius = R;
		height = H;
		break;
	default:
		break;
	}
}

void Shape::calculateSquare(const int& a, const int& b, const int& c)
{
	switch (type)
	{
	case line:
		square = 0;
		break;
	case sqr:
		square = a * b;
		break;
	case cube:
		square = 2 * a * b + 2 * a * c + 2 * b * c;
		break;
	default:
		break;
	}
}

void Shape::calculateSquare(const double& R, const double& H)
{
	switch (type)
	{
	case circle:
		square = M_PI * R * R;
		break;
	case cylinder:
		square = M_PI * R * R + 2 * R * H;
		break;
	default:
		break;
	}
}

Shape::Shape(int _type, int _x1, int _y1, int _z1, int _x2, int _y2, int _z2, int _x3, int _y3, int _z3, int _x4, int _y4, int _z4, int _x5, int _y5, int _z5, int _x6, int _y6, int _z6, int _x7, int _y7, int _z7, int _x8, int _y8, int _z8)
{
	type = _type;

	// заполн¤ем координаты фигуры
	fillingCoordinates(_x1, _y1, _z1, _x2, _y2, _z2, _x3, _y3, _z3, _x4, _y4, _z4, _x5, _y5, _z5, _x6, _y6, _z6, _x7, _y7, _z7, _x8, _y8, _z8);
	// стороны фигуры
	int a = abs(x1 - x2);
	int b = abs(y1 - y2);
	int c = abs(z1 - z2);
	// считаем площадь фигуры
	calculateSquare(a, b, c);

	// считаем объем фигуры
	switch (type)
	{
	case line:
		volume = 0;
		break;
	case sqr:
		volume = 0;
		break;
	case cube:
		volume = a * b * c;
		break;
	default:
		break;
	}

}

Shape::Shape(int type, int _x1, int _y1, double R, double H)
{
	// заполн¤ем координаты фигуры
	fillingCoordinates(_x1, _y1, R, H);

	// считаем площадь фигуры
	calculateSquare(R, H);


	// считаем объем фигуры
	switch (type)
	{
	case circle:
		volume = 0;
		break;
	case cylinder:
		volume = M_PI * R * R * height;
		break;
	default:
		break;
	}

}