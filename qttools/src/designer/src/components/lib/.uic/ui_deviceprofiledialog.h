/********************************************************************************
** Form generated from reading UI file 'deviceprofiledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICEPROFILEDIALOG_H
#define UI_DEVICEPROFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "dpi_chooser.h"

QT_BEGIN_NAMESPACE

class Ui_DeviceProfileDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *SystemSettingsWidget;
    QFormLayout *formLayout;
    QLabel *m_systemFontFamilyLabel;
    QFontComboBox *m_systemFontComboBox;
    QLabel *m_systemFontSizeLabel;
    QComboBox *m_systemFontSizeCombo;
    QLabel *m_styleLabel;
    QComboBox *m_styleCombo;
    QLabel *m_systemDPILabel;
    qdesigner_internal::DPI_Chooser *m_dpiChooser;
    QLabel *m_nameLabel;
    QLineEdit *m_nameLineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *dialog)
    {
        if (dialog->objectName().isEmpty())
            dialog->setObjectName(QStringLiteral("dialog"));
        dialog->resize(348, 209);
        verticalLayout = new QVBoxLayout(dialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        SystemSettingsWidget = new QWidget(dialog);
        SystemSettingsWidget->setObjectName(QStringLiteral("SystemSettingsWidget"));
        formLayout = new QFormLayout(SystemSettingsWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        m_systemFontFamilyLabel = new QLabel(SystemSettingsWidget);
        m_systemFontFamilyLabel->setObjectName(QStringLiteral("m_systemFontFamilyLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, m_systemFontFamilyLabel);

        m_systemFontComboBox = new QFontComboBox(SystemSettingsWidget);
        m_systemFontComboBox->setObjectName(QStringLiteral("m_systemFontComboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, m_systemFontComboBox);

        m_systemFontSizeLabel = new QLabel(SystemSettingsWidget);
        m_systemFontSizeLabel->setObjectName(QStringLiteral("m_systemFontSizeLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, m_systemFontSizeLabel);

        m_systemFontSizeCombo = new QComboBox(SystemSettingsWidget);
        m_systemFontSizeCombo->setObjectName(QStringLiteral("m_systemFontSizeCombo"));

        formLayout->setWidget(2, QFormLayout::FieldRole, m_systemFontSizeCombo);

        m_styleLabel = new QLabel(SystemSettingsWidget);
        m_styleLabel->setObjectName(QStringLiteral("m_styleLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, m_styleLabel);

        m_styleCombo = new QComboBox(SystemSettingsWidget);
        m_styleCombo->setObjectName(QStringLiteral("m_styleCombo"));

        formLayout->setWidget(3, QFormLayout::FieldRole, m_styleCombo);

        m_systemDPILabel = new QLabel(SystemSettingsWidget);
        m_systemDPILabel->setObjectName(QStringLiteral("m_systemDPILabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, m_systemDPILabel);

        m_dpiChooser = new qdesigner_internal::DPI_Chooser(SystemSettingsWidget);
        m_dpiChooser->setObjectName(QStringLiteral("m_dpiChooser"));

        formLayout->setWidget(4, QFormLayout::FieldRole, m_dpiChooser);

        m_nameLabel = new QLabel(SystemSettingsWidget);
        m_nameLabel->setObjectName(QStringLiteral("m_nameLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, m_nameLabel);

        m_nameLineEdit = new QLineEdit(SystemSettingsWidget);
        m_nameLineEdit->setObjectName(QStringLiteral("m_nameLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, m_nameLineEdit);


        verticalLayout->addWidget(SystemSettingsWidget);

        buttonBox = new QDialogButtonBox(dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::Open|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        m_systemFontFamilyLabel->setBuddy(m_systemFontComboBox);
        m_systemFontSizeLabel->setBuddy(m_systemFontSizeCombo);
        m_styleLabel->setBuddy(m_styleCombo);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(m_nameLineEdit, m_systemFontComboBox);
        QWidget::setTabOrder(m_systemFontComboBox, m_systemFontSizeCombo);
        QWidget::setTabOrder(m_systemFontSizeCombo, m_styleCombo);
        QWidget::setTabOrder(m_styleCombo, buttonBox);

        retranslateUi(dialog);

        QMetaObject::connectSlotsByName(dialog);
    } // setupUi

    void retranslateUi(QDialog *dialog)
    {
        m_systemFontFamilyLabel->setText(QApplication::translate("DeviceProfileDialog", "&Family", 0));
        m_systemFontSizeLabel->setText(QApplication::translate("DeviceProfileDialog", "&Point Size", 0));
        m_styleLabel->setText(QApplication::translate("DeviceProfileDialog", "Style", 0));
        m_systemDPILabel->setText(QApplication::translate("DeviceProfileDialog", "Device DPI", 0));
        m_nameLabel->setText(QApplication::translate("DeviceProfileDialog", "Name", 0));
        Q_UNUSED(dialog);
    } // retranslateUi

};

namespace Ui {
    class DeviceProfileDialog: public Ui_DeviceProfileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICEPROFILEDIALOG_H
