#include <stdio.h>
void small_to_capital(void)
{
    char x;
    scanf("%c", &x);
    char ans = x - 32;
    printf("%c", ans); 
}

int main()
{
    small_to_capital();     // you must call //
    return 0;
}