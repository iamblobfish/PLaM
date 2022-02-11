#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int x, y, ans, i = 1;
    printf("Give me 2 numbers\n");
    n = scanf("%d", &x);
    if(n != 1) {
        printf("Wrong input!\n");
        return 1;
    }
    n = scanf("%d", &y);
    if(n != 1) {
        printf("Wrong input!\n");
        return 1;
    }

    ans = x;
    while(i < y){
        ans *= x;
        i++;
    }
    printf("%d^%d is %d",x,y, ans);
    return 0;
}
