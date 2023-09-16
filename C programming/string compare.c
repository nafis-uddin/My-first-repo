#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s%s", a, b);
    for(int i =0;;i++)
    if(a[i] =='\0' && b[i] == '\0')     //check: if > else if > else if > else if//
    {
        printf("equal");
        break;
    }
    else if(a[i] =='\0')
    {
        printf("b max");
        break;
    }
    else if(b[i]=='\0')
    {
        printf("a max");
        break;
    }
    else if(a[i] != b[i])
    {
        if(a[i]<b[i])
        {
            printf("b max");
            break;
        }
        else if(b[i]<a[i])
        {
            printf("a max");
            break;
        }
    }
    return 0;
}



