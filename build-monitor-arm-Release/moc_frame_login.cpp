/****************************************************************************
** Meta object code from reading C++ file 'frame_login.h'
**
** Created: Sat Jul 25 17:28:36 2020
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../monitor/frame_login.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frame_login.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Frame_Login[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   13,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   12,   12,   12, 0x08,
      75,   12,   12,   12, 0x08,
      96,   12,   12,   12, 0x08,
     117,   12,   12,   12, 0x08,
     138,   12,   12,   12, 0x08,
     159,   12,   12,   12, 0x08,
     180,   12,   12,   12, 0x08,
     201,   12,   12,   12, 0x08,
     222,   12,   12,   12, 0x08,
     243,   12,   12,   12, 0x08,
     264,   12,   12,   12, 0x08,
     285,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Frame_Login[] = {
    "Frame_Login\0\0userName,key\0"
    "login(string,string)\0on_buttom_connect_clicked()\0"
    "on_buttom1_clicked()\0on_buttom2_clicked()\0"
    "on_buttom3_clicked()\0on_buttom4_clicked()\0"
    "on_buttom5_clicked()\0on_buttom6_clicked()\0"
    "on_buttom7_clicked()\0on_buttom8_clicked()\0"
    "on_buttom9_clicked()\0on_buttom0_clicked()\0"
    "on_buttom_back_clicked()\0"
};

const QMetaObject Frame_Login::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_Frame_Login,
      qt_meta_data_Frame_Login, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Frame_Login::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Frame_Login::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Frame_Login::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Frame_Login))
        return static_cast<void*>(const_cast< Frame_Login*>(this));
    return QFrame::qt_metacast(_clname);
}

int Frame_Login::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: login((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 1: on_buttom_connect_clicked(); break;
        case 2: on_buttom1_clicked(); break;
        case 3: on_buttom2_clicked(); break;
        case 4: on_buttom3_clicked(); break;
        case 5: on_buttom4_clicked(); break;
        case 6: on_buttom5_clicked(); break;
        case 7: on_buttom6_clicked(); break;
        case 8: on_buttom7_clicked(); break;
        case 9: on_buttom8_clicked(); break;
        case 10: on_buttom9_clicked(); break;
        case 11: on_buttom0_clicked(); break;
        case 12: on_buttom_back_clicked(); break;
        default: ;
        }
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Frame_Login::login(string _t1, string _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
