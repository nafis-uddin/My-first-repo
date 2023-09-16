#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int t = 1; 
    int s = n-1; 
    for(int i = 1; i<=n; i++)
    {
        for(int j = s; j >=1; j--)
        {
            printf(" ");
        }
        for(int j = t; j >=1; j--)
        {
            printf("*");
        }
        s--;
        t++;
        printf("\n");
    }
}