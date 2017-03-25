/********************************************************************************
** Form generated from reading UI file 'qpagesetupwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QPAGESETUPWIDGET_H
#define UI_QPAGESETUPWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QPageSetupWidget
{
public:
    QGridLayout *gridLayout_3;

    void setupUi(QWidget *QPageSetupWidget)
    {
        if (QPageSetupWidget->objectName().isEmpty())
            QPageSetupWidget->setObjectName(QStringLiteral("QPageSetupWidget"));
        QPageSetupWidget->resize(416, 515);
        gridLayout_3 = new QGridLayout(QPageSetupWidget);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));

        retranslateUi(QPageSetupWidget);

        QMetaObject::connectSlotsByName(QPageSetupWidget);
    } // setupUi

    void retranslateUi(QWidget *QPageSetupWidget)
    {
        QPageSetupWidget->setWindowTitle(QApplication::translate("QPageSetupWidget", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class QPageSetupWidget: public Ui_QPageSetupWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QPAGESETUPWIDGET_H
