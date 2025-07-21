#include <iostream>


// Define a namespace
namespace Banking {
	void display(){
		std :: cout << "Banking system Display " << std :: endl;	// using std as it is not initialized above
	}
}
// Another namespace
namespace Shopping{
void display(){
	std :: cout << "Shopping cart display " << std :: endl;			// using std as it is not initialized above
	}
}

int main(){
// Calling functions using namespaces
	Banking :: display();	// Call's Banking display
	Shopping :: display();	// Call's Shopping display
	return 0;
}
