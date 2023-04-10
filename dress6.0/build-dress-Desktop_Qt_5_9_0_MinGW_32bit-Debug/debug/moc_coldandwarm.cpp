/****************************************************************************
** Meta object code from reading C++ file 'coldandwarm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mygit/dress/coldandwarm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'coldandwarm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_coldandwarm_t {
    QByteArrayData data[13];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_coldandwarm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_coldandwarm_t qt_meta_stringdata_coldandwarm = {
    {
QT_MOC_LITERAL(0, 0, 11), // "coldandwarm"
QT_MOC_LITERAL(1, 12, 18), // "coldwarmbonesignal"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 8), // "dealcwbr"
QT_MOC_LITERAL(4, 41, 8), // "dealcwbt"
QT_MOC_LITERAL(5, 50, 8), // "dealcwst"
QT_MOC_LITERAL(6, 59, 8), // "dealcwsr"
QT_MOC_LITERAL(7, 68, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(8, 90, 22), // "on_radioButton_clicked"
QT_MOC_LITERAL(9, 113, 7), // "checked"
QT_MOC_LITERAL(10, 121, 24), // "on_radioButton_2_clicked"
QT_MOC_LITERAL(11, 146, 24), // "on_radioButton_4_clicked"
QT_MOC_LITERAL(12, 171, 24) // "on_radioButton_3_clicked"

    },
    "coldandwarm\0coldwarmbonesignal\0\0"
    "dealcwbr\0dealcwbt\0dealcwst\0dealcwsr\0"
    "on_pushButton_clicked\0on_radioButton_clicked\0"
    "checked\0on_radioButton_2_clicked\0"
    "on_radioButton_4_clicked\0"
    "on_radioButton_3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_coldandwarm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   65,    2, 0x0a /* Public */,
       4,    0,   66,    2, 0x0a /* Public */,
       5,    0,   67,    2, 0x0a /* Public */,
       6,    0,   68,    2, 0x0a /* Public */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    1,   70,    2, 0x08 /* Private */,
      10,    1,   73,    2, 0x08 /* Private */,
      11,    1,   76,    2, 0x08 /* Private */,
      12,    1,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,

       0        // eod
};

void coldandwarm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        coldandwarm *_t = static_cast<coldandwarm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->coldwarmbonesignal(); break;
        case 1: _t->dealcwbr(); break;
        case 2: _t->dealcwbt(); break;
        case 3: _t->dealcwst(); break;
        case 4: _t->dealcwsr(); break;

        case 6: _t->on_radioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_radioButton_2_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_radioButton_4_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_radioButton_3_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (coldandwarm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&coldandwarm::coldwarmbonesignal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject coldandwarm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_coldandwarm.data,
      qt_meta_data_coldandwarm,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *coldandwarm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *coldandwarm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_coldandwarm.stringdata0))
        return static_cast<void*>(const_cast< coldandwarm*>(this));
    return QWidget::qt_metacast(_clname);
}

int coldandwarm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void coldandwarm::coldwarmbonesignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
