#include "randomdataproducer.h"

#include <QDebug>

RandomDataProducer::RandomDataProducer()
{}

RandomDataProducer::~RandomDataProducer()
{}

QString RandomDataProducer::getData()
{
    qDebug() << "logged new data";
    return "po";
}
