#include <stdio.h>
#include <stdlib.h>

int main()
{
    int error;
    int x, xx, sum = 0;
    printf("Give me a number\n");
    error = scanf("%d", &x);
    if(error != 1) {
        printf("Wrong input!\n");
        return 1;
    }
    xx = x;
    while(xx != 1){
        if (xx%10 == 7)
            sum += 1;
        xx = xx/10;
    }
    printf("In %d %d signs are 7", x, sum);
    return 0;
}
