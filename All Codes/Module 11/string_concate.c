#include<stdio.h>
#include<string.h>
int main(){
    char str[100],con[100];
    scanf("%s %s",str,con);
    int tot_length=strlen(str)+strlen(con);
    for(int i=strlen(str),j=0;i<=tot_length;i++,j++){
        str[i]=con[j];
    }
    printf("%s\n",str);
    strcat(str,con);
    printf("%s\n",con);
    //built in : strcat(a,b)
    return 0;
}