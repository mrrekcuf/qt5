// screenplugin.cpp
//
// Copyright (C) 2010, 2009 Griffin I'Net, Inc.
//
// This file is licensed under the LGPL version 2.1, the text of which should
// be in the LICENSE.txt file, or alternately at this location:
// http://www.gnu.org/licenses/old-licenses/lgpl-2.1.txt
//
// DISCLAIMER: This software is released AS-IS with ABSOLUTELY NO WARRANTY OF
// ANY KIND.

#include "screenplugin.h"
#include "sdlscreen.h"

ScreenPlugin::ScreenPlugin() : QScreenDriverPlugin()
{
    // NOP
////qDebug("Video info: ");
    
}

QStringList ScreenPlugin::keys() const
{
    QStringList list;
////    list << QLatin1String("PalmPreSDLFb");
    list << QLatin1String("webos");
///qDebug("webos ");    
    return list;
}

QScreen* ScreenPlugin::create ( const QString& driver, int displayId )
{
////    if (driver.toLower() == QLatin1String("palmpresdlfb"))
    if (driver.toLower() == QLatin1String("webos"))
    {
////qDebug("Video info:11");    
        return (QScreen*)(new SDLScreen(driver, displayId));
    } ;
////qDebug("shit  info: ");
    return 0;
}

////Q_EXPORT_PLUGIN2(KindleFb, ScreenPlugin)
Q_EXPORT_PLUGIN2(webos, ScreenPlugin)
