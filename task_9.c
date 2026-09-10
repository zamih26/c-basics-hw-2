#include<stdio.h>
#include <stdlib.h>
int main(){

    int matrix[3][3];
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j ++){
            matrix[i][j] = rand() % 100;
        }
    }
    int max = matrix[0][0];
    int max_row = 0;
    int max_col = 0;
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j ++){
            if(matrix[i][j] > max){
                max = matrix[i][j];
                max_row = i;
                max_col = j;
            }
        }
    }
    printf("Max number: %d\n", max);
    printf("Position: row %d, column %d\n", max_row, max_col);

    return 0;
}