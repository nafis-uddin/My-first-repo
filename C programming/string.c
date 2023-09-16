// #include <stdio.h>
// int main()
// {
//     int n =2;
//     char a[n];
//     for(int i = 0; i<n; i++)
//     {
//         scanf("%c", &a[i]);
//     }
//     for(int i = 0; i<n; i++)
//     {
//         printf("%c", a[i]);
//     }
//     return 0;
// }

#include <stdio.h>
#include <string.h>
int main()
{
    char a[200];
    fgets(a, 6, stdin);
    int st = strlen(a);
    for(int i = 0; i<st; i++)
    {
        printf("%c", a[i]);
    }
    printf("\n");
    printf("%s", a);
    return 0;
}