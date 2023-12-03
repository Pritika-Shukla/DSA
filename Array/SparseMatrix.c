#include<stdio.h>

int main() {
    int row, col, count = 0, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &row);

    printf("Enter the number of columns: ");
    scanf("%d", &col);

    // Declare a two-dimensional array for the matrix
    int arr[10][10];

    printf("Enter the elements in the matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if (arr[i][j] == 0) {
                count++;
            }
        }
    }

    if (count > ((row * col) / 2)) {
        printf("Sparse Matrix\n");
    } else {
        printf("Not a sparse matrix\n");
    }

    return 0;
}
