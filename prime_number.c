#include<stdio.h>
int main(){
    int n,c=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            c+=1;
        }
    }
    if(c==2)
        printf("prime");
    else
        printf("not a prime");
    
}