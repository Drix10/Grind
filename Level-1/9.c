#include <stdio.h>
int main()
{
    int a, b, c, d, e, per, sum;

    printf("Enter the 5 Marks out of 100: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    sum = a + b + c + d + e;
    per = (sum * 100) / 500;

    printf("Sum is: %d, Percentage is: %d", sum, per);
}