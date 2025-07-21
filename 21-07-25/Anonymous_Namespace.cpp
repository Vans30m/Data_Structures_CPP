// Anonymous namespace is used to hide the details of a certain file.

#include <iostream>

using namespace std;

namespace {
	int secretcode = 12345;	// only available in this file
	void displaySecret(){
		cout << "Secret Code : " << secretcode << endl;
	}
}

int main(){
	displaySecret();
	return 0;
}
