#include <stdio.h>
int main()
{
    int n; 
    scanf("%d", &n);
    int s = n-1; 
    int t = 1;
    for(int i  =1; i<= 2*n-1; i++)
    {
        for(int j = s; j>= 1; j--)   // don't use i replacing j //
        {
             printf(" ");
        }
        for(int  j =t; j>=1;j--)
        {
            printf("*");
        }
        if(i<=n-1)
        {
            t = t+2;
            s--;
        }
        else if(i>=n)
        {
            t = t-2;
            s++;
        }
        printf("\n");
    }
    return 0;
}