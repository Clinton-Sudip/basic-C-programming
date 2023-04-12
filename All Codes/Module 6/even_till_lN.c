#include<stdio.h>
int main(){
    int N,flag=0;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        if(i%2==0){
            printf("%d\n",i);
            flag=1;
        }
    }
    if(flag==0){
        printf("-1");
    }
    return 0;
}
/*Given a number N. Print all even numbers between 1 and N inclusive in separate lines.

Input
Only one line containing a number N (1 ≤ N ≤ 10^3).

Output
Print the answer according to the required above. If there are no even numbers print -1.*/