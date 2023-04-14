#include<stdio.h>
int main(){
    int arr[1000],N,values;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&values);
        arr[i]=values;
    }
    for(int i=0;i<N;i++){
        if(arr[i]>0){
            arr[i]=1;
        }
        else if(arr[i]<0){
            arr[i]=2;
        }
    }
    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
/*Given a number N and an array A of N numbers. Print the array after doing the following operations:

Replace every positive number by 1.
Replace every negative number by 2.
Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers (-10^5  ≤  Ai  ≤  10^5).

Output
Print the array after the replacement and it's values separated by space.*/