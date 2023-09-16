#include <stdio.h>
void swap_it(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
    printf("%d %d", *a, *b);
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    swap_it(&a, &b);
    return 0; 
}
