#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n],count[m];
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<=m;i++){
        count[i]=0;
    }
    for(int i=1;i<=n;i++){
        count[arr[i]]++;
    }
    for(int i=1;i<=m;i++){
        printf("%d\n",count[i]);
    }
    return 0;
}
/*Given 2 numbers N
, M
 and an array A
 of N
 numbers. For every number from 1 to M
, print how many times this number appears in this array.

Input
First line contains two numbers N
, M
 (1≤N≤10^5,1≤M≤10^5)
.

Second line contains N
 numbers (1≤Ai≤M)
.

Output
Print M
 lines, the ith
 line should contain number of times that the number i
 appears in A*/