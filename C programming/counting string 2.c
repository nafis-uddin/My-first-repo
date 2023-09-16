#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    scanf("%s", a);
    int cnt[26]={0};
    for(int i = 0; i<strlen(a); i++)
    {
        cnt[a[i] - 'a']++;
    }
    for(int i = 0; i<strlen(a); i++)
    {
        int v = a[i] - 'a';
        if(cnt[v] !=0)
        {
            printf("%c - %d\n", a[i], cnt[v]);
        }
        cnt[v] = 0;
    }
}
