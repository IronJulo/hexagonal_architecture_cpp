#ifndef ISAVEDATA_H
#define ISAVEDATA_H
#include<QString>
#include<QVector>
#include <QObject>

class ISaveData: public QObject
{
    Q_OBJECT;
public:
    ISaveData();
    ~ISaveData();
    virtual void saveData(QVector<QString> const &data) = 0;
};

#endif // ISAVEDATA_H
