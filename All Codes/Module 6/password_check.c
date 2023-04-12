#include<stdio.h>
int main(){
    int temp,N;
    while(scanf("%d",&temp) != EOF){ //E.O.F --> End of File
        if(temp==1999){
            printf("Correct");
            break;
        }
        else{
            printf("Wrong\n");
        }
    }
    return 0;
}