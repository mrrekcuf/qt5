/****************************************************************************
** Meta object code from reading C++ file 'dlgsymbols.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dlgsymbols.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgsymbols.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_dlgSymbols_t {
    QByteArrayData data[11];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dlgSymbols_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dlgSymbols_t qt_meta_stringdata_dlgSymbols = {
    {
QT_MOC_LITERAL(0, 0, 10), // "dlgSymbols"
QT_MOC_LITERAL(1, 11, 6), // "hidden"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 4), // "hide"
QT_MOC_LITERAL(4, 24, 4), // "show"
QT_MOC_LITERAL(5, 29, 3), // "key"
QT_MOC_LITERAL(6, 33, 7), // "Qt::Key"
QT_MOC_LITERAL(7, 41, 15), // "mousePressEvent"
QT_MOC_LITERAL(8, 57, 12), // "QMouseEvent*"
QT_MOC_LITERAL(9, 70, 1), // "e"
QT_MOC_LITERAL(10, 72, 17) // "mouseReleaseEvent"

    },
    "dlgSymbols\0hidden\0\0hide\0show\0key\0"
    "Qt::Key\0mousePressEvent\0QMouseEvent*\0"
    "e\0mouseReleaseEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dlgSymbols[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    2,   47,    2, 0x0a /* Public */,
       7,    1,   52,    2, 0x0a /* Public */,
      10,    1,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 6,    2,    2,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    2,

       0        // eod
};

void dlgSymbols::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        dlgSymbols *_t = static_cast<dlgSymbols *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->hidden(); break;
        case 1: _t->hide(); break;
        case 2: _t->show(); break;
        case 3: _t->key((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::Key(*)>(_a[2]))); break;
        case 4: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 5: _t->mouseReleaseEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (dlgSymbols::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&dlgSymbols::hidden)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject dlgSymbols::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_dlgSymbols.data,
      qt_meta_data_dlgSymbols,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dlgSymbols::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dlgSymbols::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dlgSymbols.stringdata0))
        return static_cast<void*>(const_cast< dlgSymbols*>(this));
    return QWidget::qt_metacast(_clname);
}

int dlgSymbols::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void dlgSymbols::hidden()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
