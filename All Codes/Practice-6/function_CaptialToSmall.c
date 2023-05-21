#include<stdio.h>
char capital_to_small(char c){
    if(c>='a'&& c<='z'){
        c=c-32;
        return c;
    }
    else{
        printf("Input must be a small alphabet\0");
    }
}
int main(){
    char c,output;
    scanf("%c",&c);
    output=capital_to_small(c);
    printf("%c",output);
    return 0;
}