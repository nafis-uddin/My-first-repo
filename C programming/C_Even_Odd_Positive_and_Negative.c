#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a, pos = 0, neg = 0, even = 0, odd = 0;
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if(a%2==0)
        {
            even++;
        }
        
        if(a%2!= 0)
        {
            odd++;
        }
        if(a>0)
        {
            pos++;
        }
        if(a<0)
        {
            neg++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, pos, neg);
    return 0;
}



