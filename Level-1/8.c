#include <stdio.h>
int main()
{
    int c;
    float f;
    printf("Enter the Temperature in C: ");
    scanf("%d", &c);

    f = (c * 9 / 5) + 32;

    printf("Temp in F is: %f", f);
}