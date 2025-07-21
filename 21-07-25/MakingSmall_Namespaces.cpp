#include <iostream>

namespace ReserveBankOfIndia{
	void rules(){
		std :: cout << "Follow guidelines!" << std :: endl;
	}
}

namespace RBI = ReserveBankOfIndia; 	// this is known as Namespace Aliasing

int main(){
	RBI :: rules();
}
