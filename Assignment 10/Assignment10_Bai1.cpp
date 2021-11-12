#include<stdio.h>
#include<string.h>
int main(){
	char str[50];
	printf("nhap vao chuoi ky tu: \n");
	scanf("%s",str);
	int count=0;
	for(int i=0;i<strlen(str);i++){
		if(65<=str[i]&&90>=str[i])
		str[i]+=32;
		switch(str[i]){
			case 97:case 101:case 111:case 117:case 105: count++;break;
		}
		}
		int phuam=strlen(str)-count;
		printf("so phu am co trong chuoi ky tu la:%d\n",phuam);
		printf("so nguyen am co trong chuoi ky tu la:%d\n",count);
}
