#include "MyClass.h"

void MyClass::longRunningFunction() {
	for(int i=0; i<32000; ++i) {
		qDebug() << i;
	}
}
