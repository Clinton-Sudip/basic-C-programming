#include<stdio.h>
int main(){
    char a[21],b[21];
    scanf("%s %s",a,b);
    int i=0;
    while(1){
        if(a[i]=='\0' && b[i]=='\0'){
           printf("%s",a);
           break; 
        }
        else if(a[i]=='\0'){
            printf("%s",a);
            break;
        }
        else if(b[i]=='\0'){
            printf("%s",b);
            break;
        }
        else if(a[i]==b[i]){
            i++;
        }
        else if(a[i]<b[i]){
            printf("%s",a);
            break;
        }
        else{
            printf("%s",b);
            break;
        }
    }
    return 0;
}
/*Given two strings X and Y . Print the smallest lexicographical one.

Note: Lexicographical is the way of ordering the words based on the alphabetical order of their component letters.

Input
Only one line contains two strings X, Y(1 ≤ |X|, |Y| ≤ 20) consists of lowercase English letters.

Output
Print the smallest lexicographical string.

Note: If both of X and Y are equal, print any of them.*/