#ifndef RANDOMDATAPRODUCER_H
#define RANDOMDATAPRODUCER_H
#include"iproducedata.h"
#include <QObject>

class RandomDataProducer: public IProduceData
{
    Q_OBJECT;
public:
    RandomDataProducer();
    ~RandomDataProducer();
    QString getData();
};

#endif // RANDOMDATAPRODUCER_H
