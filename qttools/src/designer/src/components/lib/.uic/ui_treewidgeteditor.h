/*
*********************************************************************
**
** Copyright (C) 2015 The Qt Company Ltd.
** Contact: http://www.qt.io/licensing/
**
** This file is part of the Qt Designer of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL21$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see http://www.qt.io/terms-conditions. For further
** information use the contact form at http://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 or version 3 as published by the Free
** Software Foundation and appearing in the file LICENSE.LGPLv21 and
** LICENSE.LGPLv3 included in the packaging of this file. Please review the
** following information to ensure the GNU Lesser General Public License
** requirements will be met: https://www.gnu.org/licenses/lgpl.html and
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** As a special exception, The Qt Company gives you certain additional
** rights. These rights are described in The Qt Company LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** $QT_END_LICENSE$
**
*********************************************************************
*/

/********************************************************************************
** Form generated from reading UI file 'treewidgeteditor.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TREEWIDGETEDITOR_H
#define UI_TREEWIDGETEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

namespace qdesigner_internal {

class Ui_TreeWidgetEditor
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *itemsTab;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QTreeWidget *treeWidget;
    QHBoxLayout *buttonsLayout;
    QToolButton *newItemButton;
    QToolButton *newSubItemButton;
    QToolButton *deleteItemButton;
    QSpacerItem *spacerItem;
    QToolButton *moveItemLeftButton;
    QToolButton *moveItemRightButton;
    QToolButton *moveItemUpButton;
    QToolButton *moveItemDownButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *showPropertiesButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *qdesigner_internal__TreeWidgetEditor)
    {
        if (qdesigner_internal__TreeWidgetEditor->objectName().isEmpty())
            qdesigner_internal__TreeWidgetEditor->setObjectName(QStringLiteral("qdesigner_internal__TreeWidgetEditor"));
        qdesigner_internal__TreeWidgetEditor->resize(700, 360);
        verticalLayout = new QVBoxLayout(qdesigner_internal__TreeWidgetEditor);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(qdesigner_internal__TreeWidgetEditor);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        itemsTab = new QWidget();
        itemsTab->setObjectName(QStringLiteral("itemsTab"));
        verticalLayout_3 = new QVBoxLayout(itemsTab);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(9, 9, 9, -1);
        widget = new QWidget(itemsTab);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        treeWidget = new QTreeWidget(widget);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setFocusPolicy(Qt::WheelFocus);

        verticalLayout_2->addWidget(treeWidget);

        buttonsLayout = new QHBoxLayout();
        buttonsLayout->setObjectName(QStringLiteral("buttonsLayout"));
        newItemButton = new QToolButton(widget);
        newItemButton->setObjectName(QStringLiteral("newItemButton"));

        buttonsLayout->addWidget(newItemButton);

        newSubItemButton = new QToolButton(widget);
        newSubItemButton->setObjectName(QStringLiteral("newSubItemButton"));

        buttonsLayout->addWidget(newSubItemButton);

        deleteItemButton = new QToolButton(widget);
        deleteItemButton->setObjectName(QStringLiteral("deleteItemButton"));

        buttonsLayout->addWidget(deleteItemButton);

        spacerItem = new QSpacerItem(28, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonsLayout->addItem(spacerItem);

        moveItemLeftButton = new QToolButton(widget);
        moveItemLeftButton->setObjectName(QStringLiteral("moveItemLeftButton"));

        buttonsLayout->addWidget(moveItemLeftButton);

        moveItemRightButton = new QToolButton(widget);
        moveItemRightButton->setObjectName(QStringLiteral("moveItemRightButton"));

        buttonsLayout->addWidget(moveItemRightButton);

        moveItemUpButton = new QToolButton(widget);
        moveItemUpButton->setObjectName(QStringLiteral("moveItemUpButton"));

        buttonsLayout->addWidget(moveItemUpButton);

        moveItemDownButton = new QToolButton(widget);
        moveItemDownButton->setObjectName(QStringLiteral("moveItemDownButton"));

        buttonsLayout->addWidget(moveItemDownButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonsLayout->addItem(horizontalSpacer);

        showPropertiesButton = new QPushButton(widget);
        showPropertiesButton->setObjectName(QStringLiteral("showPropertiesButton"));

        buttonsLayout->addWidget(showPropertiesButton);


        verticalLayout_2->addLayout(buttonsLayout);


        verticalLayout_3->addWidget(widget);

        tabWidget->addTab(itemsTab, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(qdesigner_internal__TreeWidgetEditor);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(qdesigner_internal__TreeWidgetEditor);
        QObject::connect(buttonBox, SIGNAL(accepted()), qdesigner_internal__TreeWidgetEditor, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), qdesigner_internal__TreeWidgetEditor, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(qdesigner_internal__TreeWidgetEditor);
    } // setupUi

    void retranslateUi(QDialog *qdesigner_internal__TreeWidgetEditor)
    {
        qdesigner_internal__TreeWidgetEditor->setWindowTitle(QApplication::translate("qdesigner_internal::TreeWidgetEditor", "Edit Tree Widget", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("qdesigner_internal::TreeWidgetEditor", "1", 0));
#ifndef QT_NO_TOOLTIP
        treeWidget->setToolTip(QApplication::translate("qdesigner_internal::TreeWidgetEditor", "Tree Items", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        newItemButton->setToolTip(QApplication::translate("qdesigner_internal::TreeWidgetEditor", "New Item", 0));
#endif // QT_NO_TOOLTIP
        newItemButton->setText(QApplication::translate("qdesigner_internal::TreeWidgetEditor", "&New", 0));
#ifndef QT_NO_TOOLTIP
        newSubItemButton->setToolTip(QApplication::translate("qdesigner_internal::TreeWidgetEditor", "New Subitem", 0));
#endif // QT_NO_TOOLTIP
        newSubItemButton->setText(QApplication::translate("qdesigner_internal::TreeWidgetEditor", "New &Subitem", 0));
#ifndef QT_NO_TOOLTIP
        deleteItemButton->setToolTip(QApplication::translate("qdesigner_internal::TreeWidgetEditor", "Delete Item", 0));
#endif // QT_NO_TOOLTIP
        deleteItemButton->setText(QApplication::translate("qdesigner_internal::TreeWidgetEditor", "&Delete", 0));
#ifndef QT_NO_TOOLTIP
        moveItemLeftButton->setToolTip(QApplication::translate("qdesigner_internal::TreeWidgetEditor", "Move Item Left (before Parent Item)", 0));
#endif // QT_NO_TOOLTIP
        moveItemLeftButton->setText(QApplication::translate("qdesigner_internal::TreeWidgetEditor", "L", 0));
#ifndef QT_NO_TOOLTIP
        moveItemRightButton->setToolTip(QApplication::translate("qdesigner_internal::TreeWidgetEditor", "Move Item Right (as a First Subitem of the Next Sibling Item)", 0));
#endif // QT_NO_TOOLTIP
        moveItemRightButton->setText(QApplication::translate("qdesigner_internal::TreeWidgetEditor", "R", 0));
#ifndef QT_NO_TOOLTIP
        moveItemUpButton->setToolTip(QApplication::translate("qdesigner_internal::TreeWidgetEditor", "Move Item Up", 0));
#endif // QT_NO_TOOLTIP
        moveItemUpButton->setText(QApplication::translate("qdesigner_internal::TreeWidgetEditor", "U", 0));
#ifndef QT_NO_TOOLTIP
        moveItemDownButton->setToolTip(QApplication::translate("qdesigner_internal::TreeWidgetEditor", "Move Item Down", 0));
#endif // QT_NO_TOOLTIP
        moveItemDownButton->setText(QApplication::translate("qdesigner_internal::TreeWidgetEditor", "D", 0));
        showPropertiesButton->setText(QApplication::translate("qdesigner_internal::TreeWidgetEditor", "Properties &>>", 0));
        tabWidget->setTabText(tabWidget->indexOf(itemsTab), QApplication::translate("qdesigner_internal::TreeWidgetEditor", "&Items", 0));
    } // retranslateUi

};

} // namespace qdesigner_internal

namespace qdesigner_internal {
namespace Ui {
    class TreeWidgetEditor: public Ui_TreeWidgetEditor {};
} // namespace Ui
} // namespace qdesigner_internal

QT_END_NAMESPACE

#endif // UI_TREEWIDGETEDITOR_H
