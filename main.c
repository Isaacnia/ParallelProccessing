#define ROWS 8
#define COLS 8
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <omp.h>
#include <math.h>
#include "tools.h"
#include "section.h"
int main(int argc, char *argv[]){
    int A[ROWS][COLS];
    int B[ROWS][COLS];
    int C[ROWS][COLS];
    int row,col;
    rbInit(B);
    raInit(A);
    rcInit(C);

    if(argc > 1 ){
        if(strcmp(argv[1],"1") == 0){
            one(A,B,C);
        }
        else if(strcmp(argv[1],"2") == 0){
            tow(A,B,C);
        }
        else if(strcmp(argv[1],"3") == 0){
            three(A,B,C);
        }
        else if(strcmp(argv[1],"4") == 0){
        four(A,B,C);
        }
        else if(strcmp(argv[1],"5") == 0){
        five(A,B,C);
        }
        else if(strcmp(argv[1],"6") == 0){
        six(A,B,C);
        }
        else{
            printf("\nNothing\n");
        }
    }else{
        printf("\n Please enter your section \n");
    }



return 0;
}