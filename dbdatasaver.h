#ifndef DBDATASAVER_H
#define DBDATASAVER_H
#include"isavedata.h"
#include <QObject>

class DBDataSaver: public ISaveData
{
public:
    DBDataSaver();
    ~DBDataSaver();

    void saveData(QVector<QString> const &data);
};

#endif // DBDATASAVER_H
