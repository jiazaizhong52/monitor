/****************************************************************************
** Meta object code from reading C++ file 'frame_resistanceplot.h'
**
** Created: Sat Jul 25 17:28:36 2020
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../monitor/frame_resistanceplot.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frame_resistanceplot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Frame_ResistancePlot[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   22,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Frame_ResistancePlot[] = {
    "Frame_ResistancePlot\0\0R\0on_resistance_addR(int)\0"
};

const QMetaObject Frame_ResistancePlot::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_Frame_ResistancePlot,
      qt_meta_data_Frame_ResistancePlot, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Frame_ResistancePlot::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Frame_ResistancePlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Frame_ResistancePlot::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Frame_ResistancePlot))
        return static_cast<void*>(const_cast< Frame_ResistancePlot*>(this));
    return QFrame::qt_metacast(_clname);
}

int Frame_ResistancePlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_resistance_addR((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
