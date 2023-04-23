#include<stdio.h>
#include<limits.h>
int main(){
    int N,temp,min=INT_MAX,max=INT_MIN,min_index,max_index;
    scanf("%d",&N);
    int arr[1000];
    long long int value;
    for(int i=0;i<N;i++){
        scanf("%lld",&value);
        arr[i]=value;
    }
    for(int i=0,j=0;i<N;i++,j++){
        if(arr[i]<min){
            min=arr[i];
            min_index=i;
        }
        if(arr[j]>max){
            max=arr[j];
            max_index=j;
        }
    }
    temp=arr[min_index];
    arr[min_index]=arr[max_index];
    arr[max_index]=temp;
    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
}
/*Given a number N and an array A of N numbers. Print the array after doing the following operations:

Find minimum number in these numbers.
Find maximum number in these numbers.
Swap minimum number with maximum number.
Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers ( - 10^5 ≤ Ai ≤ 10^5)

It's guaranteed that all numbers are distinct.

Output
Print the array after the replacement operation.*/