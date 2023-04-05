#include<stdio.h>
int main(){
    int p1,N,flag=0;
    printf("Enter your number of checkpoints, each checkpoints has 2 bumps\n");
    scanf("%d",&N);
    printf("Where do you want to add your 'STOP' signal?, Note: STOP won't work in the middle checkpoint\n");
    scanf("%d", &p1);
    for(int i=1;i<=N;i++){
        if (N%2==0){
            if(i==N/2){
                printf("0 0 ");
                continue;}
        }
        else{
            if(i==(N/2)+1){
                printf("0 0 ");
                continue;}
        }
        if(i==p1){
            printf("break");
            flag=1;
            break;
        }
        printf("0 0 ");
    }
    if(flag==0){
        printf("\nNo break found");
    }
    printf("\n0 means faced bump");
    return 0;
}