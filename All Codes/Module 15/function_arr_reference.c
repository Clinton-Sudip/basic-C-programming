#include<stdio.h>
void fun(int *arr){
    arr[0] = 500;
    arr[1] = 200; // arr[1] --> *(arr+1) which is bascially dereferencing.
}
void gun(char *str){
    str[0]='G';
}
int main(){
    int arr[]={10, 20, 30, 40, 50};
    for(int i=0; i<5; i++){
        printf("%d ",arr[i]);
    }
    fun(arr);
    printf("\n");
    for(int i=0; i<5; i++){
        printf("%d ",arr[i]); // value get changed because passing arr to fun function. Would actually pass the address of first index
    }
    char str[]="Hello";
    gun(str);
    printf("\n");
    printf("%s\n",str); // Same happens with the string, as string itself is an array.
    return 0;
}