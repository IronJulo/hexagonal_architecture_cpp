#ifndef IPRODUCEDATA_H
#define IPRODUCEDATA_H
#include<QString>
#include <QObject>

class IProduceData: public QObject
{
    Q_OBJECT;
public:
    IProduceData();
    ~IProduceData();
    virtual QString getData() = 0;
};

#endif // IPRODUCEDATA_H
