# -------------------------------------------------------------------
# Main project file for WebKit2
#
# See 'Tools/qmake/README' for an overview of the build system
# -------------------------------------------------------------------
LIBS += -L/opt/qt-everywhere-opensource-src-5.5.1/qtwebkit/  -L./  -llinux-atmoic


TEMPLATE = subdirs

derived_sources.file = DerivedSources.pri
target.file = Target.pri

SUBDIRS += derived_sources target

addStrictSubdirOrderBetween(derived_sources, target)
