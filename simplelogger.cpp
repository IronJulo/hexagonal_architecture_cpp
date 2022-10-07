#include "simplelogger.h"

SimpleLogger::SimpleLogger(ILogData *logger)
{
    m_logger = logger;
}

SimpleLogger::~SimpleLogger()
{}

void SimpleLogger::log()
{
    m_logger->logData();
}

void SimpleLogger::save()
{
    m_logger->saveData();
}
