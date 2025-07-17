#include <iostream>
#include <String>
using namespace std;

class Product {
	
	protected :
	int id;
	
	
	public :
	string name;
	
	public :
		void show(){
			cout << name;
		}
	float value;
};

int main(){
	Product p1;

//	cin >> p1.id;			/* it will not print as it is private */
//	cout << p1.id;

	cin >> p1.name >> p1.value;
	cout << p1.name << endl;
	cout << p1.value;
}
