#include<stdio.h>
int main(){
    int row, column;
    printf("Enter row: ");
    scanf("%d", &row);
    printf("Enter column: ");
    scanf("%d", &column);

    int arr[row][column];
    int i, j;
    for(i=0; i<row; i++) {
      for(j=0;j<column;j++) {
         printf("Enter value for arr[%d][%d]:", i, j);
         scanf("%d", &arr[i][j]);
      }
   }


    for (int i=0; i<row; i++){
        for (int j=0; j<column; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }



    return 0;
}
