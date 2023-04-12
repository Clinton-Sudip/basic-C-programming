#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    if((c>=65 && c<=89)||(c>=97 && c<=121)){
        c++;
        printf("%c",c);
    }
    else if(c==90 || c==122){
        c=c-25;
        printf("%c",c);
    }
    return 0;
}