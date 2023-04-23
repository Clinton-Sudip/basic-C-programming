#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%1d",&arr[i]); //without space, input is taken. %2d means taking 2 digits from the number.
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}
/*Given a number N and an array A of N digits (not separated by space). Print the summation of these digits.

Input
First line contains a number N (1  ≤  N  ≤  10^6) number of digits.

Second line contains N digits (0 ≤ Ai ≤ 9).

Output
Print the summation of these digits.*/