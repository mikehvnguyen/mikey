#include <stdio.h>
#include <math.h>
int main(){
	int x; 
	printf("nhap x =");
	scanf("%d",&x);
	
	int y;
	y=0;
	y=y*10+x%10;
	x=x/10;
	
	if(x!=0){
		y=y*10+x%10;
		x=x/10;
		if(x!=0){
			y=y*10+x%10;
			x=x/10;
			if(x!=0){
				y=y*10+x%10;
				x=x/10;
				printf("so nghich dao: %d",y);
			}else{printf("so nghich dao: %d",y);}
		}else{printf("so nghich dao: %d",y);}
	}else{printf("so nghich dao: %d",y);}
}

