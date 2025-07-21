#include <iostream>

namespace App{
	namespace Banking{
		void greet(){
			std :: cout << "Welcome to Banking App! " << std :: endl;
		}
	}
}

int main(){
	App :: Banking :: greet();
	
	return 0;
}
