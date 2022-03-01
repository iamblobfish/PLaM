#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int distance(){
/*Напишите функцию distance, которая вычисляет
расстояние между двумя точками
с координатами (x1, y1) и (x2, y2).
*/
    printf("Give me (x1, y1) and (x2, y2)\nI'll give you a distance\n");
    int error;
    int x1,x2,y1,y2;
    error = scanf("%d", &x1);
    if(error != 1) {
        printf("Wrong input!\n");
        return 1;
    }
    error = scanf("%d", &y1);
    if(error != 1) {
        printf("Wrong input!\n");
        return 1;
    }
    error = scanf("%d", &x2);
    if(error != 1) {
        printf("Wrong input!\n");
        return 1;
    }
    error = scanf("%d", &y2);
    if(error != 1) {
        printf("Wrong input!\n");
        return 1;
    }

    printf("Distance is %lf\n", sqrt((x1-x2)*(x1-x2)+ (y1-y2)*(y1-y2)));
    return 0;
}

int gcd(){
/*Напишите функцию gcd, которая возвращает наибольший общий
делитель (НОД) двух целых чисел.
*/
    printf("Give me two numbers\nI'll give you gcd\n");
    int n, error;
    int a, b, c, d;
    error = scanf("%d", &a);
    if(error != 1) {
        printf("Wrong input!\n");
        return 1;
    }
    error = scanf("%d", &b);
    if(error != 1) {
        printf("Wrong input!\n");
        return 1;
    }
    c = a;
    d = b;
    while (a!=0 && b!=0){
        if(a>b) a = a%b;
        else b = b%a;
    }
    printf("GCD of %d and %d is %d\n", c,d,a+b);
    return 0;
}

int rev(){
/*Напишите функцию, которая получает целое значение и
возвращает число с обращенным порядком цифр.
*/
    printf("Give me a number\nI'll give you reversed\n");
    int error;
    int n;
    error = scanf("%d", &n);
    if(error != 1) {
        printf("Wrong input!\n");
        return 1;
    }
    int ans = n%10;
    n /= 10;
    while (n!=0){
        ans = ans*10 + n%10;
        n = n/10;
    }
    printf("Reversed is %d\n", ans);
    return 0;
}

int is_prime(){
/*Напишите функцию, которая определяет, является ли число простым,
 т.е. делится только на 1 и на само себя.
*/
    printf("Give me a number\nI'll detect if it is prime\n");
    int n, error, ans;
    error = scanf("%d", &n);
    if(error != 1) {
        printf("Wrong input!\n");
        return 1;
    }
    if (n <= 3){
        if (n == 1)
            printf("%d is not prime\n", n);
        else
            printf("%d is prime\n", n);
        return 0;
    }
    else{
        if (n % 2 == 0 || n % 3 == 0){
            printf("%d is not prime\n", n);
            return 0;
        }
        else{
            int i = 5;
            while (i*i <= n){
                if (n%i==0 || n%(i+2)==0)
                    printf("%d is not prime\n", n);
                    return 0;
                i += 6;
            }
            printf("%d is prime\n", n);
            return 0;
        }
    }
}

int minn(){
/*Напишите функцию, которая возвращает наименьшее
 из трех чисел с плавающей точкой.
*/
    printf("Give me a float number\nI'll give you min\n");
    int min, error;
    float a, b, c, ans;
    error = scanf("%f", &a);
    if(error != 1) {
        printf("Wrong input!\n");
        return 1;
    }
    error = scanf("%f", &b);
    if(error != 1) {
        printf("Wrong input!\n");
        return 1;
    }
    error = scanf("%f", &c);
    if(error != 1) {
        printf("Wrong input!\n");
        return 1;
    }

    if (a < b){
        if(a < c)
            ans = a;
        else
            ans = c;
    }
    else{
        if(b < c)
            ans = b;
        else
            ans = c;
    }

    printf("Min from %f, %f, %f is %f\n" ,a,b,c, ans);
    return 0;
}


int recursion(){

    printf("Give me a number\nI'll give you recursion\n");
    int n, error;
    error = scanf("%d", &n);
    if(error != 1) {
        printf("Wrong input!\n");
        return 1;
    }
    int fuk(int n){
        if (n == 1){
            return n;
        }
        printf("%d*", n);
        return n*fuk(n-1);
    }
    printf("fuk(%d) = ", n);
    fuk(n);
    printf("1");
    return 0;
}

int main(){
    int ex = 1, error, n = 1 ;
    printf("Give me an exercise you want to see\n\
           '' - exit\n\
           1-6- exercise\n");

    while(ex != 0 && (ex = getchar()) != EOF ) {
        switch (ex){
            case '1':
                distance();
                break;
            case '2':
                gcd();
                break;
            case '3':
                rev();
                break;
            case '4':
                is_prime();
                break;
            case '5':
                minn();
                break;
            case '6':
                recursion();
                break;
            case '0':
                ex = 0;
                break;
            case '\n': /* ignore newlines, */
            case '\t': /* tabs, */
            case ' ': /* and spaces in input */
                break;
            default:
                printf("%s", "Incorrect letter grade entered.");
                puts(" Enter a new grade.");
                break;
           /* case 3:
                ex3();
                break;
            case 4:
                ex4();
                break;
            case 5:
                ex5();
                break;
            case 6:
                ex6();
                break;
            case 7:
                ex7();
                break;
            case 8:
                ex8();
                break;
            case 9:
                ex9();
                break;*/
        }
    }
    printf("Bye!");
    return 0;
}
