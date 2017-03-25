// palmprekeyboard_private.h
//
// Copyright (C) 2010, 2009 Griffin I'Net, Inc.
//
// This file is licensed under the LGPL version 2.1, the text of which should
// be in the LICENSE.txt file, or alternately at this location:
// http://www.gnu.org/licenses/old-licenses/lgpl-2.1.txt
//
// DISCLAIMER: This software is released AS-IS with ABSOLUTELY NO WARRANTY OF
// ANY KIND.

#ifndef PALMPREKEYBOARD_PRIVATE_H
#define PALMPREKEYBOARD_PRIVATE_H

#include <QSocketNotifier>

class PalmPreKeyboard;
class SDLScreen;
class dlgSymbols;

class PalmPreKeyboard_private : public QObject
{
    Q_OBJECT

public:
    enum PalmKeyState {
        Up,
        Down,
        Locked
    };

public:
    PalmPreKeyboard_private ( PalmPreKeyboard* keyboardHandler, SDLScreen* screen, bool showDebugInfo );
    virtual ~PalmPreKeyboard_private();

private slots:
    void activity ( int );
    void symbolDialogHidden();

public:
    PalmPreKeyboard* _keyboardHandler;
    SDLScreen* _screen;
    bool _showDebugInfo;

    dlgSymbols* _dlgSymbols;

    int _fd;
    QSocketNotifier* _sn;

    PalmKeyState _shift, _square, _symbol;
};


#endif // PALMPREKEYBOARD_PRIVATE_H
