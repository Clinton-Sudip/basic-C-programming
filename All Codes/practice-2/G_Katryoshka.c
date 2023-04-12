#include<stdio.h>
int main(){
    long long int n,m,k;
    long long int count=0;
    scanf("%lld %lld %lld",&n,&m,&k);
    if((m<=k)&&(m<=n)){
        count=m;
        n=n-m;
        k=k-m;
        if(n>0 && k>=(n/2)){
            if(n%2==0){
                count=count+(n/2);
            }
            else{
                count=count+((n-1)/2);
            }
            
        }
        else if(k<(n/2)){
            count=count + k;
        }
    }
    else if((n<=m) && (n<=k)){
        count=n;
    }
    else if( (k<m) && (k<n) ){
        count=k;
    }
    /*while(k>0 && n>0){
        if(m>0){
            m--;
            n--;
            k--;
            count++;
        }
        else if(n>=2){
            n=n-2;
            k--;
            count++;
            if(n<2){
                break;
            }
        }
        
    }*/
    /*while(m>0 && n>0 && k>0){
        n--;
        k--;
        m--;
        count++;
    }
    while(k>0 && n>=2){
        n=n-2;
        k--;
        count++;
        if(n<2){
            break;
        }
        
    }*/
    printf("%lld",count);
    return 0;
}
/*The Egyptian football team will be in Russia for the World Cup. Of course, they all would like to buy souvenirs for their families. Luckily, they met the king of souvenirs Matryoshka who is famous for his masterpiece Katryoshka. He makes it using different wooden pieces: eyes, mouths and bodies. He can form a nice Katryoshka using one of the following combinations:

Two eyes and one body.
Two eyes, one mouth, and one body.
One eye, one mouth, and one body.
If the king has n
 eyes, m
 mouths and k
 bodies, what is the largest number of Katryoshkas he can make?
Input
Only one line containing three numbers n
, m
 and k
 (0≤n,m,k≤10^18
) – the number of eyes, mouths and bodies respectively.

Output
Print the largest number of Katryoshkas he can make.*/