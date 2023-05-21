#include<stdio.h>
int recursion(char *str, int i, int count){
    if(str[i]=='\0') return count;
    if((str[i] == 'A') || (str[i] == 'a') || (str[i] == 'E') || (str[i] == 'e') || (str[i] == 'I') || (str[i] == 'i') || (str[i] == 'O') || (str[i] == 'o') || (str[i] == 'U') || (str[i] == 'u')){
        count++;
    }
    recursion(str,i+1,count);
}
int main(){
    char str[201];
    fgets(str,201,stdin);
    int count=0;
    int output = recursion(str,0,count);
    printf("%d",output);
    return 0;
}