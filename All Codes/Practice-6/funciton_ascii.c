#include<stdio.h>
int char_to_ascii(char c){
    int x=c;
    return x;    
}
int main(){
    char c;
    scanf("%c",&c);
    int a=char_to_ascii(c);
    printf("%d",a);
    return 0;
}