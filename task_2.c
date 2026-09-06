#include<stdio.h>
#include <math.h>

 int isPrime(int numb, int divide){

    if (divide > sqrt(numb)) {
    return 1;
    }
    if(numb % divide == 0){
        return 0;
    }
return isPrime(numb, divide + 1);
}

int main(){

    int numb;
    printf("Enter a number: ");
    scanf("%d", &numb);

    if(numb < 2){
        printf("Not prime\n");
    } else if(isPrime(numb, 2)){
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }

    return 0;
}