#!/bin/bash

package=`cat package.qttest.txt | grep -v '#'`
echo package $package.pro

export PROJECT=$package
export STAGING_DIR=./STAGING/com.kcuf.app.$PROJECT
export RUNTIME=/opt/qt.palm/runtime

cp src/application qttest

rm -rf ./STAGING/
rm *.ipk

mkdir -p $STAGING_DIR
mkdir -p $STAGING_DIR/runtime/lib
mkdir -p $STAGING_DIR/runtime/lib/fonts
mkdir -p $STAGING_DIR/runtime/plugins

mkdir -p $STAGING_DIR/runtime/qml


cp -Rf ./fonts/*  $STAGING_DIR/runtime/lib/fonts

cp -Rf $RUNTIME/lib/libQt5Core.so.5.5.1  $STAGING_DIR/runtime/lib/libQt5Core.so.5
cp -Rf $RUNTIME/lib/libQt5Widgets.so.5.5.1  $STAGING_DIR/runtime/lib/libQt5Widgets.so.5
cp -Rf $RUNTIME/lib/libQt5Gui.so.5.5.1   $STAGING_DIR/runtime/lib/libQt5Gui.so.5
cp -Rf $RUNTIME/lib/libQt5Network.so.5.5.1 $STAGING_DIR/runtime/lib/libQt5Network.so.5

cp -Rf $RUNTIME/lib/libQt5Qml.so.5.5.1 $STAGING_DIR/runtime/lib/libQt5Qml.so.5
cp -Rf $RUNTIME/lib/libQt5Test.so.5.5.1 $STAGING_DIR/runtime/lib/libQt5Test.so.5

cp -Rf $RUNTIME/lib/libQt5Quick.so.5.5.1 $STAGING_DIR/runtime/lib/libQt5Quick.so.5
cp -Rf $RUNTIME/lib/libQt5QuickTest.so.5.5.1 $STAGING_DIR/runtime/lib/libQt5QuickTest.so.5



cp -Rf $RUNTIME/lib/libQt5Designer.so.5.5.1 $STAGING_DIR/runtime/lib/libQt5Designer.so.5
cp -Rf $RUNTIME/lib/libQt5DesignerComponents.so.5.5.1  $STAGING_DIR/runtime/lib/libQt5DesignerComponents.so.5

cp -Rf $RUNTIME/lib/libQt5Svg.so.5.5.1 $STAGING_DIR/runtime/lib/libQt5Svg.so.5

cp -Rf $RUNTIME/lib/libQt5Script.so.5.5.1 $STAGING_DIR/runtime/lib/libQt5Script.so.5
cp -Rf $RUNTIME/lib/libQt5ScriptTools.so.5.5.1 $STAGING_DIR/runtime/lib/libQt5ScriptTools.so.5

cp -Rf $RUNTIME/lib/libQt5CLucene.so.5.5.1 $STAGING_DIR/runtime/lib/libQt5CLucene.so.5

cp -Rf $RUNTIME/lib/libQt5Multimedia.so.5.5.1 $STAGING_DIR/runtime/lib/libQt5Multimedia.so.5
cp -Rf $RUNTIME/lib/libQt5MultimediaWidgets.so.5.5.1  $STAGING_DIR/runtime/lib/libQt5MultimediaWidgets.so.5

cp -Rf $RUNTIME/lib/libQt5Xml.so.5.5.1 $STAGING_DIR/runtime/lib/libQt5Xml.so.5
cp -Rf $RUNTIME/lib/libQt5XmlPatterns.so.5.5.1 $STAGING_DIR/runtime/lib/libQt5XmlPatterns.so.5

### webkit
cp -Rf $RUNTIME/lib/libQt5WebChannel.so.5.5.1 $STAGING_DIR/runtime/lib/libQt5WebChannel.so.5
cp -Rf $RUNTIME/lib/libQt5WebKit.so.5.5.1 $STAGING_DIR/runtime/lib/libQt5WebKit.so.5
cp -Rf $RUNTIME/lib/libQt5WebKitWidgets.so.5.5.1 $STAGING_DIR/runtime/lib/libQt5WebKitWidgets.so.5
cp -Rf $RUNTIME/lib/libQt5WebSockets.so.5.5.1 $STAGING_DIR/runtime/lib/libQt5WebSockets.so.5
cp -Rf $RUNTIME/lib/libQt5Xml.so.5.5.1 $STAGING_DIR/runtime/lib/libQt5Xml.so.5
cp -Rf $RUNTIME/lib/libQt5PrintSupport.so.5.5.1 $STAGING_DIR/runtime/lib/libQt5PrintSupport.so.5
cp -Rf $RUNTIME/lib/libQt5Sql.so.5.5.1 $STAGING_DIR/runtime/lib/libQt5Sql.so.5



cp -Rf $RUNTIME/lib/libQt5OpenGL.so.5.5.1 $STAGING_DIR/runtime/lib/libQt5OpenGL.so.5


cp -Rf $RUNTIME/lib/libQt53DCollision.so.5.5.1 $STAGING_DIR/runtime/lib/libQt53DCollision.so.5
cp -Rf $RUNTIME/lib/libQt53DCore.so.5.5.1 $STAGING_DIR/runtime/lib/libQt53DCore.so.5
cp -Rf $RUNTIME/lib/libQt53DInput.so.5.5.1 $STAGING_DIR/runtime/lib/libQt53DInput.so.5
cp -Rf $RUNTIME/lib/libQt53DLogic.so.5.5.1 $STAGING_DIR/runtime/lib/libQt53DLogic.so.5
cp -Rf $RUNTIME/lib/libQt53DRenderer.so.5.5.1 $STAGING_DIR/runtime/lib/libQt53DRenderer.so.5

cp -Rf $RUNTIME/lib/libQt5Concurrent.so.5.5.1 $STAGING_DIR/runtime/lib/libQt5Concurrent.so.5



cp -Rf $RUNTIME/plugins $STAGING_DIR/runtime

cp -Rf $RUNTIME/qml $STAGING_DIR/runtime



cp -Rf data  $STAGING_DIR/


cp -Rf $RUNTIME/lib/libQt5Core.so.5.5.1  $STAGING_DIR/runtime/lib/libQt5Core.so.5
cp -Rf $RUNTIME/lib/libQt5Widgets.so.5.5.1  $STAGING_DIR/runtime/lib/libQt5Widgets.so.5
cp -Rf $RUNTIME/lib/libQt5Gui.so.5.5.1   $STAGING_DIR/runtime/lib/libQt5Gui.so.5
cp -Rf $RUNTIME/lib/libQt5Network.so.5.5.1 $STAGING_DIR/runtime/lib/libQt5Network.so.5
cp -Rf $RUNTIME/lib/libQt5Widgets.so.5.5.1  $STAGING_DIR/runtime/lib/libQt5Widgets.so.5



cp -Rf $RUNTIME/plugins/imageformats $STAGING_DIR/runtime/plugins
cp -Rf /opt/qt.palm/qtimageformats/plugins/imageformats $STAGING_DIR/runtime/plugins/
cp -Rf /opt/qt.palm/qtbase/plugins/platforms/libqoffscreen.so $STAGING_DIR/runtime/plugins/platforms
cp -Rf $RUNTIME/plugins/imageformats $STAGING_DIR/runtime/plugins/


cp -Rf lib $STAGING_DIR/runtime


cp ./appinfo.json.$PROJECT $STAGING_DIR/appinfo.json
cp ./framework_config.json.$PROJECT $STAGING_DIR/framework_config.json

cp ./$PROJECT $STAGING_DIR
arm-none-linux-gnueabi-strip $STAGING_DIR/$PROJECT

cp ./images/icons/64x64/browser.ico $STAGING_DIR

echo "filemode.755=$PROJECT" >> $STAGING_DIR/package.properties

palm-package $STAGING_DIR


