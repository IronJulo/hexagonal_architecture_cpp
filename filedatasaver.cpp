#include<QDebug>

#include "filedatasaver.h"

FileDataSaver::FileDataSaver()
{}
FileDataSaver::~FileDataSaver()
{}
void FileDataSaver::saveData(QVector<QString> const &data)
{
    data.at(1);
    qDebug() << "Save data in file TODO";
}
