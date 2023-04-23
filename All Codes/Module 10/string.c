#include<stdio.h>
int main(){
    char str[6];
    for(int i=0;i<6;i++){
        scanf("%c",&str[i]);
    }
    for(int i=0;i<6;i++){
        printf("%c",str[i]);
    }
    printf("\nsize of char: %d\n",sizeof(char));
    printf("size of int: %d\n",sizeof(int));
    printf("Size of string: %d\n",sizeof(str));
    return 0;
}