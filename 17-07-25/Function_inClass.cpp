#include <bits/stdc++.h>

using namespace std;

class Product {
	
	int id = 123;
	public :
		void show(){
			cout << id;
		}
	
	protected:
		float value;
};

int main(){
	Product p1;
	p1.show();
	
}
