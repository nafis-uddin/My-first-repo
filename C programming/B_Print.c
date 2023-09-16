#include <stdio.h>
void hey()
{
    int n;
    scanf("%d", &n);
    int j = 1;
    for(; j<n+1; j++)
    {
        printf("%d", j);
        if(j != n)         
        {
            printf(" ");
        }
    }
}

int main()
{
    hey();
    return 0;
}