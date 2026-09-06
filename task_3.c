#include<stdio.h>
int main(){

    int max;
    printf("Enter the maximum value: ");
    scanf("%d", &max);
    int size = 2 * max - 1;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(i == 0 || i == size -1 || j == 0 || j == size - 1){
                printf(" %d", max); 
            } else {
                int min;
                min = i;
                if(j < min){
                    min = j;
                }
                if(size - 1 - i < min){
                    min = size - 1 - i;
                }
                if(size - 1 - j < min){
                    min = size - 1 - j;
                }
                printf(" %d", max - min);
            }
      }
    
      printf("\n");
    }

    return 0;
}