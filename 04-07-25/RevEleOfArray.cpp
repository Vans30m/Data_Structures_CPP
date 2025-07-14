#include <iostream>
using namespace std;

int main(){
	int arr[] = {3,8,-1,5,2,7};
	
	int size = sizeof(arr)/sizeof(int);
	
	int st = 0;
	int end = size-1;
	
	while(st < end){
		swap(arr[st], arr[end]);	// Swaps and then moves pointer towards the center from the start and the end
		st++;
		end--;
	}
	
	for(int i=0;i<size;i++){
		cout << arr[i] << " ";
	}
	
	return 0;
}
