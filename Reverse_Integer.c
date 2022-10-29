#include<stdio.h>
#include<stdlib.h>
int main(){
    int c,r,s=0;
    scanf("%d",&c);
    int n=abs(c);
    while (n!=0){
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if (c>0)
    printf("%d",s);
    else
    printf("%d",-s);
    
}