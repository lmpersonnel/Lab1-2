#include <stdio.h>
int main()
{
    int m, n, p, x = 0;
    printf("M is equal to ");
    scanf_s("%d", &m);
    printf("N is equal to ");
    scanf_s("%d", &n);
    printf("P is equal to ");
    scanf_s("%d", &p);
    if (m < 0) x++;
    if (n < 0) x++;
    if (p < 0) x++;
    printf("There are %d negative numbers", x);

    return 0;
}