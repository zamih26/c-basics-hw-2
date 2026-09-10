#include<stdio.h>
#include <stdlib.h>
int main(){

    int matrix1[3][3];
    int matrix2[3][3];
    int result[3][3];
    
for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        matrix1[i][j] = rand() % 100;
        matrix2[i][j] = rand() % 100;
        result[i][j] = matrix1[i][j] + matrix2[i][j];
    }
}

    printf("Matrix 1:\n");
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j ++){
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("Matrix 2:\n");
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j ++){
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }
    
    printf("Result Matrix:\n");
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j ++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
        
    return 0;
}