/****************************************************************************
** Meta object code from reading C++ file 'frame_photolist.h'
**
** Created: Fri Jul 24 20:53:36 2020
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../monitor/frame_photolist.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frame_photolist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Frame_PhotoList[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   17,   16,   16, 0x08,
      75,   66,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Frame_PhotoList[] = {
    "Frame_PhotoList\0\0item\0"
    "on_listWidget_itemClicked(QListWidgetItem*)\0"
    "fileName\0on_camera_addPhoto(QString)\0"
};

const QMetaObject Frame_PhotoList::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_Frame_PhotoList,
      qt_meta_data_Frame_PhotoList, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Frame_PhotoList::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Frame_PhotoList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Frame_PhotoList::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Frame_PhotoList))
        return static_cast<void*>(const_cast< Frame_PhotoList*>(this));
    return QFrame::qt_metacast(_clname);
}

int Frame_PhotoList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_listWidget_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 1: on_camera_addPhoto((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
