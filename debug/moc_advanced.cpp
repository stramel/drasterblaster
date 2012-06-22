/****************************************************************************
** Meta object code from reading C++ file 'advanced.h'
**
** Created: Fri Jun 22 11:54:45 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../advanced.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'advanced.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Advanced[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      23,    9,    9,    9, 0x08,
      42,    9,    9,    9, 0x08,
      55,    9,    9,    9, 0x08,
      68,    9,    9,    9, 0x08,
      84,    9,    9,    9, 0x08,
     100,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Advanced[] = {
    "Advanced\0\0openRaster()\0saveReprojection()\0"
    "loadParams()\0saveParams()\0togglePreview()\0"
    "fillEnable(int)\0noDataEnable(int)\0"
};

const QMetaObject Advanced::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Advanced,
      qt_meta_data_Advanced, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Advanced::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Advanced::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Advanced::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Advanced))
        return static_cast<void*>(const_cast< Advanced*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Advanced::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: openRaster(); break;
        case 1: saveReprojection(); break;
        case 2: loadParams(); break;
        case 3: saveParams(); break;
        case 4: togglePreview(); break;
        case 5: fillEnable((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: noDataEnable((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
