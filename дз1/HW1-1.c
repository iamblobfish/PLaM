int main()
{
    int n, sum;
    int error, i;
    printf("Give me 5 numbers");
    printf("\n");

    for (i=0; i<5; i++){
        error = scanf("%d", &n);
        if (error!=1){
            printf("Wrong input!\n");
            return 1;
        }
        sum+=n;
    }
    sum = sum/5;
    printf("Mean is %d\n", sum);
    return 0;
}
