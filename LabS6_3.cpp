#include <stdio.h>
int main(){
	int n;
	printf("nhap n:",n);
	scanf("%d",&n);
	
	int m;
	printf("nhap so can tim: ",m);
	scanf("%d",&m);	
	
	int arr[n];
	int i = 0;
	for(;i<n;i++){
		printf("nhap day chu so:",i);
		scanf("%d",&arr[i]);
	}

	for(i=0;i<n;i++){
		if(arr[i]==m){
		printf("Found: %d",m);
		}
	}
}
