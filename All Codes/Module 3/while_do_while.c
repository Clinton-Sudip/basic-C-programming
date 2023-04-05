#include<stdio.h>
int main(){
    int i=1;
    printf("Output of While loop: ");
    while(i <=5){ // while loop checks and then prints, if condition is not satisfied then nothing will be printed
        printf("%d",i); // process
        i++; // increment or decrement
    }
    printf("\nOutput of do_while loop: ");
    int j=100;
    do{ // first prints and then checks condition, minimum one condition would be printed
        printf("%d",j); //process
        j++; //increment or decrement
    }
    while(j<=5); //condition at last
    return 0; 
}