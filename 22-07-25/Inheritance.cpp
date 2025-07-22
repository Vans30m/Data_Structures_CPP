#include <iostream>
using namespace std;

class FirstBaseClass{
	int a,b;
	public : 
	FirstBaseClass(int a, int b){
		this -> a=a;
		this -> b=b;
	}
	void FirstBaseClassInfo(){
		cout << a << b << endl;
	}
};

class SecondBaseClass : public FirstBaseClass{
	int c,d;
	public :
		SecondBaseClass(int a, int b, int c, int d) : FirstBaseClass(a,b){
		this -> c=c;
		this -> d=d;
		}
		void SecondBaseClassInfo(){
			FirstBaseClassInfo();
			cout << c << endl;
		}
};

class FirstDerivedClass : public SecondBaseClass{
	int i,k;
	FirstDerivedClass(int a,int b,int c,int d, int i,int k) : SecondBaseClass(a,b,c,d),i(i),k(k){
		this -> i=i;
		this -> k=k;
	}
	void displayInfo(){
		SecondBaseClassInfo();
		cout << i << endl;
		cout << k << endl;
	}
};
