#pragma once
#include "sQuadrangles.h"

class Parallelogram : public Quadrangle // �������������� (������� a,c � b,d ������� �����, ���� A,C � B,D ������� �����)
{
public:
	Parallelogram(int sideA = 0, int sideB = 0, int angleA = 0, int angleB = 0);
};
