#include <stdio.h>
int main()
{
    int m, n, p;
    printf("M is equal to ");
        scanf_s("%d", &m);
    printf("N is equal to ");
        scanf_s("%d", &n);
    printf("P is equal to ");
        scanf_s("%d", &p);
    if (m < 0 && n < 0 && p < 0) {
        printf("There are 3 negative numbers");
    }
    else if (m >= 0 && n < 0 && p < 0) {
        printf("There are 2 negative numbers");
    }
    else if (m < 0 && n >= 0 && p < 0) {
        printf("There are 2 negative numbers");
    }
    else if (m < 0 && n < 0 && p >= 0) {
        printf("There are 2 negative numbers");
    }
    else if (m >= 0 && n >= 0 && p < 0) {
        printf("There is 1 negative number");
    }
    else if (m >= 0 && n < 0 && p >= 0) {
        printf("There is 1 negative number");
    }
    else if (m < 0 && n >= 0 && p >= 0) {
        printf("There is 1 negative number");
    }
    else printf("There are no negative numbers");
    return 0;
}