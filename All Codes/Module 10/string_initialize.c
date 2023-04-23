#include<stdio.h>
int main(){
    //char str[6]={'S','u','d','i','p'}; --> no gurantee of adding null automatically at the end.
    char str[5]="Sudip";
    char new[6]="Sudip"; //automatically adds a null at the end.
    char upg[7]="Sudip\0"; // \0 to add null 
    int size = sizeof(upg); // becuase the size is not defined, upg automatically added null while I have added null as well.
    printf("%s\n%s\n",str,new);
    printf("size of upg: %d\n",size); // try by upg[6] and upg[7].
    return 0;
}