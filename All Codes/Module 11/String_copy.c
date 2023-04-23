#include<stdio.h>
#include<string.h>
int main(){
    char str[10],copy[10];
    scanf("%s %s",str,copy);
    // for(int i=0;i<=strlen(str);i++){
    //     copy[i]=str[i];
    // }
    strcpy(copy,str); // second element is copied to first element
    printf("%s %s",str,copy);
    return 0;
}