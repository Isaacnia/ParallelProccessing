#define ROWS 8
#define COLS 8
#include <stdio.h>
#include "tools.h"
int main(){
    int A[ROWS][COLS];
    int B[ROWS][COLS];
    int C[ROWS][COLS];
    int row,col;
    int axis = 1 ; 
    int value = 0 ;
    binit(A);
    for(row=0; row<ROWS; row++){
        for(col=0; col<COLS; col++){
            printf("%d ",A[row][col]);
        }
        printf("\n");
    }
return 0;
}


