#include "membermanager.h"
#include <QNetworkRequest>
#include <QNetworkAccessManager>

#include <QDebug>
#include <QObject>
#include <QCoreApplication>
#include <QTimer>

MemberManager::MemberManager(QObject *parent)
    : QObject(parent)
{

    m_networkManager = new QNetworkAccessManager(this);
    m_networkReply = m_networkManager->get(QNetworkRequest(QUrl("https://tkemodule-default-rtdb.firebaseio.com/members.json")));
    connect(m_networkReply, &QNetworkReply::readyRead, this, &MemberManager::networkReplyReadyRead);
}

MemberManager::~MemberManager()
{
    m_networkManager->deleteLater();
}

void MemberManager::networkReplyReadyRead()
{
    qDebug() << m_networkReply->readAll();
}
