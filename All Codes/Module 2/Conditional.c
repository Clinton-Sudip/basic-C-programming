#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if(a>=b && a>=c){
        printf("%d is the greater number\n", a);
        if(a >= b+10 || a >= c+10){
            printf("a is super great");
        }
    }
    else if(b>=a && b>=c){
        printf("%d is the greater number\n", b);
        if(b >= a+10 || b >= c+10){
            printf("b is super great");
        }
    }
    else{
        printf("%d is the greater number\n", c);
        if(c >= b+10 || c >= a+10){
            printf("c is super great");
        }
    }
    return 0;

}