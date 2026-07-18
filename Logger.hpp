#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <QString>

class Logger
{
    //--------------------------------------------------------------------------
    //                             Singleton stuff                             -
    //--------------------------------------------------------------------------

  public:
    static Logger* instance();
    static void    release();

  private:
    Logger();
    static Logger* logger;

    //--------------------------------------------------------------------------
    //                                 Logger                                  -
    //--------------------------------------------------------------------------

  public:
    void    addLogEntry(QString entry);
    QString log() const;

  private:
    QString Log;
    bool    FirstLogEntry;
};

#endif // LOGGER_HPP
