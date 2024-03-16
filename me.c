#include<stdio.h>
int main(){
    int size;
    printf("Enter number of rows:\n");
    scanf("%d",&size);
    printf("Enter number of coloumn:\n");
    scanf("%d",&size);

    printf("Enter all elements of the square matrix:\n");
    int arr[size][size];

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Entered matrix\n");
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
}
int sum=0;
printf("Sum of main digonal is:\n");
for(int j=0; j<size; j++){
    sum+=arr[j][size-1-j];
}
printf("%d\n", sum);
return 0;
}