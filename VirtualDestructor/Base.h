#include <iostream>
using namespace std;

class Base {
public:
	Base() {
		cout << "Base constructor ..."<<endl;
	}
	virtual ~Base() {
		cout << "Base destructor ..."<<endl;
	}
};
