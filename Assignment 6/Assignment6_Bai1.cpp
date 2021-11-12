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
	
	int aver = 0, count=0, sum = 0;
	for(i=0;i<n;i++){
		if(arr[i]%2!=0){
		count++;
		sum=sum+arr[i];
		aver=(float)sum/count;
		}
	}
	printf("TB Cong cac so le: %d",aver);
}
