#include "Calculator.h"

Calculator::Calculator() {
	pSignalMapper = new QSignalMapper;

	pLineEdit = new QLineEdit;
	pLayout = new QGridLayout;

	pLayout->addWidget ( pLineEdit, 0, 0, 1, 4);

	QPushButton *pBttn = NULL;
	QString caption;
	int buttonIndex = 0;
	for (int row=1; row<5; ++row) {
		for (int col=0; col<3; ++col) {
			caption.setNum(buttonIndex);
			pBttn = new QPushButton(caption);	
			pSignalMapper->setMapping(pBttn,caption);
			connect(
				pBttn,
				SIGNAL(clicked()),
				pSignalMapper,
				SLOT(map())
			);	
			pLayout->addWidget(pBttn, row,col);
			if (9 == buttonIndex) { row=5; break; } 
			++buttonIndex;
		}
	}
	pBttn = new QPushButton(".");
	pLayout->addWidget(pBttn,4,1);
	pSignalMapper->setMapping ( pBttn, pBttn->text() );
	connect(
		pBttn,
		SIGNAL(clicked()),
		pSignalMapper,
		SLOT(map())
	);	

	pBttn = new QPushButton("=");
	pLayout->addWidget(pBttn,4,2);
	connect(
		pBttn,
		SIGNAL(clicked()),
		this,
		SLOT(onEqualButtonClicked())
	);	

	pBttn = new QPushButton("+");
	pLayout->addWidget(pBttn,1,3);
	connect(
		pBttn,
		SIGNAL(clicked()),
		this,
		SLOT(onAddButtonClicked())
	);	

	pBttn = new QPushButton("-");
	pLayout->addWidget(pBttn,2,3);
	connect(
		pBttn,
		SIGNAL(clicked()),
		this,
		SLOT(onSubtractButtonClicked())
	);	

	pBttn = new QPushButton("*");
	pLayout->addWidget(pBttn,3,3);
	connect(
		pBttn,
		SIGNAL(clicked()),
		this,
		SLOT(onMultiplyButtonClicked())
	);	

	pBttn = new QPushButton("/");
	pLayout->addWidget(pBttn,4,3);
	pSignalMapper->setMapping ( pBttn, pBttn->text() );
	connect(
		pBttn,
		SIGNAL(clicked()),
		this,
		SLOT(onDivideButtonClicked())
	);	

	connect(
		pSignalMapper,
		SIGNAL(mapped(QString)),
		this,
		SLOT(onButtonClicked(QString))
	);	
	setLayout ( pLayout );
}

void Calculator::onButtonClicked(QString caption) { 
	pLineEdit->setText ( pLineEdit->text().append(caption) ); 
}

void Calculator::onAddButtonClicked() { 
	firstNumber = pLineEdit->text().toDouble();
	mathOperator = '+';
	pLineEdit->setText("");
}

void Calculator::onSubtractButtonClicked() { 
	firstNumber = pLineEdit->text().toDouble();
	mathOperator = '-';
	pLineEdit->setText("");
}
void Calculator::onMultiplyButtonClicked() { 
	firstNumber = pLineEdit->text().toDouble();
	mathOperator = '*';
	pLineEdit->setText("");
}

void Calculator::onDivideButtonClicked() { 
	firstNumber = pLineEdit->text().toDouble();
	mathOperator = '/';
	pLineEdit->setText("");
}

void Calculator::onEqualButtonClicked() { 
	secondNumber = pLineEdit->text().toDouble();
	QString strResult;

	switch ( mathOperator ) {
		case '+': {
			result = firstNumber + secondNumber;
			strResult.setNum(result);
			pLineEdit->setText (strResult); 
		}
		break;
		case '-': {
			result = firstNumber - secondNumber;
			strResult.setNum(result);
			pLineEdit->setText (strResult); 
		}
		break;
		case '*': {
			result = firstNumber * secondNumber;
			strResult.setNum(result);
			pLineEdit->setText (strResult); 
		}
		break;
		case '/': {
			result = firstNumber / secondNumber;
			strResult.setNum(result);
			pLineEdit->setText (strResult); 
		}
		break;
	}
}
