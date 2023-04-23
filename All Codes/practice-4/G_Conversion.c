#include<stdio.h>
#include<math.h>
int main(){
    int size=pow(10,5),i=0;
    char str[size+1];
    scanf("%s",str);
    while(str[i]!='\0'){
        if((str[i]>='A') && (str[i]<='Z')){
            printf("%c",str[i]+32);
        }
        else if((str[i]>='a') && (str[i]<='z')){
            printf("%c",str[i]-32);
        }
        else if(str[i]==','){
            str[i]=' ';
            printf("%c",str[i]);
        }
        i++;
    }
    return 0;
}
/*Given a string S. Print the origin string after replacing the following:

Replace every comma character ',' with a space character.
Replace every capital character in S with its respective small character and Vice Versa.
Input
Only one line contains a string S (1 ≤ |S| ≤ 10^5) where |S| is the length of the string and it consists of lower and upper English letters and comma character ','.

Output
Print the string after the conversion.*/