
#include <stdio.h>

int main() {
    int a[10][10], i, j, rows, cols;



    // Input number of rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);


    // Input array elements
    printf("Enter elements of the 2D array:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }


    // Print array row-wise
    printf("2D Array across rows:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");  // new line after each row
    }


    return 0;

}
