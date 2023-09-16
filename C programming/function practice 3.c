// // no return, no parameter//
#include <stdio.h>
void capital_to_small()      // void capital_to_small(void)
{
    char x;
    scanf("%c", &x);
    char ans = x+32;
    printf("%c", ans);
}

int main()
{
    capital_to_small();
    return 0;
}



// no return, with parameter//
// #include <stdio.h>
// void capital_to_small(char x)
// {
//     char ans = x+32;
//     printf("%c", ans);
// }

// int main()
// {
//     char a;
//     scanf("%c", &a);
//     capital_to_small(a);
//     return 0;
// }



// with return, no parameter //
// #include <stdio.h>
// char capital_to_small()         // char capital_to_small(void)
// {
//     char x; 
//     scanf("%c", &x);
//     char work = x+32;
//     return work;
// }

// int main()
// {
//     char ans = capital_to_small();
//     printf("%c", ans);
//     return 0;
// }



// with return, with parameter//

// #include <stdio.h>
// char capital_to_small(char x)
// {
//     char work = x+32;
//     return work;
// }

// int main()
// {  
//     char a;
//     scanf("%c", &a); 
//     char ans = capital_to_small(a);
//     printf("%c", ans);
//     return 0;
// }