#include <stdio.h>
int main() {
    int a, b;
    a = 10;
    b = 20;

    printf("Current A: %d, Current B: %d\n", a, b);

    a = a + b; //a=30
    b = a - b; //b=30-20=10
    a = a - b; //a=30-10=20

    printf("Now A: %d, and B: %d", a, b);
}