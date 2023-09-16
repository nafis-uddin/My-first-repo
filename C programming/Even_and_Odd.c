#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int sum1 =0, sum2 = 0;
    for(int i = 0; i<n; i++)
    {
        if(ar[i]%2==0)
        {
            sum1 = sum1 + ar[i];
        }
        else
        {
            sum2 = sum2 + ar[i];
        }
    }
    printf("%d %d", sum1, sum2);
    return 0;
}

