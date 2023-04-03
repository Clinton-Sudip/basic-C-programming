#include <stdio.h>
    int main()
    {
        int x = 5;
        if (x){
            printf("I am an exception\n");
        }
        if (x < 10) {
            printf("hello ");
        }
        if (x == 5) {
            printf("hi");
        }
        else {
            printf("no");
        }
    }