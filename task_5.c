#include<stdio.h>
int main(){

    int max, min;
    printf("Enter the minimum value: ");
    scanf("%d", &min);
    printf("Enter the maximum value: ");
    scanf(" %d", &max);
    for(int i = min; i <= max; i++){
        printf("%d ", i);
    }
    
    return 0;
}