#include <stdio.h>

int main() {
    int r1, i1, r2, i2;

    printf("Enter real and imaginary part of first number: ");
    scanf("%d %d", &r1, &i1);

    printf("Enter real and imaginary part of second number: ");
    scanf("%d %d", &r2, &i2);

    int real = r1 + r2;
    int imag = i1 + i2;

    printf("Sum = %d + %di", real, imag);

    return 0;
}
