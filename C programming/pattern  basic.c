#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k = n;  // relate starting variable with n and put variable after n scan//
    for(int i = 1; i<=n; i++) // don't look at it//
    {
        for(int j = k; j>=1; j--)   // downing pattern : start with variable and end to 1; minusing 1 (always)//
        {
            printf("*");
        }
        printf("\n");
        k--;   // what's the difference between first and second line//
    }
    return 0;
}