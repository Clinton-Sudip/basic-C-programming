#include<stdio.h>
#include<math.h>
int main(){
    int size=pow(10,5);
    int arr[size],N;
    long long int values,sum=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&values);
        arr[i]=values;
    }
    for(int i=0;i<N;i++){
        sum = sum + arr[i];
    }
    if(sum<0){
        sum = sum*(-1);
        printf("%lld",sum);
    }
    else{
        printf("%lld",sum);
    }

    return 0;
}
/*Given a number N and an array A of N numbers. Print the absolute summation of these numbers.

absolute value : means to remove any negative sign in front of a number .

EX : |-5| = 5 , |7| = 7

Input
First line contains a number N (1 ≤ N ≤ 10^5) number of elements.

Second line contains N numbers (-10^9  ≤  Ai  ≤  10^9).

Output
Print the absolute summation of these numbers.*/