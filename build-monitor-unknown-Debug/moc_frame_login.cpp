/****************************************************************************
** Meta object code from reading C++ file 'frame_login.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../monitor/frame_login.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frame_login.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Frame_Login[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   13,   12,   12, 0x05,
      47,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      56,   12,   12,   12, 0x08,
      84,   12,   12,   12, 0x08,
     105,   12,   12,   12, 0x08,
     126,   12,   12,   12, 0x08,
     147,   12,   12,   12, 0x08,
     168,   12,   12,   12, 0x08,
     189,   12,   12,   12, 0x08,
     210,   12,   12,   12, 0x08,
     231,   12,   12,   12, 0x08,
     252,   12,   12,   12, 0x08,
     273,   12,   12,   12, 0x08,
     294,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Frame_Login[] = {
    "Frame_Login\0\0userName,key\0"
    "login(string,string)\0logout()\0"
    "on_buttom_connect_clicked()\0"
    "on_buttom1_clicked()\0on_buttom2_clicked()\0"
    "on_buttom3_clicked()\0on_buttom4_clicked()\0"
    "on_buttom5_clicked()\0on_buttom6_clicked()\0"
    "on_buttom7_clicked()\0on_buttom8_clicked()\0"
    "on_buttom9_clicked()\0on_buttom0_clicked()\0"
    "on_buttom_back_clicked()\0"
};

void Frame_Login::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Frame_Login *_t = static_cast<Frame_Login *>(_o);
        switch (_id) {
        case 0: _t->login((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 1: _t->logout(); break;
        case 2: _t->on_buttom_connect_clicked(); break;
        case 3: _t->on_buttom1_clicked(); break;
        case 4: _t->on_buttom2_clicked(); break;
        case 5: _t->on_buttom3_clicked(); break;
        case 6: _t->on_buttom4_clicked(); break;
        case 7: _t->on_buttom5_clicked(); break;
        case 8: _t->on_buttom6_clicked(); break;
        case 9: _t->on_buttom7_clicked(); break;
        case 10: _t->on_buttom8_clicked(); break;
        case 11: _t->on_buttom9_clicked(); break;
        case 12: _t->on_buttom0_clicked(); break;
        case 13: _t->on_buttom_back_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Frame_Login::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Frame_Login::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_Frame_Login,
      qt_meta_data_Frame_Login, &staticMetaObjectExtraData }
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
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Frame_Login::login(string _t1, string _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Frame_Login::logout()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
