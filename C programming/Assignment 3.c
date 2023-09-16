#include <stdio.h>
#include <string.h>
 int is_palindrome(char *a)
 {
    int ans =1;
    int j = strlen(a)-1, i=0;
    for(; i<j;)
    {
        if(a[i] == a[j])
        {   
            j--; 
            i++;
        }   
        if(a[i]!=a[j])
        {
            ans = 0;
            break;
        } 
    }
    return ans;
 }
 int main()
 {
    char a[10];
    scanf("%s", a);
    int ans = is_palindrome(a);
    if(ans == 1)
    {
    printf("Palindrome");
    }
    else if(ans ==0)
    {
    printf("Not Palindrome");
    }
    return 0;
 }



// with return, with parameter//
// #include <stdio.h>
// #include <stdlib.h>
// int stdlib_check(int *a, int n)
// {
//     int count = 0;
//     for(int i= 0; i<5; i++)
//     {
//         int v = abs(a[i]);
//         if(v<0)
//         {
//             count++;
//         }
//     }
//     return count;
// }

// int main()
// {
//     int a[5] = {-3, 1, -2, 3, 0};
//     int ans = stdlib_check(a, 5);
//     if(ans == 0)
//     {
//         printf("stdlib works properly");
//     }
//     else 
//     {
//         printf("stdlib doesn't properly");
//     }
//     return 0;
// }



// //with return, no parameter//
// #include <stdio.h>
// #include <string.h>
// char never_give_up()
// {
//     char c[52] = "Outcome";
//     char d = '?';
//     printf("%s%c\n", c,d);
//     char *p = &d;
//     *p = '!';
//     return d;
// }
// int main()
// {
//     char a[52] = "I'm slow and steady\n";
//     char b[52] = "Creating strong base\n";
//     printf("%s%s", a, b);
//     char outcome = never_give_up();
//     for(int i=1; i<=3; i++)
//     {
//         printf("%c ", outcome);
//     }
//     printf("\n");
//     char e[52] = "GOD knows better";
//     printf("%s", e);
//     return 0;
// }


// // no Return, with Parameter// 
// #include <stdio.h>
// #include <string.h>
// void hello(int *a, int n)
// {
//     for(int i = 0; i<n; i++)
//     {
//         printf("%c", a[i]);
//     }
// }
// int main()
// {
//     int a[7] = {80, 104, 105, 116, 114, 111, 110};
//     hello(a,7);
//     return 0;
// }



// // no return, no parameter//

// #include <stdio.h>
// #include <string.h>
// void hey()
// {
//     char b[101] = "I am progressing day by day";
//     printf("%s\n", b);
// }
// int main()
// {
//     char a[101] = "Thank you";
//     printf("%s\n", a);
//     hey();
//     char c[101] = "GOD bless us";
//     printf("%s", c);
//     return 0;
// }






// #include <stdio.h>
// #include <string.h>
// int count_before_zero(int *a, int n)
// {
//     int count = 0;
//     for(int i = 0; i<n; i++)
//     {
//         if(a[i]!=0)
//         {
//             count++;
//         }
//         if(a[i]==0)
//         {
//             break;
//         }
//     }
//     return count;
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for(int i = 0; i<n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int count = count_before_zero(a,n);
//     printf("%d", count);
//     return 0;
// }









// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int s = n-1;
//     int t = 1;
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=s; j++)
//         {
//         printf(" ");
//         }
//         for(int j = 1; j <=t; j++)
//         {
//         printf("%d", i);
//         }  
//         s--;
//         t++;  
//         printf("\n");
//     }
//     return 0;
// }






















// #include <stdio.h>
// int main()
// {
//     int n; 
//     scanf("%d", &n);
//     int s = n-1; 
//     int t = 1;
//     for(int i = 1; i<=2*n-1; i++)
//     {
//         for(int j =1; j<=s; j++)
//         {
//         printf(" ");
//         }
//         for(int j = 1; j<=t; j++)
//         {
//         printf("%d", j);
//         }
//         if(i<n)
//         {
//             s--;
//             t = t+2;
//         }
//         else 
//         {
//             s++;
//             t = t-2;
//         }
//         printf("\n");
//     }
//     return 0;
// }