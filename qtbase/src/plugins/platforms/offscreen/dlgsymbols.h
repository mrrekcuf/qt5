// dlgsymbols.h
//
// Copyright (C) 2010, 2009 Griffin I'Net, Inc.
//
// This file is licensed under the LGPL version 2.1, the text of which should
// be in the LICENSE.txt file, or alternately at this location:
// http://www.gnu.org/licenses/old-licenses/lgpl-2.1.txt
//
// DISCLAIMER: This software is released AS-IS with ABSOLUTELY NO WARRANTY OF
// ANY KIND.

#ifndef DLGSYMBOLS_H
#define DLGSYMBOLS_H

#include <QWidget>

/////class SDLScreen;
class SDLScreen_private;

class dlgSymbols : public QWidget
{
Q_OBJECT
public:
////    dlgSymbols ( SDLScreen* screen, QWidget *parent = 0 );
    dlgSymbols ( SDLScreen_private* screen, QWidget *parent = 0 );
    virtual ~dlgSymbols();

signals:
    void hidden();

public slots:
    virtual void hide();
    virtual void show();
    virtual void key ( int, Qt::Key );
    virtual void mousePressEvent( QMouseEvent* e );
    virtual void mouseReleaseEvent( QMouseEvent* );

private:
/////    SDLScreen* _screen;
    SDLScreen_private* _screen;
    bool _grabbed;

    int _symbol;
    Qt::Key _symbolKey;
};


#endif // DLGSYMBOLS_H
