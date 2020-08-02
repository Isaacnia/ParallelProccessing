static int row,col;
void raInit(int A[ROWS][COLS]){
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
void rbInit(int A[ROWS][COLS]){
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

void rcInit(int A[ROWS][COLS]){
    for(row=0; row<ROWS; row++){
        for(col=0; col<COLS; col++){
            A[row][col] = 0 ;
        }
    }
}

void dotProduct(int A[ROWS][COLS] , int B[ROWS][COLS], int C[ROWS][COLS]){
    int step;
    for (row = 0; row < ROWS; row++){
        for (col = 0; col < COLS; col++){
            for(step = 0; step < ROWS; step++){
                C[row][col] += A[row][step] * B[step][col];
            }
        }
    }
}

void showMatrix(int X[ROWS][COLS]){
    for(row=0; row<ROWS; row++){
        for(col=0; col<COLS; col++){
            printf("%d ",X[row][col]);
        }
    printf("\n");
    }
}

void microProcess(int A[ROWS][COLS], int B[ROWS][COLS], int C[ROWS][COLS], int row , int col){
    int pivote;
   // printf("Thread number is : %d \n",omp_get_thread_num());
    for(pivote = 0 ; pivote < ROWS ; pivote++){
        C[row][col] += A[row][pivote] * B[pivote][col];
    }
}
