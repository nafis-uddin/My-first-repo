#include <stdio.h>
#include <string.h>
int main()
{
    char b[100], a[101];   //a size >= b size since b copy to a//
    scanf("%s %s", a,b);
    // for(int i = 0; i<=strlen(b); i++)
    // {
    //     a[i] = b[i];
    // }
    strcpy(a,b);
    printf("%s %s", a,b);
    return 0;
}