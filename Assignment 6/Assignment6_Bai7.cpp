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
	
	int total=0, max=0;
	for(;i<n;i++){
		if(arr[i]>0){
			total = total + arr[i];
			}
		}
	if(total>max){
		max = total;
		}		
	printf("chuoi duong co tong lon nhat: %d", max);
}
	
