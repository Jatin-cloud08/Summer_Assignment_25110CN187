#include <stdio.h>

int main()
{
    int n, o, rev = 0, d;

    printf("Enter a number: ");
    scanf("%d", &n);

    o = n;

    while (n > 0)
    {
        d = n % 10; 
        rev = rev * 10 + d;
        n = n / 10; 
    }

    if (o == rev)
    {
        printf("Number is Palindrome");
    }
    else
    {
        printf("Number is not Palindrome");
    }

    return 0;
}