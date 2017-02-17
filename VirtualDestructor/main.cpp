#include "Derived.h"

int main ( ) {
	
	cout << endl << "Scenario 1, Base Derived is not virtual" << endl;

	Base *ptrBase = new Base;
	delete ptrBase;

	cout << endl << "Scenario 2, Base Derived is not virtual" << endl;
	
	Derived *ptrDerived = new Derived;
	delete ptrDerived;

	cout << endl << "Scenario 3, Base Derived is not virtual" << endl;
	Base *ptrBase2 = new Derived;	

	Derived *ptrDerived2 = dynamic_cast<Derived*>(ptrBase2);
	if ( NULL != ptrDerived2) 
		ptrDerived2->derivedFunction();

	delete ptrBase2;

	return 0;
}
