#include <iostream>
using namespace std;

void SumAB(int a, int b){
	cout << "Input first number : ";
	cin >> a;
	cout << "Input second number : ";
	cin >> b;
	int sum = a+b;
	cout << "Sum is : " << sum;
}

int main(){
	SumAB(4,5);
}
