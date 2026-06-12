#include <stdio.h>
int main()
{
    int n, f = 1, i;
    printf("enter a given no. ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    printf("factorial of a given no. =%d", f);
    return 0;
}