
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
    int x, v, i;
    scanf("%d%d", &x, &v);
    for(i = 0; i<n; i++)
    {
        if(x==i)
        {
            ar[i]=v;
            
        }   
    }
    for(i =n-1; i>=0; i--)
        {
            printf("%d ", ar[i]);
        }
    
return 0;
    
}




#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int ar[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d", &ar[i]);
    }
    int X, V;
    scanf("%d%d", &X, &V);
    
    for(int i = N-1; i>=0; i--)
    {
        if(i==X)
    {
        ar[i] = V;

    }
        printf("%d ", ar[i]);
    }
    
    return 0;
}

