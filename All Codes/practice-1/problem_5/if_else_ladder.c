#include<stdio.h>
int main(){
    float amount;
    scanf("%f",&amount);
    if(amount>=20000){
        printf("Gucci Bag\nGucci Belt");
    }
    else if(amount>=10000){
        printf("Gucci Bag");
    }
    else if(amount>=5000){
        printf("Levi's Bag");
    }
    else if(amount <5000 && amount >=0){
        printf("Something");
    }
    else{
        printf("Please enter the value in positive number");
    }
    return 0;
}