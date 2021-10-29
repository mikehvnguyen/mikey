#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c; 
	printf("nhap a =");
	scanf("%d",&a);
	
	printf("nhap b =");
	scanf("%d",&b);
	
	printf("nhap c =");
	scanf("%d",&c);
	
	while(a+b<=c || a+c<=b || b+c<=a){
		printf("nhap a =");
		scanf("%d",&a);
	
		printf("nhap b =");
		scanf("%d",&b);
	
		printf("nhap c =");
		scanf("%d",&c);	
		}
			int C=a+b+c;
			float P= (float)C/2;
			float S=sqrt(P*(P-a)*(P-b)*(P-c));
			printf("Chu vi: %d\n",C);
			printf("Dien tich: %f\n",S);
}
