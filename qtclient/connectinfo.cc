#include "connectinfo.h"
#include <QException>
#include <QDebug>
#include <QErrorMessage>

ConnectInfo::ConnectInfo()
    :port_(0),host_(""),beat_dur_(120L),account_(""),password_("")
{

}

void ConnectInfo::set_port(const QString &p)
{
    this->port_ = p.toUInt();
}

void ConnectInfo::set_port(unsigned int p){
    this->port_ = p;
}

unsigned int ConnectInfo::get_port() const
{
    return this->port_;
}

void ConnectInfo::set_host(const QString &h)
{
    this->host_ = h.trimmed();
}

QString ConnectInfo::get_host() const{
    return this->host_;
}

void ConnectInfo::set_beat_dur(unsigned long b)
{
    this->beat_dur_ = b;
}

void ConnectInfo::set_beat_dur(const QString& b){
    this->beat_dur_ = b.toULong();
}

unsigned long ConnectInfo::get_beat_dur() const{
    return this->beat_dur_;
}

void ConnectInfo::set_account(const QString &a)
{
    this->account_ =  a.trimmed();
}

QString ConnectInfo::get_account() const
{
    return this->account_;
}

void ConnectInfo::set_password(const QString &p)
{
   this->password_ =  p.trimmed();
}

QString ConnectInfo::get_password() const
{
    return this->password_;
}

void ConnectInfo::set_timeout(const QString &p)
{
    this->timeout_ = p.toULong();
}

void ConnectInfo::set_timeout(unsigned long p){
    this->timeout_ = p;
}

unsigned long ConnectInfo::get_timeout() const
{
    return this->timeout_;
}

void ConnectInfo::set_retry_times(const QString &p)
{
    this->retry_times_ = p.toUInt();
}

void ConnectInfo::set_retry_times(unsigned int p)
{
    this->retry_times_  = p;
}

unsigned int ConnectInfo::get_retry_times() const
{
    return this->retry_times_;
}
