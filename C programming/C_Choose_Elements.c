#include <stdio.h>
int main()
{
    int n , m;
    scanf("%d%d", &n, &m);
    long long int a[n];
    for(int i =0; i<n; i++) 
    {
    scanf("%lld", &a[i]);
    }
    for(int i = 0;i<n-1; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(a[i]<a[j])
            {
                long long int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    long long int sum = 0; 
    for(int i =0; i<m; i++)
    {
        if(a[i]<0)
        {
            continue;
        }
        sum = sum + a[i];
    }
    printf("%lld", sum);
    return 0;
}