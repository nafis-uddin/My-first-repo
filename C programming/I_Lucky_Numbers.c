#include <stdio.h>
int main()
{
    int a, f, s;
    scanf("%d", &a);
    f = a%10;
    s = a/10;
    if(f%s==0 || s%f==0)
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }
    return 0;
}


