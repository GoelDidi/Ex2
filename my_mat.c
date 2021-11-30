#include <stdio.h>
#include "my_mat.h"

int Matrix[SizeMat][SizeMat];

void function_1(){
  for (int i = 0; i < SizeMat; i++){
        for (int j = 0; j < SizeMat; j++){
            scanf("%d", &Matrix[i][j]);
        }
  }
    algorithm();
}

void function_2(){
    int i, j;
    scanf("%d%d", &i, &j)
        if(Matrix[i][j] != 0){
            printf("True\n");
        }
        else{
            printf("False\n")
        }
}

void function_3(){
    int i, j;
    scanf("%d%d", &i, &j);
    if(Matrix[i][j] == 0 || i == j){
        printf("-1\n");
    }
    else{
        printf("%d\n", Matrix[i][j]);
    }
}

void algorithm(){
   for (int k = 0; k < SizeOfMat; k++){
        for (int i = 0; i < SizeOfMat; i++){
            for (int j = 0; j < SizeOfMat; j++){
                if (i == j){
                    Matrix[i][i] = 0;
                }
                else if (i == k || j == k){
                    Matrix[i][j] = Matrix[i][j];
                }
                else{
                    int value = Matrix[i][k] + Matrix[k][j];
                    if (Matrix[i][k] == 0 || Matrix[k][j] == 0){
                        value = 0;
                    }
                    Matrix[i][j] = min_left_right(Matrix[i][j], value);
                } 
            }
        }
    }        
}

int min_left_right(int left, int right){
    if(left == 0) return right;
    if(right == 0) return left;
    if(left == 0 && right == 0) return 0;
    
    if(left < right) return left;
    else return right;
}
