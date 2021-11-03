#include <stdio.h>
int main(){
	int n;
	printf("nhap n:",n);
	scanf("%d",&n);
	
	int arr[n];
	int i = 0;
	for(;i<n;i++){
		printf("nhap day chu so:",i);
		scanf("%d",&arr[i]);
	}

	for(i= n-1;i>0;i--){
		if(arr[i]%2!=0){
		printf("So le cuoi cung cua mang la: %d",arr[i]);break;
		}
	}
}
