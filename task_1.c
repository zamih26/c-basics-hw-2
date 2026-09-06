#include<stdio.h>  
int main(){

    int max, min, temp;
    int numb1, numb2, sum;
    printf("Enter the maximum value: ");
    scanf("%d", &max);
    printf("Enter the minimum value: ");
    scanf("%d", &min);
    numb1 = 0;
    numb2 = 1;
    sum = 1;
    printf("Fibonacci numbers between %d and %d are: ", min, max);
    if(max < min){
        temp = max;
        max = min;
        min = temp;
}   
    if(numb1 >= min && numb1 <= max){
        printf("%d ", numb1);
    }
while(numb2 <= max){
        if(numb2 >= min){
            printf("%d ", numb2);
        }
        temp = numb2;
        numb2 = numb1 + numb2;
        numb1 = temp;
    }
    printf("\n");



    return 0;
}