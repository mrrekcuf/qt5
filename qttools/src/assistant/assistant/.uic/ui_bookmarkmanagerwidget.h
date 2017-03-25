/********************************************************************************
** Form generated from reading UI file 'bookmarkmanagerwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKMARKMANAGERWIDGET_H
#define UI_BOOKMARKMANAGERWIDGET_H

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
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BookmarkManagerWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLineEdit *lineEdit;
    QTreeView *treeView;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *remove;
    QPushButton *importExport;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_5;

    void setupUi(QWidget *BookmarkManagerWidget)
    {
        if (BookmarkManagerWidget->objectName().isEmpty())
            BookmarkManagerWidget->setObjectName(QStringLiteral("BookmarkManagerWidget"));
        BookmarkManagerWidget->resize(517, 348);
        verticalLayout = new QVBoxLayout(BookmarkManagerWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(BookmarkManagerWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(BookmarkManagerWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        treeView = new QTreeView(BookmarkManagerWidget);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setAcceptDrops(true);
        treeView->setProperty("showDropIndicator", QVariant(true));
        treeView->setDragEnabled(true);
        treeView->setAutoExpandDelay(1000);
        treeView->setUniformRowHeights(true);
        treeView->setAllColumnsShowFocus(true);
        treeView->header()->setDefaultSectionSize(225);
        treeView->header()->setMinimumSectionSize(50);

        verticalLayout->addWidget(treeView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        remove = new QPushButton(BookmarkManagerWidget);
        remove->setObjectName(QStringLiteral("remove"));

        horizontalLayout_2->addWidget(remove);

        importExport = new QPushButton(BookmarkManagerWidget);
        importExport->setObjectName(QStringLiteral("importExport"));

        horizontalLayout_2->addWidget(importExport);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButton_5 = new QPushButton(BookmarkManagerWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout_2->addWidget(pushButton_5);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(BookmarkManagerWidget);
        QObject::connect(pushButton_5, SIGNAL(clicked()), BookmarkManagerWidget, SLOT(close()));

        QMetaObject::connectSlotsByName(BookmarkManagerWidget);
    } // setupUi

    void retranslateUi(QWidget *BookmarkManagerWidget)
    {
        BookmarkManagerWidget->setWindowTitle(QApplication::translate("BookmarkManagerWidget", "Manage Bookmarks", 0));
        label->setText(QApplication::translate("BookmarkManagerWidget", "Search:", 0));
        remove->setText(QApplication::translate("BookmarkManagerWidget", "Remove", 0));
        importExport->setText(QApplication::translate("BookmarkManagerWidget", "Import and Backup", 0));
        pushButton_5->setText(QApplication::translate("BookmarkManagerWidget", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class BookmarkManagerWidget: public Ui_BookmarkManagerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKMARKMANAGERWIDGET_H
