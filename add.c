#include<stdio.h>
int main(){
   int size, i, j;

   printf("Enter size of the square matrix: ");
scanf("%d ", &size);

if (size>=5){
printf("Size must be less than 5:");
return 1;
}

int arr1[size][size], arr2[size][size], sum[size][size];

printf("Input element in the first matrix: \n");
for(i=0; i<size; i++){
    for(j=0; j<size; j++){
        printf("element [%d],[%d]", i, j);
        scanf("%d ", &arr1[i][j]);
    }
}


printf("Input element in the second matrix:\n");
for(i=0; i<size; i++){
    for(j=0; j<size; j++){
        printf("element [%d],[%d]", i, j);
        scanf("%d ", &arr2[i][j]);
    }
}

for(i=0; i<size; i++){
    for(j=0; j<size; j++){
       
        sum[i][j]=arr1[i][j]+arr2[i][j];
    }
}


printf("\nthe first matrix is:\n");
for(i=0; i<size; i++){
    for(j=0; j<size; j++){
        printf("%d ", arr1[i][j]);
       
    }
    printf("\n");
}

printf("\nthe second matrix is:\n");
for(i=0; i<size; i++){
    for(j=0; j<size; j++){
        printf("%d ", arr2[i][j]);
       
    }
    printf("\n");
}

printf("\nthe sum matrix is:\n");
for(i=0; i<size; i++){
    for(j=0; j<size; j++){
        printf("%d ", sum[i][j]);
       
    }
    printf("\n");
}
}