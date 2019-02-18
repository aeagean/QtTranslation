#include <QCoreApplication>
#include <QTranslator>

#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTranslator translator;
    if (! translator.load(":/zh_CN.qm")) {
        qDebug()<<"Failed to load translation file!";
    }
    qApp->installTranslator(&translator);

    qDebug()<<QObject::tr("start")<<QObject::tr("end");
    qDebug()<<QObject::tr("open")<<QObject::tr("close");

    qApp->removeTranslator(&translator);
    if (! translator.load(":/en.qm")) {
        qDebug()<<"Failed to load translation file!";
    }

    /* Switch language */
    qApp->installTranslator(&translator);

    qDebug()<<QObject::tr("start")<<QObject::tr("end");
    qDebug()<<QObject::tr("open")<<QObject::tr("close");

    return 0;
}
