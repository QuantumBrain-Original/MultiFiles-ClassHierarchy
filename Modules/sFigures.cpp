#include <iostream>
#include "sFigures.h"

void Figure::print_output()
{
	std::cout << "Стороны: Нет\n" << "Углы: Нет\n" << std::endl;
}

Figure::Figure() : sides_count(0) {}
