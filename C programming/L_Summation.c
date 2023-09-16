#include <stdio.h>
long long int hey(int *a, long long int n, int i)
{
    if(i>=n)
    {
        return 0;
    }
    long long int sum = hey(a, n, i+1);
    return sum +a[i];
}
int main()
{
    long long int n;
    scanf("%lld", &n);
    int a[n];
    for(int i = 0; i<n; i++)
    {
    scanf("%d", &a[i]);
    }
    long long int sum = hey(a, n, 0);
    printf("%lld", sum);
    return 0;
}