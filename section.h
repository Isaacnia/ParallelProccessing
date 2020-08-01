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