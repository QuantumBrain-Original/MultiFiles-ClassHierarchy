#pragma once
#include "../sFigures.h"

// ������ � 4 ������
class Quadrangle : public Figure // ���������������
{
protected:
	unsigned int a, b, c, d, A, B, C, D;
public:
	void print_output() override;

	Quadrangle(int sideA = 0, int sideB = 0, int sideC = 0, int sideD = 0, int angleA = 0, int angleB = 0, int angleC = 0, int angleD = 0);
};
