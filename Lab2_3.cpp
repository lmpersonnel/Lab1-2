#include <stdio.h>
#include <locale.h>

float dgr_x(float x, int i) {
    float p = x;
    for (int j = 1; j < i; j++)
        p *= x;
    return p;
}

int main() 
{
    setlocale(LC_ALL, "Rus");
    float x, S = 0; int N;
    printf("������� N: ");
    scanf_s("%d", &N);
    if (N <= 0) {
        printf("�������� �������� N!");
        return 0;
    }
    printf("������� X: ");
    scanf_s("%f", &x);
    int n = 2 * N + 1;

    int min;
    if (N % 2 == 0)  min = 1;
    else min = -1;

    for (int i = 3; i <= n; i++) {
        if (i % 2 != 0) {
            int fct = 1, f;
            for (f = 1; f <= i; f++)
                fct = fct * f;
            S += min * dgr_x(x, i) / fct;
        }
    }
    S = x + S;
    printf("�������� ��������� ����� %f", S);
}