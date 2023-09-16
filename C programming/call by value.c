#include <stdio.h>
void hey(int x)
{
    printf("Second x is %d\n",x);
    x = 4;
    printf("Third x is %d\n", x);
}

int main()
{
    int x = 3;
    printf("First x is %d\n", x);
    hey(x);
    x = 5;
    printf("Fourth x is %d", x);
}


// #include <stdio.h>
// #include <math.h>
// void call_by_value(int x)
// {
//     printf("First time x is %d\n", x);
//     x = sqrt(x);
// }
// int main()
// {
//     int x = 25;
//     call_by_value(x);
//     printf("Later x is %d", x);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// void call_by_reference(int *p)
// {
//     printf("First time x is %d\n", *p);
//     *p = sqrt(*p);
// }
// int main()
// {
//     int x = 25.0;
//     call_by_reference(&x);
//     printf("Later x is %d", x);
//     return 0;
// }

