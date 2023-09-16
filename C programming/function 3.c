// no return; only parameter = i mean input x,y in hey(int x, int y) function//
// since taking parameter in hey() function upside; so input or scan value downside hey() function//
// you can take a, b or anything pair in downside just for inputing up hey() values//

#include <stdio.h>
void hey(int x, int y)
{
    int work = x + y;
    printf("%d", work);
}

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    hey(a,b);
    return 0;
}


// #include <stdio.h>
//     void m()
//     {
//         printf("hi");
//     }
//     int main()    
//     {
//         printf("hello");        output is hello. cz u didn't call m()
//     }
