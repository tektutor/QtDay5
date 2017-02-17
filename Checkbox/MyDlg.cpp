#include "MyDlg.h"

MyDlg::MyDlg() {
	pRadioJava = new QRadioButton("Java");
	pRadioC = new QRadioButton("C");
	pRadioCpp = new QRadioButton("C++");

	pNodeJS = new QCheckBox("NodeJS");
	pAngularJS = new QCheckBox("AngularJS");
	pQML = new QCheckBox("QML");

	QVBoxLayout *pFirstLayout = new QVBoxLayout; 	

	pFirstLayout->addWidget ( pRadioJava );
	pFirstLayout->addWidget ( pRadioC );
	pFirstLayout->addWidget ( pRadioCpp );

	pGroupOne = new QGroupBox("Programming Languages");
	pGroupOne->setLayout ( pFirstLayout );

	QVBoxLayout *pSecondLayout = new QVBoxLayout;

	pSecondLayout->addWidget ( pNodeJS );
	pSecondLayout->addWidget ( pAngularJS );
	pSecondLayout->addWidget ( pQML );

	pGroupTwo = new QGroupBox("Scripting Languages");
	pGroupTwo->setLayout ( pSecondLayout );

	pLayout = new QHBoxLayout;

	pLayout->addWidget ( pGroupOne );
	pLayout->addWidget ( pGroupTwo );

	setLayout ( pLayout );

	connect (
		pRadioJava,
		SIGNAL ( clicked(bool) ),
		this,
		SLOT ( onRadioJavaClicked(bool) )
	);
	connect (
		pNodeJS,
		SIGNAL ( stateChanged(int) ),
		this,
		SLOT ( onNodeJSClicked(int) )
	);
}

void MyDlg::onRadioJavaClicked(bool state) {
	QMessageBox::information( this, "Group One Choice", "Java selected" );
}

void MyDlg::onNodeJSClicked(int state) {
	qDebug() << state ;
	if ( state)
		QMessageBox::information( this, "Group Two Choice", "NodeJS selected" );
	else
		QMessageBox::information( this, "Group Two Choice", "NodeJS unselected" );
}

