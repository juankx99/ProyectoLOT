/********************************************************************************
** Form generated from reading UI file 'adddevicedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDEVICEDIALOG_H
#define UI_ADDDEVICEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddDeviceDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *labelName;
    QLineEdit *lineEditName;
    QLabel *labelType;
    QLineEdit *lineEditType;
    QLabel *labelIP;
    QLineEdit *lineEditIP;
    QLabel *labelCalibration;
    QLineEdit *lineEditCalibration;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddDeviceDialog)
    {
        if (AddDeviceDialog->objectName().isEmpty())
            AddDeviceDialog->setObjectName(QString::fromUtf8("AddDeviceDialog"));
        AddDeviceDialog->resize(350, 250);
        verticalLayout = new QVBoxLayout(AddDeviceDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        labelName = new QLabel(AddDeviceDialog);
        labelName->setObjectName(QString::fromUtf8("labelName"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelName);

        lineEditName = new QLineEdit(AddDeviceDialog);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditName);

        labelType = new QLabel(AddDeviceDialog);
        labelType->setObjectName(QString::fromUtf8("labelType"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelType);

        lineEditType = new QLineEdit(AddDeviceDialog);
        lineEditType->setObjectName(QString::fromUtf8("lineEditType"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditType);

        labelIP = new QLabel(AddDeviceDialog);
        labelIP->setObjectName(QString::fromUtf8("labelIP"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelIP);

        lineEditIP = new QLineEdit(AddDeviceDialog);
        lineEditIP->setObjectName(QString::fromUtf8("lineEditIP"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditIP);

        labelCalibration = new QLabel(AddDeviceDialog);
        labelCalibration->setObjectName(QString::fromUtf8("labelCalibration"));

        formLayout->setWidget(3, QFormLayout::LabelRole, labelCalibration);

        lineEditCalibration = new QLineEdit(AddDeviceDialog);
        lineEditCalibration->setObjectName(QString::fromUtf8("lineEditCalibration"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEditCalibration);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(AddDeviceDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AddDeviceDialog);

        QMetaObject::connectSlotsByName(AddDeviceDialog);
    } // setupUi

    void retranslateUi(QDialog *AddDeviceDialog)
    {
        AddDeviceDialog->setWindowTitle(QCoreApplication::translate("AddDeviceDialog", "Agregar Dispositivo", nullptr));
        labelName->setText(QCoreApplication::translate("AddDeviceDialog", "Nombre:", nullptr));
        labelType->setText(QCoreApplication::translate("AddDeviceDialog", "Tipo:", nullptr));
        labelIP->setText(QCoreApplication::translate("AddDeviceDialog", "IP:", nullptr));
        labelCalibration->setText(QCoreApplication::translate("AddDeviceDialog", "Calibraci\303\263n:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddDeviceDialog: public Ui_AddDeviceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDEVICEDIALOG_H
