// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_MESSAGEACTION_OBJECT
#define LQTG_TYPE_MESSAGEACTION_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/messageaction.h"

#include <QPointer>
#include "photoobject.h"

class LIBQTELEGRAMSHARED_EXPORT MessageActionObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(MessageActionClassType)
    Q_PROPERTY(qint32 channelId READ channelId WRITE setChannelId NOTIFY channelIdChanged)
    Q_PROPERTY(qint32 chatId READ chatId WRITE setChatId NOTIFY chatIdChanged)
    Q_PROPERTY(qint32 inviterId READ inviterId WRITE setInviterId NOTIFY inviterIdChanged)
    Q_PROPERTY(PhotoObject* photo READ photo WRITE setPhoto NOTIFY photoChanged)
    Q_PROPERTY(QString title READ title WRITE setTitle NOTIFY titleChanged)
    Q_PROPERTY(qint32 userId READ userId WRITE setUserId NOTIFY userIdChanged)
    Q_PROPERTY(QList<qint32> users READ users WRITE setUsers NOTIFY usersChanged)
    Q_PROPERTY(MessageAction core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum MessageActionClassType {
        TypeMessageActionEmpty,
        TypeMessageActionChatCreate,
        TypeMessageActionChatEditTitle,
        TypeMessageActionChatEditPhoto,
        TypeMessageActionChatDeletePhoto,
        TypeMessageActionChatAddUser,
        TypeMessageActionChatDeleteUser,
        TypeMessageActionChatJoinedByLink,
        TypeMessageActionChannelCreate,
        TypeMessageActionChatMigrateTo,
        TypeMessageActionChannelMigrateFrom,
        TypeMessageActionPinMessage
    };

    MessageActionObject(const MessageAction &core, QObject *parent = 0);
    MessageActionObject(QObject *parent = 0);
    virtual ~MessageActionObject();

    void setChannelId(qint32 channelId);
    qint32 channelId() const;

    void setChatId(qint32 chatId);
    qint32 chatId() const;

    void setInviterId(qint32 inviterId);
    qint32 inviterId() const;

    void setPhoto(PhotoObject* photo);
    PhotoObject* photo() const;

    void setTitle(const QString &title);
    QString title() const;

    void setUserId(qint32 userId);
    qint32 userId() const;

    void setUsers(const QList<qint32> &users);
    QList<qint32> users() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const MessageAction &core);
    MessageAction core() const;

    MessageActionObject &operator =(const MessageAction &b);
    bool operator ==(const MessageAction &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void channelIdChanged();
    void chatIdChanged();
    void inviterIdChanged();
    void photoChanged();
    void titleChanged();
    void userIdChanged();
    void usersChanged();

private Q_SLOTS:
    void corePhotoChanged();

private:
    QPointer<PhotoObject> m_photo;
    MessageAction m_core;
};

