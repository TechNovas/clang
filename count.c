#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

  
    int **arr = (int **)malloc(rows * sizeof(int *));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    for (int i = 0; i < rows; i++) {
        arr[i] = (int *)malloc(cols * sizeof(int));
        if (arr[i] == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }
    }


    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Find the row with the maximum number of ones
    int maxcount = 0;
    for (int i = 0; i < rows; i++) {
        int count = 0;
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == 1) {
                count++;
            }
        }
        if (maxcount < count) {
            maxcount = count;
        }
    }
    printf("Maximum number of ones in any row: %d\n", maxcount);

    
    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
