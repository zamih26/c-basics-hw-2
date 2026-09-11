#include<stdio.h>  
#include <stdlib.h>
#include<time.h>
void check_islands(int m, int n, int matrix[m][n], int i, int j){
    if(matrix[i][j] == 1){
        matrix[i][j] = 0;
        if(i > 0) 
            check_islands(m, n, matrix, i - 1, j);
        if(i + 1 < m) 
            check_islands(m, n, matrix, i + 1, j);
        if(j > 0) 
            check_islands(m, n, matrix, i, j - 1);
        if(j + 1 < n) 
            check_islands(m, n, matrix, i, j + 1);
    }

}
int main(){

    int m, n;
    scanf("%d %d", &m, &n);
    int matrix[m][n];
    int islands = 0;
    srand(time(NULL));
    for(int i = 0; i < m; i ++){
        for(int j = 0; j < n; j ++){
            matrix[i][j] = rand() % 2; 
            printf("%d ", matrix[i][j]);
            
        }
        printf("\n");
    }
    for(int i = 0; i < m; i ++){
        for(int j = 0; j < n; j ++){
            if(matrix[i][j] == 1){
                islands++; 
                check_islands(m, n, matrix, i, j);
            }

        }
    }

    printf("%d\n", islands);

    return 0;
}