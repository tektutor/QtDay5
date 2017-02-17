#include <QDialog>
#include <QPushButton>
#include <QLineEdit>
#include <QGridLayout>
#include <QSignalMapper>

class Calculator : public QDialog {
Q_OBJECT
private:
	QGridLayout *pLayout;
	QLineEdit *pLineEdit;
	QSignalMapper *pSignalMapper;

	double firstNumber, secondNumber, result;
	char mathOperator;
private Q_SLOTS:
	void onButtonClicked(QString);
	void onAddButtonClicked();
	void onSubtractButtonClicked();
	void onMultiplyButtonClicked();
	void onEqualButtonClicked(); 
	void onDivideButtonClicked();
public:
	Calculator();
};
