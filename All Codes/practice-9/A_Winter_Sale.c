#include<stdio.h>
int main(){
    float x,p,original;
    scanf("%f %f",&x,&p);
    original = p/(1-(x/100));
    printf("%.2f",original);
    return 0;
}