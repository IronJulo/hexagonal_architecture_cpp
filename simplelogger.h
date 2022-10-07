#ifndef SIMPLELOGGER_H
#define SIMPLELOGGER_H
#include "ilogdata.h"

#include <QObject>

class SimpleLogger : public QObject
{
    Q_OBJECT;
public:
    SimpleLogger(ILogData *logger);
    ~SimpleLogger();
    void log();
    void save();
private:
    ILogData *m_logger;
};

#endif // SIMPLELOGGER_H
