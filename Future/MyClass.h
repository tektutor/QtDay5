#include <QDebug>
#include <QObject>

class MyClass : public QObject {
Q_OBJECT
public:
	void longRunningFunction();
};
