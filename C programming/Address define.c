#include <stdio.h>
int z = 300;
void fun(void)
{
    int x = 100; 
    printf("Address of x %p\n", &x);
    printf("Address of z %p\n", &z);
    // printf("Address of y %p\n", %y);         it won't work cz y is out of this function
}
int main()
{
    int y = 200; 
    printf("Address of y %p\n", &y);
    printf("Address of z %p\n", &z);
    // printf("Address of x %p\n", &x);        it won't work cz x is out of this function
    fun();
    return 0 ;
}