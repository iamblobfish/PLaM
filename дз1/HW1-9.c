#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*???????? ?????????, ??????? ????????? ????????
e^x ?? ??????? ?????????? ? ???.*/

int fac(int i){
    int sum = 1;
    while(i > 0)
        sum *= i--;
    return sum;
}

int main()
{
    int error;
    int x, n;
    double ans = 1.;
    printf("Give me an positive number\n");
    error = scanf("%d", &x);
    if(error != 1 || x <= 0) {
        printf("Wrong input!\n");
        return 1;
    }
    n = 12;
    while (n > 0){
         ans += (pow(x,n)/fac(n));
         printf("%lf / %d\n", pow(x,n),fac(n));
         n--;
    }
    printf(" e^%d is near %.3lf", x, ans);
    return 0;
}
