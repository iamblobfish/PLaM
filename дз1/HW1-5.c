#include <stdio.h>
#include <stdlib.h>

int main()
{
    int error;
    int x, ans = 1;
    printf("Give me 5-signed number\n");
    error = scanf("%d", &x);
    if(error != 1) {
        printf("Wrong input!\n");
        return 1;
    }

    if (x/10000 != x%10){
        printf("%d not a palindrom", x);
        return 0;
    }
    ans = (x/10)%1000;
    if (ans/100 != ans%10){
        printf("%d not a palindrom", x);
        return 0;
    }
    printf("%d is palindrom", x);
    return 0;
}
