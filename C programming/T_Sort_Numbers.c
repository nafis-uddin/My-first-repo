#include <stdio.h>
void hey(void)
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int s[3] = {a, b, c};
    for(int i = 0; i<2; i++)
    {
        for(int j = i+1; j<3; j++)
        {
            if(s[i]>s[j])
            {
                int tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
            }
        }
    }
    for(int i = 0; i<3; i++)
    {
        printf("%d\n", s[i]);
    }
    printf("\n");
    int d[3] = {a, b, c};
    for(int i = 0; i<3; i++)
    {
        printf("%d\n", d[i]);
    }
}
int  main()
{
    hey();
    return 0;
}