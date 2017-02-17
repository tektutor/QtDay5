#include <iostream>
using namespace std;

#include "Base.h"

class Derived : public Base {
private:
	int *ptr;
public:
	Derived() {
		cout << "Derived constructor ..."<<endl;
		ptr = new int();
		cout << "Sizeof Derived object is " << sizeof(Derived) << endl;
		cout << "Sizeof Base object is " << sizeof(Base) << endl;
	}
	~Derived() {
		cout << "Derived destructor ..."<<endl;
		delete ptr;
	}
	void derivedFunction() {
		cout << "Derived specific function" << endl;
	}
};
