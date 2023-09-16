#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    int ans;
    scanf("%d", &ans);
    int flag = 0;
    for(int i = 1; i<= n-1; i++)
    {
        for(int j = i+1; j<=n; j++)
        {
            if(a[i] + a[j] == ans)
            {
                flag = 1;
            }
        }
    }
    if(flag == 1)
    {
        printf("Yes");
    }
    else 
    {
        printf("No");
    }
    return 0;
}