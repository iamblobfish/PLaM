#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int ex1(){
/*Напишите программу, которая суммирует последовательность целых чисел.
Первое целое число, считываемое с помощью scanf,
определяет количество значений, которое осталось ввести.
Программа должна считывать только одно значение при каждом выполнении scanf.
Например, 5 100 200 300 400 500 где 5 указывает,
что должны суммироваться последующие 5 значений.
*/
    printf("Give me a sequence length and then sequence itself\nI'll give you a sum\n");
    int n, error;
    int ans, cur;
    error = scanf("%d", &n);
    if(error != 1) {
        printf("Wrong input!\n");
        return 1;
    }
    cur = 0;
    while (n > 0){
        error = scanf("%d", &cur);
        if(error != 1) {
            printf("Wrong input!\n");
            return 1;
        }
        ans += cur;
        n--;
        cur = 0;
    }
    printf("Sum is %d\n", ans);
    return 0;
}

int ex2(){
/*Напишите программу, которая находит наименьшее из нескольких целых чисел.
Первое считанное значение определяет количество оставшихся значений.
*/
    printf("Give me a sequence length and then sequence itself\nI'll give you min\n");
    int n, error;
    int min, cur;
    error = scanf("%d", &n);
    if(error != 1) {
        printf("Wrong input!\n");
        return 1;
    }
    error = scanf("%d", &min);
        if(error != 1) {
            printf("Wrong input!\n");
            return 1;
        }
    n--;
    while (n > 0){
        error = scanf("%d", &cur);
        if(error != 1) {
            printf("Wrong input!\n");
            return 1;
        }
        if (cur < min) min = cur;
        n--;
    }
    printf("Min is %d\n", min);
    return 0;
}

int main(){
    int ex = 1, error, n = 1 ;
    printf("Give me an exercise you want to see\n\
           '' - exit\n\
           1-2 - exercise\n");
    /*error = scanf("%d", &ex);
    if(error != 1) {
        printf("Wrong input!\n");
        return 1;
    }*/

    while(ex != 0 && (ex = getchar()) != EOF ) {
        switch (ex){
            case '1':
                ex1();
                break;
            case '2':
                ex2();
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
