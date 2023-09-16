// no parameter, no return//
#include <stdio.h>
void hey(void)
{
    int x, y;       // int x = 4, y = 5;  you can also input without scanning//
    scanf("%d %d", &x, &y);
    int work = x*y;
    printf("%d\n", work);
}

int main()
{
    hey();          
    hey();          // u can declare function as ur wish but input value for each time//
    return 0;
}


