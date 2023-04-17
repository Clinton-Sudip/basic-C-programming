#include<stdio.h>
int main(){
    int n1,n2,n3;
    scanf("%d %d",&n1,&n2);
    n3=n1+n2;
    int arr1[n1],arr2[n2],arr3[n3];
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    int j=0,i=0;
    while(i<n3){
        if(i<n1){
            arr3[i]=arr1[i];
            i++;
        }
        else{
            arr3[i]=arr2[j];
            i++;
            j++;
        }
    }
    /*for(int i=0;i<n3;i++){
        if(i<n1){
            arr3[i]=arr1[i];
        }
        else{
            arr3[i]=arr2[j];
            j++;
        }
        
    }*/
    for(int i=0;i<n3;i++){
        printf("%d ",arr3[i]);
    }

    return 0;
}