#include<iostream>
using namespace std;


class Const {
public:
	Const();
	Const(int x);
	~Const() ;
};


Const::Const() {
	cout << "Hello from Const" << endl;
}

Const::Const(int x) {
	cout << "xxxxxxxx" << endl;
}

Const::~Const() {
	cout << "this is the Destructor from Const class" << endl;
}