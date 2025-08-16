#include <stdio.h>

void findCubes(int *arr, int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            int val = *((arr + i * cols) + j);
            int cube = val * val * val;
            printf("%5d ", cube);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    // Input elements
    printf("Enter elements of the 2D array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter value at [%d] [%d] ",i,j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Call UDF
    printf("\nCubes of all elements (2D format):\n");
    findCubes((int *)arr, rows, cols);

    return 0;
}
