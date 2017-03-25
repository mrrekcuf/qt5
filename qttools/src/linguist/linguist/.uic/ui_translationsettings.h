/********************************************************************************
** Form generated from reading UI file 'translationsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSLATIONSETTINGS_H
#define UI_TRANSLATIONSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TranslationSettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *srcGroupBox;
    QGridLayout *_2;
    QComboBox *srcCbLanguageList;
    QLabel *srcLblLanguage;
    QComboBox *srcCbCountryList;
    QLabel *srcLblCountry;
    QGroupBox *tgtGroupBox;
    QGridLayout *gridLayout;
    QComboBox *tgtCbLanguageList;
    QLabel *tgtLblLanguage;
    QComboBox *tgtCbCountryList;
    QLabel *tgtLblCountry;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *translationSettingsDialog)
    {
        if (translationSettingsDialog->objectName().isEmpty())
            translationSettingsDialog->setObjectName(QStringLiteral("translationSettingsDialog"));
        translationSettingsDialog->resize(416, 263);
        verticalLayout = new QVBoxLayout(translationSettingsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        srcGroupBox = new QGroupBox(translationSettingsDialog);
        srcGroupBox->setObjectName(QStringLiteral("srcGroupBox"));
        _2 = new QGridLayout(srcGroupBox);
#ifndef Q_OS_MAC
        _2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        _2->setContentsMargins(9, 9, 9, 9);
#endif
        _2->setObjectName(QStringLiteral("_2"));
        srcCbLanguageList = new QComboBox(srcGroupBox);
        srcCbLanguageList->setObjectName(QStringLiteral("srcCbLanguageList"));

        _2->addWidget(srcCbLanguageList, 0, 1, 1, 1);

        srcLblLanguage = new QLabel(srcGroupBox);
        srcLblLanguage->setObjectName(QStringLiteral("srcLblLanguage"));

        _2->addWidget(srcLblLanguage, 0, 0, 1, 1);

        srcCbCountryList = new QComboBox(srcGroupBox);
        srcCbCountryList->setObjectName(QStringLiteral("srcCbCountryList"));

        _2->addWidget(srcCbCountryList, 1, 1, 1, 1);

        srcLblCountry = new QLabel(srcGroupBox);
        srcLblCountry->setObjectName(QStringLiteral("srcLblCountry"));

        _2->addWidget(srcLblCountry, 1, 0, 1, 1);


        verticalLayout->addWidget(srcGroupBox);

        tgtGroupBox = new QGroupBox(translationSettingsDialog);
        tgtGroupBox->setObjectName(QStringLiteral("tgtGroupBox"));
        gridLayout = new QGridLayout(tgtGroupBox);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tgtCbLanguageList = new QComboBox(tgtGroupBox);
        tgtCbLanguageList->setObjectName(QStringLiteral("tgtCbLanguageList"));

        gridLayout->addWidget(tgtCbLanguageList, 0, 1, 1, 1);

        tgtLblLanguage = new QLabel(tgtGroupBox);
        tgtLblLanguage->setObjectName(QStringLiteral("tgtLblLanguage"));

        gridLayout->addWidget(tgtLblLanguage, 0, 0, 1, 1);

        tgtCbCountryList = new QComboBox(tgtGroupBox);
        tgtCbCountryList->setObjectName(QStringLiteral("tgtCbCountryList"));

        gridLayout->addWidget(tgtCbCountryList, 1, 1, 1, 1);

        tgtLblCountry = new QLabel(tgtGroupBox);
        tgtLblCountry->setObjectName(QStringLiteral("tgtLblCountry"));

        gridLayout->addWidget(tgtLblCountry, 1, 0, 1, 1);


        verticalLayout->addWidget(tgtGroupBox);

        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(translationSettingsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        srcLblLanguage->setBuddy(tgtCbLanguageList);
        tgtLblLanguage->setBuddy(tgtCbLanguageList);
#endif // QT_NO_SHORTCUT

        retranslateUi(translationSettingsDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), translationSettingsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(translationSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *translationSettingsDialog)
    {
        translationSettingsDialog->setWindowTitle(QString());
        srcGroupBox->setTitle(QApplication::translate("TranslationSettingsDialog", "Source language", 0));
        srcLblLanguage->setText(QApplication::translate("TranslationSettingsDialog", "Language", 0));
        srcLblCountry->setText(QApplication::translate("TranslationSettingsDialog", "Country/Region", 0));
        tgtGroupBox->setTitle(QApplication::translate("TranslationSettingsDialog", "Target language", 0));
        tgtLblLanguage->setText(QApplication::translate("TranslationSettingsDialog", "Language", 0));
        tgtLblCountry->setText(QApplication::translate("TranslationSettingsDialog", "Country/Region", 0));
    } // retranslateUi

};

namespace Ui {
    class TranslationSettingsDialog: public Ui_TranslationSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSLATIONSETTINGS_H
