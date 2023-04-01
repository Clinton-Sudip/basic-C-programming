#include<stdio.h>
int main(){
    int a=1;
    float b=1.5;
    char c= 'C';
    printf("%d %0.2f %c", a,b,c);
    return 0;
}
// %d, %f %c these are format specifier
// %0.2f means 2 digits of fraction will be printed and 0. is mandatory to add after % 