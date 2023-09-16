#include <stdio.h>
int main()
{
    int a[3]= {10, 20, 30};
    printf("%p\n", a);
    printf("%p\n", &a[0]);

    printf("\n");
    
    printf("%d\n", a[0]);
    printf("%d\n", *a);
    
    
    printf("\n");
    
    printf("%d\n", *(a+1));
    printf("%d\n", *(1+a));
    printf("%d\n", a[1]);
    printf("%d\n", 1[a]);
    return 0;
}