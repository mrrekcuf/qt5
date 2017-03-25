// sdlscreen.h
//
// Copyright (C) 2010, 2009 Griffin I'Net, Inc.
//
// This file is licensed under the LGPL version 2.1, the text of which should
// be in the LICENSE.txt file, or alternately at this location:
// http://www.gnu.org/licenses/old-licenses/lgpl-2.1.txt
//
// DISCLAIMER: This software is released AS-IS with ABSOLUTELY NO WARRANTY OF
// ANY KIND.

#ifndef SDLSCREEN_H
#define SDLSCREEN_H

#include <QScreen>

class SDLScreen_private;
//////class PalmPreKeyboard_private;
//////class PalmPreMouse_private;

class SDLScreen : public QScreen
{
/////    friend class PalmPreKeyboard_private;
/////    friend class PalmPreMouse_private;

public:
    SDLScreen ( const QString& driver, int display_id );
    virtual ~SDLScreen();

    virtual bool initDevice();
    virtual void shutdownDevice();

    virtual bool connect ( const QString& displaySpec );
    virtual void disconnect();

    virtual void solidFill ( const QColor& color, const QRegion& region );
    virtual void blit ( const QImage& image, const QPoint& topLeft, const QRegion& region );

    virtual void setMode ( int width, int height, int depth );

protected:
    SDLScreen_private* d;
};


#endif // SDLSCREEN_H
