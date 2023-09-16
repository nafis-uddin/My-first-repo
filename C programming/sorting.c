#include <stdio.h>
int main()
{
    int n; 
    scanf("%d", &n);
    int a[n];
    for(int i  = 0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i  = 0; i< n-1; i++)    // scnaf i = 0 ; so you should print and work with i =0//
    {
        for(int j = i+1; j<n; j++)
        {
            if(a[i]>a[j])  // for descending it will be a[i]<a[j] //
            {
                int tmp = a[i];
                a[i]= a[j]; 
                a[j] = tmp;
            }
        }
    }
    for(int i = 0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0; 
}
