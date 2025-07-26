// #include <iostream>
// #include <string>
// using namespace std;

// bool login(string name, string password){
// 	cout << "Input username : ";
// 	string naam;
// 	cin >> naam;

// 	for(int i=0;i<3;i++){			
// 		cout << "Input password : ";
// 		string in;
// 		cin >> in;
		
// 		if(password == in && name == naam){
// 			cout << "True";
// 			break;
// 		}
// 		else {
// 			cout << "False" << endl;
// 		}
// 	}
// 	return 0;
// }

// int main(){
	
// 	login("RAM","ffff");
		
// }




#include <iostream>
using namespace std;

int gcd(int a , int b){
	if(b == 0){
		return a;
	}
	return gcd(a, a%b);
}

int lcm(int a, int b){
	return a  * b/ gcd(a,b);
}

int main(){
	int a = 10;
	int b = 20;
	cout << gcd(a,b);
	cout << lcm(a,b);
}