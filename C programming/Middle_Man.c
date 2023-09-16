#include <stdio.h>
int main()
{
    int n; 
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 0; i<n-1; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for(int i = 0; i<n; i++)
    {
    if(n%2!=0)
    {
        printf("%d", a[(n-1)/2]);
        break;
    }
    else
    {
        printf("%d %d", a[(n-2)/2], a[n/2]);
        break;
    }
    }
    return 0;
}