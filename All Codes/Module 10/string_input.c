#include<stdio.h>
#include<string.h>
int main(){
    char str[6]; // use 1 extra size than input, for null. Try by reducing size than input.
    scanf("%s",&str); // OK to not use '&'
    printf("%s\n",str); // prints whole input even when size is not equal to string input. (Only in Windows)
    // %s, stops taking input when you use space. Try by inputting: Sudip Ghoshal
    
    return 0;
}