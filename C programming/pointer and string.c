#include <stdio.h>
#include <string.h>
void hello(char *a)
{
    printf("%s\n", a);
    printf("%d", strlen(a));
}
int main()
{
    char a[4] = "Hey";
    hello(a);
    return 0;
}