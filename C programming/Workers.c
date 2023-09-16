#include <stdio.h>
int main()
{
    int m , d , n;
    scanf("%d%d%d", &m, &d, &n);
    int ans;
    ans  = m*n/d;
    printf("%d", ans);
    return 0;
}