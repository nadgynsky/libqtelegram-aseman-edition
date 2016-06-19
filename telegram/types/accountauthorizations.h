// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_ACCOUNTAUTHORIZATIONS
#define LQTG_TYPE_ACCOUNTAUTHORIZATIONS

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

#include <QList>
#include "authorization.h"

class LIBQTELEGRAMSHARED_EXPORT AccountAuthorizations : public TelegramTypeObject
{
public:
    enum AccountAuthorizationsClassType {
        typeAccountAuthorizations = 0x1250abde
    };

    AccountAuthorizations(AccountAuthorizationsClassType classType = typeAccountAuthorizations, InboundPkt *in = 0);
    AccountAuthorizations(InboundPkt *in);
    AccountAuthorizations(const Null&);
    virtual ~AccountAuthorizations();

    void setAuthorizations(const QList<Authorization> &authorizations);
    QList<Authorization> authorizations() const;

    void setClassType(AccountAuthorizationsClassType classType);
    AccountAuthorizationsClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static AccountAuthorizations fromMap(const QMap<QString, QVariant> &map);

    bool operator ==(const AccountAuthorizations &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    QList<Authorization> m_authorizations;
    AccountAuthorizationsClassType m_classType;
};

Q_DECLARE_METATYPE(AccountAuthorizations)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const AccountAuthorizations &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, AccountAuthorizations &item);

inline AccountAuthorizations::AccountAuthorizations(AccountAuthorizationsClassType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

inline AccountAuthorizations::AccountAuthorizations(InboundPkt *in) :
    m_classType(typeAccountAuthorizations)
{
    fetch(in);
}

inline AccountAuthorizations::AccountAuthorizations(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeAccountAuthorizations)
{
}

inline AccountAuthorizations::~AccountAuthorizations() {
}

inline void AccountAuthorizations::setAuthorizations(const QList<Authorization> &authorizations) {
    m_authorizations = authorizations;
}

inline QList<Authorization> AccountAuthorizations::authorizations() const {
    return m_authorizations;
}

inline bool AccountAuthorizations::operator ==(const AccountAuthorizations &b) const {
    return m_classType == b.m_classType &&
           m_authorizations == b.m_authorizations;
}

inline void AccountAuthorizations::setClassType(AccountAuthorizations::AccountAuthorizationsClassType classType) {
    m_classType = classType;
}

inline AccountAuthorizations::AccountAuthorizationsClassType AccountAuthorizations::classType() const {
    return m_classType;
}

inline bool AccountAuthorizations::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeAccountAuthorizations: {
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_authorizations_length = in->fetchInt();
        m_authorizations.clear();
        for (qint32 i = 0; i < m_authorizations_length; i++) {
            Authorization type;
            type.fetch(in);
            m_authorizations.append(type);
        }
        m_classType = static_cast<AccountAuthorizationsClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

inline bool AccountAuthorizations::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeAccountAuthorizations: {
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_authorizations.count());
        for (qint32 i = 0; i < m_authorizations.count(); i++) {
            m_authorizations[i].push(out);
        }
        return true;
    }
        break;
    
    default:
        return false;
    }
}

inline QMap<QString, QVariant> AccountAuthorizations::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeAccountAuthorizations: {
        result["classType"] = "AccountAuthorizations::typeAccountAuthorizations";
        QList<QVariant> _authorizations;
        Q_FOREACH(const Authorization &m__type, m_authorizations)
            _authorizations << m__type.toMap();
        result["authorizations"] = _authorizations;
        return result;
    }
        break;
    
    default:
        return result;
    }
}

inline AccountAuthorizations AccountAuthorizations::fromMap(const QMap<QString, QVariant> &map) {
    AccountAuthorizations result;
    if(map.value("classType").toString() == "AccountAuthorizations::typeAccountAuthorizations") {
        result.setClassType(typeAccountAuthorizations);
        QList<QVariant> map_authorizations = map["authorizations"].toList();
        QList<Authorization> _authorizations;
        Q_FOREACH(const QVariant &var, map_authorizations)
            _authorizations << Authorization::fromMap(var.toMap());
        result.setAuthorizations(_authorizations);
        return result;
    }
    return result;
}

inline QByteArray AccountAuthorizations::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

inline QDataStream &operator<<(QDataStream &stream, const AccountAuthorizations &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case AccountAuthorizations::typeAccountAuthorizations:
        stream << item.authorizations();
        break;
    }
    return stream;
}

inline QDataStream &operator>>(QDataStream &stream, AccountAuthorizations &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<AccountAuthorizations::AccountAuthorizationsClassType>(type));
    switch(type) {
    case AccountAuthorizations::typeAccountAuthorizations: {
        QList<Authorization> m_authorizations;
        stream >> m_authorizations;
        item.setAuthorizations(m_authorizations);
    }
        break;
    }
    return stream;
}


#endif // LQTG_TYPE_ACCOUNTAUTHORIZATIONS
