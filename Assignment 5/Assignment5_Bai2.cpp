#include<stdio.h>
int main(){
	int n,s=0;
	printf("Nhap so n:\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int d;
		d=n%i;
		if(d!=0)
		s+=i;
	}
	printf("Tong cua cac Uoc cua %d la:%d\n",n,s);
}
