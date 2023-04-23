#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    int size=pow(10,6);
    char str[size+1];
    scanf("%s",str);
    fgets(str,size+1,stdin);
    int length=strlen(str),sum=0;
    str[length-1]='\0';
    for(int i=0;i<length;i++){
        sum=sum+(str[i]-'0');
        /*if(str[i]=='1'){
            sum=sum+1;
        }
        else if(str[i]=='2'){
            sum=sum+2;
        }
        else if(str[i]=='3'){
            sum=sum+3;
        }
        else if(str[i]=='4'){
            sum=sum+4;
        }
        else if(str[i]=='5'){
            sum=sum+5;
        }
        else if(str[i]=='6'){
            sum=sum+6;
        }
        else if(str[i]=='7'){
            sum=sum+7;
        }
        else if(str[i]=='8'){
            sum=sum+8;
        }
        else{
            sum=sum+9;
        }*/
    }
    printf("%d",sum);
    return 0;
}
/*Given a string S. Print the summation of its digits.

Input
Only one line contains a string S (1 ≤ |S| ≤ 10^6) where |S| is the length of the string.

It's guaranteed that S contains only digits from 0 to 9.

Output
Print the answer required above.*/