/****************************************************************************
** Meta object code from reading C++ file 'maindress.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mygit/dress/maindress.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maindress.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_maindress_t {
    QByteArrayData data[10];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_maindress_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_maindress_t qt_meta_stringdata_maindress = {
    {
QT_MOC_LITERAL(0, 0, 9), // "maindress"
QT_MOC_LITERAL(1, 10, 12), // "dealwarmbone"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 16), // "dealwarmcoldbone"
QT_MOC_LITERAL(4, 41, 12), // "dealcoldbone"
QT_MOC_LITERAL(5, 54, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(6, 76, 22), // "on_radioButton_clicked"
QT_MOC_LITERAL(7, 99, 24), // "on_radioButton_2_clicked"
QT_MOC_LITERAL(8, 124, 24), // "on_radioButton_3_clicked"
QT_MOC_LITERAL(9, 149, 7) // "checked"

    },
    "maindress\0dealwarmbone\0\0dealwarmcoldbone\0"
    "dealcoldbone\0on_pushButton_clicked\0"
    "on_radioButton_clicked\0on_radioButton_2_clicked\0"
    "on_radioButton_3_clicked\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_maindress[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x0a /* Public */,
       4,    0,   66,    2, 0x0a /* Public */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       6,    1,   71,    2, 0x08 /* Private */,
       7,    1,   74,    2, 0x08 /* Private */,
       8,    1,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,

       0        // eod
};

void maindress::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        maindress *_t = static_cast<maindress *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dealwarmbone(); break;
        case 1: _t->dealwarmcoldbone(); break;
        case 2: _t->dealcoldbone(); break;

        case 4: _t->on_radioButton_clicked(); break;
        case 5: _t->on_radioButton_2_clicked(); break;
        case 6: _t->on_radioButton_3_clicked(); break;
        case 7: _t->on_radioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_radioButton_2_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_radioButton_3_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject maindress::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_maindress.data,
      qt_meta_data_maindress,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *maindress::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *maindress::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_maindress.stringdata0))
        return static_cast<void*>(const_cast< maindress*>(this));
    return QWidget::qt_metacast(_clname);
}

int maindress::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
