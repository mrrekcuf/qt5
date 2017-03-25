/********************************************************************************
** Form generated from reading UI file 'qdesigner_appearanceoptions.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDESIGNER_APPEARANCEOPTIONS_H
#define UI_QDESIGNER_APPEARANCEOPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "fontpanel.h"

QT_BEGIN_NAMESPACE

class Ui_AppearanceOptionsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *m_uiModeGroupBox;
    QVBoxLayout *vboxLayout;
    QComboBox *m_uiModeCombo;
    FontPanel *m_fontPanel;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *AppearanceOptionsWidget)
    {
        if (AppearanceOptionsWidget->objectName().isEmpty())
            AppearanceOptionsWidget->setObjectName(QStringLiteral("AppearanceOptionsWidget"));
        AppearanceOptionsWidget->resize(325, 360);
        verticalLayout = new QVBoxLayout(AppearanceOptionsWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_uiModeGroupBox = new QGroupBox(AppearanceOptionsWidget);
        m_uiModeGroupBox->setObjectName(QStringLiteral("m_uiModeGroupBox"));
        vboxLayout = new QVBoxLayout(m_uiModeGroupBox);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        m_uiModeCombo = new QComboBox(m_uiModeGroupBox);
        m_uiModeCombo->setObjectName(QStringLiteral("m_uiModeCombo"));

        vboxLayout->addWidget(m_uiModeCombo);


        verticalLayout->addWidget(m_uiModeGroupBox);

        m_fontPanel = new FontPanel(AppearanceOptionsWidget);
        m_fontPanel->setObjectName(QStringLiteral("m_fontPanel"));

        verticalLayout->addWidget(m_fontPanel);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(AppearanceOptionsWidget);

        QMetaObject::connectSlotsByName(AppearanceOptionsWidget);
    } // setupUi

    void retranslateUi(QWidget *AppearanceOptionsWidget)
    {
        AppearanceOptionsWidget->setWindowTitle(QApplication::translate("AppearanceOptionsWidget", "Form", 0));
        m_uiModeGroupBox->setTitle(QApplication::translate("AppearanceOptionsWidget", "User Interface Mode", 0));
    } // retranslateUi

};

namespace Ui {
    class AppearanceOptionsWidget: public Ui_AppearanceOptionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDESIGNER_APPEARANCEOPTIONS_H
