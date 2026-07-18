#include "Logger.hpp"
#include <QDate>
#include <QTime>

Logger* Logger::logger = nullptr;

Logger* Logger::instance()
{
    if (logger == nullptr) {
        logger = new Logger;
    }
    return logger;
}

void Logger::release()
{
    if (logger != nullptr) {
        delete logger;
        logger = nullptr;
    }
}

Logger::Logger()
    : FirstLogEntry(true)
{
}

QString Logger::log() const
{
    return this->Log;
}

void Logger::addLogEntry(QString entry)
{
    if (this->FirstLogEntry) {
        this->FirstLogEntry = false;
    }
    else {
        this->Log.append("\n");
    }

    QString NewLine = QString("[%1] %2").arg(QTime::currentTime().toString("hh:mm:ss.zzz"), entry);
    this->Log.append(NewLine);
}
