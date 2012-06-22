/****************************************************************************
** Meta object code from reading C++ file 'wizard.h'
**
** Created: Fri Jun 22 11:54:46 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../wizard.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wizard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Wizard[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
      26,    7,    7,    7, 0x08,
      37,    7,    7,    7, 0x08,
      48,    7,    7,    7, 0x08,
      61,    7,    7,    7, 0x08,
      80,    7,    7,    7, 0x08,
     100,   94,    7,    7, 0x08,
     132,    7,    7,    7, 0x08,
     145,    7,    7,    7, 0x08,
     172,    7,    7,    7, 0x08,
     197,    7,    7,    7, 0x08,
     219,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Wizard[] = {
    "Wizard\0\0indexChanged(int)\0nextPage()\0"
    "prevPage()\0openRaster()\0saveReprojection()\0"
    "showPreview()\0index\0on_dirView_clicked(QModelIndex)\0"
    "enableNext()\0changeInputProjection(int)\0"
    "changeOutProjection(int)\0enableFillValue(bool)\0"
    "enableDataValue(bool)\0"
};

const QMetaObject Wizard::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Wizard,
      qt_meta_data_Wizard, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Wizard::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Wizard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Wizard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Wizard))
        return static_cast<void*>(const_cast< Wizard*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Wizard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: indexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: nextPage(); break;
        case 2: prevPage(); break;
        case 3: openRaster(); break;
        case 4: saveReprojection(); break;
        case 5: showPreview(); break;
        case 6: on_dirView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: enableNext(); break;
        case 8: changeInputProjection((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: changeOutProjection((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: enableFillValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: enableDataValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void Wizard::indexChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
