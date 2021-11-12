#include <stdio.h>
int main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);	

	int arr[n];	
		
	for(int i=0;i<n;i++){	
		printf("nhap day chu so %d:",i);
		scanf("%d",&arr[i]);	
		for(int k=0;k<i+1;k++){
			for(int j=0;j<i-k;j++){
				if(arr[j]>arr[j+1]){
					int temp = arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
		}
		

	}
	for(int i=0;i<n;i++){	
		printf("%d ",arr[i]);}
}
