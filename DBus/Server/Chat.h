#include <QObject>
#include <QString>
#include <QDebug>
#include <QDBusConnection>

class Chat : public QObject {
Q_OBJECT
private:
	QDBusConnection *pDBus;
public:
	Chat();
	void sendMessage(QString);
Q_SIGNALS:
	void send(QString);
public Q_SLOTS:
	void receive(QString);
};
