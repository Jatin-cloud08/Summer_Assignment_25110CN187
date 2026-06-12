#include <stdio.h>
int main()
{
    int n, count = 0, i;
    printf("enter a number ");
    scanf("%d", &n);
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    printf("there are %d in the given number ", count);
    return 0;
}