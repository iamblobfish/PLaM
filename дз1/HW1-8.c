#include <stdio.h>
#include <stdlib.h>

/*�������� ���������, ������� ���������
��������������� ����� �����, ��������� �
������� ��� ���������. �������� � ���� ��������� �������.*/

int fac(int i){
    int sum = 1;
    while(i != 0)
        sum *= i--;
    return sum;
}
int main()
{
    int error;
    int x;
    printf("Give me a positive number\n");
    error = scanf("%d", &x);
    if(error != 1 || x <= 0) {
        printf("Wrong input!\n");
        return 1;
    }
    printf("Factorial of %d is %d ", x, fac(x));
    return 0;
}
