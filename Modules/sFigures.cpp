#include <iostream>
#include "sFigures.h"

void Figure::print_output()
{
	std::cout << "�������: ���\n" << "����: ���\n" << std::endl;
}

Figure::Figure() : sides_count(0) {}
