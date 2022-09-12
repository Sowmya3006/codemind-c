#include<stdio.h>
int main(){
    int n,m,c=0;
    scanf("%d %d",&n,&m);
    for(int i=1;i<n;i++){
        if(n%i==0){
        c+=i;
        }
    }
    if (m==c){
        printf("Amicable");
    }
    else{
        printf("Not Amicable");
    }
    
}