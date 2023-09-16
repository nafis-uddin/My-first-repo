#include <stdio.h>
#include <string.h>
int main()
{
    char a[11];
    scanf("%s", a);
    char b[11];
    scanf("%s", b);
    printf("%d %d\n", strlen(a),strlen(b));
    printf("%s%s\n", a,b);
    int tmp= a[0];
    a[0] = b[0];
    b[0] = tmp;
    for(int i = 0; i<strlen(a); i++)
    {
        printf("%c", a[i]);
    }
    printf(" ");
    for(int i = 0; i<strlen(b); i++)
    {
        printf("%c", b[i]);
    }
    return 0; 
}