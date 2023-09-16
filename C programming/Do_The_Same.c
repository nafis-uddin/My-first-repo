#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    for(int i =0; i<n; i++)
    {
        for(int i =1; i<=m; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}