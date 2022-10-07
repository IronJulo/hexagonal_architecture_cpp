#ifndef IREQUESTLOG_H
#define IREQUESTLOG_H
#include <QObject>

class IRequestLog: public QObject
{
    Q_OBJECT;
public:
    IRequestLog();
    ~IRequestLog();
    virtual void log() = 0;
};

#endif // IREQUESTLOG_H
