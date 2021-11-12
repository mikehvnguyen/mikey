#include <stdio.h>
#include <math.h>
int main(){
	int N; 
	float L,G;
	printf("Tien goc:");
	scanf("%f",&G);
	printf("Lai suat:");
	scanf("%f",&L);	
	printf("So nam:");
	scanf("%d",&N);	
	
	if(G<=0){
		float T = 0;
		printf("Tong tien: %f",&T);
	}else{if(L <= 0){
			float T = 0;
			printf("Tong tien: %f",&T);
		}else{if(N <= 0){
				float T = 0;
				printf("Tong tien: %f",&T);
			}else{
				float T;
				T = G*pow((1+L),N);				
				printf("Tong tien nhan duoc: %f",T);
				}
			}			
		}
	}
	
	


