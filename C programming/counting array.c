#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i =0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    int cnt[5] = {0};
    for(int i = 0; i<n; i++)
    {
        cnt[a[i]]++;
    }
    for(int i = 0; i<=4; i++)
    {
        printf("%d - %d\n", i, cnt[i]);   
    }
    return 0;
}
