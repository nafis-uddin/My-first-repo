#include <stdio.h>
int main()
{
    int a[3] = {10, 20 , 30};
    for(int i= 0; i<3; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    char b[4] = {'W', 'H', 'A', 'T'};
    for(int i = 0; i<4; i++)
    {
        printf("%c", b[i]);
    }

    printf("\n");

    char c[3] = "HOW";
    for(int i =0; i<3; i++)
    {
        printf("%c", c[i]);
    }

    printf("\n");

    char d[3] = "OK";
    printf("%s", d);        // Null fact: \0  //
                          
    printf("\n");

    char e[] = "Hey";
    printf("%s", e);
    
    return 0;
}