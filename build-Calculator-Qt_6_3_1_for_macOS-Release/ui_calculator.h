/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *Button4;
    QPushButton *Add;
    QPushButton *MemSub;
    QPushButton *Clear;
    QPushButton *MemAdd;
    QPushButton *Button7;
    QPushButton *Divide;
    QPushButton *Subtract;
    QPushButton *Button6;
    QPushButton *Button2;
    QPushButton *ChangeSign;
    QPushButton *Equals;
    QPushButton *Multiply;
    QPushButton *Button0;
    QPushButton *Button3;
    QPushButton *Button5;
    QPushButton *Button9;
    QPushButton *Button8;
    QPushButton *Button1;
    QPushButton *MemGet;
    QLineEdit *Display;
    QMenuBar *menubar;
    QMenu *menuHello;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(570, 297);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Calculator->sizePolicy().hasHeightForWidth());
        Calculator->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        Button4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #C0C0C0; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button4, 3, 0, 1, 1);

        Add = new QPushButton(centralwidget);
        Add->setObjectName(QString::fromUtf8("Add"));
        Add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #ffa500; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Add, 4, 3, 1, 1);

        MemSub = new QPushButton(centralwidget);
        MemSub->setObjectName(QString::fromUtf8("MemSub"));
        MemSub->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #ffa500; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(MemSub, 3, 4, 1, 1);

        Clear = new QPushButton(centralwidget);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        Clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #C0C0C0; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Clear, 5, 0, 1, 1);

        MemAdd = new QPushButton(centralwidget);
        MemAdd->setObjectName(QString::fromUtf8("MemAdd"));
        MemAdd->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #ffa500; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(MemAdd, 2, 4, 1, 1);

        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        Button7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #C0C0C0; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button7, 2, 0, 1, 1);

        Divide = new QPushButton(centralwidget);
        Divide->setObjectName(QString::fromUtf8("Divide"));
        Divide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #ffa500; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Divide, 2, 3, 1, 1);

        Subtract = new QPushButton(centralwidget);
        Subtract->setObjectName(QString::fromUtf8("Subtract"));
        Subtract->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #ffa500; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Subtract, 5, 3, 1, 1);

        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        Button6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #C0C0C0; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button6, 3, 2, 1, 1);

        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        Button2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #C0C0C0; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button2, 4, 1, 1, 1);

        ChangeSign = new QPushButton(centralwidget);
        ChangeSign->setObjectName(QString::fromUtf8("ChangeSign"));
        ChangeSign->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #C0C0C0; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ChangeSign, 5, 2, 1, 1);

        Equals = new QPushButton(centralwidget);
        Equals->setObjectName(QString::fromUtf8("Equals"));
        Equals->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #ffa500; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Equals, 5, 4, 1, 1);

        Multiply = new QPushButton(centralwidget);
        Multiply->setObjectName(QString::fromUtf8("Multiply"));
        Multiply->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #ffa500; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Multiply, 3, 3, 1, 1);

        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        Button0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #C0C0C0; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button0, 5, 1, 1, 1);

        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        Button3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #C0C0C0; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button3, 4, 2, 1, 1);

        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        Button5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #C0C0C0; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button5, 3, 1, 1, 1);

        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        Button9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #C0C0C0; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button9, 2, 2, 1, 1);

        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        Button8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #C0C0C0; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button8, 2, 1, 1, 1);

        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        Button1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #C0C0C0; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button1, 4, 0, 1, 1);

        MemGet = new QPushButton(centralwidget);
        MemGet->setObjectName(QString::fromUtf8("MemGet"));
        MemGet->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #ffa500; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(MemGet, 4, 4, 1, 1);

        Display = new QLineEdit(centralwidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(18);
        font.setBold(true);
        Display->setFont(font);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: gray;\n"
"	border: 1px solid gray;\n"
"	color: #ffffff;\n"
"}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 1, 0, 1, 5);

        Calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 570, 24));
        menuHello = new QMenu(menubar);
        menuHello->setObjectName(QString::fromUtf8("menuHello"));
        Calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Calculator->setStatusBar(statusbar);

        menubar->addAction(menuHello->menuAction());

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        Button4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        Add->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        MemSub->setText(QCoreApplication::translate("Calculator", "M-", nullptr));
        Clear->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
        MemAdd->setText(QCoreApplication::translate("Calculator", "M+", nullptr));
        Button7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        Divide->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        Subtract->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        Button6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        Button2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        ChangeSign->setText(QCoreApplication::translate("Calculator", "+/-", nullptr));
        Equals->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        Multiply->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        Button0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        Button3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        Button5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        Button9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        Button8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        Button1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        MemGet->setText(QCoreApplication::translate("Calculator", "M", nullptr));
        Display->setText(QCoreApplication::translate("Calculator", "0.0", nullptr));
        menuHello->setTitle(QCoreApplication::translate("Calculator", "Hello", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
