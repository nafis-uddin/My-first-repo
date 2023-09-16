#include <stdio.h>
void hey(int n, int i)
{
    if(i>n)
    return;
    hey(n,i+1);
    printf("%d", i);
    if(i!=1)   // after last digit, I mean after 1, we need not use space//
// 1 is used as first index(i) in input, so if(i==1) we should avoid space otherwise we can//
    {
    printf(" ");
    }
}
int main()
{
    int n; 
    scanf("%d", &n);
    hey(n,1);
    return 0;
}