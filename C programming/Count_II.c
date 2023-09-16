#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    scanf("%s", s);
    int cnt[26]= {0};
    for(int i = 0; i<strlen(s); i++)
    {
        cnt[s[i]-'a']++;
    }
    int sum = 0; 
    sum = cnt['a' - 'a'] + cnt['e' - 'a'] + cnt['i' - 'a'] + cnt['o' - 'a'] + cnt['u' - 'a'];
    printf("%d", sum);
    return 0;
}
