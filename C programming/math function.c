#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    // double x;
    // scanf("%lf", &x);
    // int ans = ceil(x);      //25.5    26//
    // int ans = floor(x);     //25.5    25//
    // int ans = round(x);     //25.5    26;  25.4   25;   25.9    26//   
    // printf("%d", ans);


    // double ans = sqrt(x);    //25.5    5.050//
    // printf("%0.3lf", ans);

    // double x, y;
    // scanf("%lf%lf", &x, &y);
    // double ans = pow(x,y);       // 3 2      9//
    // printf("%0.1lf", ans);

    int x; 
    scanf("%d",&x);
    int ans = abs(x);           // -2       2//
    printf("%d", ans);
    return 0;
}