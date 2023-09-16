// #include <stdio.h>
// void hey(int *a, int n)     // hey(int a[], int n)
// {
//     for(int i = 0; i<n; i++)
//     {
//         printf("%d ", a[i]);
//     }
// }
// int main()
// {
//     int a[3] = {10, 20, 30};
//     hey(a,3);
//     return 0;
// }

#include <stdio.h>
void hey(double *a, int n)
{
    for(int i = 0; i<n; i++)
    {
        printf("%0.1lf ",a[i]);         // %o.1lf  reminder//
    }
}

int main()
{
    double a[4] = {2.5, 3.5, 5.0, 3.4};
    hey(a,4);
    return 0; 
}