// palmpremouse_private.h
//
// Copyright (C) 2010, 2009 Griffin I'Net, Inc.
//
// This file is licensed under the LGPL version 2.1, the text of which should
// be in the LICENSE.txt file, or alternately at this location:
// http://www.gnu.org/licenses/old-licenses/lgpl-2.1.txt
//
// DISCLAIMER: This software is released AS-IS with ABSOLUTELY NO WARRANTY OF
// ANY KIND.

#ifndef PALMPREMOUSE_PRIVATE_H
#define PALMPREMOUSE_PRIVATE_H

#include <QSocketNotifier>

class PalmPreMouse;
class SDLScreen;

class PalmPreMouse_private : public QObject
{
Q_OBJECT

public:
    PalmPreMouse_private ( PalmPreMouse* mouseHandler, SDLScreen* screen, bool showDebugInfo );

    PalmPreMouse* _mouseHandler;
    SDLScreen* _screen;
    bool _showDebugInfo;

    bool _buttonDown;

public slots:
      void sdlMouseEvent ( int code, int x, int y, int buttons );
};


#endif // PALMPREMOUSE_PRIVATE_H
