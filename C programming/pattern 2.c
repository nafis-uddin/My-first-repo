#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int t = 2*n-1, p = 0;
    for(int i = 1; i<=n; i++)   // it is just working for printing line. don't think anything else//
    {
        for(int j = p; j>=1; j--)  // j = 0; j will continue till 1 with single minus//
        { //difference between  0 to 1 is 1.so it would print 1 times, but we need not 1 time right now, so, we use compare sign incorrecly//
            printf(" ");            // printf at first spaces then star//
        }
        for(int j = t; j>=1; j--) // j = 9, j will continue till 1 with minusing one by one (j--) //
        //so difference between 1 to 9 is 9.so print 9 times and you need to print star, 
        //so use compare sign correctly,then go for next (for loop) //                            
        {
            printf("*");        
        }
        t = t-2;                    // don't use t-2;  //
        p++;
        printf("\n");
    }
    return 0;
}
// at first input line, then write what u need to work on the line; then print space//
//see how to start. start relating with n ; input start variable after n scan.//
// dowing pattern : start with variable, end to 1 with equal; we are going to down. so put j-- with single difference (all time) //
// General pattern : start with 1; end till variable with equal. we are going to up . so put j++ //
// use compare sign correctly if u need to print, else you should put incorrect way ur sign//
// after printing each line what is going on then. look into output//
// input the difference according to the difference between first and second line//