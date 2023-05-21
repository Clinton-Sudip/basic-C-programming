#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    // proof that 'arr' is a pointer. (arr --> this name is a pointer itself)
    printf("Address of 0th index of arr: %p\n", &arr[0]);
    printf("Address of arr: %p\n", arr); // gives same address of arr[0]. Cause 'arr' stores the address of first index of the array.
    printf("Value of 0th index of the arr: %d\n", arr[0]);
    printf("Value of arr: %d\n", *arr); // gives the value of 0th index.
    // Verdict: 'arr' is a pointer. who keeps the address of the 0th index.
    // How to find the other elements of the array: 
    printf("Address of 1st element: %p\n", arr+1); // moves 4 byte ahead
    printf("Value of 1st element: %d", *(arr+1)); // arr[1] --> *(arr + 1) --> *(1 + arr) --> 1[arr], they are all the same.
    
    return 0;
}