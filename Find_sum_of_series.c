#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    double s=0.00,i;
    for(i=1;i<=n;i++){
        s+=1/i;
    }
    printf("%.2f",s);
}