#include<stdio.h>
#include<string.h>
int main(){
    char str[1001],rev[1001],temp;
    scanf("%s",str);
    int length=strlen(str);
    int i=0,j=length-1,flag=0;
    while(str[i]!='\0'){
        rev[j]=str[i];
        i++;
        j--;
    }
    int k=0;
    while(str[k]!='\0'){
        if(str[k]!=rev[k]){
            flag=1;
        }
        k++;
    }
    if(flag==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}