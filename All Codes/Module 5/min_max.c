#include<stdio.h>
int main(){
    long long int a,b,c,min,max;
    scanf("%lld %lld %lld",&a,&b,&c);
    if(a>=b && a>c){
        max=a;
    }
    else if(b>a && b>c){
        max=b;
    }
    else {
        max=c;
    }

    if(a<=b && a<c){
        min=a;
    }
    else if(b<c && b<a){
        min=b;
    }
    else {
        min=c;
    }
    printf("%lld %lld\n",min,max);
    return 0;
}
/*Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

Input
Only one line containing 3 numbers A, B and C ( - 10^5 ≤ A, B, C ≤ 10^5)

Output
Print the minimum number followed by a single space then print the maximum number.*/