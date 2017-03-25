/********************************************************************************
** Form generated from reading UI file 'properties.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTIES_H
#define UI_PROPERTIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Properties
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacer;
    QLabel *label_3;
    QSpinBox *spinBox;
    QLabel *label;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_2;
    QComboBox *comboBox;
    QSpacerItem *spacer_2;
    QGroupBox *groupBox;
    QPushButton *importButton;

    void setupUi(QWidget *Properties)
    {
        if (Properties->objectName().isEmpty())
            Properties->setObjectName(QStringLiteral("Properties"));
        Properties->resize(487, 627);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Properties->sizePolicy().hasHeightForWidth());
        Properties->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(Properties);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        spacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacer, 0, 2, 1, 1);

        label_3 = new QLabel(Properties);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        spinBox = new QSpinBox(Properties);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        gridLayout->addWidget(spinBox, 1, 1, 1, 2);

        label = new QLabel(Properties);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        plainTextEdit = new QPlainTextEdit(Properties);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setMaximumSize(QSize(16777215, 128));
        plainTextEdit->setReadOnly(false);
        plainTextEdit->setPlainText(QStringLiteral(""));

        gridLayout->addWidget(plainTextEdit, 2, 1, 1, 2);

        label_2 = new QLabel(Properties);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        comboBox = new QComboBox(Properties);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(comboBox, 3, 1, 1, 2);

        spacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacer_2, 6, 1, 1, 1);

        groupBox = new QGroupBox(Properties);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy2);
        groupBox->setMinimumSize(QSize(400, 0));
        groupBox->setFlat(true);

        gridLayout->addWidget(groupBox, 9, 0, 1, 3);

        importButton = new QPushButton(Properties);
        importButton->setObjectName(QStringLiteral("importButton"));

        gridLayout->addWidget(importButton, 4, 1, 1, 2);


        retranslateUi(Properties);

        QMetaObject::connectSlotsByName(Properties);
    } // setupUi

    void retranslateUi(QWidget *Properties)
    {
        Properties->setWindowTitle(QApplication::translate("Properties", "Form", 0));
        label_3->setText(QApplication::translate("Properties", "Duration", 0));
        label->setText(QApplication::translate("Properties", "Code", 0));
        label_2->setText(QApplication::translate("Properties", "Presets", 0));
        groupBox->setTitle(QApplication::translate("Properties", "Control Points", 0));
        importButton->setText(QApplication::translate("Properties", "Import AfterEffects Curve", 0));
    } // retranslateUi

};

namespace Ui {
    class Properties: public Ui_Properties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTIES_H
