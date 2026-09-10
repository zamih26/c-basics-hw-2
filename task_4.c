#include<stdio.h>
int main(){

    int m, n;
    printf("Put the number of rows: ");
    scanf("%d", &m);
    printf("Put the number of columns: ");
    scanf("%d", &n);
    printf("Put the symbol: ");
    char symbol;
    scanf(" %c", &symbol);
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%c", symbol);
            
        }
        printf("\n");
    }



    return 0;
}