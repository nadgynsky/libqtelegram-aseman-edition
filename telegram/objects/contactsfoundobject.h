// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CONTACTSFOUND_OBJECT
#define LQTG_TYPE_CONTACTSFOUND_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/contactsfound.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT ContactsFoundObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(ContactsFoundClassType)
    Q_PROPERTY(QList<Chat> chats READ chats WRITE setChats NOTIFY chatsChanged)
    Q_PROPERTY(QList<Peer> results READ results WRITE setResults NOTIFY resultsChanged)
    Q_PROPERTY(QList<User> users READ users WRITE setUsers NOTIFY usersChanged)
    Q_PROPERTY(ContactsFound core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum ContactsFoundClassType {
        TypeContactsFound
    };

    ContactsFoundObject(const ContactsFound &core, QObject *parent = 0);
    ContactsFoundObject(QObject *parent = 0);
    virtual ~ContactsFoundObject();

    void setChats(const QList<Chat> &chats);
    QList<Chat> chats() const;

    void setResults(const QList<Peer> &results);
    QList<Peer> results() const;

    void setUsers(const QList<User> &users);
    QList<User> users() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const ContactsFound &core);
    ContactsFound core() const;

    ContactsFoundObject &operator =(const ContactsFound &b);
    bool operator ==(const ContactsFound &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void chatsChanged();
    void resultsChanged();
    void usersChanged();

private Q_SLOTS:

private:
    ContactsFound m_core;
};

inline ContactsFoundObject::ContactsFoundObject(const ContactsFound &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

inline ContactsFoundObject::ContactsFoundObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

inline ContactsFoundObject::~ContactsFoundObject() {
}

inline void ContactsFoundObject::setChats(const QList<Chat> &chats) {
    if(m_core.chats() == chats) return;
    m_core.setChats(chats);
    Q_EMIT chatsChanged();
    Q_EMIT coreChanged();
}

inline QList<Chat> ContactsFoundObject::chats() const {
    return m_core.chats();
}

inline void ContactsFoundObject::setResults(const QList<Peer> &results) {
    if(m_core.results() == results) return;
    m_core.setResults(results);
    Q_EMIT resultsChanged();
    Q_EMIT coreChanged();
}

inline QList<Peer> ContactsFoundObject::results() const {
    return m_core.results();
}

inline void ContactsFoundObject::setUsers(const QList<User> &users) {
    if(m_core.users() == users) return;
    m_core.setUsers(users);
    Q_EMIT usersChanged();
    Q_EMIT coreChanged();
}

inline QList<User> ContactsFoundObject::users() const {
    return m_core.users();
}

inline ContactsFoundObject &ContactsFoundObject::operator =(const ContactsFound &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT chatsChanged();
    Q_EMIT resultsChanged();
    Q_EMIT usersChanged();
    Q_EMIT coreChanged();
    return *this;
}

inline bool ContactsFoundObject::operator ==(const ContactsFound &b) const {
    return m_core == b;
}

inline void ContactsFoundObject::setClassType(quint32 classType) {
    ContactsFound::ContactsFoundClassType result;
    switch(classType) {
    case TypeContactsFound:
        result = ContactsFound::typeContactsFound;
        break;
    default:
        result = ContactsFound::typeContactsFound;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

inline quint32 ContactsFoundObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case ContactsFound::typeContactsFound:
        result = TypeContactsFound;
        break;
    default:
        result = TypeContactsFound;
        break;
    }

    return result;
}

inline void ContactsFoundObject::setCore(const ContactsFound &core) {
    operator =(core);
}

inline ContactsFound ContactsFoundObject::core() const {
    return m_core;
}

#endif // LQTG_TYPE_CONTACTSFOUND_OBJECT
