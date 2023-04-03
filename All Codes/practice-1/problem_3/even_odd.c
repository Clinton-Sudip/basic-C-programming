#include<stdio.h>
int main(){
    int input;
    scanf("%d",&input);
    if(input % 2 ==0 && input>=0){
        printf("The number is even");
    }
    else if(input % 2 !=0 && input >=0){
        printf("The number is odd");
    }
    else{
        printf("Enter a non-negative number");
    }
    return 0;
}