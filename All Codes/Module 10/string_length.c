#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    fgets(str,20,stdin);
    int count=0,i=0;
    while(str[i]!='\0'){
        count++;
        i++;
    }
    printf("count: %d",count);
    int st=strlen(str);
    printf("\nLength using Built in: %d",st);
    return 0;
}