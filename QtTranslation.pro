QT += core
QT -= gui

CONFIG += c++11

TARGET = QtTranslation
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

RESOURCES += \
    Languages/Languages.qrc

TRANSLATIONS += \
    Languages/en.ts \
    Languages/zh_CN.ts
