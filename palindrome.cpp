#include <stdio.h>
int reverseNumber(int num, int reversedNum) {
    if (num == 0)
        return reversedNum;
    else
    return reverseNumber(num / 10, reversedNum * 10 + num % 10);
}

int main() {
    int number, reversedNumber;

    printf("Enter a number: ");
    scanf("%d", &number);

    reversedNumber = reverseNumber(number, 0);

    if (number == reversedNumber)
        printf(" is a palindrome number.\n", number);
    else
        printf("%d is not a palindrome number.\n", number);

    return 0;
}
