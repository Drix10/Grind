#include <stdio.h>
int main() {
    int l, b, a, p;
    printf("Enter the Length & Breadth");
    scanf("%d %d", &l, &b);

    a =  l * b;
    p = 2 * (l + b);

    printf("Area is: %d, Perimeter is: %d", a, p);
}