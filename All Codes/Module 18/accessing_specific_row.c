#include<stdio.h>
int main(){
    int row,col;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&arr[i][j]); // 2D input
        }
    }
    // Accessing 2nd row
    for(int i=0; i<col; i++){
        printf("%d ",arr[1][i]);
    }
    printf("\n\n");
    // accessing 3 column
    for(int i=0; i<row; i++){
        printf("%d\n",arr[i][2]);
    }
    return 0;
}