#include<stdio.h>
int main(){
    int n,r,rev=0,b;
    scanf("%d",&n);
    b=n;
    while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n/=10;
        
    }
    if(b==rev){
        printf("True");
    }
    else{
        printf("False");
    }
}