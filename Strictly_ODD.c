#include<stdio.h>
int main(){
    int n=0,l=0;
    scanf("%d",&n);
    int a[n];
    int f=0;
    for(int i=0;i<n;i++){
        scanf("%d",&l);
        if(l%2!=0){
            if(i%2==0){
                printf("False");
                f=1;
                break;
            }
        }
    }
    if(f==0)
        printf("True");
}