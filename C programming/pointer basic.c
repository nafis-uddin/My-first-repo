#include <stdio.h>
int main()
{
    int x = 400;
    printf("The address of x is %p\n", &x);

    int *p = &x;
    printf("The address of x is %p\n", p);
    printf("The address of p is %p\n", &p);
    printf("The value of address p is %d\n", *p);

    // x = 300;//
    *p = 300;           // changing x value dereferencing p address//
    
    printf("The new value of address p is %d\n", *p);
    printf("The value of x is now %d\n", x);

    int *p2 = p;
    *p2 = 200;
    printf("The value of address p2 %d\n", *p2);

    double y = 10.10;
    double *p3  = &y;
    printf("The value of address p3 %.2lf\n", *p3);
    printf("The address of p3 is %p\n", &p3);
    return 0;
}

