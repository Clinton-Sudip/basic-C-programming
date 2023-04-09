#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    if((c>=65 && c<=90)){
        c=c+32;
        printf("%c\n",c);
    }
    else if(c>=97 && c<=122){
        c=c-32;
        printf("%c\n",c);
    }
    else{
        printf("Insert only small letters or capital letters.");
    }
    return 0;
}
/*Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

Note : difference between 'a' and 'A' in ASCII is 32 .

Input
Only one line containing a character X which will be a capital or small letter.

Output
Print the answer to this problem.*/