// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_MESSAGEENTITY_OBJECT
#define LQTG_TYPE_MESSAGEENTITY_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/messageentity.h"

#include <QPointer>
#include "inputuserobject.h"

class LIBQTELEGRAMSHARED_EXPORT MessageEntityObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(MessageEntityClassType)
    Q_PROPERTY(QString language READ language WRITE setLanguage NOTIFY languageChanged)
    Q_PROPERTY(qint32 length READ length WRITE setLength NOTIFY lengthChanged)
    Q_PROPERTY(qint32 offset READ offset WRITE setOffset NOTIFY offsetChanged)
    Q_PROPERTY(QString url READ url WRITE setUrl NOTIFY urlChanged)
    Q_PROPERTY(InputUserObject* userIdInputUser READ userIdInputUser WRITE setUserIdInputUser NOTIFY userIdInputUserChanged)
    Q_PROPERTY(qint32 userIdInt READ userIdInt WRITE setUserIdInt NOTIFY userIdIntChanged)
    Q_PROPERTY(MessageEntity core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum MessageEntityClassType {
        TypeMessageEntityUnknown,
        TypeMessageEntityMention,
        TypeMessageEntityHashtag,
        TypeMessageEntityBotCommand,
        TypeMessageEntityUrl,
        TypeMessageEntityEmail,
        TypeMessageEntityBold,
        TypeMessageEntityItalic,
        TypeMessageEntityCode,
        TypeMessageEntityPre,
        TypeMessageEntityTextUrl,
        TypeMessageEntityMentionName,
        TypeInputMessageEntityMentionName
    };

    MessageEntityObject(const MessageEntity &core, QObject *parent = 0);
    MessageEntityObject(QObject *parent = 0);
    virtual ~MessageEntityObject();

    void setLanguage(const QString &language);
    QString language() const;

    void setLength(qint32 length);
    qint32 length() const;

    void setOffset(qint32 offset);
    qint32 offset() const;

    void setUrl(const QString &url);
    QString url() const;

    void setUserIdInputUser(InputUserObject* userIdInputUser);
    InputUserObject* userIdInputUser() const;

    void setUserIdInt(qint32 userIdInt);
    qint32 userIdInt() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const MessageEntity &core);
    MessageEntity core() const;

    MessageEntityObject &operator =(const MessageEntity &b);
    bool operator ==(const MessageEntity &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void languageChanged();
    void lengthChanged();
    void offsetChanged();
    void urlChanged();
    void userIdInputUserChanged();
    void userIdIntChanged();

private Q_SLOTS:
    void coreUserIdInputUserChanged();

private:
    QPointer<InputUserObject> m_userIdInputUser;
    MessageEntity m_core;
};

