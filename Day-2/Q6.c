#include <stdio.h>
int main()
{
    int rev = 0, remainder, n;
    printf("enter a number");
    scanf("%d", &n);
    while (n != 0)
    {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n = n / 10;
    }
    printf("reverse of given no is %d", rev);
}