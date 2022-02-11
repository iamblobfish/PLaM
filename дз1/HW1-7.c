#include <stdio.h>
#include <stdlib.h>

int main()
{
    int error;
    double r, p = 3.14159, d, pr, s;
    printf("Give me a radius\n");
    error = scanf("%lf", &r);
    if(error != 1) {
        printf("Wrong input!\n");
        return 1;
    }
    d = 2*r;
    pr = 2*p*r;
    s = r*r*p;
    printf("For radius %lf:\ndiameter is %lf\nperimeter is %lf\nsquare is %lf ", r, d, pr, s);
    return 0;
}
