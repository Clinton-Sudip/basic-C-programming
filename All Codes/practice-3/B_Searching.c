 #include<stdio.h>
 #include<math.h>
 int main(){
    int size=pow(10,5);
    int arr[size],N,values,find,flag=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&values);
        arr[i]=values;
    }
    scanf("%d",&find);
    for(int i=0;i<N;i++){
        if(arr[i]==find){
            printf("%d",i);
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("-1");
    }
     return 0;
 }
 /*Given a number N and an array A of N numbers. Determine if the number X exists in array A or not and print its position (0-index).

Note: X may be found once or more than once and may not be found.

Input
First line contains a number N (1 ≤ N ≤ 10^5) number of elements.

Second line contains N numbers (0 ≤ Ai ≤ 10^9).

Third line contains a number X (0 ≤ X ≤ 10^9).

Output
Print the position of X in the first time you find it. If it doesn't exist print -1.*/