#ifndef MEMBERMANAGER_H
#define MEMBERMANAGER_H

#include <QObject>
#include <QVariantMap>
#include <QVector>
#include <QSharedPointer>
#include <QNetworkAccessManager>
#include <QNetworkReply>


struct Member{
    QString name;
    QString grade;
    int status;
    double debt;
};

class MemberManager : public QObject
{
    Q_OBJECT
public:
    explicit MemberManager(QObject *parent = nullptr);
    //MemberManager();
    ~MemberManager();

public slots:
    void networkReplyReadyRead();


signals:
    void membersFetched();

private:


    QNetworkAccessManager * m_networkManager;
    QNetworkReply * m_networkReply;

};

#endif // MEMBERMANAGER_H
