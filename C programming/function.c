// using both return and parameter//

// #include <stdio.h>
// int hello(int x, int y)
// {
//     int work = x + y;
//     return work;
// }

// int main()
// {
//     int ans = hello(20, 40);
//     printf("%d ", ans);
//     return 0;
// }

#include <stdio.h>
float hey(float x, float y, float z)
{
    float work = x+y-z;
    return work;
}

int main()
{
    float ans = hey(14.1, 5.2, 10.3);
    printf("%0.1f", ans);
    return 0;
}