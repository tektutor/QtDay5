#include "MyDlg.h"

MyDlg::MyDlg() {
	
	pAddressBar = new QLineEdit;
	pBrowseButton = new QPushButton("Browse"); 

	pAddressBarLayout = new QHBoxLayout;
	pAddressBarLayout->addWidget ( pAddressBar );
	pAddressBarLayout->addWidget ( pBrowseButton );

	pWebView = new QWebView;
	pMainLayout = new QVBoxLayout;

	pMainLayout->addWidget ( pAddressBarLayout );
	pMainLayout->addWidget ( pWebView );

	setLayout ( pMainLayout );

	connect (
		pBrowseButton,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onBrowseButtonClicked() )
	);	
}

void MyDlg::onBrowseButtonClicked() {
	QString url = pAddressBar->text();
	pWebView->load( url );
}
