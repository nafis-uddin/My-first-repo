#include <stdio.h>
int main()
{
    int a, b, c, min, max;
    scanf("%d%d%d", &a, &b, &c);
    if(a<b && a<c)
    {
        min = a;
    }
    if(b<c && b<a)
    {
        min = b;
    }
    if(c<a && c<b)
    {
        min = c;

    }
    if(a>b && a>c)
    {
        max = a;
    }
    if(b>a && b>c)
    {
        max = b;
    }
    if(c>a && c>b)
    {
        max = c;
    }
    printf("%d %d", min, max);
    return 0;

}