#include<stdio.h>
#include<string.h>
int main(){
    char str[1001];
    scanf("%s",&str);
    int flag = 0, i = 0, j = strlen(str)-1;
    while(i<j){
        if(str[i]!=str[j]){
            flag = 1;
        }
        i++;
        j--;
    }
    if(flag == 1){
        printf("NO");
    }
    else{
        printf("YES");
    }
    return 0;
}