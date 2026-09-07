#include <stdio.h>
int main()
{
    int a, b, temp;
    a = 10;
    b = 20;

    printf("Current A: %d, Current B: %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("Now A: %d, and B: %d", a, b);
}