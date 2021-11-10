

bool KiemTraSNT(int n){
	if (n<2) return false;
	if (n<4) return true;
	for (int i=0;i<n;i++){
		if (n%i==0) return false;
	} return true;
}	

bool SNTtieptheo (int n){
	if(n<=1) return 2;
	int temp = n;
	bool found = false;
	while(!found){
		temp++;
		if(KiemTraSNT(temp)) found = true;
	} return temp;	
}

bool SumN(int n){
	int Sum=0;
	while(n!=0){
		Sum = Sum + n%10;
		n=n/10;
	}return Sum;
}

int ChuViTamGiac (int a,int b, int c){
	if (a<b+c && b< a+c && c <a+b){
		int P = a + b + c;
		return P;
	}
	return 0;
}

float DienTichTamGiac (int a, int h){
	float S = (float) (a*h)/2;
	return S;
}

bool UCLN(int a,int b){
	while (a*b!=0){
		if (a>b) {a = a%b;
			}else { b = b%a;
		}
	}return a+b;
}

bool BCNN(int a,int b){
	int bc = a*b;
	while (a*b!=0){
		if (a>b) {a = a%b;
			}else { b = b%a;
		}
	}return bc/(a+b);
}

