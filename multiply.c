#include<stdio.h>

int main() {
    int size, i, j;

    printf("Enter rows and columns of matrix: ");
    scanf("%d", &size);

    if (size >= 5) {
        printf("Size must be less than 5\n");
        return 1; 
    }

    int arr1[size][size], arr2[size][size], sum[size][size];

    printf("Input elements in the first matrix: \n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            printf("element [%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Input elements in the second matrix:\n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            printf("element [%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("\nThe first matrix is:\n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    printf("\nThe second matrix is:\n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    printf("\nThe multiplied matrix is:\n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            sum[i][j] = arr1[i][j] * arr2[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
