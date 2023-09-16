// #include <stdio.h>
// void hey(int *a, int n)
// {
//     for(int i = 0; i<3; i++)
//     {
//     printf("%d ", a[i]);
//     }
//     printf("\n");

//     a[0] = 100;
// }
// int main()
// {
//     int a[3] = {10, 20, 30};
//     hey(a,3);
//     for(int i = 0; i<3; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     return 0;
// }

#include <stdio.h>
#include <string.h>
void hey(char *a)       // string = hey(char *a)   array = hey(int *a, int n) //
                        // simple input  = hey(int *a)  also  main()  hey(&a); //
{
    printf("%s\n", a);
    a[0] = 'H';
}

int main()
{
    char a[6] = "hello";
    hey(a);
    printf("%s", a);
    return 0;
}