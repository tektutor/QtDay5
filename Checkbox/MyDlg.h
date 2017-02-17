#include <QDialog>
#include <QCheckBox>
#include <QRadioButton>
#include <QGroupBox>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QDebug>

class MyDlg : public QDialog {
Q_OBJECT
private:
	QRadioButton *pRadioJava, *pRadioC, *pRadioCpp;
	QCheckBox *pNodeJS, *pAngularJS, *pQML;
	QGroupBox *pGroupOne, *pGroupTwo;

	QHBoxLayout *pLayout;	
public:
	MyDlg();
private Q_SLOTS:
	void onRadioJavaClicked(bool);
	void onNodeJSClicked(int);
};
