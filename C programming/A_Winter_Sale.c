#include <stdio.h>
int main()
{
    float d, s, p;
    scanf("%f%f", &d,&s);
    p = s/(1-d/100);
    printf("%0.2f", p);
    return 0;
}