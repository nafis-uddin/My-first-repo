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
    int m, ans = 0;
    scanf("%d", &m);
    for(int i = 0; i<n; i++)
    {
        if(a[i] == m)
        {
            ans++;
        }
    }
    printf("%d", ans);
    return 0;
}