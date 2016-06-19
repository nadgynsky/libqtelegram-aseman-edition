// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_INPUTBOTINLINEMESSAGEID
#define LQTG_TYPE_INPUTBOTINLINEMESSAGEID

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT InputBotInlineMessageID : public TelegramTypeObject
{
public:
    enum InputBotInlineMessageIDClassType {
        typeInputBotInlineMessageID = 0x890c3d89
    };

    InputBotInlineMessageID(InputBotInlineMessageIDClassType classType = typeInputBotInlineMessageID, InboundPkt *in = 0);
    InputBotInlineMessageID(InboundPkt *in);
    InputBotInlineMessageID(const Null&);
    virtual ~InputBotInlineMessageID();

    void setAccessHash(qint64 accessHash);
    qint64 accessHash() const;

    void setDcId(qint32 dcId);
    qint32 dcId() const;

    void setId(qint64 id);
    qint64 id() const;

    void setClassType(InputBotInlineMessageIDClassType classType);
    InputBotInlineMessageIDClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static InputBotInlineMessageID fromMap(const QMap<QString, QVariant> &map);

    bool operator ==(const InputBotInlineMessageID &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    qint64 m_accessHash;
    qint32 m_dcId;
    qint64 m_id;
    InputBotInlineMessageIDClassType m_classType;
};

Q_DECLARE_METATYPE(InputBotInlineMessageID)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const InputBotInlineMessageID &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, InputBotInlineMessageID &item);

inline InputBotInlineMessageID::InputBotInlineMessageID(InputBotInlineMessageIDClassType classType, InboundPkt *in) :
    m_accessHash(0),
    m_dcId(0),
    m_id(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

inline InputBotInlineMessageID::InputBotInlineMessageID(InboundPkt *in) :
    m_accessHash(0),
    m_dcId(0),
    m_id(0),
    m_classType(typeInputBotInlineMessageID)
{
    fetch(in);
}

inline InputBotInlineMessageID::InputBotInlineMessageID(const Null &null) :
    TelegramTypeObject(null),
    m_accessHash(0),
    m_dcId(0),
    m_id(0),
    m_classType(typeInputBotInlineMessageID)
{
}

inline InputBotInlineMessageID::~InputBotInlineMessageID() {
}

inline void InputBotInlineMessageID::setAccessHash(qint64 accessHash) {
    m_accessHash = accessHash;
}

inline qint64 InputBotInlineMessageID::accessHash() const {
    return m_accessHash;
}

inline void InputBotInlineMessageID::setDcId(qint32 dcId) {
    m_dcId = dcId;
}

inline qint32 InputBotInlineMessageID::dcId() const {
    return m_dcId;
}

inline void InputBotInlineMessageID::setId(qint64 id) {
    m_id = id;
}

inline qint64 InputBotInlineMessageID::id() const {
    return m_id;
}

inline bool InputBotInlineMessageID::operator ==(const InputBotInlineMessageID &b) const {
    return m_classType == b.m_classType &&
           m_accessHash == b.m_accessHash &&
           m_dcId == b.m_dcId &&
           m_id == b.m_id;
}

inline void InputBotInlineMessageID::setClassType(InputBotInlineMessageID::InputBotInlineMessageIDClassType classType) {
    m_classType = classType;
}

inline InputBotInlineMessageID::InputBotInlineMessageIDClassType InputBotInlineMessageID::classType() const {
    return m_classType;
}

inline bool InputBotInlineMessageID::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeInputBotInlineMessageID: {
        m_dcId = in->fetchInt();
        m_id = in->fetchLong();
        m_accessHash = in->fetchLong();
        m_classType = static_cast<InputBotInlineMessageIDClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

inline bool InputBotInlineMessageID::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeInputBotInlineMessageID: {
        out->appendInt(m_dcId);
        out->appendLong(m_id);
        out->appendLong(m_accessHash);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

inline QMap<QString, QVariant> InputBotInlineMessageID::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeInputBotInlineMessageID: {
        result["classType"] = "InputBotInlineMessageID::typeInputBotInlineMessageID";
        result["dcId"] = QVariant::fromValue<qint32>(dcId());
        result["id"] = QVariant::fromValue<qint64>(id());
        result["accessHash"] = QVariant::fromValue<qint64>(accessHash());
        return result;
    }
        break;
    
    default:
        return result;
    }
}

inline InputBotInlineMessageID InputBotInlineMessageID::fromMap(const QMap<QString, QVariant> &map) {
    InputBotInlineMessageID result;
    if(map.value("classType").toString() == "InputBotInlineMessageID::typeInputBotInlineMessageID") {
        result.setClassType(typeInputBotInlineMessageID);
        result.setDcId( map.value("dcId").value<qint32>() );
        result.setId( map.value("id").value<qint64>() );
        result.setAccessHash( map.value("accessHash").value<qint64>() );
        return result;
    }
    return result;
}

inline QByteArray InputBotInlineMessageID::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

inline QDataStream &operator<<(QDataStream &stream, const InputBotInlineMessageID &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case InputBotInlineMessageID::typeInputBotInlineMessageID:
        stream << item.dcId();
        stream << item.id();
        stream << item.accessHash();
        break;
    }
    return stream;
}

inline QDataStream &operator>>(QDataStream &stream, InputBotInlineMessageID &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<InputBotInlineMessageID::InputBotInlineMessageIDClassType>(type));
    switch(type) {
    case InputBotInlineMessageID::typeInputBotInlineMessageID: {
        qint32 m_dc_id;
        stream >> m_dc_id;
        item.setDcId(m_dc_id);
        qint64 m_id;
        stream >> m_id;
        item.setId(m_id);
        qint64 m_access_hash;
        stream >> m_access_hash;
        item.setAccessHash(m_access_hash);
    }
        break;
    }
    return stream;
}


#endif // LQTG_TYPE_INPUTBOTINLINEMESSAGEID
