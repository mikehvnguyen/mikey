#include <stdio.h>
int main() {
	int N;
	printf("Nhap so nguyen N:");
	scanf("%d",&N);
	float sum = 0; 
	int i =1;
	while(i<=N){
		sum= sum+ (float)1/i;
		++i;
	}
	printf("Tong bang: %f",sum);
}
