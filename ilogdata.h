#ifndef ILOGDATA_H
#define ILOGDATA_H
#include <QObject>

class ILogData: public QObject
{
    Q_OBJECT;
public:
    ILogData();
    ~ILogData();
    virtual void logData() = 0;
    virtual void saveData() = 0;
};

#endif // ILOGDATA_H
