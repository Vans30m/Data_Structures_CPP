#include <iostream>
using namespace std;

void setName(string name){
	this -> name = name;
}

void setMail(string email){
	this -> email = email;
}

void setMobile(string mobile){
	this -> mobile = mobile;
}

string getName(){
	return name;
}
string getMail(){
	return email;
}
string getMobile(){
	return mobile;
}

int main(){
	setName("Hi");
	setMail("Hello");
	setMobile("45121");
}
