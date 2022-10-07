#include<QDebug>
#include "dbdatasaver.h"

DBDataSaver::DBDataSaver()
{}
DBDataSaver::~DBDataSaver()
{}
void DBDataSaver::saveData(QVector<QString> const &data)
{
    data.at(1);
    qDebug() << "Save data in database TODO";
}
