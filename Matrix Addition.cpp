#include<stdio.h>
int main(){
	int rows, cols;
	printf("Enter the number of rows and columns for the matrics: ");
	scanf("%d %d", &rows, &cols);
	int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];
	printf("Enter elements of first matrix:\n ");
	for(int i =0; i<rows; i++){
		for(int j=0; j<cols; j++){
			scanf("%d", &matrix1[i][j]);
		}
	}
	printf("Enter elements of 2nd matrix: \n");
	for(int i =0; i<rows; i++)
	{
	for(int j=0; j<cols; j++){
		scanf("%d", &matrix2[i][j]);
	}
	}
	for(int i =0; i<rows; i++){
		for(int j =0; j<cols; j++){
			sum[i][j] = matrix1[i][j]+ matrix2[i][j];
		}
	}
	printf("\nMatrix 1 is:\n ");
	for(int i =0;i<rows;i++){
		for(int j =0; j<cols; j++){
			printf("%d ", matrix1[i][j]);
		}
		printf("\n");
	}
		printf("\nMatrix 2 is:\n ");
	for(int i =0;i<rows;i++){
		for(int j =0; j<cols; j++){
			printf("%d ", matrix2[i][j]);
		}
		printf("\n");
	}
	printf("Sum of the matrices: \n");
	for(int i =0; i<rows; i++){
		for(int j =0; j<cols; j++){
			printf("%d ", sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}
