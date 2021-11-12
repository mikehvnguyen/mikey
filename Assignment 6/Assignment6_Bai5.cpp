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
	
	int min = arr[0];
	for(i=1;i<n;i++){
		if(arr[i]<min && arr[i]>0){
			min = arr[i];
		}
	}
	printf("So duong nho nhat: %d",min);
}
