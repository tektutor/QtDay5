#include <QXmlStreamReader>
#include <QXmlStreamWriter>
#include <QObject>

class Parser : public QObject {
Q_OBJECT
private:
	QXmlStreamReader reader;
	QxmlStreamWriter writer;
public:
	Parser();
	ReadXml();
	WriteXml();
};
