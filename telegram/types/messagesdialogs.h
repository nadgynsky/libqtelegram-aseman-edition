// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_MESSAGESDIALOGS
#define LQTG_TYPE_MESSAGESDIALOGS

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

#include <QList>
#include "chat.h"
#include <QtGlobal>
#include "dialog.h"
#include "message.h"
#include "user.h"

class LIBQTELEGRAMSHARED_EXPORT MessagesDialogs : public TelegramTypeObject
{
public:
    enum MessagesDialogsClassType {
        typeMessagesDialogs = 0x15ba6c40,
        typeMessagesDialogsSlice = 0x71e094f3
    };

    MessagesDialogs(MessagesDialogsClassType classType = typeMessagesDialogs, InboundPkt *in = 0);
    MessagesDialogs(InboundPkt *in);
    MessagesDialogs(const Null&);
    virtual ~MessagesDialogs();

    void setChats(const QList<Chat> &chats);
    QList<Chat> chats() const;

    void setCount(qint32 count);
    qint32 count() const;

    void setDialogs(const QList<Dialog> &dialogs);
    QList<Dialog> dialogs() const;

    void setMessages(const QList<Message> &messages);
    QList<Message> messages() const;

    void setUsers(const QList<User> &users);
    QList<User> users() const;

    void setClassType(MessagesDialogsClassType classType);
    MessagesDialogsClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static MessagesDialogs fromMap(const QMap<QString, QVariant> &map);

    bool operator ==(const MessagesDialogs &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    QList<Chat> m_chats;
    qint32 m_count;
    QList<Dialog> m_dialogs;
    QList<Message> m_messages;
    QList<User> m_users;
    MessagesDialogsClassType m_classType;
};

Q_DECLARE_METATYPE(MessagesDialogs)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const MessagesDialogs &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, MessagesDialogs &item);

