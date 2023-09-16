#include <stdio.h>
void hey(int x)
{
    if(x == 6)
    return;
    printf("%d\n", x);
    hey(x+1);
}
int main()
{
    hey(1);
    return 0;
}

// #include <stdio.h>
// void hey(int x)
// {
//     if(x == 0)
//     return;
//     printf("%d\n", x);
//     hey(x-1);
// }
// int main()
// {
//     hey(5);
//     return 0;
// }