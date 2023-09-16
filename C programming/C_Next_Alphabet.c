#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    if(ch=='z')
    {
        printf("a");
    }
    else
    {
        int ans = ch + 1;
        printf("%c", ans);
    }
    return 0;
}