#include<stdio.h>
#include<limits.h>
int main(){
    int arr[1000],N,values,min,index=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&values);
        arr[i]=values;
    }
    min=INT_MAX;
    for(int i=0;i<N;i++){
        if((arr[i]<min)){
            min=arr[i];
            index=i;
        }
    }
    printf("%d %d", min, index+1);
    return 0;
}
/*Given a number N and an array A of N numbers. Print the lowest number and its position.

Note: if there are more than one answer print first one's position.

Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers (-10^5  ≤  Ai  ≤  10^5).

Output
Print the lowest number and its position (1-index).*/