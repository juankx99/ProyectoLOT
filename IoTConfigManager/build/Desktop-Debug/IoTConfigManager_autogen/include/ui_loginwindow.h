/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *userLabel;
    QLineEdit *usernameLineEdit;
    QLabel *passLabel;
    QLineEdit *passwordLineEdit;
    QPushButton *loginButton;
    QPushButton *registerButton;
    QLabel *errorLabel;

    void setupUi(QDialog *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QString::fromUtf8("LoginWindow"));
        LoginWindow->resize(320, 200);
        verticalLayout = new QVBoxLayout(LoginWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        userLabel = new QLabel(LoginWindow);
        userLabel->setObjectName(QString::fromUtf8("userLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, userLabel);

        usernameLineEdit = new QLineEdit(LoginWindow);
        usernameLineEdit->setObjectName(QString::fromUtf8("usernameLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, usernameLineEdit);

        passLabel = new QLabel(LoginWindow);
        passLabel->setObjectName(QString::fromUtf8("passLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, passLabel);

        passwordLineEdit = new QLineEdit(LoginWindow);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, passwordLineEdit);


        verticalLayout->addLayout(formLayout);

        loginButton = new QPushButton(LoginWindow);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));

        verticalLayout->addWidget(loginButton);

        registerButton = new QPushButton(LoginWindow);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));

        verticalLayout->addWidget(registerButton);

        errorLabel = new QLabel(LoginWindow);
        errorLabel->setObjectName(QString::fromUtf8("errorLabel"));
        errorLabel->setAlignment(Qt::AlignCenter);
        errorLabel->setStyleSheet(QString::fromUtf8("color: red;"));
        errorLabel->setVisible(false);

        verticalLayout->addWidget(errorLabel);


        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QDialog *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "Iniciar Sesi\303\263n", nullptr));
        userLabel->setText(QCoreApplication::translate("LoginWindow", "Usuario:", nullptr));
        passLabel->setText(QCoreApplication::translate("LoginWindow", "Contrase\303\261a:", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginWindow", "Iniciar sesi\303\263n", nullptr));
        registerButton->setText(QCoreApplication::translate("LoginWindow", "Crear cuenta", nullptr));
        errorLabel->setText(QCoreApplication::translate("LoginWindow", "Usuario o contrase\303\261a incorrectos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
