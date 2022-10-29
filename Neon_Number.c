#include<stdio.h>
int main(){
    int a,r,s=0;
    scanf("%d",&a);
    int n=a*a;
    while(n!=0){
        r=n%10;
        s=s+r;
        n=n/10;
    }
    if(a==s)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}