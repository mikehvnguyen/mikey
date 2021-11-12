#include <stdio.h>
int main() {
	int N;
	printf("Nhap so so le muon cong tong >0: ");
	scanf("%d",&N);
	
	int i=1, Sum = 0, count = 1;
	while (count<=N){
		if(i%2>0){
			count++;
			Sum=Sum+i;
		}
		i++;
	}
	printf("Tong la: %d",Sum);
	
	}
