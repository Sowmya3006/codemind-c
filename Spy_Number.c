#include<stdio.h>
int main(){
    int n,r,s=0,m=1;
    scanf("%d",&n);
    
    while(n!=0){
        r=n%10;
        m*=r;
        s+=r;
        n=n/10;
    }
    if(s==m)
    printf("Spy Number");
    else
    printf("Not Spy Number");
    
}