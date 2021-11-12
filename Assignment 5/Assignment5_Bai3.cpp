#include<stdio.h>
int main(){
	int a,b;
	printf("Nhap a:\n");
	scanf("%d",&a);
	printf("Nhap b:\n");
	scanf("%d",&b);

	for(int i=a;i>0;i--){
		if(a%i==0 && b%i==0){
			printf("UCLN cua %d va %d la: %d",a,b,i);
			break;
		}
	}
}
	


