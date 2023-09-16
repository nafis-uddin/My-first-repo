#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a, ans = INT_MIN;;
    for(int i = 1; i<=n; i++)
    {
        scanf("%d", &a);
        if(a>ans)
        ans = a;
    }
    printf("%d", ans);
    return 0;
}
