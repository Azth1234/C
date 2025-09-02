#include <stdio.h>
#include <math.h>

int digitsCount(int n);
int isPalindrome(int n, int digits);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int digitCount = digitsCount(num);

    if (isPalindrome(num, digitCount))
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);

    return 0;
}

int digitsCount(int n) {
    if (n == 0)
        return 0;
    else
        return 1 + digitsCount(n / 10);
}

int isPalindrome(int n, int digits) {
    if (n < 10)
        return 1;

    int firstDigit = n / (int)pow(10, digits - 1);
    int lastDigit = n % 10;

    if (firstDigit != lastDigit)
        return 0;

    int remaining = (n % (int)pow(10, digits - 1)) / 10;

    return isPalindrome(remaining, digits - 2);
}
