#include <iostream>

using namespace std;

int getFirstBit(int n){
	if (n==0) return -1;
	int ans = 0;
	while(n %2 != 1){
		n = n>>1;
		ans++ ;
	}
	return ans;
}

int main(){
	
	int n = 7;
	cout << getFirstBit(n) << endl ;
	
	return 0;
}
