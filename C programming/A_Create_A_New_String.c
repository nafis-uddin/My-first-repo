#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    char t[1001];
    scanf("%s %s", s, t);
    int sizeS = strlen(s);
    int sizeT = strlen(t);
    printf("%d %d\n", sizeS, sizeT);
    printf("%s %s", s, t);
    return 0;    
}