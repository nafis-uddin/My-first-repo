#include <stdio.h>
int hey(char *a, int i)
{
    if(a[i] == '\0')
    return 0;
    int l = hey(a, i+1);
    return l+1;
}
int main()
{
    char a[6]= "Hello";
    int length = hey(a, 0);
    printf("%d", length);
    return 0;
}