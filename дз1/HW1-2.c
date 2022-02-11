#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int error;
    printf("Give me a number");
    printf("\n");

    error = scanf("%d", &n);
    if (error != 1){
        printf("Wrong input!\n");
        return 1;
    }
    if (n % 2 == 1) {
        printf("Number %d is odd\n", n);
        return 0;
    }
    printf("Number %d is even\n", n);
    return 0;
}