inline MessageActionObject::MessageActionObject(const MessageAction &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_photo(0),
    m_core(core)
{
    m_photo = new PhotoObject(m_core.photo(), this);
    connect(m_photo.data(), &PhotoObject::coreChanged, this, &MessageActionObject::corePhotoChanged);
}

inline MessageActionObject::MessageActionObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_photo(0),
    m_core()
{
    m_photo = new PhotoObject(m_core.photo(), this);
    connect(m_photo.data(), &PhotoObject::coreChanged, this, &MessageActionObject::corePhotoChanged);
}

inline MessageActionObject::~MessageActionObject() {
}

inline void MessageActionObject::setChannelId(qint32 channelId) {
    if(m_core.channelId() == channelId) return;
    m_core.setChannelId(channelId);
    Q_EMIT channelIdChanged();
    Q_EMIT coreChanged();
}

inline qint32 MessageActionObject::channelId() const {
    return m_core.channelId();
}

inline void MessageActionObject::setChatId(qint32 chatId) {
    if(m_core.chatId() == chatId) return;
    m_core.setChatId(chatId);
    Q_EMIT chatIdChanged();
    Q_EMIT coreChanged();
}

inline qint32 MessageActionObject::chatId() const {
    return m_core.chatId();
}

inline void MessageActionObject::setInviterId(qint32 inviterId) {
    if(m_core.inviterId() == inviterId) return;
    m_core.setInviterId(inviterId);
    Q_EMIT inviterIdChanged();
    Q_EMIT coreChanged();
}

inline qint32 MessageActionObject::inviterId() const {
    return m_core.inviterId();
}

inline void MessageActionObject::setPhoto(PhotoObject* photo) {
    if(m_photo == photo) return;
    if(m_photo) delete m_photo;
    m_photo = photo;
    if(m_photo) {
        m_photo->setParent(this);
        m_core.setPhoto(m_photo->core());
        connect(m_photo.data(), &PhotoObject::coreChanged, this, &MessageActionObject::corePhotoChanged);
    }
    Q_EMIT photoChanged();
    Q_EMIT coreChanged();
}

inline PhotoObject*  MessageActionObject::photo() const {
    return m_photo;
}

inline void MessageActionObject::setTitle(const QString &title) {
    if(m_core.title() == title) return;
    m_core.setTitle(title);
    Q_EMIT titleChanged();
    Q_EMIT coreChanged();
}

inline QString MessageActionObject::title() const {
    return m_core.title();
}

inline void MessageActionObject::setUserId(qint32 userId) {
    if(m_core.userId() == userId) return;
    m_core.setUserId(userId);
    Q_EMIT userIdChanged();
    Q_EMIT coreChanged();
}

inline qint32 MessageActionObject::userId() const {
    return m_core.userId();
}

inline void MessageActionObject::setUsers(const QList<qint32> &users) {
    if(m_core.users() == users) return;
    m_core.setUsers(users);
    Q_EMIT usersChanged();
    Q_EMIT coreChanged();
}

inline QList<qint32> MessageActionObject::users() const {
    return m_core.users();
}

inline MessageActionObject &MessageActionObject::operator =(const MessageAction &b) {
    if(m_core == b) return *this;
    m_core = b;
    m_photo->setCore(b.photo());

    Q_EMIT channelIdChanged();
    Q_EMIT chatIdChanged();
    Q_EMIT inviterIdChanged();
    Q_EMIT photoChanged();
    Q_EMIT titleChanged();
    Q_EMIT userIdChanged();
    Q_EMIT usersChanged();
    Q_EMIT coreChanged();
    return *this;
}

inline bool MessageActionObject::operator ==(const MessageAction &b) const {
    return m_core == b;
}

inline void MessageActionObject::setClassType(quint32 classType) {
    MessageAction::MessageActionClassType result;
    switch(classType) {
    case TypeMessageActionEmpty:
        result = MessageAction::typeMessageActionEmpty;
        break;
    case TypeMessageActionChatCreate:
        result = MessageAction::typeMessageActionChatCreate;
        break;
    case TypeMessageActionChatEditTitle:
        result = MessageAction::typeMessageActionChatEditTitle;
        break;
    case TypeMessageActionChatEditPhoto:
        result = MessageAction::typeMessageActionChatEditPhoto;
        break;
    case TypeMessageActionChatDeletePhoto:
        result = MessageAction::typeMessageActionChatDeletePhoto;
        break;
    case TypeMessageActionChatAddUser:
        result = MessageAction::typeMessageActionChatAddUser;
        break;
    case TypeMessageActionChatDeleteUser:
        result = MessageAction::typeMessageActionChatDeleteUser;
        break;
    case TypeMessageActionChatJoinedByLink:
        result = MessageAction::typeMessageActionChatJoinedByLink;
        break;
    case TypeMessageActionChannelCreate:
        result = MessageAction::typeMessageActionChannelCreate;
        break;
    case TypeMessageActionChatMigrateTo:
        result = MessageAction::typeMessageActionChatMigrateTo;
        break;
    case TypeMessageActionChannelMigrateFrom:
        result = MessageAction::typeMessageActionChannelMigrateFrom;
        break;
    case TypeMessageActionPinMessage:
        result = MessageAction::typeMessageActionPinMessage;
        break;
    default:
        result = MessageAction::typeMessageActionEmpty;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

inline quint32 MessageActionObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case MessageAction::typeMessageActionEmpty:
        result = TypeMessageActionEmpty;
        break;
    case MessageAction::typeMessageActionChatCreate:
        result = TypeMessageActionChatCreate;
        break;
    case MessageAction::typeMessageActionChatEditTitle:
        result = TypeMessageActionChatEditTitle;
        break;
    case MessageAction::typeMessageActionChatEditPhoto:
        result = TypeMessageActionChatEditPhoto;
        break;
    case MessageAction::typeMessageActionChatDeletePhoto:
        result = TypeMessageActionChatDeletePhoto;
        break;
    case MessageAction::typeMessageActionChatAddUser:
        result = TypeMessageActionChatAddUser;
        break;
    case MessageAction::typeMessageActionChatDeleteUser:
        result = TypeMessageActionChatDeleteUser;
        break;
    case MessageAction::typeMessageActionChatJoinedByLink:
        result = TypeMessageActionChatJoinedByLink;
        break;
    case MessageAction::typeMessageActionChannelCreate:
        result = TypeMessageActionChannelCreate;
        break;
    case MessageAction::typeMessageActionChatMigrateTo:
        result = TypeMessageActionChatMigrateTo;
        break;
    case MessageAction::typeMessageActionChannelMigrateFrom:
        result = TypeMessageActionChannelMigrateFrom;
        break;
    case MessageAction::typeMessageActionPinMessage:
        result = TypeMessageActionPinMessage;
        break;
    default:
        result = TypeMessageActionEmpty;
        break;
    }

    return result;
}

inline void MessageActionObject::setCore(const MessageAction &core) {
    operator =(core);
}

inline MessageAction MessageActionObject::core() const {
    return m_core;
}

inline void MessageActionObject::corePhotoChanged() {
    if(m_core.photo() == m_photo->core()) return;
    m_core.setPhoto(m_photo->core());
    Q_EMIT photoChanged();
    Q_EMIT coreChanged();
}

#endif // LQTG_TYPE_MESSAGEACTION_OBJECT
