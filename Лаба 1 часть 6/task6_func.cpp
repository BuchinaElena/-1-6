#include <math.h>//�������������� ����������
#include <stdio.h>//���������� ��� ������ �� ��������

float x, rezylt;

 void f()
{
	rezylt = (1 - (1 / 4) * sin(2 * x) * sin(2 * x) + cos(2 * x));
}