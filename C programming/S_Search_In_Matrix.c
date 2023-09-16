#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n][m];
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int x;
    scanf("%d", &x);
    int count = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            if(a[i][j] == x)
            {
                count = 1;
            }
        }
    }
    if(count == 0)
    {
        printf("will take number");
    }
    else 
    {
        printf("will not take number");
    }
    return 0;
}