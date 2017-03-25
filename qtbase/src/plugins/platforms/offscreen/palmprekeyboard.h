// palmprekeyboard.h
//
// Copyright (C) 2010, 2009 Griffin I'Net, Inc.
//
// This file is licensed under the LGPL version 2.1, the text of which should
// be in the LICENSE.txt file, or alternately at this location:
// http://www.gnu.org/licenses/old-licenses/lgpl-2.1.txt
//
// DISCLAIMER: This software is released AS-IS with ABSOLUTELY NO WARRANTY OF
// ANY KIND.

#ifndef PALMPREKEYBOARD_H
#define PALMPREKEYBOARD_H

//////#include <QWSKeyboardHandler>
/////#include <QEvdevKeyboardHandler>
#include <QSocketNotifier>

class PalmPreKeyboard_private;
class PalmPreMouse_private;
/////class SDLScreen;
class SDLScreen_private;


class PalmPreKeyboard : public QObject  //////QEvdevKeyboardHandler
{
    friend class PalmPreMouse_private;
/////    friend class SDLScreen;
    friend class SDLScreen_private ;
    
public:
    enum PalmKeys
    {
        Key_AtSign = 11,
        Key_Backspace = 14,
        Key_Q = 16,
        Key_W,
        Key_E,
        Key_R,
        Key_T,
        Key_Y,
        Key_U,
        Key_I,
        Key_O,
        Key_P,
        Key_Return = 28,
        Key_A = 30,
        Key_S,
        Key_D,
        Key_F,
        Key_G,
        Key_H,
        Key_J,
        Key_K,
        Key_L,
        Key_Shift = 42,
        Key_Z = 44,
        Key_X,
        Key_C,
        Key_V,
        Key_B,
        Key_N,
        Key_M,
        Key_Comma,
        Key_Period = 52,
        Key_Space = 57,
        Key_Square = 100,
        Key_Symbol = 246,
        Key_SquareMask = 1024,
        Key_UnicodeMask = 2048
    };

public:
/////    PalmPreKeyboard ( SDLScreen* screen, bool showDebugInfo );
    PalmPreKeyboard ( SDLScreen_private* screen, bool showDebugInfo );    
    virtual ~PalmPreKeyboard();

    PalmPreKeyboard_private* d;

protected:

};


#endif // PALMPREKEYBOARD_H
