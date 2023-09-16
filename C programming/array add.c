#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n+1];
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int x, v;
    scanf("%d%d", &x, &v);
    for(int i = n; i>x; i--)
    {
        ar[i] = ar[i-1];
    }
    ar[x]= v;
    for(int i = 0; i <= n; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}  
