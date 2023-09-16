#include <stdio.h>
#include <string.h>
int main()
{
    char a[1001];
    scanf("%s",a);
    int ans =1;
    int j = strlen(a)-1, i=0;
    for(; i<j;)
    {
        if(a[i] == a[j])
        {   
            j--; 
            i++;
        }   
        if(a[i]!=a[j])
        {
            ans = 0;
            break;
        } 
    }
    if(ans == 1)
    {
        printf("YES");
    }
    else if(ans == 0)
    {
        printf("NO");
    }
    
    return 0;
}


// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char a[1001], b[1001];
//     scanf("%s", a);
//     strcpy(b, a);
//     int i = 0, j= strlen(b)-1;
//     for(; i<j; )
//     {
//         char tmp = b[i];
//         b[i] = b[j];
//         b[j] = tmp;
//         i++;
//         j--;
//     }
//     if(strcmp(b,a)==0)
//     {
//         printf("YES");
//     }
//     else
//     {
//         printf("NO");
//     }
//     return 0;
// }
