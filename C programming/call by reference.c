#include <stdio.h>
void hey(int *p)
{
    printf("First value of P is %d\n", *p);
    *p  = 60;
    printf("New value of p is %d\n", *p); 
}

int main()
{
    int x = 40;
    printf("First value of x is %d\n", x);
    hey(&x);
    printf("Last value after return %d\n", x);     // though it is not returning function//
                                                   // the value changed by the upper function//
}