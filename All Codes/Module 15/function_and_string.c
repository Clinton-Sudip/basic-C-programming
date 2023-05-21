#include<stdio.h>
#include<string.h>
void fun( char arr[]){ // Or, can pass *ar.
    int size;
    size = sizeof(arr)/sizeof(char); 
    printf("%d\n",size); // answer is 4, as arr[] only takes the first index.
    // But we have no need to pass size of array when working with strings
    // Because, when working with strings we need length of the strings. Which can be identified by using strlen() funciton.
    printf("Length of the string is : %d",strlen(arr)); // counts without the presence of null.
}
int main(){
    char arr[20]="Hello";
    int size;
    size = sizeof(arr)/sizeof(char);
    printf("%d\n",size);
    fun(arr);
    return 0;
}