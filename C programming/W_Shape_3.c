#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s = n-1;
    int t = 1;
    for(int i = 1; i<= 2*n; i++)
    {
        for(int j = s; j>=1; j--)
        {
            printf(" ");
        }
        for(int j = t; j>=1; j--)
        {
            printf("*");
        }
        if(i < n)
        {
            s--; 
            t = t+2;
        }
        else if(i>n)    
        {
            s++;
            t = t-2;
        }
        printf("\n");
    }
    return 0;
}