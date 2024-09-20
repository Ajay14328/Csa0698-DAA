#include <stdio.h>

int gcd(int num1, int num2) {
    if (num2 == 0)
        return num1;
    return gcd(num2, num1 % num2);
}

int main() {
    int number1, number2;

    printf("Enter the first number: ");
    scanf("%d", &number1);
    printf("Enter the second number: ");
    scanf("%d", &number2);

    int result = gcd(number1, number2);

    printf("The GCD of %d and %d is: %d\n", number1, number2, result);

    return 0;
}
