#include <iostream>
using namespace std;

int main(){
	int n;cout << "Take number of inputs : ";cin >> n;
	
	int arr[n];
	for(int i=1;i<=n;i++){
		cout << "Number " << i << " is : ";
		cin >> arr[i];
	}
	
	int MissNum = 0;
	for(int i=1;i<=n;i++) MissNum ^= i;		// Missing number is XOR with numbers till n
	for(int i=1;i<=n-1;i++) MissNum ^= arr[i];		// Missing number is XOR with inputed numbers 
	
	cout << "The Missing Number is : " << MissNum;
}
//
//XOR Operator :
//
//n^n = m^m = 0 ;
//
//n^m = m^n = 1 ;
//
//0^n = n and 0^m = m
