void ainit(int A[ROWS][COLS]){
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
void binit(int A[ROWS][COLS]){
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
