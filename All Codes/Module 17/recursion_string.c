#include<stdio.h>
int recursion(char str[],int i){
    if(str[i]=='\0') return 0;
    int length = recursion(str,i+1);
    return length + 1; // +1 because we passed the value 0. 0th position will also be counted.
}
int main(){
    char str[6]="sudip";
    int length=recursion(str,0);
    printf("%d",length);
    return 0;
}