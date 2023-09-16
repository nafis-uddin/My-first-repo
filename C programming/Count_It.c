#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    fgets(s, 1001, stdin);
    int cap = 0, sm = 0, spc = 0;
    for(int i = 0; i<strlen(s); i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            cap++;
        }
        if(s[i]>='a' && s[i]<='z')
        {
            sm++;
        }
        if(s[i] == ' ')
        {
            spc++;
        }
    }
    printf("Capital - %d\nSmall - %d\nSpaces - %d", cap, sm, spc);
    return 0;
}