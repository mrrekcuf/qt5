/********************************************************************************
** Form generated from reading UI file 'formextractor.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMEXTRACTOR_H
#define UI_FORMEXTRACTOR_H

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *webFormGroupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QWebView *webView;
    QSpacerItem *horizontalSpacer;
    QGroupBox *dataGroupBox;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout;
    QLabel *firstNameLabel;
    QLineEdit *firstNameEdit;
    QLabel *lastNameLabel;
    QLineEdit *lastNameEdit;
    QLabel *genderLabel;
    QLineEdit *genderEdit;
    QLabel *updatesLabel;
    QLineEdit *updatesEdit;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(680, 218);
        horizontalLayout = new QHBoxLayout(Form);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        webFormGroupBox = new QGroupBox(Form);
        webFormGroupBox->setObjectName(QStringLiteral("webFormGroupBox"));
        verticalLayout_2 = new QVBoxLayout(webFormGroupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        webView = new QWebView(webFormGroupBox);
        webView->setObjectName(QStringLiteral("webView"));
        webView->setMinimumSize(QSize(200, 150));
        webView->setMaximumSize(QSize(400, 16777215));
        webView->setUrl(QUrl(QStringLiteral("about:blank")));

        verticalLayout->addWidget(webView);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout->addWidget(webFormGroupBox);

        horizontalSpacer = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        dataGroupBox = new QGroupBox(Form);
        dataGroupBox->setObjectName(QStringLiteral("dataGroupBox"));
        verticalLayout_3 = new QVBoxLayout(dataGroupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        firstNameLabel = new QLabel(dataGroupBox);
        firstNameLabel->setObjectName(QStringLiteral("firstNameLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, firstNameLabel);

        firstNameEdit = new QLineEdit(dataGroupBox);
        firstNameEdit->setObjectName(QStringLiteral("firstNameEdit"));
        firstNameEdit->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, firstNameEdit);

        lastNameLabel = new QLabel(dataGroupBox);
        lastNameLabel->setObjectName(QStringLiteral("lastNameLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, lastNameLabel);

        lastNameEdit = new QLineEdit(dataGroupBox);
        lastNameEdit->setObjectName(QStringLiteral("lastNameEdit"));
        lastNameEdit->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, lastNameEdit);

        genderLabel = new QLabel(dataGroupBox);
        genderLabel->setObjectName(QStringLiteral("genderLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, genderLabel);

        genderEdit = new QLineEdit(dataGroupBox);
        genderEdit->setObjectName(QStringLiteral("genderEdit"));
        genderEdit->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, genderEdit);

        updatesLabel = new QLabel(dataGroupBox);
        updatesLabel->setObjectName(QStringLiteral("updatesLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, updatesLabel);

        updatesEdit = new QLineEdit(dataGroupBox);
        updatesEdit->setObjectName(QStringLiteral("updatesEdit"));
        updatesEdit->setReadOnly(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, updatesEdit);


        verticalLayout_3->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        horizontalLayout->addWidget(dataGroupBox);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0));
        webFormGroupBox->setTitle(QApplication::translate("Form", "Web Form", 0));
        dataGroupBox->setTitle(QApplication::translate("Form", "Extracted Data", 0));
        firstNameLabel->setText(QApplication::translate("Form", "First Name", 0));
        lastNameLabel->setText(QApplication::translate("Form", "Last Name", 0));
        genderLabel->setText(QApplication::translate("Form", "Gender", 0));
        updatesLabel->setText(QApplication::translate("Form", "Receive Updates", 0));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMEXTRACTOR_H
