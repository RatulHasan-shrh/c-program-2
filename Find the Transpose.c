

#include <stdio.h>

int main() {
    int rows = 2, cols = 3;
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int transpose[3][2];

    
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            transpose[j][i] = matrix[i][j];
  

    printf("Original matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
  

    printf("Transpose of the matrix:\n");
    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }

    return 0;
}
