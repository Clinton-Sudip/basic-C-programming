#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    int size=pow(10,6);
    char s[size+1];
    fgets(s,size+1,stdin);
    int i=0;
    while(s[i]!='\\'){
        printf("%c",s[i]);
        i++;
    }

    return 0;
}
/*Given a string S. Print the string S from the beginning to the first '\' character without printing the '\'.

Hint: use function getline(cin, s).

Input
Only one line contains a string S (1 ≤ |S| ≤ 10^6) where |S| is the length of the string.

It's guaranteed that S will contain '\' symbol.

Output
Print the answer required above.*/