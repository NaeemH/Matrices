/*
Naeem Hossain
November 16, 2016
Program that will do basic matrix operations; addition and subtraction
*/

#include <stdio.h>
#include <stdlib.h>

void checkIfSame(); 
void addMatrices();

int main() {

	int result[100][100];
	int resultRow,resultCol,c,d;

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
	scanf("%d",&rowTwo);
	printf("enter number of columns for second matrix:\n");
	scanf("%d",&columnTwo);

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

	addMatrices(mat[row][column], matTwo[rowTwo][columnTwo]);
}

/*Checks if the matrices are the same size*/
void checkIfSame(int x, int y, int w, int z){

	if (x != w || y != z){
		printf("Error, matrices are not the same size\n");
		printf("They must have the same row and column in order to add/subtract\n");
		exit(0);
	} 
}

void addMatrices(int swag[100][100], int swagTwo[100][100]){

	int i,j,a,b;

	for(i=0; i<; i++){
		printf("\n", i);
	}

	/*printf("\n", swag);*/
}