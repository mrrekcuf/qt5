// sdlscreenthread.h
//
// Copyright (C) 2010, 2009 Griffin I'Net, Inc.
//
// This file is licensed under the LGPL version 2.1, the text of which should
// be in the LICENSE.txt file, or alternately at this location:
// http://www.gnu.org/licenses/old-licenses/lgpl-2.1.txt
//
// DISCLAIMER: This software is released AS-IS with ABSOLUTELY NO WARRANTY OF
// ANY KIND.

#ifndef SDLSCREENTHREAD_H
#define SDLSCREENTHREAD_H

#include <QThread>

class SDLScreen_private;

class SDLScreenThread : public QThread
{
Q_OBJECT

public:
    SDLScreenThread ( SDLScreen_private* d);
    ~SDLScreenThread();

    void stop();

protected:
    virtual void run();

private:
    bool _quit;

    SDLScreen_private* _d;
};

#endif // SDLSCREENTHREAD_H
