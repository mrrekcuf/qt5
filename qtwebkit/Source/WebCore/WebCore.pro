# -------------------------------------------------------------------
# Main project file for WebCore
#
# See 'Tools/qmake/README' for an overview of the build system
# -------------------------------------------------------------------

QMAKE_CXXFLAGS += -fno-inline
LIBS += -L/opt/qt-everywhere-opensource-src-5.5.1/qtwebkit/  -L./  -llinux-atmoic


TEMPLATE = subdirs

derived_sources.file = DerivedSources.pri
target.file = Target.pri

SUBDIRS += derived_sources target

addStrictSubdirOrderBetween(derived_sources, target)
