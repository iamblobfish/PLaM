#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int ex1(){
/*Ќайти сумму и количество элементов последовательности*/
    printf("Give me a sequence with end - any not a number synbol\nI'll give you a sum and length\n");
    int n = 0, end = 1, cur, sum = 0;

    while (end == 1){
        end = scanf("%d", &cur);
        if(end != 1) {
            printf("You'v just ended a sequence\n");
            break;
        }
        sum += cur;
        n++;
        end = 1;
    }
    printf("Sum is %d, length is %d\n", sum, n);
    return 0;
}

int ex2(){

/*¬ывести номер первого элемента последовательности больше k*/
    printf("Give me a number and\nthen sequence with end - any not a number synbol\nI'll give you first  number of sequence\n that is more then first number\n");
    int k, end = 1, cur, ans = 0, t = 1;
    end = scanf("%d", &k);
    if(end != 1) {
        printf("Wrong input!\n");
        return 1;
    }
    while (end == 1){
        end = scanf("%d", &cur);
        if(end != 1) {
            printf("You'v just ended a sequence\n");
            break;
        }
        if (t != 0){
            if (k < cur){
                ans = cur;
                t = 0;
            }
        }
    }
    printf("First  number of sequence\n that is more then %d number is %d\n",k, ans);
    return 0;
}
int ex3(){
/*ѕроверить €вл€етс€ ли данна€ последовательность возрастающей*/
    printf("Give me a sequence with end - any not a number synbol\nI'll determine whether it increases or not\n");
    int end = 1, cur = 1, prev = 0, ans = 1;
    end = scanf("%d", &cur);
        if(end != 1) {
            printf("You'v just ended a sequence\n");
        }
    while (end == 1){
        end = scanf("%d", &cur);
        if(end != 1) {
            printf("You'v just ended a sequence\n");
            break;
        }
        if (prev > cur){
            ans = 0;
        }
        prev = cur;
    }
    if (ans == 1) printf("Sequence is increases\n");
    else printf("Sequence is not increases\n");
    return 0;
}

int ex4(){
/*¬ывести номера элементов последовательности,
которые меньше своего левого соседа и их количестко*/
    printf("Give me a sequence with end - any not a number synbol\nI'll give increasing numbers and amount\n");
    int end = 1, cur, prev, n = 0;
    char ans = "";
    end = scanf("%d", &cur);
        if(end != 1) {
            printf("You'v just ended a sequence\n");
        }
    prev = cur+1;
    while (end == 1){
        end = scanf("%d", &cur);
        if(end != 1) {
            printf("You'v just ended a sequence\n");
            break;
        }
        if (prev < cur){
            ans += (" " + (char)cur);
        }
        prev = cur;
        n++;
    }
    printf("Increasing numbers is %c,\nand there are %d of them\n", ans, n);
    return 0;
}
int main(){
    int ex = 1, error, n = 1 ;
    printf("Give me an exercise you want to see\n\
           '' - exit\n\
           1-4 - exercise\n");
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
            case '3':
                ex3();
                break;
            case '4':
                ex4();
                break;
            default:
                puts(" Enter another command.");
                break;
           /*

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
