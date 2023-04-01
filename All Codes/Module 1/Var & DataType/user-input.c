#include<stdio.h>
int main(){
    int a,b;
    char p;
    float f;
    scanf("%d %d", &a, &b);
    printf("%d %d\n", a,b);
    //taking float as input
    scanf("%f",&f);
    printf("%0.3f\n",f);
    //taking percentage as input
    scanf("%d%c %d%c",&a,&p,&b,&p); //way 1
    printf("%d%% %d%%\n",a,b);
    //way 2
    scanf("%d%% %d%%",&a,&b);
    printf("%d%% %d%%",a,b);
    return 0;
}

// &a means address of a.