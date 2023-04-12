#include<stdio.h>
int main(){
    int temp,N,even=0,odd=0,pos=0,neg=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&temp);
        if(temp%2==0){
            even++;
        }
        else{
            odd++;
        }
        if(temp>0){
            pos++;
        }
        else if(temp<0){
            neg++;
        }
    }
    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    printf("Positive: %d\n",pos);
    printf("Negative: %d\n",neg);
    return 0;
}
/*Given N numbers. Count how many of these values are even, odd, positive and negative.

Input
First line contains one number N (1 ≤ N ≤ 10^3) number of values.

Second line contains N numbers (-10^5 ≤ X_i ≤ 10^5).

Output
Print four lines with the following format:

First Line: "Even: X", where X is the number of even numbers in the given input.

Second Line: "Odd: X", where X is the number of odd numbers in the given input.

Third Line: "Positive: X", where X is the number of positive numbers in the given input.

Fourth Line: "Negative: X", where X is the number of negative numbers in the given input.*/