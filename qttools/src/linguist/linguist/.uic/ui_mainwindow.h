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
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionExit;
    QAction *actionSave;
    QAction *actionSaveAs;
    QAction *actionRelease;
    QAction *actionPrint;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionSelectAll;
    QAction *actionFind;
    QAction *actionFindNext;
    QAction *actionPrevUnfinished;
    QAction *actionNextUnfinished;
    QAction *actionPrev;
    QAction *actionNext;
    QAction *actionDoneAndNext;
    QAction *actionBeginFromSource;
    QAction *actionAccelerators;
    QAction *actionEndingPunctuation;
    QAction *actionPhraseMatches;
    QAction *actionPlaceMarkerMatches;
    QAction *actionNewPhraseBook;
    QAction *actionOpenPhraseBook;
    QAction *actionResetSorting;
    QAction *actionDisplayGuesses;
    QAction *actionStatistics;
    QAction *actionManual;
    QAction *actionAbout;
    QAction *actionAboutQt;
    QAction *actionWhatsThis;
    QAction *actionSearchAndTranslate;
    QAction *actionBatchTranslation;
    QAction *actionReleaseAs;
    QAction *actionFile;
    QAction *actionEdit;
    QAction *actionTranslation;
    QAction *actionValidation;
    QAction *actionHelp;
    QAction *actionPreviewForm;
    QAction *actionTranslationFileSettings;
    QAction *actionAddToPhraseBook;
    QAction *actionOpenAux;
    QAction *actionSaveAll;
    QAction *actionReleaseAll;
    QAction *actionClose;
    QAction *actionCloseAll;
    QAction *actionLengthVariants;
    QAction *actionVisualizeWhitespace;
    QAction *actionIncreaseZoom;
    QAction *actionDecreaseZoom;
    QAction *actionResetZoomToDefault;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuPhrases;
    QMenu *menuClosePhraseBook;
    QMenu *menuEditPhraseBook;
    QMenu *menuPrintPhraseBook;
    QMenu *menuValidation;
    QMenu *menuView;
    QMenu *menuViewViews;
    QMenu *menuToolbars;
    QMenu *menuZoom;
    QMenu *menuHelp;
    QMenu *menuTranslation;
    QMenu *menuFile;
    QMenu *menuRecentlyOpenedFiles;
    QMenu *menuEdit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(673, 461);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionExit->setMenuRole(QAction::QuitRole);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSaveAs = new QAction(MainWindow);
        actionSaveAs->setObjectName(QStringLiteral("actionSaveAs"));
        actionRelease = new QAction(MainWindow);
        actionRelease->setObjectName(QStringLiteral("actionRelease"));
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QStringLiteral("actionPrint"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        actionUndo->setEnabled(false);
        actionUndo->setMenuRole(QAction::NoRole);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        actionRedo->setEnabled(false);
        actionRedo->setMenuRole(QAction::NoRole);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        actionCut->setEnabled(false);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        actionCopy->setEnabled(false);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        actionPaste->setEnabled(false);
        actionSelectAll = new QAction(MainWindow);
        actionSelectAll->setObjectName(QStringLiteral("actionSelectAll"));
        actionSelectAll->setEnabled(false);
        actionFind = new QAction(MainWindow);
        actionFind->setObjectName(QStringLiteral("actionFind"));
        actionFind->setEnabled(false);
        actionFind->setMenuRole(QAction::NoRole);
        actionFindNext = new QAction(MainWindow);
        actionFindNext->setObjectName(QStringLiteral("actionFindNext"));
        actionFindNext->setEnabled(false);
        actionFindNext->setMenuRole(QAction::NoRole);
        actionPrevUnfinished = new QAction(MainWindow);
        actionPrevUnfinished->setObjectName(QStringLiteral("actionPrevUnfinished"));
        actionPrevUnfinished->setMenuRole(QAction::NoRole);
        actionNextUnfinished = new QAction(MainWindow);
        actionNextUnfinished->setObjectName(QStringLiteral("actionNextUnfinished"));
        actionNextUnfinished->setMenuRole(QAction::NoRole);
        actionPrev = new QAction(MainWindow);
        actionPrev->setObjectName(QStringLiteral("actionPrev"));
        actionPrev->setMenuRole(QAction::NoRole);
        actionNext = new QAction(MainWindow);
        actionNext->setObjectName(QStringLiteral("actionNext"));
        actionNext->setMenuRole(QAction::NoRole);
        actionDoneAndNext = new QAction(MainWindow);
        actionDoneAndNext->setObjectName(QStringLiteral("actionDoneAndNext"));
        actionDoneAndNext->setEnabled(false);
        actionDoneAndNext->setMenuRole(QAction::NoRole);
        actionBeginFromSource = new QAction(MainWindow);
        actionBeginFromSource->setObjectName(QStringLiteral("actionBeginFromSource"));
        actionBeginFromSource->setEnabled(false);
        actionBeginFromSource->setMenuRole(QAction::NoRole);
        actionAccelerators = new QAction(MainWindow);
        actionAccelerators->setObjectName(QStringLiteral("actionAccelerators"));
        actionAccelerators->setCheckable(true);
        actionAccelerators->setMenuRole(QAction::NoRole);
        actionEndingPunctuation = new QAction(MainWindow);
        actionEndingPunctuation->setObjectName(QStringLiteral("actionEndingPunctuation"));
        actionEndingPunctuation->setCheckable(true);
        actionEndingPunctuation->setMenuRole(QAction::NoRole);
        actionPhraseMatches = new QAction(MainWindow);
        actionPhraseMatches->setObjectName(QStringLiteral("actionPhraseMatches"));
        actionPhraseMatches->setCheckable(true);
        actionPhraseMatches->setMenuRole(QAction::NoRole);
        actionPlaceMarkerMatches = new QAction(MainWindow);
        actionPlaceMarkerMatches->setObjectName(QStringLiteral("actionPlaceMarkerMatches"));
        actionPlaceMarkerMatches->setCheckable(true);
        actionPlaceMarkerMatches->setMenuRole(QAction::NoRole);
        actionNewPhraseBook = new QAction(MainWindow);
        actionNewPhraseBook->setObjectName(QStringLiteral("actionNewPhraseBook"));
        actionNewPhraseBook->setMenuRole(QAction::NoRole);
        actionOpenPhraseBook = new QAction(MainWindow);
        actionOpenPhraseBook->setObjectName(QStringLiteral("actionOpenPhraseBook"));
        actionOpenPhraseBook->setMenuRole(QAction::NoRole);
        actionResetSorting = new QAction(MainWindow);
        actionResetSorting->setObjectName(QStringLiteral("actionResetSorting"));
        actionResetSorting->setCheckable(false);
        actionResetSorting->setChecked(false);
        actionResetSorting->setMenuRole(QAction::NoRole);
        actionDisplayGuesses = new QAction(MainWindow);
        actionDisplayGuesses->setObjectName(QStringLiteral("actionDisplayGuesses"));
        actionDisplayGuesses->setCheckable(true);
        actionDisplayGuesses->setChecked(true);
        actionDisplayGuesses->setMenuRole(QAction::NoRole);
        actionStatistics = new QAction(MainWindow);
        actionStatistics->setObjectName(QStringLiteral("actionStatistics"));
        actionStatistics->setCheckable(true);
        actionStatistics->setChecked(true);
        actionStatistics->setMenuRole(QAction::NoRole);
        actionManual = new QAction(MainWindow);
        actionManual->setObjectName(QStringLiteral("actionManual"));
        actionManual->setMenuRole(QAction::NoRole);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAbout->setMenuRole(QAction::AboutRole);
        actionAboutQt = new QAction(MainWindow);
        actionAboutQt->setObjectName(QStringLiteral("actionAboutQt"));
        actionAboutQt->setMenuRole(QAction::AboutQtRole);
        actionWhatsThis = new QAction(MainWindow);
        actionWhatsThis->setObjectName(QStringLiteral("actionWhatsThis"));
        actionWhatsThis->setCheckable(false);
        actionWhatsThis->setChecked(false);
        actionWhatsThis->setMenuRole(QAction::NoRole);
        actionSearchAndTranslate = new QAction(MainWindow);
        actionSearchAndTranslate->setObjectName(QStringLiteral("actionSearchAndTranslate"));
        actionSearchAndTranslate->setEnabled(false);
        actionSearchAndTranslate->setMenuRole(QAction::NoRole);
        actionBatchTranslation = new QAction(MainWindow);
        actionBatchTranslation->setObjectName(QStringLiteral("actionBatchTranslation"));
        actionBatchTranslation->setEnabled(false);
        actionBatchTranslation->setMenuRole(QAction::NoRole);
        actionReleaseAs = new QAction(MainWindow);
        actionReleaseAs->setObjectName(QStringLiteral("actionReleaseAs"));
        actionFile = new QAction(MainWindow);
        actionFile->setObjectName(QStringLiteral("actionFile"));
        actionFile->setCheckable(true);
        actionFile->setChecked(true);
        actionEdit = new QAction(MainWindow);
        actionEdit->setObjectName(QStringLiteral("actionEdit"));
        actionEdit->setCheckable(true);
        actionEdit->setChecked(true);
        actionTranslation = new QAction(MainWindow);
        actionTranslation->setObjectName(QStringLiteral("actionTranslation"));
        actionTranslation->setCheckable(true);
        actionTranslation->setChecked(true);
        actionValidation = new QAction(MainWindow);
        actionValidation->setObjectName(QStringLiteral("actionValidation"));
        actionValidation->setCheckable(true);
        actionValidation->setChecked(true);
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        actionHelp->setCheckable(true);
        actionHelp->setChecked(true);
        actionPreviewForm = new QAction(MainWindow);
        actionPreviewForm->setObjectName(QStringLiteral("actionPreviewForm"));
        actionPreviewForm->setEnabled(false);
        actionPreviewForm->setMenuRole(QAction::NoRole);
        actionTranslationFileSettings = new QAction(MainWindow);
        actionTranslationFileSettings->setObjectName(QStringLiteral("actionTranslationFileSettings"));
        actionTranslationFileSettings->setEnabled(false);
        actionTranslationFileSettings->setMenuRole(QAction::NoRole);
        actionAddToPhraseBook = new QAction(MainWindow);
        actionAddToPhraseBook->setObjectName(QStringLiteral("actionAddToPhraseBook"));
        actionAddToPhraseBook->setEnabled(false);
        actionOpenAux = new QAction(MainWindow);
        actionOpenAux->setObjectName(QStringLiteral("actionOpenAux"));
        actionSaveAll = new QAction(MainWindow);
        actionSaveAll->setObjectName(QStringLiteral("actionSaveAll"));
        actionReleaseAll = new QAction(MainWindow);
        actionReleaseAll->setObjectName(QStringLiteral("actionReleaseAll"));
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        actionCloseAll = new QAction(MainWindow);
        actionCloseAll->setObjectName(QStringLiteral("actionCloseAll"));
        actionLengthVariants = new QAction(MainWindow);
        actionLengthVariants->setObjectName(QStringLiteral("actionLengthVariants"));
        actionLengthVariants->setCheckable(true);
        actionVisualizeWhitespace = new QAction(MainWindow);
        actionVisualizeWhitespace->setObjectName(QStringLiteral("actionVisualizeWhitespace"));
        actionVisualizeWhitespace->setCheckable(true);
        actionIncreaseZoom = new QAction(MainWindow);
        actionIncreaseZoom->setObjectName(QStringLiteral("actionIncreaseZoom"));
        actionDecreaseZoom = new QAction(MainWindow);
        actionDecreaseZoom->setObjectName(QStringLiteral("actionDecreaseZoom"));
        actionResetZoomToDefault = new QAction(MainWindow);
        actionResetZoomToDefault->setObjectName(QStringLiteral("actionResetZoomToDefault"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 673, 28));
        menuPhrases = new QMenu(menubar);
        menuPhrases->setObjectName(QStringLiteral("menuPhrases"));
        menuClosePhraseBook = new QMenu(menuPhrases);
        menuClosePhraseBook->setObjectName(QStringLiteral("menuClosePhraseBook"));
        menuEditPhraseBook = new QMenu(menuPhrases);
        menuEditPhraseBook->setObjectName(QStringLiteral("menuEditPhraseBook"));
        menuPrintPhraseBook = new QMenu(menuPhrases);
        menuPrintPhraseBook->setObjectName(QStringLiteral("menuPrintPhraseBook"));
        menuValidation = new QMenu(menubar);
        menuValidation->setObjectName(QStringLiteral("menuValidation"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuViewViews = new QMenu(menuView);
        menuViewViews->setObjectName(QStringLiteral("menuViewViews"));
        menuToolbars = new QMenu(menuView);
        menuToolbars->setObjectName(QStringLiteral("menuToolbars"));
        menuZoom = new QMenu(menuView);
        menuZoom->setObjectName(QStringLiteral("menuZoom"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuTranslation = new QMenu(menubar);
        menuTranslation->setObjectName(QStringLiteral("menuTranslation"));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuRecentlyOpenedFiles = new QMenu(menuFile);
        menuRecentlyOpenedFiles->setObjectName(QStringLiteral("menuRecentlyOpenedFiles"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuTranslation->menuAction());
        menubar->addAction(menuValidation->menuAction());
        menubar->addAction(menuPhrases->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuPhrases->addAction(actionNewPhraseBook);
        menuPhrases->addAction(actionOpenPhraseBook);
        menuPhrases->addAction(menuClosePhraseBook->menuAction());
        menuPhrases->addSeparator();
        menuPhrases->addAction(menuEditPhraseBook->menuAction());
        menuPhrases->addAction(menuPrintPhraseBook->menuAction());
        menuPhrases->addAction(actionAddToPhraseBook);
        menuValidation->addAction(actionAccelerators);
        menuValidation->addAction(actionEndingPunctuation);
        menuValidation->addAction(actionPhraseMatches);
        menuValidation->addAction(actionPlaceMarkerMatches);
        menuView->addAction(actionResetSorting);
        menuView->addAction(actionDisplayGuesses);
        menuView->addAction(actionStatistics);
        menuView->addAction(actionLengthVariants);
        menuView->addAction(actionVisualizeWhitespace);
        menuView->addSeparator();
        menuView->addAction(menuZoom->menuAction());
        menuView->addSeparator();
        menuView->addAction(menuToolbars->menuAction());
        menuView->addAction(menuViewViews->menuAction());
        menuZoom->addAction(actionIncreaseZoom);
        menuZoom->addAction(actionDecreaseZoom);
        menuZoom->addSeparator();
        menuZoom->addAction(actionResetZoomToDefault);
        menuHelp->addAction(actionManual);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAboutQt);
        menuHelp->addAction(actionWhatsThis);
        menuTranslation->addAction(actionPrevUnfinished);
        menuTranslation->addAction(actionNextUnfinished);
        menuTranslation->addAction(actionPrev);
        menuTranslation->addAction(actionNext);
        menuTranslation->addAction(actionDoneAndNext);
        menuTranslation->addAction(actionBeginFromSource);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionOpenAux);
        menuFile->addAction(menuRecentlyOpenedFiles->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionSaveAll);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSaveAs);
        menuFile->addAction(actionReleaseAll);
        menuFile->addAction(actionRelease);
        menuFile->addAction(actionReleaseAs);
        menuFile->addSeparator();
        menuFile->addAction(actionPrint);
        menuFile->addSeparator();
        menuFile->addAction(actionCloseAll);
        menuFile->addAction(actionClose);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionSelectAll);
        menuEdit->addSeparator();
        menuEdit->addAction(actionFind);
        menuEdit->addAction(actionFindNext);
        menuEdit->addAction(actionSearchAndTranslate);
        menuEdit->addAction(actionBatchTranslation);
        menuEdit->addAction(actionTranslationFileSettings);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "&Open...", 0));
#ifndef QT_NO_WHATSTHIS
        actionOpen->setWhatsThis(QApplication::translate("MainWindow", "Open a Qt translation source file (TS file) for editing", 0));
#endif // QT_NO_WHATSTHIS
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        actionExit->setText(QApplication::translate("MainWindow", "E&xit", 0));
#ifndef QT_NO_STATUSTIP
        actionExit->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionExit->setWhatsThis(QApplication::translate("MainWindow", "Close this window and exit.", 0));
#endif // QT_NO_WHATSTHIS
        actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0));
