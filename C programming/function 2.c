// no parameter, only return//
// no parameter means you are not taking input from hey() function //
// you can take input in down function but not hey() //
// though inputing down function is long//
// cz u should input (int) variable for declaring x, y in both function//
//that's why we prefer input in upper function //
// you can take input or scan in udder function //
#include <stdio.h>
int hey()
{
    int x, y;               // int x = 2, y = 3; //
    scanf("%d%d", &x, &y);
    int work = x*y;
    return work;
}

int main()
{
    int ans = hey();
    printf("%d", ans);
    return 0;
}
