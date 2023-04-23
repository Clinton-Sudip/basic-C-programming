#include<stdio.h>
int main(){
    char a[100];
    scanf("%s",a); //this solution is for words consisting small letters without any other characters
    int count[26]={0};
    int i=0,value;
    while(a[i]!='\0'){
        value=a[i]-'a';
        count[value]++;
        i++;
    }
    for(int i=0;i<26;i++){
        printf("%c = %d\n",i+97,count[i]);
    }
    return 0;
}