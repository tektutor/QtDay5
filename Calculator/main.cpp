#include <QApplication>
#include "Calculator.h"

int main ( int argc, char **argv ) {

	QApplication theApp (argc, argv);

	Calculator calc;
	calc.show();

	return theApp.exec();

}
