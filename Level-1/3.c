#include <stdio.h>

int main() {
    int a;
    int b;

    printf("Enter two numbers for sum:\n");
    scanf("%d %d", &a, &b);    

    int sum = a + b;
    int diff = a / b;
    int multi = a * b;
    int quo = a % b;

    printf("Sum: %d\nDiff: %d\nMulti: %d\nQuo: %d\n", sum, diff, multi, quo);
    return 0;
}