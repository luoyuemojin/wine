/****************************************************************************
** Meta object code from reading C++ file 'sendmail2.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sendmail2.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sendmail2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_sendmail1_t {
    QByteArrayData data[5];
    char stringdata[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sendmail1_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sendmail1_t qt_meta_stringdata_sendmail1 = {
    {
QT_MOC_LITERAL(0, 0, 9), // "sendmail1"
QT_MOC_LITERAL(1, 10, 6), // "status"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 8), // "SendLine"
QT_MOC_LITERAL(4, 27, 11) // "PutSendLine"

    },
    "sendmail1\0status\0\0SendLine\0PutSendLine"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sendmail1[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       3,    0,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool,

       0        // eod
};

void sendmail1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        sendmail1 *_t = static_cast<sendmail1 *>(_o);
        switch (_id) {
        case 0: _t->status((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->SendLine(); break;
        case 2: { bool _r = _t->PutSendLine();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (sendmail1::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&sendmail1::status)) {
                *result = 0;
            }
        }
        {
            typedef void (sendmail1::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&sendmail1::SendLine)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject sendmail1::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_sendmail1.data,
      qt_meta_data_sendmail1,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *sendmail1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sendmail1::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_sendmail1.stringdata))
        return static_cast<void*>(const_cast< sendmail1*>(this));
    return QWidget::qt_metacast(_clname);
}

int sendmail1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void sendmail1::status(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void sendmail1::SendLine()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
