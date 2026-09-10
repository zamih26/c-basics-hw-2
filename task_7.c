#include<stdio.h>
#include <stdlib.h>
int main(){

    int matrix[3][3];
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j++){

            matrix[i][j] = rand() % 100;
            printf("%d ", matrix[i][j]);
        
        }
        printf("\n");
    }


    return 0;
}

