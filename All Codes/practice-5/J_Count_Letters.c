#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int count[26]={0};
    char s;
    int i=0,value;
    while(scanf("%c",&s) != EOF){
        value= s-'a';
        count[value]++;
        i++;
    }
    for(int i=0;i<26;i++){
        if(count[i]!=0){
            printf("%c : %d\n",i+97,count[i]);
        }
    }
    return 0;
}
/*Given a string S. Determine how many times does each letter occurred in S.

Input
Only one line contains the string S (1 ≤ |S| ≤ 10^7) where |S| is the length of the string and it consists of only lowercase English letters.

Output
For each character that appears in S, print a single line that contains the following format: "X : Y" where X is the letter and Y is the number of times that letter X occurred in S.

Note: you must print letters in ascending order.*/