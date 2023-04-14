#include<stdio.h>
int main(){
    int size,i,N;
    scanf("%d %d",&size,&N); // size is array size and N is number of input in that array
    int arr[size], initialize_arr[10]={10,2}; //fills with 0 automatically & variable size arrays can't be initialized
    for(i=0;i<10;i++){
        printf("%d ",initialize_arr[i]);
    }
    printf("\n");
    for(i=0;i<N;i++){ // when N>=size, only prints till the value of size (try: 5,10)
        arr[i]=10;
    }
    for(i=0;i<size;i++){ // when size>N, garbage value prints (try: 10,5)
        printf("%d ",arr[i]);
    }
    return 0;
}