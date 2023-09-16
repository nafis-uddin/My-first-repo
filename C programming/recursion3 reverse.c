#include <stdio.h>
void hey(int x)
{
    if(x == 6)
    return;
    hey(x+1);
    printf("%d\n", x);
}
int main()
{
    hey(1);
    return 0;
}