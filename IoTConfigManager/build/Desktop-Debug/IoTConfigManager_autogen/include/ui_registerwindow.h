/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RegisterWindow
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *labelUsername;
    QLineEdit *lineEditUsername;
    QLabel *labelPassword;
    QLineEdit *lineEditPassword;
    QLabel *labelConfirm;
    QLineEdit *lineEditConfirm;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RegisterWindow)
    {
        if (RegisterWindow->objectName().isEmpty())
            RegisterWindow->setObjectName(QString::fromUtf8("RegisterWindow"));
        RegisterWindow->resize(360, 240);
        verticalLayout = new QVBoxLayout(RegisterWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        labelUsername = new QLabel(RegisterWindow);
        labelUsername->setObjectName(QString::fromUtf8("labelUsername"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelUsername);

        lineEditUsername = new QLineEdit(RegisterWindow);
        lineEditUsername->setObjectName(QString::fromUtf8("lineEditUsername"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditUsername);

        labelPassword = new QLabel(RegisterWindow);
        labelPassword->setObjectName(QString::fromUtf8("labelPassword"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelPassword);

        lineEditPassword = new QLineEdit(RegisterWindow);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditPassword);

        labelConfirm = new QLabel(RegisterWindow);
        labelConfirm->setObjectName(QString::fromUtf8("labelConfirm"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelConfirm);

        lineEditConfirm = new QLineEdit(RegisterWindow);
        lineEditConfirm->setObjectName(QString::fromUtf8("lineEditConfirm"));
        lineEditConfirm->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditConfirm);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(RegisterWindow);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(RegisterWindow);

        QMetaObject::connectSlotsByName(RegisterWindow);
    } // setupUi

    void retranslateUi(QDialog *RegisterWindow)
    {
        RegisterWindow->setWindowTitle(QCoreApplication::translate("RegisterWindow", "Registrar Usuario", nullptr));
        labelUsername->setText(QCoreApplication::translate("RegisterWindow", "Usuario:", nullptr));
        labelPassword->setText(QCoreApplication::translate("RegisterWindow", "Contrase\303\261a:", nullptr));
        labelConfirm->setText(QCoreApplication::translate("RegisterWindow", "Confirmar contrase\303\261a:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWindow: public Ui_RegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
