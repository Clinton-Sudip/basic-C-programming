#include<stdio.h>
int main(){
    int a,b,sum,sub,multi,mod;
    float div;
    a=20;b=30;
    sum=a+b;
    sub=b-a;
    multi=a*b;
    div=b*1.0/a; // to divide properly one of the variable has to be float
    mod=b%a;
    printf(" Sum:%d\n Subtraction:%d\n Multiplicaiton:%d\n Division:%0.3f",sum,sub,multi,div);
    printf(" \tMOD:%d",mod);
    return 0;

}