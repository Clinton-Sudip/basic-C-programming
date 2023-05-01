#include<stdio.h>
int main(){
    int n,value,s,k,v,p;
    scanf("%d",&n);
    value=(2*n)-1;
    s=0;
    k=value;
    p=0;
    v=n;
    for(int i=1;i<=value;i++){
        for(int j=1;j<=s;j++){
            printf("%d ",n-(j-1));    
        }
        for(int j=1;j<=k;j++){
            printf("%d ",v);
        }
        for(int j=1;j<=p;j++){
            printf("%d ",n-p+j);
        }
        if(i<n){
            s++;
            k=k-2;
            v--;
            p++;
        }
        else{
            s--;
            k=k+2;
            v++;
            p--;
        }
        
        printf("\n");
    }
    return 0;
}