inline MessageEntityObject::MessageEntityObject(const MessageEntity &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_userIdInputUser(0),
    m_core(core)
{
    m_userIdInputUser = new InputUserObject(m_core.userIdInputUser(), this);
    connect(m_userIdInputUser.data(), &InputUserObject::coreChanged, this, &MessageEntityObject::coreUserIdInputUserChanged);
}

inline MessageEntityObject::MessageEntityObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_userIdInputUser(0),
    m_core()
{
    m_userIdInputUser = new InputUserObject(m_core.userIdInputUser(), this);
    connect(m_userIdInputUser.data(), &InputUserObject::coreChanged, this, &MessageEntityObject::coreUserIdInputUserChanged);
}

inline MessageEntityObject::~MessageEntityObject() {
}

inline void MessageEntityObject::setLanguage(const QString &language) {
    if(m_core.language() == language) return;
    m_core.setLanguage(language);
    Q_EMIT languageChanged();
    Q_EMIT coreChanged();
}

inline QString MessageEntityObject::language() const {
    return m_core.language();
}

inline void MessageEntityObject::setLength(qint32 length) {
    if(m_core.length() == length) return;
    m_core.setLength(length);
    Q_EMIT lengthChanged();
    Q_EMIT coreChanged();
}

inline qint32 MessageEntityObject::length() const {
    return m_core.length();
}

inline void MessageEntityObject::setOffset(qint32 offset) {
    if(m_core.offset() == offset) return;
    m_core.setOffset(offset);
    Q_EMIT offsetChanged();
    Q_EMIT coreChanged();
}

inline qint32 MessageEntityObject::offset() const {
    return m_core.offset();
}

inline void MessageEntityObject::setUrl(const QString &url) {
    if(m_core.url() == url) return;
    m_core.setUrl(url);
    Q_EMIT urlChanged();
    Q_EMIT coreChanged();
}

inline QString MessageEntityObject::url() const {
    return m_core.url();
}

inline void MessageEntityObject::setUserIdInputUser(InputUserObject* userIdInputUser) {
    if(m_userIdInputUser == userIdInputUser) return;
    if(m_userIdInputUser) delete m_userIdInputUser;
    m_userIdInputUser = userIdInputUser;
    if(m_userIdInputUser) {
        m_userIdInputUser->setParent(this);
        m_core.setUserIdInputUser(m_userIdInputUser->core());
        connect(m_userIdInputUser.data(), &InputUserObject::coreChanged, this, &MessageEntityObject::coreUserIdInputUserChanged);
    }
    Q_EMIT userIdInputUserChanged();
    Q_EMIT coreChanged();
}

inline InputUserObject*  MessageEntityObject::userIdInputUser() const {
    return m_userIdInputUser;
}

inline void MessageEntityObject::setUserIdInt(qint32 userIdInt) {
    if(m_core.userIdInt() == userIdInt) return;
    m_core.setUserIdInt(userIdInt);
    Q_EMIT userIdIntChanged();
    Q_EMIT coreChanged();
}

inline qint32 MessageEntityObject::userIdInt() const {
    return m_core.userIdInt();
}

inline MessageEntityObject &MessageEntityObject::operator =(const MessageEntity &b) {
    if(m_core == b) return *this;
    m_core = b;
    m_userIdInputUser->setCore(b.userIdInputUser());

    Q_EMIT languageChanged();
    Q_EMIT lengthChanged();
    Q_EMIT offsetChanged();
    Q_EMIT urlChanged();
    Q_EMIT userIdInputUserChanged();
    Q_EMIT userIdIntChanged();
    Q_EMIT coreChanged();
    return *this;
}

inline bool MessageEntityObject::operator ==(const MessageEntity &b) const {
    return m_core == b;
}

inline void MessageEntityObject::setClassType(quint32 classType) {
    MessageEntity::MessageEntityClassType result;
    switch(classType) {
    case TypeMessageEntityUnknown:
        result = MessageEntity::typeMessageEntityUnknown;
        break;
    case TypeMessageEntityMention:
        result = MessageEntity::typeMessageEntityMention;
        break;
    case TypeMessageEntityHashtag:
        result = MessageEntity::typeMessageEntityHashtag;
        break;
    case TypeMessageEntityBotCommand:
        result = MessageEntity::typeMessageEntityBotCommand;
        break;
    case TypeMessageEntityUrl:
        result = MessageEntity::typeMessageEntityUrl;
        break;
    case TypeMessageEntityEmail:
        result = MessageEntity::typeMessageEntityEmail;
        break;
    case TypeMessageEntityBold:
        result = MessageEntity::typeMessageEntityBold;
        break;
    case TypeMessageEntityItalic:
        result = MessageEntity::typeMessageEntityItalic;
        break;
    case TypeMessageEntityCode:
        result = MessageEntity::typeMessageEntityCode;
        break;
    case TypeMessageEntityPre:
        result = MessageEntity::typeMessageEntityPre;
        break;
    case TypeMessageEntityTextUrl:
        result = MessageEntity::typeMessageEntityTextUrl;
        break;
    case TypeMessageEntityMentionName:
        result = MessageEntity::typeMessageEntityMentionName;
        break;
    case TypeInputMessageEntityMentionName:
        result = MessageEntity::typeInputMessageEntityMentionName;
        break;
    default:
        result = MessageEntity::typeMessageEntityUnknown;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

inline quint32 MessageEntityObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case MessageEntity::typeMessageEntityUnknown:
        result = TypeMessageEntityUnknown;
        break;
    case MessageEntity::typeMessageEntityMention:
        result = TypeMessageEntityMention;
        break;
    case MessageEntity::typeMessageEntityHashtag:
        result = TypeMessageEntityHashtag;
        break;
    case MessageEntity::typeMessageEntityBotCommand:
        result = TypeMessageEntityBotCommand;
        break;
    case MessageEntity::typeMessageEntityUrl:
        result = TypeMessageEntityUrl;
        break;
    case MessageEntity::typeMessageEntityEmail:
        result = TypeMessageEntityEmail;
        break;
    case MessageEntity::typeMessageEntityBold:
        result = TypeMessageEntityBold;
        break;
    case MessageEntity::typeMessageEntityItalic:
        result = TypeMessageEntityItalic;
        break;
    case MessageEntity::typeMessageEntityCode:
        result = TypeMessageEntityCode;
        break;
    case MessageEntity::typeMessageEntityPre:
        result = TypeMessageEntityPre;
        break;
    case MessageEntity::typeMessageEntityTextUrl:
        result = TypeMessageEntityTextUrl;
        break;
    case MessageEntity::typeMessageEntityMentionName:
        result = TypeMessageEntityMentionName;
        break;
    case MessageEntity::typeInputMessageEntityMentionName:
        result = TypeInputMessageEntityMentionName;
        break;
    default:
        result = TypeMessageEntityUnknown;
        break;
    }

    return result;
}

inline void MessageEntityObject::setCore(const MessageEntity &core) {
    operator =(core);
}

inline MessageEntity MessageEntityObject::core() const {
    return m_core;
}

inline void MessageEntityObject::coreUserIdInputUserChanged() {
    if(m_core.userIdInputUser() == m_userIdInputUser->core()) return;
    m_core.setUserIdInputUser(m_userIdInputUser->core());
    Q_EMIT userIdInputUserChanged();
    Q_EMIT coreChanged();
}

#endif // LQTG_TYPE_MESSAGEENTITY_OBJECT
