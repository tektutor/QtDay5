#include "MyDlg.h"

MyDlg::MyDlg() {
	MyClass obj1;
	QFuture<void> result1 = QtConcurrent::run
	( 
		&obj1,
		&MyClass::longRunningFunction 	  
	);
	MyClass obj2;
	QFuture<void> result2 = QtConcurrent::run
	( 
		&obj2,
		&MyClass::longRunningFunction 	  
	);
	
	//result.waitForFinished();
}
