#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
double findMaxInMatrix(double matrix[10][10], int fromAx, int fromAy, int toBx, int toBy) {
	if (fromAy == toBy) {
		return;
	}

	if (fromAx < toBx) {		
		return max(matrix[fromAx][fromAy], findMaxInMatrix(matrix, fromAx + 1, fromAy, toBx, toBy));
	}
	else {	
		fromAx = 0;
		return max(matrix[fromAx][fromAy], findMaxInMatrix(matrix, fromAx, fromAy + 1, toBx, toBy));
	}	
}

int main() {
	printf_s("The following program will find the maximal element in a matrix 3 times.\nThe catch is that each time the program will start with a different matrix.\n");
	double matrix[10][10];

	for (int i = 0; i < 3; i++) {
		printf_s("How many rows do you want: ");
		int row;
		scanf_s("%i", &row);

		printf_s("How many columns do you want: ");
		int column;
		scanf_s("%i", &column);

		for (int i = 0; i < row; i++) {
			for (int j = 0; j < column; j++) {
				printf_s("Give the value for the element at the indexes %i, %i\n", i + 1, j + 1);
				scanf_s("%lf", &matrix[i][j]);
			}
		}

		printf_s("Dear user, this is your matrix:\n");
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < column; j++) {
				printf_s("%lf   ", matrix[i][j]);
			}
			printf_s("\n");
		}

		int fromAx = 0, fromAy = 0, toBx = row, toBy = column;
		double firstMax = findMaxInMatrix(matrix, fromAx, fromAy, toBx, toBy);
		printf_s("\n%lf\n\n", firstMax);
	}
}

