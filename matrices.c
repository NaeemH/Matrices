/*
Naeem Hossain
November 16, 2016
Program that will do basic matrix operations;

ARRAY OF FUNCTION POINTERS:
1. Add
2. Subtract
3. Multiply
*/

#include <stdio.h>

//void checkIfSame(); 
//void addMatrices();

int main() {

	int row, column, i, j, 
	sum[10][10], mat[10][10], matTwo[10][10];

	printf("enter numbers of rows and columns for first matrix separated by a space:\n");
	scanf("%d%d",&row, &column);
	printf("enter the entries for first matrix L->R:");

	for(i=0;i<row;i++){
    	for(j=0;j<column;j++){
        	scanf("%d",&mat[i][j]);
    	}
	printf("\n");
	}

	printf("enter the entries for second matrix L->R:");

	for(i=0;i<row;i++){
    	for(j=0;j<column;j++){
        	scanf("%d",&matTwo[i][j]);
    	}
	printf("\n");
	}
	
	printf("Sum of entered matrices:-\n");
   	for (i = 0; i < row; i++) {
    	for (j = 0 ; j < column; j++) {
       		sum[i][j] = mat[i][j] + matTwo[i][j];
        	printf("%d\t", sum[i][j]);
      	}
      	printf("\n");
   	} 

	return 0;
}