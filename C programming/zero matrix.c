#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n][m];
    for(int i = 0; i<n; i++)
    {
        for(int j =0 ; j<m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int cnt = 0; 
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            if(a[i][j] != 0)
            {
                cnt++;
            }
        }
    }
    if(cnt==0)
    {
        printf("This is null matrix");
    }
    else
    {
        printf("This is not null matrix");
    }
    return 0;
}