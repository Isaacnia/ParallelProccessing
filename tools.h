void RaInit(int A[ROWS][COLS]){
    int row,col;
    int axis = 1 ; 
    int value = 0 ;
    for(row=0; row<ROWS; row++){
        for(col=0; col<COLS; col++){
            value = axis + col ;
            if(value > 8){
                value = value - 8 ;
            }
            A[row][col] = value ;
        }
        axis++ ;
    }
}
void RbInit(int A[ROWS][COLS]){
    int row,col;
    int axis = 8 ; 
    int value = 0 ;
    for(row=0; row<ROWS; row++){
        for(col=0; col<COLS; col++){
            value = axis - col ;
            if(value <= 0){
                value = value + 8 ;
            }
            A[row][col] = value ;
        }
        axis-- ;
    }
}

void RcInit(int A[ROWS][COLS]){
    int row,col;
    for(row=0; row<ROWS; row++){
        for(col=0; col<COLS; col++){
            A[row][col] = 0 ;
        }
    }
}

void DotProduct(int A[ROWS][COLS] , int B[ROWS][COLS], int C[ROWS][COLS]){
    int row,col,step;
    for (row = 0; row < ROWS; row++){
        for (col = 0; col < COLS; col++){
            for(step = 0; step < ROWS; step++){
                C[row][col] += A[row][step] * B[step][col];
            }
        }
    }
}

void ShowMatrix(int X[ROWS][COLS]){
    for(row=0; row<ROWS; row++){
        for(col=0; col<COLS; col++){
            printf("%d ",X[row][col]);
        }
    printf("\n");
    }
}