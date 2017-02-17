#include <QDialog>
#include <QWebKitWidgets/QWebView>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>

class MyDlg : public QDialog {
Q_OBJECT
private:
	QWebView *pWebView;
	QLineEdit *pAddressBar;
	QPushButton *pBrowseButton;
	QVBoxLayout *pMainLayout;
	QHBoxLayout *pAddressBarLayout;
	
public:
	MyDlg();
private Q_SLOTS:
	void onBrowseButtonClicked();
};
