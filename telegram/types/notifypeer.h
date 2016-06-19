// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_NOTIFYPEER
#define LQTG_TYPE_NOTIFYPEER

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

#include "peer.h"

class LIBQTELEGRAMSHARED_EXPORT NotifyPeer : public TelegramTypeObject
{
public:
    enum NotifyPeerClassType {
        typeNotifyPeer = 0x9fd40bd8,
        typeNotifyUsers = 0xb4c83b4c,
        typeNotifyChats = 0xc007cec3,
        typeNotifyAll = 0x74d07c60
    };

    NotifyPeer(NotifyPeerClassType classType = typeNotifyPeer, InboundPkt *in = 0);
    NotifyPeer(InboundPkt *in);
    NotifyPeer(const Null&);
    virtual ~NotifyPeer();

    void setPeer(const Peer &peer);
    Peer peer() const;

    void setClassType(NotifyPeerClassType classType);
    NotifyPeerClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static NotifyPeer fromMap(const QMap<QString, QVariant> &map);

    bool operator ==(const NotifyPeer &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    Peer m_peer;
    NotifyPeerClassType m_classType;
};

Q_DECLARE_METATYPE(NotifyPeer)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const NotifyPeer &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, NotifyPeer &item);

inline NotifyPeer::NotifyPeer(NotifyPeerClassType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

inline NotifyPeer::NotifyPeer(InboundPkt *in) :
    m_classType(typeNotifyPeer)
{
    fetch(in);
}

inline NotifyPeer::NotifyPeer(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeNotifyPeer)
{
}

inline NotifyPeer::~NotifyPeer() {
}

inline void NotifyPeer::setPeer(const Peer &peer) {
    m_peer = peer;
}

inline Peer NotifyPeer::peer() const {
    return m_peer;
}

inline bool NotifyPeer::operator ==(const NotifyPeer &b) const {
    return m_classType == b.m_classType &&
           m_peer == b.m_peer;
}

inline void NotifyPeer::setClassType(NotifyPeer::NotifyPeerClassType classType) {
    m_classType = classType;
}

inline NotifyPeer::NotifyPeerClassType NotifyPeer::classType() const {
    return m_classType;
}

inline bool NotifyPeer::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeNotifyPeer: {
        m_peer.fetch(in);
        m_classType = static_cast<NotifyPeerClassType>(x);
        return true;
    }
        break;
    
    case typeNotifyUsers: {
        m_classType = static_cast<NotifyPeerClassType>(x);
        return true;
    }
        break;
    
    case typeNotifyChats: {
        m_classType = static_cast<NotifyPeerClassType>(x);
        return true;
    }
        break;
    
    case typeNotifyAll: {
        m_classType = static_cast<NotifyPeerClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

inline bool NotifyPeer::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeNotifyPeer: {
        m_peer.push(out);
        return true;
    }
        break;
    
    case typeNotifyUsers: {
        return true;
    }
        break;
    
    case typeNotifyChats: {
        return true;
    }
        break;
    
    case typeNotifyAll: {
        return true;
    }
        break;
    
    default:
        return false;
    }
}

inline QMap<QString, QVariant> NotifyPeer::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeNotifyPeer: {
        result["classType"] = "NotifyPeer::typeNotifyPeer";
        result["peer"] = m_peer.toMap();
        return result;
    }
        break;
    
    case typeNotifyUsers: {
        result["classType"] = "NotifyPeer::typeNotifyUsers";
        return result;
    }
        break;
    
    case typeNotifyChats: {
        result["classType"] = "NotifyPeer::typeNotifyChats";
        return result;
    }
        break;
    
    case typeNotifyAll: {
        result["classType"] = "NotifyPeer::typeNotifyAll";
        return result;
    }
        break;
    
    default:
        return result;
    }
}

inline NotifyPeer NotifyPeer::fromMap(const QMap<QString, QVariant> &map) {
    NotifyPeer result;
    if(map.value("classType").toString() == "NotifyPeer::typeNotifyPeer") {
        result.setClassType(typeNotifyPeer);
        result.setPeer( Peer::fromMap(map.value("peer").toMap()) );
        return result;
    }
    if(map.value("classType").toString() == "NotifyPeer::typeNotifyUsers") {
        result.setClassType(typeNotifyUsers);
        return result;
    }
    if(map.value("classType").toString() == "NotifyPeer::typeNotifyChats") {
        result.setClassType(typeNotifyChats);
        return result;
    }
    if(map.value("classType").toString() == "NotifyPeer::typeNotifyAll") {
        result.setClassType(typeNotifyAll);
        return result;
    }
    return result;
}

inline QByteArray NotifyPeer::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

inline QDataStream &operator<<(QDataStream &stream, const NotifyPeer &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case NotifyPeer::typeNotifyPeer:
        stream << item.peer();
        break;
    case NotifyPeer::typeNotifyUsers:
        
        break;
    case NotifyPeer::typeNotifyChats:
        
        break;
    case NotifyPeer::typeNotifyAll:
        
        break;
    }
    return stream;
}

inline QDataStream &operator>>(QDataStream &stream, NotifyPeer &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<NotifyPeer::NotifyPeerClassType>(type));
    switch(type) {
    case NotifyPeer::typeNotifyPeer: {
        Peer m_peer;
        stream >> m_peer;
        item.setPeer(m_peer);
    }
        break;
    case NotifyPeer::typeNotifyUsers: {
        
    }
        break;
    case NotifyPeer::typeNotifyChats: {
        
    }
        break;
    case NotifyPeer::typeNotifyAll: {
        
    }
        break;
    }
    return stream;
}


#endif // LQTG_TYPE_NOTIFYPEER
