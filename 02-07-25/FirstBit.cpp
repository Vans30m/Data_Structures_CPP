#include <iostream>
using namespace std;

int getFirstBit(int n){
	if(n==0) return -1;
	int ans = 1;
	while(n % 2 == 0){   // checks least significant bit is zero
		n = n >> 1;		// if YES, increments ans
		ans++ ;			// continues, until least significant bit is 1
	}
	return ans;
}

int main(){
	int n;
	cout << "Take input number : " ;
	cin >> n;
	cout << getFirstBit(n) << endl ;
	
	return 0;
}
