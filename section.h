static int row,col;
void one(int A[ROWS][COLS] , int B[ROWS][COLS], int C[ROWS][COLS]){
    printf("Matrix A : \n");
    showMatrix(A);
    printf("\nMatrix B : \n");
    showMatrix(B);
    printf("\nMatrix C : \n");
    showMatrix(C);
}
void tow(int A[ROWS][COLS] , int B[ROWS][COLS], int C[ROWS][COLS]){
    dotProduct(A,B,C);
    printf("\nMatrix C : \n");
    showMatrix(C);
}
void three(int A[ROWS][COLS] , int B[ROWS][COLS], int C[ROWS][COLS]){
    clock_t begin = clock();
    dotProduct(A,B,C);
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Elapsed: %f microsecond \n",time_spent*pow(10,6));
}
void four(int A[ROWS][COLS] , int B[ROWS][COLS], int C[ROWS][COLS]){
    for (row = 0 ; row < ROWS ; row++){
        for (col = 0 ; col < COLS ; col++){
            microProcess(A,B,C,row,col);
        }
    }
    printf("\nMatrix C : \n");
    showMatrix(C);
}

void five(int A[ROWS][COLS] , int B[ROWS][COLS], int C[ROWS][COLS]){
    omp_set_num_threads(64);
    #pragma omp parallel for collapse(2)
    for (row = 0 ; row < ROWS ; row++){
        for (col = 0 ; col < COLS ; col++){ 
            microProcess(A,B,C,row,col);
        }
    }
   // printf("\nMatrix C : \n");
    showMatrix(C);
}

void six(int A[ROWS][COLS] , int B[ROWS][COLS], int C[ROWS][COLS]){
    omp_set_num_threads(64);
    clock_t begin = clock();
    #pragma omp parallel for collapse(2)
    for (row = 0 ; row < ROWS ; row++){
        for (col = 0 ; col < COLS ; col++){ 
            microProcess(A,B,C,row,col);
        }
    }
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Elapsed: %f microsecond \n",time_spent*pow(10,6));
   // printf("\nMatrix C : \n");
    showMatrix(C);
}