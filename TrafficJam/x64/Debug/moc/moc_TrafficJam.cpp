/****************************************************************************
** Meta object code from reading C++ file 'TrafficJam.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "../../../TrafficJam.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TrafficJam.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSTrafficJamENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTrafficJamENDCLASS = QtMocHelpers::stringData(
    "TrafficJam",
    "readOBJ",
    "",
    "sceneStatic",
    "UpperMove",
    "DownMove",
    "LeftMove",
    "RightMove",
    "selectCar",
    "stop"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTrafficJamENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[11];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[10];
    char stringdata5[9];
    char stringdata6[9];
    char stringdata7[10];
    char stringdata8[10];
    char stringdata9[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTrafficJamENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTrafficJamENDCLASS_t qt_meta_stringdata_CLASSTrafficJamENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "TrafficJam"
        QT_MOC_LITERAL(11, 7),  // "readOBJ"
        QT_MOC_LITERAL(19, 0),  // ""
        QT_MOC_LITERAL(20, 11),  // "sceneStatic"
        QT_MOC_LITERAL(32, 9),  // "UpperMove"
        QT_MOC_LITERAL(42, 8),  // "DownMove"
        QT_MOC_LITERAL(51, 8),  // "LeftMove"
        QT_MOC_LITERAL(60, 9),  // "RightMove"
        QT_MOC_LITERAL(70, 9),  // "selectCar"
        QT_MOC_LITERAL(80, 4)   // "stop"
    },
    "TrafficJam",
    "readOBJ",
    "",
    "sceneStatic",
    "UpperMove",
    "DownMove",
    "LeftMove",
    "RightMove",
    "selectCar",
    "stop"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTrafficJamENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    0,   67,    2, 0x08,    6 /* Private */,
       8,    0,   68,    2, 0x08,    7 /* Private */,
       9,    0,   69,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject TrafficJam::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSTrafficJamENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTrafficJamENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTrafficJamENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TrafficJam, std::true_type>,
        // method 'readOBJ'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sceneStatic'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpperMove'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'DownMove'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'LeftMove'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RightMove'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectCar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TrafficJam::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TrafficJam *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->readOBJ(); break;
        case 1: _t->sceneStatic(); break;
        case 2: _t->UpperMove(); break;
        case 3: _t->DownMove(); break;
        case 4: _t->LeftMove(); break;
        case 5: _t->RightMove(); break;
        case 6: _t->selectCar(); break;
        case 7: _t->stop(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *TrafficJam::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrafficJam::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTrafficJamENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int TrafficJam::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
