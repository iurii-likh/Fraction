TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    fraction.cpp \
    test.cpp \
    math_support.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    fraction.h \
    test.h \
    math_support.h

