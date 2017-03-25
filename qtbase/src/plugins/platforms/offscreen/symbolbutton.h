// symbolbutton.h
//
// Copyright (C) 2010, 2009 Griffin I'Net, Inc.
//
// This file is licensed under the LGPL version 2.1, the text of which should
// be in the LICENSE.txt file, or alternately at this location:
// http://www.gnu.org/licenses/old-licenses/lgpl-2.1.txt
//
// DISCLAIMER: This software is released AS-IS with ABSOLUTELY NO WARRANTY OF
// ANY KIND.

#ifndef SYMBOLBUTTON_H
#define SYMBOLBUTTON_H

#include <QPushButton>

class SymbolButton : public QPushButton
{
Q_OBJECT

public:
    SymbolButton ( const QString& label, int symbol, Qt::Key symbolKey, QWidget* parent = 0 );

signals:
    void key ( int, Qt::Key );

public slots:
    virtual void clicked();

private:
    int _symbol;
    Qt::Key _symbolKey;
};


#endif // SYMBOLBUTTON_H
