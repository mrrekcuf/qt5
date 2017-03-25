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
** Form generated from reading UI file 'itemlisteditor.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMLISTEDITOR_H
#define UI_ITEMLISTEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

namespace qdesigner_internal {

class Ui_ItemListEditor
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *buttonsLayout;
    QToolButton *newListItemButton;
    QToolButton *deleteListItemButton;
    QSpacerItem *spacerItem;
    QToolButton *moveListItemUpButton;
    QToolButton *moveListItemDownButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *showPropertiesButton;

    void setupUi(QWidget *qdesigner_internal__ItemListEditor)
    {
        if (qdesigner_internal__ItemListEditor->objectName().isEmpty())
            qdesigner_internal__ItemListEditor->setObjectName(QStringLiteral("qdesigner_internal__ItemListEditor"));
        qdesigner_internal__ItemListEditor->resize(550, 360);
        verticalLayout_2 = new QVBoxLayout(qdesigner_internal__ItemListEditor);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget = new QWidget(qdesigner_internal__ItemListEditor);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listWidget = new QListWidget(widget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setEnabled(true);

        verticalLayout->addWidget(listWidget);

        buttonsLayout = new QHBoxLayout();
        buttonsLayout->setObjectName(QStringLiteral("buttonsLayout"));
        newListItemButton = new QToolButton(widget);
        newListItemButton->setObjectName(QStringLiteral("newListItemButton"));

        buttonsLayout->addWidget(newListItemButton);

        deleteListItemButton = new QToolButton(widget);
        deleteListItemButton->setObjectName(QStringLiteral("deleteListItemButton"));

        buttonsLayout->addWidget(deleteListItemButton);

        spacerItem = new QSpacerItem(16, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonsLayout->addItem(spacerItem);

        moveListItemUpButton = new QToolButton(widget);
        moveListItemUpButton->setObjectName(QStringLiteral("moveListItemUpButton"));

        buttonsLayout->addWidget(moveListItemUpButton);

        moveListItemDownButton = new QToolButton(widget);
        moveListItemDownButton->setObjectName(QStringLiteral("moveListItemDownButton"));

        buttonsLayout->addWidget(moveListItemDownButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonsLayout->addItem(horizontalSpacer);

        showPropertiesButton = new QPushButton(widget);
        showPropertiesButton->setObjectName(QStringLiteral("showPropertiesButton"));

        buttonsLayout->addWidget(showPropertiesButton);


        verticalLayout->addLayout(buttonsLayout);


        verticalLayout_2->addWidget(widget);


        retranslateUi(qdesigner_internal__ItemListEditor);

        QMetaObject::connectSlotsByName(qdesigner_internal__ItemListEditor);
    } // setupUi

    void retranslateUi(QWidget *qdesigner_internal__ItemListEditor)
    {
        qdesigner_internal__ItemListEditor->setWindowTitle(QString());
#ifndef QT_NO_TOOLTIP
        listWidget->setToolTip(QApplication::translate("qdesigner_internal::ItemListEditor", "Items List", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        newListItemButton->setToolTip(QApplication::translate("qdesigner_internal::ItemListEditor", "New Item", 0));
#endif // QT_NO_TOOLTIP
        newListItemButton->setText(QApplication::translate("qdesigner_internal::ItemListEditor", "&New", 0));
#ifndef QT_NO_TOOLTIP
        deleteListItemButton->setToolTip(QApplication::translate("qdesigner_internal::ItemListEditor", "Delete Item", 0));
#endif // QT_NO_TOOLTIP
        deleteListItemButton->setText(QApplication::translate("qdesigner_internal::ItemListEditor", "&Delete", 0));
#ifndef QT_NO_TOOLTIP
        moveListItemUpButton->setToolTip(QApplication::translate("qdesigner_internal::ItemListEditor", "Move Item Up", 0));
#endif // QT_NO_TOOLTIP
        moveListItemUpButton->setText(QApplication::translate("qdesigner_internal::ItemListEditor", "U", 0));
#ifndef QT_NO_TOOLTIP
        moveListItemDownButton->setToolTip(QApplication::translate("qdesigner_internal::ItemListEditor", "Move Item Down", 0));
#endif // QT_NO_TOOLTIP
        moveListItemDownButton->setText(QApplication::translate("qdesigner_internal::ItemListEditor", "D", 0));
        showPropertiesButton->setText(QApplication::translate("qdesigner_internal::ItemListEditor", "Properties &>>", 0));
    } // retranslateUi

};

} // namespace qdesigner_internal

namespace qdesigner_internal {
namespace Ui {
    class ItemListEditor: public Ui_ItemListEditor {};
} // namespace Ui
} // namespace qdesigner_internal

QT_END_NAMESPACE

#endif // UI_ITEMLISTEDITOR_H
