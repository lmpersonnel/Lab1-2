#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int r, l, h;
	float pi = 3.1415926, S1, S2, V;
		printf("������ ����� ");
	scanf_s("%d", &r);
		printf("������� ����� ����� ");
	scanf_s("%d", &l);
		printf("������ ����� ");
	scanf_s("%d", &h);
	if (r <= 0 || l <= 0 || h <= 0)
	{
		printf("������� ������ ����������� ��������!");
		return 0;
	}
	S1 = pi * r * l;
	S2 = pi * r * (r + l);
	V = pi * r * r * h / 3;
		printf("������� ������� ����������� ����� %.3f\n", S1);
		printf("������ ������� ����� %.3f\n", S2);
		printf("����� ����� %.3f\n", V);
}