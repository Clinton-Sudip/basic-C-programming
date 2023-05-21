#include<stdio.h>
int main(){
    int row, col, flag=1, temp, i=0, j=0;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&arr[i][j]); // 2D input
        }
    }
    if(row != col){
        printf("Can't be a Scalar matrix\n");
    }
    else{
        temp = arr[0][0];
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(i != j && arr[i][j]!=0 /*|| ((i+j != row-1) && arr[i][j] != 0)*/){
                    flag=0;
                }
                if( i == j && arr[i][j] != temp /*|| ((i+j == row-1) && arr[i][j] != temp)*/){
                    flag=0;
                }
            }
        }
        if(flag==0){
            printf("Not Scalar\n");
        }
        else{
            printf("Scalar\n");
        }
    }
    return 0;
}