/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Window
{
public:
    QVBoxLayout *verticalLayout;
    QWebView *webView;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *elementLabel;
    QLineEdit *elementLineEdit;
    QPushButton *highlightButton;

    void setupUi(QWidget *Window)
    {
        if (Window->objectName().isEmpty())
            Window->setObjectName(QStringLiteral("Window"));
        Window->resize(640, 480);
        verticalLayout = new QVBoxLayout(Window);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        webView = new QWebView(Window);
        webView->setObjectName(QStringLiteral("webView"));
        webView->setUrl(QUrl(QStringLiteral("http://webkit.org/")));

        verticalLayout->addWidget(webView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        elementLabel = new QLabel(Window);
        elementLabel->setObjectName(QStringLiteral("elementLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, elementLabel);

        elementLineEdit = new QLineEdit(Window);
        elementLineEdit->setObjectName(QStringLiteral("elementLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, elementLineEdit);


        horizontalLayout->addLayout(formLayout);

        highlightButton = new QPushButton(Window);
        highlightButton->setObjectName(QStringLiteral("highlightButton"));

        horizontalLayout->addWidget(highlightButton);


        verticalLayout->addLayout(horizontalLayout);

#ifndef QT_NO_SHORTCUT
        elementLabel->setBuddy(elementLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(Window);

        QMetaObject::connectSlotsByName(Window);
    } // setupUi

    void retranslateUi(QWidget *Window)
    {
        Window->setWindowTitle(QApplication::translate("Window", "Web Element Selector", 0));
        elementLabel->setText(QApplication::translate("Window", "&Element:", 0));
        elementLineEdit->setText(QApplication::translate("Window", "li a", 0));
        highlightButton->setText(QApplication::translate("Window", "&Highlight", 0));
    } // retranslateUi

};

namespace Ui {
    class Window: public Ui_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
