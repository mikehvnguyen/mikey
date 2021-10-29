#include <stdio.h>

int main(){
     int n;
     printf("Nhap n: ");
     scanf("%d",&n);
     int f,f1,f2;
     f=f1=f2=1;
     int i=3;
     while(i<=n){
        f=f1+f2;
        f1=f2;
        f2=f;
        i++;
     }
     printf("F(%d) = %d",n,f);
}
