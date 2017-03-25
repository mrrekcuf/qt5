// symbolbutton.cpp
//
// Copyright (C) 2010, 2009 Griffin I'Net, Inc.
//
// This file is licensed under the LGPL version 2.1, the text of which should
// be in the LICENSE.txt file, or alternately at this location:
// http://www.gnu.org/licenses/old-licenses/lgpl-2.1.txt
//
// DISCLAIMER: This software is released AS-IS with ABSOLUTELY NO WARRANTY OF
// ANY KIND.

#include "symbolbutton.h"

SymbolButton::SymbolButton ( const QString& label, int symbol, Qt::Key symbolKey, QWidget* parent )
        : QPushButton(parent)
{
    _symbol = symbol;
    _symbolKey = symbolKey;

    setText(label);
}

void SymbolButton::clicked()
{
    emit key(_symbol, _symbolKey);
}
