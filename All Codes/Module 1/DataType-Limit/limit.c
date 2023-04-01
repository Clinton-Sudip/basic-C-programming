#include<stdio.h>
int main(){
    int a=999999999; // (-)ve 10^9 to (+)ve 10^9
    // integer data type can take up to the minimum value consisting of 10 digits
    long long int b=100000000000000; // (-)ve 10^18 to (+)ve 10^18
    // long integer data type can take up to the minimum value consisting of 20 digits
    float c=2.56234523; // Can give correct value for 6 to 7 postions, not more than that
    double d=2.23492345894235972; // Can give correct value for 15 to 17 positions including integer portion, not more than that
    printf("%d\n %lld\n %f\n %lf\n %0.15f",a,b,c,d,d);
    return 0;
}

// int --> 4 bytes, (2^32-1) is the limit, ranging from negative to positive
// long long int --> 8 bytes, (2^64 -1) is the limit, ranging from negative to positive

