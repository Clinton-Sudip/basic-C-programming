#include<stdio.h>
int main(){
    int n,row,s,k;
    scanf("%d",&n);
    row=(2*n)-1;
    s=n-1;
    k=1;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=s;j++){
            printf(" ");
        }
        for(int j=1;j<=k;j++){
            printf("*");
        }
        if(i<n){
            s--;
            k=k+2;
        }
        else{
            s++;
            k=k-2;
        }
        printf("\n");
    }
    return 0;
}