#ifndef QT_NO_WHATSTHIS
        actionSave->setWhatsThis(QApplication::translate("MainWindow", "Save changes made to this Qt translation source file", 0));
#endif // QT_NO_WHATSTHIS
        actionSaveAs->setText(QApplication::translate("MainWindow", "Save &As...", 0));
        actionSaveAs->setIconText(QApplication::translate("MainWindow", "Save As...", 0));
#ifndef QT_NO_WHATSTHIS
        actionSaveAs->setWhatsThis(QApplication::translate("MainWindow", "Save changes made to this Qt translation source file into a new file.", 0));
#endif // QT_NO_WHATSTHIS
        actionRelease->setText(QApplication::translate("MainWindow", "Release", 0));
#ifndef QT_NO_WHATSTHIS
        actionRelease->setWhatsThis(QApplication::translate("MainWindow", "Create a Qt message file suitable for released applications from the current message file.", 0));
#endif // QT_NO_WHATSTHIS
        actionPrint->setText(QApplication::translate("MainWindow", "&Print...", 0));
#ifndef QT_NO_WHATSTHIS
        actionPrint->setWhatsThis(QApplication::translate("MainWindow", "Print a list of all the translation units in the current translation source file.", 0));
#endif // QT_NO_WHATSTHIS
        actionPrint->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", 0));
        actionUndo->setText(QApplication::translate("MainWindow", "&Undo", 0));
