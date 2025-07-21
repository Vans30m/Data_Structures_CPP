#include <iostream>

using namespace std;


int fibbo(int n){
	int a=0,b=1;
	
	if(n==0) cout << a;
	
	cout << a << " " << b << " ";
	
	for(int i=2;i<=n;i++){
		int temp =  b;
		b+=a;
		a=temp;
		cout << b << " ";
	}
}

int main(){
	int n=4;
	fibbo(n);
	return 0;
}
