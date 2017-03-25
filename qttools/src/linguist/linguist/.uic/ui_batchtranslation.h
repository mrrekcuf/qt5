/*
*********************************************************************
**
** Copyright (C) 2015 The Qt Company Ltd.
** Contact: http://www.qt.io/licensing/
**
** This file is part of the Qt Linguist of the Qt Toolkit.
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
** Form generated from reading UI file 'batchtranslation.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATCHTRANSLATION_H
#define UI_BATCHTRANSLATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BatchTranslationDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QCheckBox *ckMarkFinished;
    QCheckBox *ckTranslateTranslated;
    QCheckBox *ckTranslateFinished;
    QGroupBox *groupBox_2;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout;
    QListView *phrasebookList;
    QVBoxLayout *vboxLayout3;
    QPushButton *moveUpButton;
    QPushButton *moveDownButton;
    QSpacerItem *spacerItem;
    QLabel *label;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem1;
    QPushButton *runButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *batchTranslationDialog)
    {
        if (batchTranslationDialog->objectName().isEmpty())
            batchTranslationDialog->setObjectName(QStringLiteral("batchTranslationDialog"));
        batchTranslationDialog->resize(437, 492);
        vboxLayout = new QVBoxLayout(batchTranslationDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        groupBox = new QGroupBox(batchTranslationDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        vboxLayout1 = new QVBoxLayout(groupBox);
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        ckMarkFinished = new QCheckBox(groupBox);
        ckMarkFinished->setObjectName(QStringLiteral("ckMarkFinished"));
        ckMarkFinished->setChecked(true);

        vboxLayout1->addWidget(ckMarkFinished);

        ckTranslateTranslated = new QCheckBox(groupBox);
        ckTranslateTranslated->setObjectName(QStringLiteral("ckTranslateTranslated"));
        ckTranslateTranslated->setChecked(false);

        vboxLayout1->addWidget(ckTranslateTranslated);

        ckTranslateFinished = new QCheckBox(groupBox);
        ckTranslateFinished->setObjectName(QStringLiteral("ckTranslateFinished"));

        vboxLayout1->addWidget(ckTranslateFinished);


        vboxLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(batchTranslationDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        vboxLayout2 = new QVBoxLayout(groupBox_2);
#ifndef Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        phrasebookList = new QListView(groupBox_2);
        phrasebookList->setObjectName(QStringLiteral("phrasebookList"));
        phrasebookList->setUniformItemSizes(true);

        hboxLayout->addWidget(phrasebookList);

        vboxLayout3 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout3->setSpacing(6);
#endif
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
        vboxLayout3->setObjectName(QStringLiteral("vboxLayout3"));
        moveUpButton = new QPushButton(groupBox_2);
        moveUpButton->setObjectName(QStringLiteral("moveUpButton"));

        vboxLayout3->addWidget(moveUpButton);

        moveDownButton = new QPushButton(groupBox_2);
        moveDownButton->setObjectName(QStringLiteral("moveDownButton"));

        vboxLayout3->addWidget(moveDownButton);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout3->addItem(spacerItem);


        hboxLayout->addLayout(vboxLayout3);


        vboxLayout2->addLayout(hboxLayout);

        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);

        vboxLayout2->addWidget(label);


        vboxLayout->addWidget(groupBox_2);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        runButton = new QPushButton(batchTranslationDialog);
        runButton->setObjectName(QStringLiteral("runButton"));

        hboxLayout1->addWidget(runButton);

        cancelButton = new QPushButton(batchTranslationDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        hboxLayout1->addWidget(cancelButton);


        vboxLayout->addLayout(hboxLayout1);


        retranslateUi(batchTranslationDialog);
        QObject::connect(cancelButton, SIGNAL(clicked()), batchTranslationDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(batchTranslationDialog);
    } // setupUi

    void retranslateUi(QDialog *batchTranslationDialog)
    {
        batchTranslationDialog->setWindowTitle(QApplication::translate("BatchTranslationDialog", "Qt Linguist - Batch Translation", 0));
        groupBox->setTitle(QApplication::translate("BatchTranslationDialog", "Options", 0));
#ifndef QT_NO_TOOLTIP
        ckMarkFinished->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        ckMarkFinished->setText(QApplication::translate("BatchTranslationDialog", "Set translated entries to finished", 0));
        ckTranslateTranslated->setText(QApplication::translate("BatchTranslationDialog", "Retranslate entries with existing translation", 0));
#ifndef QT_NO_TOOLTIP
        ckTranslateFinished->setToolTip(QApplication::translate("BatchTranslationDialog", "Note that the modified entries will be reset to unfinished if 'Set translated entries to finished' above is unchecked", 0));
#endif // QT_NO_TOOLTIP
        ckTranslateFinished->setText(QApplication::translate("BatchTranslationDialog", "Translate also finished entries", 0));
        groupBox_2->setTitle(QApplication::translate("BatchTranslationDialog", "Phrase book preference", 0));
        moveUpButton->setText(QApplication::translate("BatchTranslationDialog", "Move up", 0));
        moveDownButton->setText(QApplication::translate("BatchTranslationDialog", "Move down", 0));
        label->setText(QApplication::translate("BatchTranslationDialog", "The batch translator will search through the selected phrase books in the order given above", 0));
        runButton->setText(QApplication::translate("BatchTranslationDialog", "&Run", 0));
        cancelButton->setText(QApplication::translate("BatchTranslationDialog", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class BatchTranslationDialog: public Ui_BatchTranslationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATCHTRANSLATION_H
