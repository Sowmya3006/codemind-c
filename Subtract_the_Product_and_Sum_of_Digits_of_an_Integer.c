#include<stdio.h>
int main(){
    int n,s=0,m=1,r;
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        s+=r;
        m*=r;
        n=n/10;
    }
    printf("%d",m-s);
}