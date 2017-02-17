#include <QCoreApplication>
#include "ChatInterface.h"
using namespace local;

int main ( int argc, char **argv ) {

	QCoreApplication theApp (argc, argv);

	Chat *pChat = new Chat( "org.tektutor.chat", "/chat", QDBusConnection::sessionBus(), 0 );	

	pChat->receive("Hi from Client!!!");
	
	return theApp.exec();

}
