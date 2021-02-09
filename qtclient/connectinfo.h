#ifndef CONNECTINFO_H
#define CONNECTINFO_H

#include <QString>

class ConnectInfo
{
    unsigned int port_;
    QString host_;
    unsigned long beat_dur_;
    QString account_;
    QString password_;
    unsigned long timeout_;
    unsigned int retry_times_;
public:
    ConnectInfo();

    void set_port(const QString&);
    void set_port(unsigned int);
    unsigned int get_port() const;

    void set_host(const QString&);
    QString get_host() const;

    void set_beat_dur(unsigned long);
    void set_beat_dur(const QString&);
    unsigned long get_beat_dur() const;

    void set_account(const QString&);
    QString get_account() const;

    void set_password(const QString&);
    QString get_password() const;

    void set_timeout(const QString&);
    void set_timeout(unsigned long );
    unsigned long get_timeout() const;

    void set_retry_times(const QString&);
    void set_retry_times(unsigned ing);
    unsigned int get_retry_times() const;

};

#endif // CONNECTINFO_H