#ifndef QT_NO_WHATSTHIS
        actionUndo->setWhatsThis(QApplication::translate("MainWindow", "Undo the last editing operation performed on the current translation.", 0));
#endif // QT_NO_WHATSTHIS
        actionUndo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", 0));
        actionRedo->setText(QApplication::translate("MainWindow", "&Redo", 0));
#ifndef QT_NO_WHATSTHIS
        actionRedo->setWhatsThis(QApplication::translate("MainWindow", "Redo an undone editing operation performed on the translation.", 0));
#endif // QT_NO_WHATSTHIS
        actionRedo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Y", 0));
        actionCut->setText(QApplication::translate("MainWindow", "Cu&t", 0));
#ifndef QT_NO_WHATSTHIS
        actionCut->setWhatsThis(QApplication::translate("MainWindow", "Copy the selected translation text to the clipboard and deletes it.", 0));
#endif // QT_NO_WHATSTHIS
        actionCut->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", 0));
        actionCopy->setText(QApplication::translate("MainWindow", "&Copy", 0));
#ifndef QT_NO_WHATSTHIS
        actionCopy->setWhatsThis(QApplication::translate("MainWindow", "Copy the selected translation text to the clipboard.", 0));
#endif // QT_NO_WHATSTHIS
        actionCopy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0));
        actionPaste->setText(QApplication::translate("MainWindow", "&Paste", 0));
