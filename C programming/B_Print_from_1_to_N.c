#include <stdio.h>
void hey(int n, int i)
{
    if(i>n)
    return;
    printf("%d\n", i);
    hey(n, i+1);
}
int main()
{
    int n; 
    scanf("%d", &n);
    hey(n, 1);
    return 0;
}