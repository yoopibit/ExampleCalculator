#include <QtGui>

#include <math.h>

#include "button.h"
#include "calculator.h"

Calculator::Calculator(QWidget *parent)
    : QWidget(parent)
{
    sumInMemory = 0.0;
    sumSoFar = 0.0;
    factorSoFar = 0.0;
    waitingForOperand = true;

    display = new QLineEdit("0");
    display->setReadOnly(true);
    display->setAlignment(Qt::AlignRight);
    display->setMaxLenght(15);

    QFont font = display->font();
    font.setPointSize(font.pointSize() + 8);
    display->setFont(font);

    for (int i = 0; i < NumDigitButtons; ++i) {
        digitButtons[i] = createButton(QString::number(i), SLOT(digitClicked()));
    }

    Button *pointButton = createButton(tr())
}
