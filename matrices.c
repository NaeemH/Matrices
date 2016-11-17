/*
Naeem Hossain
November 16, 2016
Program that will do basic matrix operations; addition and subtraction
*/

#include <stdio.h>
#include <stdlib.h>

void checkIfSame(); // and other function declarations

int main() {

	int mat[100][100];
	int row,column,i,j;

	int matTwo[100][100];
	int rowTwo,columnTwo,a,b;

	printf("enter number of rows for first matrix:\n");
	scanf("%d",&row);
	printf("enter number of columns for first matrix:\n");
	scanf("%d",&column);

	printf("enter the matrix entries for first matrix L->R:");

	for(i=0;i<row;i++){
    	for(j=0;j<column;j++){
        	scanf("%d",&mat[i][j]);
    	}
	printf("\n");
	}

	for(i=0;i<row;i++){
  	  for(j=0;j<column;j++){
 	       printf("%d \t",mat[i][j]);
 	   }
	printf("\n");
	}


	printf("enter number of rows for second matrix:\n");
	scanf("%d",&row);
	printf("enter number of columns for second matrix:\n");
	scanf("%d",&column);

	checkIfSame(row, column, rowTwo, columnTwo);
	printf("enter the matrix entries for second matrix L->R:");

	for(a=0;a<row;a++){
    	for(b=0;b<column;b++){
        	scanf("%d",&mat[a][b]);
    	}
	printf("\n");
	}

	for(a=0;a<row;a++){
  	  for(b=0;b<column;b++){
 	       printf("%d \t",mat[a][b]);
 	   }
	printf("\n");
	}
}

/*Checks if the matrices are the same size*/
/*Keeps returning errors even when the matrices are the same size, idk why*/
void checkIfSame(int a, int b, int c, int d){

	if((a != c){
		printf("Error, matrices are not the same size\n");
		printf("They must have the same row and column in order to add/subtract\n");
		exit(0);
	}
	if (b != d){
		printf("Error, matrices are not the same size\n");
		printf("They must have the same row and column in order to add/subtract\n");
		exit(0);
	}
}