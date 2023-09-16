#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int tig = 0, pat = 0;
    long long int a, b;
    for(int i = 0; i<n; i++)
    {
    scanf("%lld%lld", &a, &b);
    if(a>b)
    {
        tig++;
    }
    else if(b>a)
    {
        pat++;
    }
    }
    if(tig>pat)
    {
        printf("Tiger");
    }
    else if(pat == tig)
    {
        printf("Draw");
    }
    else 
    {
        printf("Pathan");
    }
    return 0;
}