#include <stdio.h>
void hey(int *a, int n, int i)
{
    if(i == n)
    return;
    printf("%d\n", a[i]);
    hey(a, n, i+1);
}
int main()
{
    int n; 
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    hey(a, n, 0);
    return 0;
}