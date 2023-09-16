#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s = (n-1)/2;
    for(int i = 0; i<n; i++)
    {
        if(i == (n-1)/2)
        {
            for(int j = 0; j<n; j++)
            printf("#");
        }
        else
        {
            for(int j =0; j<s; j++)
            {
            printf("*");
            }
            printf("#");
            for(int j = 0; j<s;j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}