#include "logger.h"

Logger::Logger(ISaveData *dataSaver, IProduceData *dataProducer)
{
    m_dataProducer = dataProducer;
    m_dataSaver = dataSaver;
}

Logger::~Logger()
{}

void Logger::saveData()
{
    m_dataSaver->saveData(m_logs);
}
void Logger::logData()
{
    m_logs.append(m_dataProducer->getData());
}
void Logger::log(QString message)
{
    m_logs.append(message);
}

void Logger::deleteLog(int index)
{
    m_logs.remove(index);
}

void Logger::deleteAllLogs()
{
    m_logs.empty();
}

QString Logger::getLogAt(int index)
{
    return m_logs.at(index);
}

QVector<QString> Logger::getLog()
{
    return m_logs;
}
