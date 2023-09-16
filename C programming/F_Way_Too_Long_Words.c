// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     char s[101];
//     for(int i =  0; i<n; i++)
//     {
//         scanf("%s", s);
//         int size = strlen(s);
//         if(size<=10)
//         {
//             printf("%s\n", s);
//         }
//         else
//         {
//             printf("%c%d%c\n", s[0], size-2, s[size -1]);
//         }
//     }
// }

#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char a[101];
    for(int i = 0; i<n; i++)
    {
        scanf("%s", a);
        if(strlen(a)>10)
        {
            printf("%c%d%c\n", a[0], strlen(a)-2, a[strlen(a)-1]);
        }
        else 
        {
            printf("%s\n", a);
        }
    }
    
}
