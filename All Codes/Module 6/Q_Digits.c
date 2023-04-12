#include<stdio.h>
int main(){
    int n,temp,remainder,quotent;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&temp);
        quotent=temp;
        do{
            remainder=quotent%10;
            printf("%d ",remainder);
            quotent=quotent/10;
            
        }while(quotent!=0);
        printf("\n");
    }
    
    return 0;
}
/*Given a number N. Print the digits of that number from right to left separated by space.

Input
First line contains a number T (1 ≤ T ≤ 10) number of test cases.

Next T lines will contain a number N (0 ≤ N ≤ 10^9)

Output
For each test case print a single line contains the digits of the number separated by space.*/