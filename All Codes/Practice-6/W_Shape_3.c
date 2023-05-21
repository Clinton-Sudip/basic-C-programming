#include<stdio.h>
int main(){
    int n,star,space;
    scanf("%d",&n);
    star=1;
    space=n-1;
    for(int i=1; i<=n*2; i++){
        for(int j=1; j<=space; j++){
            printf(" ");
        }
        for(int j=1; j<=star; j++){
            printf("*");
        }
        if(i<n){
            star = star + 2;
            space--;
        }
        else if(i>n){
            star = star - 2;
            space++;
        }
        printf("\n");
    }
    return 0;
}