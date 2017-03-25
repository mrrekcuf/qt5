/********************************************************************************
** Form generated from reading UI file 'bookmarkwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKMARKWIDGET_H
#define UI_BOOKMARKWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BookmarkWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit;
    QStackedWidget *stackedWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *add;
    QPushButton *remove;

    void setupUi(QWidget *BookmarkWidget)
    {
        if (BookmarkWidget->objectName().isEmpty())
            BookmarkWidget->setObjectName(QStringLiteral("BookmarkWidget"));
        BookmarkWidget->resize(235, 606);
        verticalLayout = new QVBoxLayout(BookmarkWidget);
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(BookmarkWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        lineEdit = new QLineEdit(BookmarkWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        stackedWidget = new QStackedWidget(BookmarkWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));

        verticalLayout->addWidget(stackedWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        add = new QPushButton(BookmarkWidget);
        add->setObjectName(QStringLiteral("add"));

        horizontalLayout_2->addWidget(add);

        remove = new QPushButton(BookmarkWidget);
        remove->setObjectName(QStringLiteral("remove"));

        horizontalLayout_2->addWidget(remove);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(BookmarkWidget);

        QMetaObject::connectSlotsByName(BookmarkWidget);
    } // setupUi

    void retranslateUi(QWidget *BookmarkWidget)
    {
        BookmarkWidget->setWindowTitle(QApplication::translate("BookmarkWidget", "Bookmarks", 0));
        label->setText(QApplication::translate("BookmarkWidget", "Filter:", 0));
        add->setText(QApplication::translate("BookmarkWidget", "Add", 0));
        remove->setText(QApplication::translate("BookmarkWidget", "Remove", 0));
    } // retranslateUi

};

namespace Ui {
    class BookmarkWidget: public Ui_BookmarkWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKMARKWIDGET_H
