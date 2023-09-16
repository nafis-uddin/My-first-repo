#include <stdio.h>
int main()
{
    int n;
    for(int i = 1; i<=n; i++)
    {
        scanf("%d", &n);
        if(n!=1999)
        {
            printf("Wrong\n");
        }
        else
        {
            printf("Correct");
            break;
        }
    }
    return 0;
}