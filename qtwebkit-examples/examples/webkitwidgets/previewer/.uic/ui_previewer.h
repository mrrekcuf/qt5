/********************************************************************************
** Form generated from reading UI file 'previewer.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREVIEWER_H
#define UI_PREVIEWER_H

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QHBoxLayout *horizontalLayout_4;
    QSplitter *splitter;
    QGroupBox *editorBox;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *clearButton;
    QPushButton *previewButton;
    QGroupBox *previewerBox;
    QHBoxLayout *horizontalLayout_3;
    QWebView *webView;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(911, 688);
        horizontalLayout_4 = new QHBoxLayout(Form);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        splitter = new QSplitter(Form);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        editorBox = new QGroupBox(splitter);
        editorBox->setObjectName(QStringLiteral("editorBox"));
        horizontalLayout_2 = new QHBoxLayout(editorBox);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        plainTextEdit = new QPlainTextEdit(editorBox);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        verticalLayout_2->addWidget(plainTextEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        clearButton = new QPushButton(editorBox);
        clearButton->setObjectName(QStringLiteral("clearButton"));

        horizontalLayout->addWidget(clearButton);

        previewButton = new QPushButton(editorBox);
        previewButton->setObjectName(QStringLiteral("previewButton"));

        horizontalLayout->addWidget(previewButton);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_2);

        splitter->addWidget(editorBox);
        previewerBox = new QGroupBox(splitter);
        previewerBox->setObjectName(QStringLiteral("previewerBox"));
        horizontalLayout_3 = new QHBoxLayout(previewerBox);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        webView = new QWebView(previewerBox);
        webView->setObjectName(QStringLiteral("webView"));
        webView->setUrl(QUrl(QStringLiteral("about:blank")));

        horizontalLayout_3->addWidget(webView);

        splitter->addWidget(previewerBox);

        horizontalLayout_4->addWidget(splitter);


        retranslateUi(Form);
        QObject::connect(clearButton, SIGNAL(clicked()), plainTextEdit, SLOT(clear()));

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0));
        editorBox->setTitle(QApplication::translate("Form", "HTML Editor", 0));
        clearButton->setText(QApplication::translate("Form", "Clear", 0));
        previewButton->setText(QApplication::translate("Form", "Preview", 0));
        previewerBox->setTitle(QApplication::translate("Form", "HTML Preview", 0));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREVIEWER_H
