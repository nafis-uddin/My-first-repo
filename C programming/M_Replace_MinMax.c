#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    int min=INT_MAX, max = INT_MIN,c,d;
    for(int i = 0; i<n; i++)
    {
        if(a[i]< min)
        {
            min = a[i];
            c = i;
        }
        if(a[i]>max)
        { 
            max = a[i];
            d = i;    
        }    
    }
    // a[c] = max;
    // a[d] = min;
    int tmp = a[c];
    a[c] = a[d];
    a[d] = tmp;
      for(int i = 0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0; 
}
  