#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int t = 1, s = n-1;
    for(int i = 1; i<=n; i++)
    {
        for(int j = s; j>=1; j--)
        {
        printf(" ");
        }
        for(int j = 1; j<=t; j++)
        {
            if(i%2==0)
            {
            printf("*");
            }
            else
            {
            printf("^");
            }
        }
        s--;
        t=t+2;
        printf("\n");
    }
    return 0;
}