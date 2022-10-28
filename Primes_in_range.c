#include<stdio.h>
bool isprime(int n){
    if(n<2) return false;
    
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int n,m,c=0;
    scanf("%d %d",&n,&m);
    for(int i=n;i<=m;i++){
        if(isprime(i))
        c++;
    }
    printf("%d",c);
}