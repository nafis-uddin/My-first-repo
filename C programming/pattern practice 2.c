#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int t = 2*n-1;
    int s = 0;
    for(int i = 1; i<= n; i++)
    {
        for(int j =s; j>=1; j--)
        {
        printf(" ");
        }
        for(int j =t; j>=1; j--)
        {
        printf("*");
        }
        t = t-2; 
        s++;
        printf("\n");
    }
    return 0;
}