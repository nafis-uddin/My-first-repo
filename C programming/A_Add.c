#include <stdio.h>
void hey()
{
    int x , y;
    scanf("%d %d", &x, &y);
    int work = x + y;
    printf("%d ", work);
}
int main()
{
    hey();
    return 0;
}