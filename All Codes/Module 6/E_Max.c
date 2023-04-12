#include<stdio.h>
int main(){
    int N,temp,max=0; //INT_MIN when finding max value and INT_MAX when finding min value.
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&temp);
        if(max<temp){
            max=temp;
        }
    }
    printf("%d",max);
    return 0;
}
/*Given a number N, and N numbers, find maximum number in these N numbers.

Input
First line contains a number N (1 ≤ N ≤ 10^3).

Second line contains N numbers Xi (0 ≤ Xi ≤ 10^9).

Output
Print the maximum number.*/