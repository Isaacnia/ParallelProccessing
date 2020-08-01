#define ROWS 8
#define COLS 8
#include <stdio.h>
#include "tools.h"
int main(){
    int A[ROWS][COLS];
    int B[ROWS][COLS];
    int C[ROWS][COLS];
    int row,col;
    RbInit(B);
    RaInit(A);
    RcInit(C);
    DotProduct(A,B,C);

return 0;
}