#ifndef QT_NO_WHATSTHIS
        actionPaste->setWhatsThis(QApplication::translate("MainWindow", "Paste the clipboard text into the translation.", 0));
#endif // QT_NO_WHATSTHIS
        actionPaste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", 0));
        actionSelectAll->setText(QApplication::translate("MainWindow", "Select &All", 0));
#ifndef QT_NO_WHATSTHIS
        actionSelectAll->setWhatsThis(QApplication::translate("MainWindow", "Select the whole translation text.", 0));
#endif // QT_NO_WHATSTHIS
        actionSelectAll->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", 0));
        actionFind->setText(QApplication::translate("MainWindow", "&Find...", 0));
#ifndef QT_NO_WHATSTHIS
        actionFind->setWhatsThis(QApplication::translate("MainWindow", "Search for some text in the translation source file.", 0));
#endif // QT_NO_WHATSTHIS
        actionFind->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", 0));
        actionFindNext->setText(QApplication::translate("MainWindow", "Find &Next", 0));
#ifndef QT_NO_WHATSTHIS
        actionFindNext->setWhatsThis(QApplication::translate("MainWindow", "Continue the search where it was left.", 0));
#endif // QT_NO_WHATSTHIS
        actionFindNext->setShortcut(QApplication::translate("MainWindow", "F3", 0));
        actionPrevUnfinished->setText(QApplication::translate("MainWindow", "&Prev Unfinished", 0));
