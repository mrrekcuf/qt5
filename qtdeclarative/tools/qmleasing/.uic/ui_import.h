/********************************************************************************
** Form generated from reading UI file 'import.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORT_H
#define UI_IMPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImportDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *inInfluenceEdit;
    QLineEdit *inSlopeEdit;
    QLineEdit *outInfluenceEdit;
    QLineEdit *outSlopeEdit;
    QLabel *label_2;

    void setupUi(QDialog *ImportDialog)
    {
        if (ImportDialog->objectName().isEmpty())
            ImportDialog->setObjectName(QStringLiteral("ImportDialog"));
        ImportDialog->resize(400, 164);
        buttonBox = new QDialogButtonBox(ImportDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(40, 130, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        formLayoutWidget = new QWidget(ImportDialog);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(20, 10, 361, 101));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        inInfluenceEdit = new QLineEdit(formLayoutWidget);
        inInfluenceEdit->setObjectName(QStringLiteral("inInfluenceEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, inInfluenceEdit);

        inSlopeEdit = new QLineEdit(formLayoutWidget);
        inSlopeEdit->setObjectName(QStringLiteral("inSlopeEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, inSlopeEdit);

        outInfluenceEdit = new QLineEdit(formLayoutWidget);
        outInfluenceEdit->setObjectName(QStringLiteral("outInfluenceEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, outInfluenceEdit);

        outSlopeEdit = new QLineEdit(formLayoutWidget);
        outSlopeEdit->setObjectName(QStringLiteral("outSlopeEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, outSlopeEdit);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);


        retranslateUi(ImportDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ImportDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ImportDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ImportDialog);
    } // setupUi

    void retranslateUi(QDialog *ImportDialog)
    {
        ImportDialog->setWindowTitle(QApplication::translate("ImportDialog", "Import After Effects Curve", 0));
        label->setText(QApplication::translate("ImportDialog", "Input Influence:", 0));
        label_3->setText(QApplication::translate("ImportDialog", "Output Influence:", 0));
        label_4->setText(QApplication::translate("ImportDialog", "Output Slope:", 0));
        inInfluenceEdit->setText(QApplication::translate("ImportDialog", "33", 0));
        inSlopeEdit->setText(QApplication::translate("ImportDialog", "0", 0));
        outInfluenceEdit->setText(QApplication::translate("ImportDialog", "33", 0));
        outSlopeEdit->setText(QApplication::translate("ImportDialog", "0", 0));
        label_2->setText(QApplication::translate("ImportDialog", "Input Slope:", 0));
    } // retranslateUi

};

namespace Ui {
    class ImportDialog: public Ui_ImportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORT_H
