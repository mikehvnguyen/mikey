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
	
	int count = 0;
    int max_list = 0;
    for (int i = 0; i < n; i++) {
        if(arr[i] > 0){
            count++;        
        }
        else{
        	if(count > max_list)
            {
            max_list = count;
            }
            count = 0;}
			}
    
	if(count > max_list)
            {
            max_list = count;
            }
        printf("so luong so duong lien tiep nhieu nhat: %d", max_list);
} 