inline MessagesDialogs::MessagesDialogs(MessagesDialogsClassType classType, InboundPkt *in) :
    m_count(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

inline MessagesDialogs::MessagesDialogs(InboundPkt *in) :
    m_count(0),
    m_classType(typeMessagesDialogs)
{
    fetch(in);
}

inline MessagesDialogs::MessagesDialogs(const Null &null) :
    TelegramTypeObject(null),
    m_count(0),
    m_classType(typeMessagesDialogs)
{
}

inline MessagesDialogs::~MessagesDialogs() {
}

inline void MessagesDialogs::setChats(const QList<Chat> &chats) {
    m_chats = chats;
}

inline QList<Chat> MessagesDialogs::chats() const {
    return m_chats;
}

inline void MessagesDialogs::setCount(qint32 count) {
    m_count = count;
}

inline qint32 MessagesDialogs::count() const {
    return m_count;
}

inline void MessagesDialogs::setDialogs(const QList<Dialog> &dialogs) {
    m_dialogs = dialogs;
}

inline QList<Dialog> MessagesDialogs::dialogs() const {
    return m_dialogs;
}

inline void MessagesDialogs::setMessages(const QList<Message> &messages) {
    m_messages = messages;
}

inline QList<Message> MessagesDialogs::messages() const {
    return m_messages;
}

inline void MessagesDialogs::setUsers(const QList<User> &users) {
    m_users = users;
}

inline QList<User> MessagesDialogs::users() const {
    return m_users;
}

inline bool MessagesDialogs::operator ==(const MessagesDialogs &b) const {
    return m_classType == b.m_classType &&
           m_chats == b.m_chats &&
           m_count == b.m_count &&
           m_dialogs == b.m_dialogs &&
           m_messages == b.m_messages &&
           m_users == b.m_users;
}

inline void MessagesDialogs::setClassType(MessagesDialogs::MessagesDialogsClassType classType) {
    m_classType = classType;
}

inline MessagesDialogs::MessagesDialogsClassType MessagesDialogs::classType() const {
    return m_classType;
}

inline bool MessagesDialogs::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeMessagesDialogs: {
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_dialogs_length = in->fetchInt();
        m_dialogs.clear();
        for (qint32 i = 0; i < m_dialogs_length; i++) {
            Dialog type;
            type.fetch(in);
            m_dialogs.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_messages_length = in->fetchInt();
        m_messages.clear();
        for (qint32 i = 0; i < m_messages_length; i++) {
            Message type;
            type.fetch(in);
            m_messages.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_chats_length = in->fetchInt();
        m_chats.clear();
        for (qint32 i = 0; i < m_chats_length; i++) {
            Chat type;
            type.fetch(in);
            m_chats.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_users_length = in->fetchInt();
        m_users.clear();
        for (qint32 i = 0; i < m_users_length; i++) {
            User type;
            type.fetch(in);
            m_users.append(type);
        }
        m_classType = static_cast<MessagesDialogsClassType>(x);
        return true;
    }
        break;
    
    case typeMessagesDialogsSlice: {
        m_count = in->fetchInt();
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_dialogs_length = in->fetchInt();
        m_dialogs.clear();
        for (qint32 i = 0; i < m_dialogs_length; i++) {
            Dialog type;
            type.fetch(in);
            m_dialogs.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_messages_length = in->fetchInt();
        m_messages.clear();
        for (qint32 i = 0; i < m_messages_length; i++) {
            Message type;
            type.fetch(in);
            m_messages.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_chats_length = in->fetchInt();
        m_chats.clear();
        for (qint32 i = 0; i < m_chats_length; i++) {
            Chat type;
            type.fetch(in);
            m_chats.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_users_length = in->fetchInt();
        m_users.clear();
        for (qint32 i = 0; i < m_users_length; i++) {
            User type;
            type.fetch(in);
            m_users.append(type);
        }
        m_classType = static_cast<MessagesDialogsClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

inline bool MessagesDialogs::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeMessagesDialogs: {
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_dialogs.count());
        for (qint32 i = 0; i < m_dialogs.count(); i++) {
            m_dialogs[i].push(out);
        }
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_messages.count());
        for (qint32 i = 0; i < m_messages.count(); i++) {
            m_messages[i].push(out);
        }
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_chats.count());
        for (qint32 i = 0; i < m_chats.count(); i++) {
            m_chats[i].push(out);
        }
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_users.count());
        for (qint32 i = 0; i < m_users.count(); i++) {
            m_users[i].push(out);
        }
        return true;
    }
        break;
    
    case typeMessagesDialogsSlice: {
        out->appendInt(m_count);
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_dialogs.count());
        for (qint32 i = 0; i < m_dialogs.count(); i++) {
            m_dialogs[i].push(out);
        }
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_messages.count());
        for (qint32 i = 0; i < m_messages.count(); i++) {
            m_messages[i].push(out);
        }
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_chats.count());
        for (qint32 i = 0; i < m_chats.count(); i++) {
            m_chats[i].push(out);
        }
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_users.count());
        for (qint32 i = 0; i < m_users.count(); i++) {
            m_users[i].push(out);
        }
        return true;
    }
        break;
    
    default:
        return false;
    }
}

inline QMap<QString, QVariant> MessagesDialogs::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeMessagesDialogs: {
        result["classType"] = "MessagesDialogs::typeMessagesDialogs";
        QList<QVariant> _dialogs;
        Q_FOREACH(const Dialog &m__type, m_dialogs)
            _dialogs << m__type.toMap();
        result["dialogs"] = _dialogs;
        QList<QVariant> _messages;
        Q_FOREACH(const Message &m__type, m_messages)
            _messages << m__type.toMap();
        result["messages"] = _messages;
        QList<QVariant> _chats;
        Q_FOREACH(const Chat &m__type, m_chats)
            _chats << m__type.toMap();
        result["chats"] = _chats;
        QList<QVariant> _users;
        Q_FOREACH(const User &m__type, m_users)
            _users << m__type.toMap();
        result["users"] = _users;
        return result;
    }
        break;
    
    case typeMessagesDialogsSlice: {
        result["classType"] = "MessagesDialogs::typeMessagesDialogsSlice";
        result["count"] = QVariant::fromValue<qint32>(count());
        QList<QVariant> _dialogs;
        Q_FOREACH(const Dialog &m__type, m_dialogs)
            _dialogs << m__type.toMap();
        result["dialogs"] = _dialogs;
        QList<QVariant> _messages;
        Q_FOREACH(const Message &m__type, m_messages)
            _messages << m__type.toMap();
        result["messages"] = _messages;
        QList<QVariant> _chats;
        Q_FOREACH(const Chat &m__type, m_chats)
            _chats << m__type.toMap();
        result["chats"] = _chats;
        QList<QVariant> _users;
        Q_FOREACH(const User &m__type, m_users)
            _users << m__type.toMap();
        result["users"] = _users;
        return result;
    }
        break;
    
    default:
        return result;
    }
}

