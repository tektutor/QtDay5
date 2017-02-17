#include "Chat.h"

Chat::Chat() {
	
	connect (
		this,
		SIGNAL( send(QString) ),
		this,
		SLOT ( receive(QString) )
	);	
}

void Chat::sendMessage(QString message) {
	emit send(message);
}

void Chat::receive(QString message) {
	qDebug() << message ;
}
