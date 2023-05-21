#include<stdio.h>
int main(){
    int row, col, flag=1;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&arr[i][j]); // 2D input
        }
    }
    if(row != col){
        printf("Can't be a Diagonal matrix\n");
    }
    else{
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(i != j && arr[i][j]!=0){
                    flag=0;
                }
            }
        }
        if(flag==0){
            printf("Not Diagonal\n");
        }
        else{
            printf("Diagonal\n");
        }
    }
    


    return 0;
}