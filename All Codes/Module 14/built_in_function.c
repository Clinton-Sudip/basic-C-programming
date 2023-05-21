#include<stdio.h>
#include<math.h> //needed to show all the built-in funcitons in this file
#include<stdlib.h> //for 'abs' function.
int main(){
    // double x;
    // scanf("%lf",&x);
    // //int output=ceil(x);    
    // //int output=floor(x);
    // int output=round(x);
    // printf("%d\n",output);
    int y;
    scanf("%d", &y);
    double ans = sqrt(y);
    printf("%lf\n", ans); // if ans is of 'int' type then value will be integer 
    float a = 10.1, b = 2.1;
    float power= pow(a, b); // always better to work 'pow' function with double or float
    printf("%.2f\n", power);
    int c = 10, d = -20, substract;
    substract = d - c;
    int abs_ans = abs(substract);
    printf("%d", abs_ans);
    return 0;
}