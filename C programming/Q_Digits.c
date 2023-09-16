#include <stdio.h>
int main()
{
    int a,n;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++)
    {
        scanf("%d", &a);
        while(a!=0)
        {
            int ans = a%10;
            a = a/10;
            printf("%d ", ans);
        }
        printf("\n");
    }
    return 0;
}