/****************************************************************************
** Meta object code from reading C++ file 'chakanform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../chakanform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chakanform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_chakanForm_t {
    QByteArrayData data[5];
    char stringdata[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_chakanForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_chakanForm_t qt_meta_stringdata_chakanForm = {
    {
QT_MOC_LITERAL(0, 0, 10), // "chakanForm"
QT_MOC_LITERAL(1, 11, 22), // "on_chakanxinxi_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 22), // "on_deletexinxi_clicked"
QT_MOC_LITERAL(4, 58, 16) // "on_clear_clicked"

    },
    "chakanForm\0on_chakanxinxi_clicked\0\0"
    "on_deletexinxi_clicked\0on_clear_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_chakanForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void chakanForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        chakanForm *_t = static_cast<chakanForm *>(_o);
        switch (_id) {
        case 0: _t->on_chakanxinxi_clicked(); break;
        case 1: _t->on_deletexinxi_clicked(); break;
        case 2: _t->on_clear_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject chakanForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_chakanForm.data,
      qt_meta_data_chakanForm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *chakanForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *chakanForm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_chakanForm.stringdata))
        return static_cast<void*>(const_cast< chakanForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int chakanForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
