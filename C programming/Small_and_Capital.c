#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    scanf("%s", s);
    int cap = 0, sm= 0;
    for(int i =0; i<strlen(s); i++)
    {
        if(s[i]<='z'&&s[i]>='a')
        {
            sm++;
        }
        if(s[i]<='Z' && s[i]>='A')
        {
            cap++;
        }
    }
    printf("%d %d", cap, sm); 
}