inline MessagesDialogs MessagesDialogs::fromMap(const QMap<QString, QVariant> &map) {
    MessagesDialogs result;
    if(map.value("classType").toString() == "MessagesDialogs::typeMessagesDialogs") {
        result.setClassType(typeMessagesDialogs);
        QList<QVariant> map_dialogs = map["dialogs"].toList();
        QList<Dialog> _dialogs;
        Q_FOREACH(const QVariant &var, map_dialogs)
            _dialogs << Dialog::fromMap(var.toMap());
        result.setDialogs(_dialogs);
        QList<QVariant> map_messages = map["messages"].toList();
        QList<Message> _messages;
        Q_FOREACH(const QVariant &var, map_messages)
            _messages << Message::fromMap(var.toMap());
        result.setMessages(_messages);
        QList<QVariant> map_chats = map["chats"].toList();
        QList<Chat> _chats;
        Q_FOREACH(const QVariant &var, map_chats)
            _chats << Chat::fromMap(var.toMap());
        result.setChats(_chats);
        QList<QVariant> map_users = map["users"].toList();
        QList<User> _users;
        Q_FOREACH(const QVariant &var, map_users)
            _users << User::fromMap(var.toMap());
        result.setUsers(_users);
        return result;
    }
    if(map.value("classType").toString() == "MessagesDialogs::typeMessagesDialogsSlice") {
        result.setClassType(typeMessagesDialogsSlice);
        result.setCount( map.value("count").value<qint32>() );
        QList<QVariant> map_dialogs = map["dialogs"].toList();
        QList<Dialog> _dialogs;
        Q_FOREACH(const QVariant &var, map_dialogs)
            _dialogs << Dialog::fromMap(var.toMap());
        result.setDialogs(_dialogs);
        QList<QVariant> map_messages = map["messages"].toList();
        QList<Message> _messages;
        Q_FOREACH(const QVariant &var, map_messages)
            _messages << Message::fromMap(var.toMap());
        result.setMessages(_messages);
        QList<QVariant> map_chats = map["chats"].toList();
        QList<Chat> _chats;
        Q_FOREACH(const QVariant &var, map_chats)
            _chats << Chat::fromMap(var.toMap());
        result.setChats(_chats);
        QList<QVariant> map_users = map["users"].toList();
        QList<User> _users;
        Q_FOREACH(const QVariant &var, map_users)
            _users << User::fromMap(var.toMap());
        result.setUsers(_users);
        return result;
    }
    return result;
}

inline QByteArray MessagesDialogs::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

inline QDataStream &operator<<(QDataStream &stream, const MessagesDialogs &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case MessagesDialogs::typeMessagesDialogs:
        stream << item.dialogs();
        stream << item.messages();
        stream << item.chats();
        stream << item.users();
        break;
    case MessagesDialogs::typeMessagesDialogsSlice:
        stream << item.count();
        stream << item.dialogs();
        stream << item.messages();
        stream << item.chats();
        stream << item.users();
        break;
    }
    return stream;
}

inline QDataStream &operator>>(QDataStream &stream, MessagesDialogs &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<MessagesDialogs::MessagesDialogsClassType>(type));
    switch(type) {
    case MessagesDialogs::typeMessagesDialogs: {
        QList<Dialog> m_dialogs;
        stream >> m_dialogs;
        item.setDialogs(m_dialogs);
        QList<Message> m_messages;
        stream >> m_messages;
        item.setMessages(m_messages);
        QList<Chat> m_chats;
        stream >> m_chats;
        item.setChats(m_chats);
        QList<User> m_users;
        stream >> m_users;
        item.setUsers(m_users);
    }
        break;
    case MessagesDialogs::typeMessagesDialogsSlice: {
        qint32 m_count;
        stream >> m_count;
        item.setCount(m_count);
        QList<Dialog> m_dialogs;
        stream >> m_dialogs;
        item.setDialogs(m_dialogs);
        QList<Message> m_messages;
        stream >> m_messages;
        item.setMessages(m_messages);
        QList<Chat> m_chats;
        stream >> m_chats;
        item.setChats(m_chats);
        QList<User> m_users;
        stream >> m_users;
        item.setUsers(m_users);
    }
        break;
    }
    return stream;
}


#endif // LQTG_TYPE_MESSAGESDIALOGS
