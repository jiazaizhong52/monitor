/****************************************************************************
** Meta object code from reading C++ file 'frame_resistance.h'
**
** Created: Sat Jul 25 17:28:36 2020
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../monitor/frame_resistance.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frame_resistance.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Frame_Resistance[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   18,   17,   17, 0x05,
      30,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Frame_Resistance[] = {
    "Frame_Resistance\0\0R\0addR(int)\0"
    "resistancePlot()\0on_buttom_viewPlot_clicked()\0"
};

const QMetaObject Frame_Resistance::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_Frame_Resistance,
      qt_meta_data_Frame_Resistance, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Frame_Resistance::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Frame_Resistance::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Frame_Resistance::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Frame_Resistance))
        return static_cast<void*>(const_cast< Frame_Resistance*>(this));
    return QFrame::qt_metacast(_clname);
}

int Frame_Resistance::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: addR((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: resistancePlot(); break;
        case 2: on_buttom_viewPlot_clicked(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Frame_Resistance::addR(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Frame_Resistance::resistancePlot()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
