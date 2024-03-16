#include <stdio.h>

int main() {
    int arr[3][3]; 
    int n, m;

    
   printf("Enter element for the array: \n");
   for(n=0; n<3; n++){
    for(m=0; m<3; m++){
        printf("Enter element for position[%d][%d]: ", n, m);
        scanf("%d", &arr[n][m]);
    }
   }

   printf("\nArray element:\n");
   for(n=0; n<3; n++){
    for(m=0; m<3; m++){
        printf("%d ", arr[n][m]);
    }
    printf("\n");
   }

    return 0;
}
