/********************************************************************************
** Form generated from reading UI file 'pane.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANE_H
#define UI_PANE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pane
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_x;
    QDoubleSpinBox *p1_x;
    QLabel *label_y;
    QDoubleSpinBox *p1_y;
    QCheckBox *smooth;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *Pane)
    {
        if (Pane->objectName().isEmpty())
            Pane->setObjectName(QStringLiteral("Pane"));
        Pane->resize(416, 47);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Pane->sizePolicy().hasHeightForWidth());
        Pane->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(Pane);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(Pane);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        widget = new QWidget(Pane);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(4);
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_x = new QLabel(widget);
        label_x->setObjectName(QStringLiteral("label_x"));

        horizontalLayout->addWidget(label_x);

        p1_x = new QDoubleSpinBox(widget);
        p1_x->setObjectName(QStringLiteral("p1_x"));
        p1_x->setDecimals(4);
        p1_x->setSingleStep(0.01);

        horizontalLayout->addWidget(p1_x);

        label_y = new QLabel(widget);
        label_y->setObjectName(QStringLiteral("label_y"));

        horizontalLayout->addWidget(label_y);

        p1_y = new QDoubleSpinBox(widget);
        p1_y->setObjectName(QStringLiteral("p1_y"));
        p1_y->setDecimals(4);
        p1_y->setMinimum(-10);
        p1_y->setMaximum(10);
        p1_y->setSingleStep(0.01);

        horizontalLayout->addWidget(p1_y);


        gridLayout->addWidget(widget, 0, 1, 1, 1);

        smooth = new QCheckBox(Pane);
        smooth->setObjectName(QStringLiteral("smooth"));

        gridLayout->addWidget(smooth, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(99, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 1, 1, Qt::AlignVCenter);


        retranslateUi(Pane);

        QMetaObject::connectSlotsByName(Pane);
    } // setupUi

    void retranslateUi(QWidget *Pane)
    {
        Pane->setWindowTitle(QApplication::translate("Pane", "Form", 0));
        label->setText(QApplication::translate("Pane", "p1", 0));
        label_x->setText(QApplication::translate("Pane", "x", 0));
        label_y->setText(QApplication::translate("Pane", "y", 0));
        smooth->setText(QApplication::translate("Pane", "smooth", 0));
    } // retranslateUi

};

namespace Ui {
    class Pane: public Ui_Pane {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANE_H
