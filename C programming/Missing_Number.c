#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int s, a, b, c;
    for(int i=0; i<n; i++)
    {
        scanf("%lld%lld%lld%lld", &s, &a, &b, &c);
        long long int ans = s-a-b-c;
        printf("%lld\n", ans);
    }
    return 0;
}