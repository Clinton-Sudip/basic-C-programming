#include<stdio.h>
int main(){
    long long int sum=0;
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        sum += i;
    }
    printf("Total Sum is: %lld", sum);
    return 0;
}