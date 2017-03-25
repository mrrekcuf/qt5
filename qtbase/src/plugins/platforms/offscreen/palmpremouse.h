// palmpremouse.h
//
// Copyright (C) 2010, 2009 Griffin I'Net, Inc.
//
// This file is licensed under the LGPL version 2.1, the text of which should
// be in the LICENSE.txt file, or alternately at this location:
// http://www.gnu.org/licenses/old-licenses/lgpl-2.1.txt
//
// DISCLAIMER: This software is released AS-IS with ABSOLUTELY NO WARRANTY OF
// ANY KIND.

#ifndef PALMPREMOUSE_H
#define PALMPREMOUSE_H

/////#include <QWSMouseHandler>

class PalmPreMouse_private;
//////class SDLScreen;
class SDLScreen_private;

class PalmPreMouse : public QObject /// QWSMouseHandler
{
////Q_OBJECT

public:
    PalmPreMouse ( SDLScreen_private* screen, bool showDebugInfo );
    virtual ~PalmPreMouse();

    virtual void suspend();
    virtual void resume();

    PalmPreMouse_private* d;

private:

};


#endif // PALMPREMOUSE_H