#ifndef QT_NO_TOOLTIP
        actionPrevUnfinished->setToolTip(QApplication::translate("MainWindow", "Previous unfinished item", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        actionPrevUnfinished->setWhatsThis(QApplication::translate("MainWindow", "Move to the previous unfinished item.", 0));
#endif // QT_NO_WHATSTHIS
        actionPrevUnfinished->setShortcut(QApplication::translate("MainWindow", "Ctrl+K", 0));
        actionNextUnfinished->setText(QApplication::translate("MainWindow", "&Next Unfinished", 0));
#ifndef QT_NO_TOOLTIP
        actionNextUnfinished->setToolTip(QApplication::translate("MainWindow", "Next unfinished item", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        actionNextUnfinished->setWhatsThis(QApplication::translate("MainWindow", "Move to the next unfinished item.", 0));
#endif // QT_NO_WHATSTHIS
        actionNextUnfinished->setShortcut(QApplication::translate("MainWindow", "Ctrl+J", 0));
        actionPrev->setText(QApplication::translate("MainWindow", "P&rev", 0));
#ifndef QT_NO_TOOLTIP
        actionPrev->setToolTip(QApplication::translate("MainWindow", "Move to previous item", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        actionPrev->setWhatsThis(QApplication::translate("MainWindow", "Move to the previous item.", 0));
#endif // QT_NO_WHATSTHIS
        actionPrev->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+K", 0));
        actionNext->setText(QApplication::translate("MainWindow", "Ne&xt", 0));
#ifndef QT_NO_TOOLTIP
        actionNext->setToolTip(QApplication::translate("MainWindow", "Next item", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        actionNext->setWhatsThis(QApplication::translate("MainWindow", "Move to the next item.", 0));
#endif // QT_NO_WHATSTHIS
        actionNext->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+J", 0));
        actionDoneAndNext->setText(QApplication::translate("MainWindow", "&Done and Next", 0));
#ifndef QT_NO_TOOLTIP
        actionDoneAndNext->setToolTip(QApplication::translate("MainWindow", "Mark item as done and move to the next unfinished item", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        actionDoneAndNext->setWhatsThis(QApplication::translate("MainWindow", "Mark this item as done and move to the next unfinished item.", 0));
#endif // QT_NO_WHATSTHIS
        actionBeginFromSource->setText(QApplication::translate("MainWindow", "Copy from source text", 0));
        actionBeginFromSource->setIconText(QApplication::translate("MainWindow", "Copy from source text", 0));
#ifndef QT_NO_TOOLTIP
        actionBeginFromSource->setToolTip(QApplication::translate("MainWindow", "Copies the source text into the translation field", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        actionBeginFromSource->setWhatsThis(QApplication::translate("MainWindow", "Copies the source text into the translation field.", 0));
#endif // QT_NO_WHATSTHIS
        actionBeginFromSource->setShortcut(QApplication::translate("MainWindow", "Ctrl+B", 0));
        actionAccelerators->setText(QApplication::translate("MainWindow", "&Accelerators", 0));
#ifndef QT_NO_TOOLTIP
        actionAccelerators->setToolTip(QApplication::translate("MainWindow", "Toggle the validity check of accelerators", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        actionAccelerators->setWhatsThis(QApplication::translate("MainWindow", "Toggle the validity check of accelerators, i.e. whether the number of ampersands in the source and translation text is the same. If the check fails, a message is shown in the warnings window.", 0));
#endif // QT_NO_WHATSTHIS
        actionEndingPunctuation->setText(QApplication::translate("MainWindow", "&Ending Punctuation", 0));
#ifndef QT_NO_TOOLTIP
        actionEndingPunctuation->setToolTip(QApplication::translate("MainWindow", "Toggle the validity check of ending punctuation", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        actionEndingPunctuation->setWhatsThis(QApplication::translate("MainWindow", "Toggle the validity check of ending punctuation. If the check fails, a message is shown in the warnings window.", 0));
#endif // QT_NO_WHATSTHIS
        actionPhraseMatches->setText(QApplication::translate("MainWindow", "&Phrase matches", 0));
#ifndef QT_NO_TOOLTIP
        actionPhraseMatches->setToolTip(QApplication::translate("MainWindow", "Toggle checking that phrase suggestions are used", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        actionPhraseMatches->setWhatsThis(QApplication::translate("MainWindow", "Toggle checking that phrase suggestions are used. If the check fails, a message is shown in the warnings window.", 0));
#endif // QT_NO_WHATSTHIS
        actionPlaceMarkerMatches->setText(QApplication::translate("MainWindow", "Place &Marker Matches", 0));
#ifndef QT_NO_TOOLTIP
        actionPlaceMarkerMatches->setToolTip(QApplication::translate("MainWindow", "Toggle the validity check of place markers", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        actionPlaceMarkerMatches->setWhatsThis(QApplication::translate("MainWindow", "Toggle the validity check of place markers, i.e. whether %1, %2, ... are used consistently in the source text and translation text. If the check fails, a message is shown in the warnings window.", 0));
#endif // QT_NO_WHATSTHIS
        actionNewPhraseBook->setText(QApplication::translate("MainWindow", "&New Phrase Book...", 0));
#ifndef QT_NO_WHATSTHIS
        actionNewPhraseBook->setWhatsThis(QApplication::translate("MainWindow", "Create a new phrase book.", 0));
#endif // QT_NO_WHATSTHIS
        actionNewPhraseBook->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        actionOpenPhraseBook->setText(QApplication::translate("MainWindow", "&Open Phrase Book...", 0));
#ifndef QT_NO_WHATSTHIS
        actionOpenPhraseBook->setWhatsThis(QApplication::translate("MainWindow", "Open a phrase book to assist translation.", 0));
#endif // QT_NO_WHATSTHIS
        actionOpenPhraseBook->setShortcut(QApplication::translate("MainWindow", "Ctrl+H", 0));
        actionResetSorting->setText(QApplication::translate("MainWindow", "&Reset Sorting", 0));
#ifndef QT_NO_WHATSTHIS
        actionResetSorting->setWhatsThis(QApplication::translate("MainWindow", "Sort the items back in the same order as in the message file.", 0));
#endif // QT_NO_WHATSTHIS
        actionDisplayGuesses->setText(QApplication::translate("MainWindow", "&Display guesses", 0));
#ifndef QT_NO_WHATSTHIS
        actionDisplayGuesses->setWhatsThis(QApplication::translate("MainWindow", "Set whether or not to display translation guesses.", 0));
#endif // QT_NO_WHATSTHIS
        actionStatistics->setText(QApplication::translate("MainWindow", "&Statistics", 0));
#ifndef QT_NO_WHATSTHIS
        actionStatistics->setWhatsThis(QApplication::translate("MainWindow", "Display translation statistics.", 0));
#endif // QT_NO_WHATSTHIS
        actionManual->setText(QApplication::translate("MainWindow", "&Manual", 0));
#ifndef QT_NO_WHATSTHIS
        actionManual->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        actionManual->setShortcut(QApplication::translate("MainWindow", "F1", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About Qt Linguist", 0));
        actionAboutQt->setText(QApplication::translate("MainWindow", "About Qt", 0));
#ifndef QT_NO_WHATSTHIS
        actionAboutQt->setWhatsThis(QApplication::translate("MainWindow", "Display information about the Qt toolkit by Digia.", 0));
#endif // QT_NO_WHATSTHIS
        actionWhatsThis->setText(QApplication::translate("MainWindow", "&What's This?", 0));
        actionWhatsThis->setIconText(QApplication::translate("MainWindow", "What's This?", 0));
#ifndef QT_NO_TOOLTIP
        actionWhatsThis->setToolTip(QApplication::translate("MainWindow", "What's This?", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        actionWhatsThis->setWhatsThis(QApplication::translate("MainWindow", "Enter What's This? mode.", 0));
#endif // QT_NO_WHATSTHIS
        actionWhatsThis->setShortcut(QApplication::translate("MainWindow", "Shift+F1", 0));
        actionSearchAndTranslate->setText(QApplication::translate("MainWindow", "&Search And Translate...", 0));
#ifndef QT_NO_WHATSTHIS
        actionSearchAndTranslate->setWhatsThis(QApplication::translate("MainWindow", "Replace the translation on all entries that matches the search source text.", 0));
#endif // QT_NO_WHATSTHIS
        actionBatchTranslation->setText(QApplication::translate("MainWindow", "&Batch Translation...", 0));
#ifndef QT_NO_WHATSTHIS
        actionBatchTranslation->setWhatsThis(QApplication::translate("MainWindow", "Batch translate all entries using the information in the phrase books.", 0));
#endif // QT_NO_WHATSTHIS
        actionReleaseAs->setText(QApplication::translate("MainWindow", "Release As...", 0));
        actionReleaseAs->setIconText(QApplication::translate("MainWindow", "Release As...", 0));
#ifndef QT_NO_WHATSTHIS
        actionReleaseAs->setWhatsThis(QApplication::translate("MainWindow", "Create a Qt message file suitable for released applications from the current message file. The filename will automatically be determined from the name of the TS file.", 0));
#endif // QT_NO_WHATSTHIS
        actionFile->setText(QApplication::translate("MainWindow", "File", 0));
        actionEdit->setText(QApplication::translate("MainWindow", "Edit", 0));
        actionTranslation->setText(QApplication::translate("MainWindow", "Translation", 0));
        actionValidation->setText(QApplication::translate("MainWindow", "Validation", 0));
        actionHelp->setText(QApplication::translate("MainWindow", "Help", 0));
        actionPreviewForm->setText(QApplication::translate("MainWindow", "Open/Refresh Form &Preview", 0));
        actionPreviewForm->setIconText(QApplication::translate("MainWindow", "Form Preview Tool", 0));
#ifndef QT_NO_TOOLTIP
        actionPreviewForm->setToolTip(QApplication::translate("MainWindow", "Form Preview Tool", 0));
#endif // QT_NO_TOOLTIP
        actionPreviewForm->setShortcut(QApplication::translate("MainWindow", "F5", 0));
        actionTranslationFileSettings->setText(QApplication::translate("MainWindow", "Translation File &Settings...", 0));
        actionAddToPhraseBook->setText(QApplication::translate("MainWindow", "&Add to Phrase Book", 0));
        actionAddToPhraseBook->setShortcut(QApplication::translate("MainWindow", "Ctrl+T", 0));
        actionOpenAux->setText(QApplication::translate("MainWindow", "Open Read-O&nly...", 0));
        actionSaveAll->setText(QApplication::translate("MainWindow", "&Save All", 0));
        actionSaveAll->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        actionReleaseAll->setText(QApplication::translate("MainWindow", "&Release All", 0));
        actionClose->setText(QApplication::translate("MainWindow", "Close", 0));
        actionCloseAll->setText(QApplication::translate("MainWindow", "&Close All", 0));
        actionCloseAll->setShortcut(QApplication::translate("MainWindow", "Ctrl+W", 0));
        actionLengthVariants->setText(QApplication::translate("MainWindow", "Length Variants", 0));
        actionVisualizeWhitespace->setText(QApplication::translate("MainWindow", "Visualize whitespace", 0));
#ifndef QT_NO_TOOLTIP
        actionVisualizeWhitespace->setToolTip(QApplication::translate("MainWindow", "Toggle visualize whitespace in editors", 0));
#endif // QT_NO_TOOLTIP
        actionIncreaseZoom->setText(QApplication::translate("MainWindow", "Increase", 0));
        actionIncreaseZoom->setShortcut(QApplication::translate("MainWindow", "Ctrl++", 0));
        actionDecreaseZoom->setText(QApplication::translate("MainWindow", "Decrease", 0));
        actionDecreaseZoom->setShortcut(QApplication::translate("MainWindow", "Ctrl+-", 0));
        actionResetZoomToDefault->setText(QApplication::translate("MainWindow", "Reset to default", 0));
        actionResetZoomToDefault->setShortcut(QApplication::translate("MainWindow", "Ctrl+0", 0));
        menuPhrases->setTitle(QApplication::translate("MainWindow", "&Phrases", 0));
        menuClosePhraseBook->setTitle(QApplication::translate("MainWindow", "&Close Phrase Book", 0));
        menuEditPhraseBook->setTitle(QApplication::translate("MainWindow", "&Edit Phrase Book", 0));
        menuPrintPhraseBook->setTitle(QApplication::translate("MainWindow", "&Print Phrase Book", 0));
        menuValidation->setTitle(QApplication::translate("MainWindow", "V&alidation", 0));
        menuView->setTitle(QApplication::translate("MainWindow", "&View", 0));
        menuViewViews->setTitle(QApplication::translate("MainWindow", "Vie&ws", 0));
        menuToolbars->setTitle(QApplication::translate("MainWindow", "&Toolbars", 0));
        menuZoom->setTitle(QApplication::translate("MainWindow", "&Zoom", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "&Help", 0));
        menuTranslation->setTitle(QApplication::translate("MainWindow", "&Translation", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", 0));
        menuRecentlyOpenedFiles->setTitle(QApplication::translate("MainWindow", "Recently Opened &Files", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow", "&Edit", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
