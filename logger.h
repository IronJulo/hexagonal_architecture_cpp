#ifndef LOGGER_H
#define LOGGER_H
#include "iproducedata.h"
#include "isavedata.h"
#include "ilogdata.h"

#include <QObject>
#include <QVector>

class Logger : public ILogData
{
    Q_OBJECT;
public:
    Logger(ISaveData *dataSaver, IProduceData *dataProducer);
    ~Logger();

    void logData();
    void saveData();

    void log(QString message);
    void deleteLog(int index);
    void deleteAllLogs();
    QString getLogAt(int index);
    QVector<QString> getLog();

private:
    QVector<QString> m_logs;
    ISaveData *m_dataSaver;
    IProduceData *m_dataProducer;


};

#endif // LOGGER_H
