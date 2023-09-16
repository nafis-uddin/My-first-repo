#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for(int i =0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int p = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(i==j)
            {
                p = p + a[i][j];
            }
            if(i+j==n-1)
            {
                p = p - a[i][j]; // u could write another loop for secondary then difference both value//
            }
        }
    }
    p = abs(p);
    printf("%d", p);
    return 0;
}