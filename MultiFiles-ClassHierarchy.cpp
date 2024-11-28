#include <iostream>
#include <Windows.h>

#include "Modules/sFigures.h"

#include "Modules/Triangles/sTriangles.h"
#include "Modules/Triangles/sRectangularTriangles.h"
#include "Modules/Triangles/sIsoscelesTriangles.h"
#include "Modules/Triangles/sEquilateralTriangles.h"

#include "Modules/Quadrangles/sQuadrangles.h"
#include "Modules/Quadrangles/sParallelograms.h"
#include "Modules/Quadrangles/sRhombus.h"
#include "Modules/Quadrangles/sRectangles.h"
#include "Modules/Quadrangles/sSquares.h"

void print_info(Figure* objFigure)
{
	if (objFigure != nullptr)
		objFigure->print_output();
	else
		std::cout << "Ошибка чтения указателя!\n";
}

int main() // Задача 3. Фигуры. Стороны и углы
{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
//	setlocale(LC_ALL, "Russian");

	Figure* unkFigure = new Figure{};
	Triangle* triengle = new Triangle{ 10, 20, 30, 50, 60, 70 };
	RectangularTriangle* rectangularTriangle = new RectangularTriangle{ 10, 20, 30, 50, 60 }; // Прямоугольный треугольник
	IsoscelesTriangle* isoscelesTriangle = new IsoscelesTriangle{ 10, 20, 50, 60 }; // Равнобедренный треугольник
	EquilateralTriangle* equilateralTriangle = new EquilateralTriangle{ 30 }; // Равносторонний треугольник

	std::cout << "Фигура:" << std::endl;
	print_info(unkFigure);

	std::cout << "\nТреугольник:" << std::endl;
	print_info(triengle);

	std::cout << "\nПрямоугольный треугольник:" << std::endl;
	print_info(rectangularTriangle);

	std::cout << "\nРавнобедренный треугольник:" << std::endl;
	print_info(isoscelesTriangle);

	std::cout << "\nРавносторонний треугольник:" << std::endl;
	print_info(equilateralTriangle);

	delete equilateralTriangle;
	delete isoscelesTriangle;
	delete rectangularTriangle;
	delete triengle;
	delete unkFigure;

	Quadrangle* quadrangle = new Quadrangle{ 10, 20, 30, 40, 50, 60, 70, 80 }; // Четырехугольник
	Parallelogram* parallelogram = new Parallelogram{ 20, 30, 30, 40 }; // Параллелограмм
	Rhombus* rhombus = new Rhombus{ 30, 30, 40 }; // Ромб
	Rectangles* rectangles = new Rectangles{ 10, 20 }; // Прямоугольник
	Square* square = new Square{ 10 }; // Квадрат

	std::cout << "\nЧетырехугольник:" << std::endl;
	print_info(quadrangle);

	std::cout << "\nПрямоугольник:" << std::endl;
	print_info(rectangles);

	std::cout << "\nКвадрат:" << std::endl;
	print_info(square);

	std::cout << "\nПараллелограмм:" << std::endl;
	print_info(parallelogram);

	std::cout << "\nРомб:" << std::endl;
	print_info(rhombus);

	delete square;
	delete rectangles;
	delete rhombus;
	delete parallelogram;
	delete quadrangle;
}
