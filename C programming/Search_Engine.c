#include <stdio.h>
int main()
{
    int m; 
    scanf("%d", &m);
    for(int i = 0; i<m; i++)
    {
    int n; 
    scanf("%d", &n);
    int a[n];
    for(int j = 0; j<n; j++)
    {
        scanf("%d", &a[j]);
    }
    int s;
    scanf("%d", &s);
    for(int j = 0; j<n; j++)
    {
        if(s==a[j])
        {
        printf("Case %d: %d", i+1, j+1);
        printf("\n");
        break;
        }
        else if(j == (n-1))
        {
            if(j==(n-1))
            {
            printf("Case %d: Not Found", i+1);
            }
            printf("\n");
        }
    }
    }
    return 0;
}