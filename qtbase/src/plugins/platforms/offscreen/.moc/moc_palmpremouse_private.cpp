/****************************************************************************
** Meta object code from reading C++ file 'palmpremouse_private.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../palmpremouse_private.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'palmpremouse_private.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PalmPreMouse_private_t {
    QByteArrayData data[7];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PalmPreMouse_private_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PalmPreMouse_private_t qt_meta_stringdata_PalmPreMouse_private = {
    {
QT_MOC_LITERAL(0, 0, 20), // "PalmPreMouse_private"
QT_MOC_LITERAL(1, 21, 13), // "sdlMouseEvent"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 4), // "code"
QT_MOC_LITERAL(4, 41, 1), // "x"
QT_MOC_LITERAL(5, 43, 1), // "y"
QT_MOC_LITERAL(6, 45, 7) // "buttons"

    },
    "PalmPreMouse_private\0sdlMouseEvent\0\0"
    "code\0x\0y\0buttons"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PalmPreMouse_private[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    4,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,    6,

       0        // eod
};

void PalmPreMouse_private::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PalmPreMouse_private *_t = static_cast<PalmPreMouse_private *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sdlMouseEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObject PalmPreMouse_private::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PalmPreMouse_private.data,
      qt_meta_data_PalmPreMouse_private,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PalmPreMouse_private::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PalmPreMouse_private::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PalmPreMouse_private.stringdata0))
        return static_cast<void*>(const_cast< PalmPreMouse_private*>(this));
    return QObject::qt_metacast(_clname);
}

int PalmPreMouse_private::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
