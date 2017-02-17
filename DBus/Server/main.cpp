#include <QCoreApplication>
#include <QDBusConnection>
#include "Chat.h"
#include "ChatAdaptor.h"

int main ( int argc, char **argv ) {

	QCoreApplication theApp (argc, argv);

	Chat chat;
	ChatAdaptor chatAdaptor(&chat);

	QDBusConnection dbus = QDBusConnection::sessionBus();
	dbus.registerObject( "/chat", &chat );
	dbus.registerService( "org.tektutor.chat" );
	
	return theApp.exec();

}
