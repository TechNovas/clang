#include<stdio.h>
int main(){
    int size, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &size);
    printf("Enter number of coloumn: ");
    scanf("%d", &size);

    int arr[size][size];
    printf("Enter all the element:\n");
    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nFinal matrix is:\n");
    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            if(j>i){
                arr[j][i]=0;
            }
        }
    }
    printf("\nmatrix with zeros\n");
    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;

}