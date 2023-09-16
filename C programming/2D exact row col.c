#include <stdio.h>
int main()
{
    int n, m, e;            // printing exactly (2nd) row//
    scanf("%d%d%d", &n, &m,&e);
    int a[n][m];
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(int j = 0; j<m; j++)
    {
        printf("%d ", a[e -1][j]);
    }
    return 0;
}


// #include <stdio.h>
// int main()
// {
//     int n, m, e;                // printing exact (3rd) column//
//     scanf("%d%d%d", &n, &m, &e);
//     int a[n][m];
//     for(int i = 0; i<n; i++)
//     {
//         for(int j = 0; j<m; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     for(int i = 0; i<n; i++)
//     {
//         printf("%d\n", a[i][e-1]);       // e is a index//
//     }
//     return 0;
// }