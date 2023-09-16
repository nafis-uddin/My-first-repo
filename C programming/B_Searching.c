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
    int x, ans = -1;
    scanf("%d", &x);
    for(int i=0; i<n; i++)
    {
        if(x==ar[i])
        {
            ans = i;   
            break;
        }      
    }
    printf("%d", ans);
    return 0;
}
