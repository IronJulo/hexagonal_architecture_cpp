#include "dbdatasaver.h"
#include "randomdataproducer.h"
#include "filedatasaver.h"
#include "iproducedata.h"
#include "isavedata.h"
#include "logger.h"
#include "simplelogger.h"

#include <QApplication>

int main()
{
    RandomDataProducer dataProducer = RandomDataProducer();
    FileDataSaver fileDataSaver = FileDataSaver();
    DBDataSaver dbDtaSaver = DBDataSaver();

    Logger logger = Logger(&dbDtaSaver, &dataProducer);

    SimpleLogger simpleLogger = SimpleLogger(&logger);


    simpleLogger.log();
    simpleLogger.log();
    simpleLogger.log();
    simpleLogger.log();
    simpleLogger.log();
    simpleLogger.log();
    simpleLogger.log();
    simpleLogger.log();
    simpleLogger.log();

    simpleLogger.save();


    return 0;
}
