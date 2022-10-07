#ifndef FILEDATASAVER_H
#define FILEDATASAVER_H
#include"isavedata.h"
#include <QObject>

class FileDataSaver: public ISaveData
{
    Q_OBJECT;
public:
    FileDataSaver();
    ~FileDataSaver();
    void saveData(QVector<QString> const &data);
};

#endif // FILEDATASAVER_H
