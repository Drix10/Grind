#include <stdio.h>
int main()
{
    int area, rad, cir;
    printf("Enter the radius");
    scanf("%d", &rad);

    area = 22 / 7 * rad * rad;
    cir = 2 * 22 / 7 * rad;

    printf("Area is: %d , Cir is: %d", area, cir);
}