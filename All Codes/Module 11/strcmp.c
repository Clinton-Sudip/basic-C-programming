#include<stdio.h>
int main(){
    char a[100],b[100];
    scanf("%s %s",a,b);
    int v=strcmp(a,b);
    if(v== -1){
        printf("%s",a);
    }
    else if(v== 0){
        printf("Same");
    }
    else{
        printf("%s",b);
    }
    return 0;
}