#include <stdio.h>
int main()
{
    int n, m, k, ans;
    scanf("%d%d%d", &n, &m, &k);
    if(m<n && m<k)
    {
        ans = m;
        n = n-m;
        k = k-m;
        n = n/2;
        if(n<k)
        {
            ans = m+n;
        }
        else
        {
            ans = m + k;
        }
        printf("%d", ans);
    }
    else if(n<k && n<m)
    {
        ans = n;
        printf("%d", n);

    }
    else if(k<n && k<m)
    {
        printf("%d", k);
    }
    return 0;

}