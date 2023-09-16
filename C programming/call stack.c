#include <stdio.h>
void world()
{
    printf("WORLD\n");
    printf("world\n");
}
void hello()
{
    printf("HELLO\n");
    world();
    printf("hello\n");
}
int main()
{
    printf("MAIN\n");
    hello();
    printf("main\n");
    return 0;
}