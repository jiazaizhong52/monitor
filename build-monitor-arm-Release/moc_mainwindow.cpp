/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Sat Jul 25 14:48:30 2020
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../monitor/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      49,   11,   11,   11, 0x08,
      68,   11,   11,   11, 0x08,
     101,   11,   11,   11, 0x08,
     137,   11,   11,   11, 0x08,
     178,   11,   11,   11, 0x08,
     204,   11,   11,   11, 0x08,
     234,   11,   11,   11, 0x08,
     274,  261,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_actionview_resistance_triggered()\0"
    "on_timer_timeOut()\0on_actionview_camera_triggered()\0"
    "on_actionview_photoList_triggered()\0"
    "on_actionview_resistancePlot_triggered()\0"
    "on_actionexit_triggered()\0"
    "on_actionsettings_triggered()\0"
    "on_actionlogin_triggered()\0userName,key\0"
    "on_login_login(string,string)\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_actionview_resistance_triggered(); break;
        case 1: on_timer_timeOut(); break;
        case 2: on_actionview_camera_triggered(); break;
        case 3: on_actionview_photoList_triggered(); break;
        case 4: on_actionview_resistancePlot_triggered(); break;
        case 5: on_actionexit_triggered(); break;
        case 6: on_actionsettings_triggered(); break;
        case 7: on_actionlogin_triggered(); break;
        case 8: on_login_login((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
