/********************************************************************************
** Form generated from reading UI file 'topicchooser.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOPICCHOOSER_H
#define UI_TOPICCHOOSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TopicChooser
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QListView *listWidget;
    QHBoxLayout *hboxLayout;
    QSpacerItem *Horizontal_Spacing2;
    QPushButton *buttonDisplay;
    QPushButton *buttonCancel;

    void setupUi(QDialog *TopicChooser)
    {
        if (TopicChooser->objectName().isEmpty())
            TopicChooser->setObjectName(QStringLiteral("TopicChooser"));
        TopicChooser->resize(391, 223);
        TopicChooser->setSizeGripEnabled(true);
        vboxLayout = new QVBoxLayout(TopicChooser);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        vboxLayout->setObjectName(QStringLiteral("unnamed"));
        label = new QLabel(TopicChooser);
        label->setObjectName(QStringLiteral("label"));

        vboxLayout->addWidget(label);

        lineEdit = new QLineEdit(TopicChooser);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        vboxLayout->addWidget(lineEdit);

        listWidget = new QListView(TopicChooser);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        vboxLayout->addWidget(listWidget);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setObjectName(QStringLiteral("unnamed"));
        Horizontal_Spacing2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(Horizontal_Spacing2);

        buttonDisplay = new QPushButton(TopicChooser);
        buttonDisplay->setObjectName(QStringLiteral("buttonDisplay"));
        buttonDisplay->setAutoDefault(true);

        hboxLayout->addWidget(buttonDisplay);

        buttonCancel = new QPushButton(TopicChooser);
        buttonCancel->setObjectName(QStringLiteral("buttonCancel"));
        buttonCancel->setAutoDefault(true);

        hboxLayout->addWidget(buttonCancel);


        vboxLayout->addLayout(hboxLayout);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(listWidget);
#endif // QT_NO_SHORTCUT

        retranslateUi(TopicChooser);

        buttonDisplay->setDefault(true);


        QMetaObject::connectSlotsByName(TopicChooser);
    } // setupUi

    void retranslateUi(QDialog *TopicChooser)
    {
        TopicChooser->setWindowTitle(QApplication::translate("TopicChooser", "Choose Topic", 0));
        label->setText(QApplication::translate("TopicChooser", "&Topics", 0));
        buttonDisplay->setText(QApplication::translate("TopicChooser", "&Display", 0));
        buttonCancel->setText(QApplication::translate("TopicChooser", "&Close", 0));
    } // retranslateUi

};

namespace Ui {
    class TopicChooser: public Ui_TopicChooser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOPICCHOOSER_H
