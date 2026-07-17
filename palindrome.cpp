#include <stdio.h>

int main()
{
    int num, original, reverse = 0,
    remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    if (original == reverse)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);
    
    return 0;
}