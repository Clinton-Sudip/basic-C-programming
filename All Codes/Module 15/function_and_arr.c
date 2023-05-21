#include<stdio.h>
int fun(int arr[], int n){ // Read all the lines that are commemented by commenting out size of the array. 
    int size= sizeof(arr)/sizeof(int);
    printf("Size of array(fun function): %d\n",size); // Why 1? Because, we have only passed the address of first index of the array
    // Why only first index? --> because by adding 1 (*arr+1), other elements can be accessed
    // When to Stop? --> Array will be accessed till it's last element. 
    // Verdict: To identify which is the last element we also have to pass the size of the array.
    // Now remove the comment sign from the size of the array 'int n'.
    for (int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}
//int fun(int* ar, int n){} --> also can be written like this.
int main(){
    // Can't return array from function.
    int arr[]= {10, 20, 30, 40, 50};
    int size= sizeof(arr)/sizeof(int);
    printf("Size of array(main function): %d\n",size);
    fun(arr,5);
    return 0;
}