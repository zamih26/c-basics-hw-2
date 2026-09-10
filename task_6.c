#include<stdio.h>
#define CYCLE 8
int main(){

    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    for(int i = 0; i < CYCLE; i++){
        printf("%d ", number + i);

    }

    return 0;
}