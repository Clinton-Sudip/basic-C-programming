#include<stdio.h>
#include<string.h>
int main(){
    char str2[100]; // should always be greater than user input, other wise run-time error will occur except windows OS
    fgets(str2,25,stdin); //fgets counts enter as well
    str2[5]='\0'; // adding '\0' at the end of the sentence would help ignoring the enter.
    printf("%s",str2);
    return 0;
}