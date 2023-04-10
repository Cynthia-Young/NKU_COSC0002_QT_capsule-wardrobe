/****************************************************************************
** Meta object code from reading C++ file 'warmbone.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mygit/dress/warmbone.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'warmbone.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_warmbone_t {
    QByteArrayData data[12];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_warmbone_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_warmbone_t qt_meta_stringdata_warmbone = {
    {
QT_MOC_LITERAL(0, 0, 8), // "warmbone"
QT_MOC_LITERAL(1, 9, 14), // "warmbonesignal"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 7), // "dealwbt"
QT_MOC_LITERAL(4, 33, 7), // "dealwbr"
QT_MOC_LITERAL(5, 41, 7), // "dealwst"
QT_MOC_LITERAL(6, 49, 7), // "dealwsr"
QT_MOC_LITERAL(7, 57, 24), // "on_radioButton_3_clicked"
QT_MOC_LITERAL(8, 82, 7), // "checked"
QT_MOC_LITERAL(9, 90, 22), // "on_radioButton_clicked"
QT_MOC_LITERAL(10, 113, 24), // "on_radioButton_4_clicked"
QT_MOC_LITERAL(11, 138, 24) // "on_radioButton_2_clicked"

    },
    "warmbone\0warmbonesignal\0\0dealwbt\0"
    "dealwbr\0dealwst\0dealwsr\0"
    "on_radioButton_3_clicked\0checked\0"
    "on_radioButton_clicked\0on_radioButton_4_clicked\0"
    "on_radioButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_warmbone[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    1,   64,    2, 0x08 /* Private */,
       9,    1,   67,    2, 0x08 /* Private */,
      10,    1,   70,    2, 0x08 /* Private */,
      11,    1,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,

       0        // eod
};

void warmbone::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        warmbone *_t = static_cast<warmbone *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->warmbonesignal(); break;
        case 1: _t->dealwbt(); break;
        case 2: _t->dealwbr(); break;
        case 3: _t->dealwst(); break;
        case 4: _t->dealwsr(); break;
        case 5: _t->on_radioButton_3_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_radioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_radioButton_4_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_radioButton_2_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (warmbone::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&warmbone::warmbonesignal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject warmbone::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_warmbone.data,
      qt_meta_data_warmbone,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *warmbone::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *warmbone::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_warmbone.stringdata0))
        return static_cast<void*>(const_cast< warmbone*>(this));
    return QWidget::qt_metacast(_clname);
}

int warmbone::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void warmbone::warmbonesignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
