// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_MESSAGE_OBJECT
#define LQTG_TYPE_MESSAGE_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/message.h"

#include <QPointer>
#include "messageactionobject.h"
#include "messagefwdheaderobject.h"
#include "messagemediaobject.h"
#include "replymarkupobject.h"
#include "peerobject.h"

class LIBQTELEGRAMSHARED_EXPORT MessageObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(MessageClassType)
    Q_PROPERTY(MessageActionObject* action READ action WRITE setAction NOTIFY actionChanged)
    Q_PROPERTY(qint32 date READ date WRITE setDate NOTIFY dateChanged)
    Q_PROPERTY(qint32 editDate READ editDate WRITE setEditDate NOTIFY editDateChanged)
    Q_PROPERTY(QList<MessageEntity> entities READ entities WRITE setEntities NOTIFY entitiesChanged)
    Q_PROPERTY(qint32 flags READ flags WRITE setFlags NOTIFY flagsChanged)
    Q_PROPERTY(qint32 fromId READ fromId WRITE setFromId NOTIFY fromIdChanged)
    Q_PROPERTY(MessageFwdHeaderObject* fwdFrom READ fwdFrom WRITE setFwdFrom NOTIFY fwdFromChanged)
    Q_PROPERTY(qint32 id READ id WRITE setId NOTIFY idChanged)
    Q_PROPERTY(MessageMediaObject* media READ media WRITE setMedia NOTIFY mediaChanged)
    Q_PROPERTY(bool mediaUnread READ mediaUnread WRITE setMediaUnread NOTIFY mediaUnreadChanged)
    Q_PROPERTY(bool mentioned READ mentioned WRITE setMentioned NOTIFY mentionedChanged)
    Q_PROPERTY(QString message READ message WRITE setMessage NOTIFY messageChanged)
    Q_PROPERTY(bool out READ out WRITE setOut NOTIFY outChanged)
    Q_PROPERTY(bool post READ post WRITE setPost NOTIFY postChanged)
    Q_PROPERTY(ReplyMarkupObject* replyMarkup READ replyMarkup WRITE setReplyMarkup NOTIFY replyMarkupChanged)
    Q_PROPERTY(qint32 replyToMsgId READ replyToMsgId WRITE setReplyToMsgId NOTIFY replyToMsgIdChanged)
    Q_PROPERTY(bool silent READ silent WRITE setSilent NOTIFY silentChanged)
    Q_PROPERTY(PeerObject* toId READ toId WRITE setToId NOTIFY toIdChanged)
    Q_PROPERTY(bool unread READ unread WRITE setUnread NOTIFY unreadChanged)
    Q_PROPERTY(qint32 viaBotId READ viaBotId WRITE setViaBotId NOTIFY viaBotIdChanged)
    Q_PROPERTY(qint32 views READ views WRITE setViews NOTIFY viewsChanged)
    Q_PROPERTY(Message core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum MessageClassType {
        TypeMessageEmpty,
        TypeMessage,
        TypeMessageService
    };

    MessageObject(const Message &core, QObject *parent = 0);
    MessageObject(QObject *parent = 0);
    virtual ~MessageObject();

    void setAction(MessageActionObject* action);
    MessageActionObject* action() const;

    void setDate(qint32 date);
    qint32 date() const;

    void setEditDate(qint32 editDate);
    qint32 editDate() const;

    void setEntities(const QList<MessageEntity> &entities);
    QList<MessageEntity> entities() const;

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setFromId(qint32 fromId);
    qint32 fromId() const;

    void setFwdFrom(MessageFwdHeaderObject* fwdFrom);
    MessageFwdHeaderObject* fwdFrom() const;

    void setId(qint32 id);
    qint32 id() const;

    void setMedia(MessageMediaObject* media);
    MessageMediaObject* media() const;

    void setMediaUnread(bool mediaUnread);
    bool mediaUnread() const;

    void setMentioned(bool mentioned);
    bool mentioned() const;

    void setMessage(const QString &message);
    QString message() const;

    void setOut(bool out);
    bool out() const;

    void setPost(bool post);
    bool post() const;

    void setReplyMarkup(ReplyMarkupObject* replyMarkup);
    ReplyMarkupObject* replyMarkup() const;

    void setReplyToMsgId(qint32 replyToMsgId);
    qint32 replyToMsgId() const;

    void setSilent(bool silent);
    bool silent() const;

    void setToId(PeerObject* toId);
    PeerObject* toId() const;

    void setUnread(bool unread);
    bool unread() const;

    void setViaBotId(qint32 viaBotId);
    qint32 viaBotId() const;

    void setViews(qint32 views);
    qint32 views() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const Message &core);
    Message core() const;

    MessageObject &operator =(const Message &b);
    bool operator ==(const Message &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void actionChanged();
    void dateChanged();
    void editDateChanged();
    void entitiesChanged();
    void flagsChanged();
    void fromIdChanged();
    void fwdFromChanged();
    void idChanged();
    void mediaChanged();
    void mediaUnreadChanged();
    void mentionedChanged();
    void messageChanged();
    void outChanged();
    void postChanged();
    void replyMarkupChanged();
    void replyToMsgIdChanged();
    void silentChanged();
    void toIdChanged();
    void unreadChanged();
    void viaBotIdChanged();
    void viewsChanged();

private Q_SLOTS:
    void coreActionChanged();
    void coreFwdFromChanged();
    void coreMediaChanged();
    void coreReplyMarkupChanged();
    void coreToIdChanged();

private:
    QPointer<MessageActionObject> m_action;
    QPointer<MessageFwdHeaderObject> m_fwdFrom;
    QPointer<MessageMediaObject> m_media;
    QPointer<ReplyMarkupObject> m_replyMarkup;
    QPointer<PeerObject> m_toId;
    Message m_core;
};

inline MessageObject::MessageObject(const Message &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_action(0),
    m_fwdFrom(0),
    m_media(0),
    m_replyMarkup(0),
    m_toId(0),
    m_core(core)
{
    m_action = new MessageActionObject(m_core.action(), this);
    connect(m_action.data(), &MessageActionObject::coreChanged, this, &MessageObject::coreActionChanged);
    m_fwdFrom = new MessageFwdHeaderObject(m_core.fwdFrom(), this);
    connect(m_fwdFrom.data(), &MessageFwdHeaderObject::coreChanged, this, &MessageObject::coreFwdFromChanged);
    m_media = new MessageMediaObject(m_core.media(), this);
    connect(m_media.data(), &MessageMediaObject::coreChanged, this, &MessageObject::coreMediaChanged);
    m_replyMarkup = new ReplyMarkupObject(m_core.replyMarkup(), this);
    connect(m_replyMarkup.data(), &ReplyMarkupObject::coreChanged, this, &MessageObject::coreReplyMarkupChanged);
    m_toId = new PeerObject(m_core.toId(), this);
    connect(m_toId.data(), &PeerObject::coreChanged, this, &MessageObject::coreToIdChanged);
}

inline MessageObject::MessageObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_action(0),
    m_fwdFrom(0),
    m_media(0),
    m_replyMarkup(0),
    m_toId(0),
    m_core()
{
    m_action = new MessageActionObject(m_core.action(), this);
    connect(m_action.data(), &MessageActionObject::coreChanged, this, &MessageObject::coreActionChanged);
    m_fwdFrom = new MessageFwdHeaderObject(m_core.fwdFrom(), this);
    connect(m_fwdFrom.data(), &MessageFwdHeaderObject::coreChanged, this, &MessageObject::coreFwdFromChanged);
    m_media = new MessageMediaObject(m_core.media(), this);
    connect(m_media.data(), &MessageMediaObject::coreChanged, this, &MessageObject::coreMediaChanged);
    m_replyMarkup = new ReplyMarkupObject(m_core.replyMarkup(), this);
    connect(m_replyMarkup.data(), &ReplyMarkupObject::coreChanged, this, &MessageObject::coreReplyMarkupChanged);
    m_toId = new PeerObject(m_core.toId(), this);
    connect(m_toId.data(), &PeerObject::coreChanged, this, &MessageObject::coreToIdChanged);
}

inline MessageObject::~MessageObject() {
}

inline void MessageObject::setAction(MessageActionObject* action) {
    if(m_action == action) return;
    if(m_action) delete m_action;
    m_action = action;
    if(m_action) {
        m_action->setParent(this);
        m_core.setAction(m_action->core());
        connect(m_action.data(), &MessageActionObject::coreChanged, this, &MessageObject::coreActionChanged);
    }
    Q_EMIT actionChanged();
    Q_EMIT coreChanged();
}

inline MessageActionObject*  MessageObject::action() const {
    return m_action;
}

inline void MessageObject::setDate(qint32 date) {
    if(m_core.date() == date) return;
    m_core.setDate(date);
    Q_EMIT dateChanged();
    Q_EMIT coreChanged();
}

inline qint32 MessageObject::date() const {
    return m_core.date();
}

inline void MessageObject::setEditDate(qint32 editDate) {
    if(m_core.editDate() == editDate) return;
    m_core.setEditDate(editDate);
    Q_EMIT editDateChanged();
    Q_EMIT coreChanged();
}

inline qint32 MessageObject::editDate() const {
    return m_core.editDate();
}

inline void MessageObject::setEntities(const QList<MessageEntity> &entities) {
    if(m_core.entities() == entities) return;
    m_core.setEntities(entities);
    Q_EMIT entitiesChanged();
    Q_EMIT coreChanged();
}

inline QList<MessageEntity> MessageObject::entities() const {
    return m_core.entities();
}

inline void MessageObject::setFlags(qint32 flags) {
    if(m_core.flags() == flags) return;
    m_core.setFlags(flags);
    Q_EMIT flagsChanged();
    Q_EMIT coreChanged();
}

inline qint32 MessageObject::flags() const {
    return m_core.flags();
}

inline void MessageObject::setFromId(qint32 fromId) {
    if(m_core.fromId() == fromId) return;
    m_core.setFromId(fromId);
    Q_EMIT fromIdChanged();
    Q_EMIT coreChanged();
}

inline qint32 MessageObject::fromId() const {
    return m_core.fromId();
}

inline void MessageObject::setFwdFrom(MessageFwdHeaderObject* fwdFrom) {
    if(m_fwdFrom == fwdFrom) return;
    if(m_fwdFrom) delete m_fwdFrom;
    m_fwdFrom = fwdFrom;
    if(m_fwdFrom) {
        m_fwdFrom->setParent(this);
        m_core.setFwdFrom(m_fwdFrom->core());
        connect(m_fwdFrom.data(), &MessageFwdHeaderObject::coreChanged, this, &MessageObject::coreFwdFromChanged);
    }
    Q_EMIT fwdFromChanged();
    Q_EMIT coreChanged();
}

inline MessageFwdHeaderObject*  MessageObject::fwdFrom() const {
    return m_fwdFrom;
}

inline void MessageObject::setId(qint32 id) {
    if(m_core.id() == id) return;
    m_core.setId(id);
    Q_EMIT idChanged();
    Q_EMIT coreChanged();
}

inline qint32 MessageObject::id() const {
    return m_core.id();
}

inline void MessageObject::setMedia(MessageMediaObject* media) {
    if(m_media == media) return;
    if(m_media) delete m_media;
    m_media = media;
    if(m_media) {
        m_media->setParent(this);
        m_core.setMedia(m_media->core());
        connect(m_media.data(), &MessageMediaObject::coreChanged, this, &MessageObject::coreMediaChanged);
    }
    Q_EMIT mediaChanged();
    Q_EMIT coreChanged();
}

inline MessageMediaObject*  MessageObject::media() const {
    return m_media;
}

inline void MessageObject::setMediaUnread(bool mediaUnread) {
    if(m_core.mediaUnread() == mediaUnread) return;
    m_core.setMediaUnread(mediaUnread);
    Q_EMIT mediaUnreadChanged();
    Q_EMIT coreChanged();
}

inline bool MessageObject::mediaUnread() const {
    return m_core.mediaUnread();
}

inline void MessageObject::setMentioned(bool mentioned) {
    if(m_core.mentioned() == mentioned) return;
    m_core.setMentioned(mentioned);
    Q_EMIT mentionedChanged();
    Q_EMIT coreChanged();
}

inline bool MessageObject::mentioned() const {
    return m_core.mentioned();
}

inline void MessageObject::setMessage(const QString &message) {
    if(m_core.message() == message) return;
    m_core.setMessage(message);
    Q_EMIT messageChanged();
    Q_EMIT coreChanged();
}

inline QString MessageObject::message() const {
    return m_core.message();
}

inline void MessageObject::setOut(bool out) {
    if(m_core.out() == out) return;
    m_core.setOut(out);
    Q_EMIT outChanged();
    Q_EMIT coreChanged();
}

inline bool MessageObject::out() const {
    return m_core.out();
}

inline void MessageObject::setPost(bool post) {
    if(m_core.post() == post) return;
    m_core.setPost(post);
    Q_EMIT postChanged();
    Q_EMIT coreChanged();
}

inline bool MessageObject::post() const {
    return m_core.post();
}

inline void MessageObject::setReplyMarkup(ReplyMarkupObject* replyMarkup) {
    if(m_replyMarkup == replyMarkup) return;
    if(m_replyMarkup) delete m_replyMarkup;
    m_replyMarkup = replyMarkup;
    if(m_replyMarkup) {
        m_replyMarkup->setParent(this);
        m_core.setReplyMarkup(m_replyMarkup->core());
        connect(m_replyMarkup.data(), &ReplyMarkupObject::coreChanged, this, &MessageObject::coreReplyMarkupChanged);
    }
    Q_EMIT replyMarkupChanged();
    Q_EMIT coreChanged();
}

inline ReplyMarkupObject*  MessageObject::replyMarkup() const {
    return m_replyMarkup;
}

inline void MessageObject::setReplyToMsgId(qint32 replyToMsgId) {
    if(m_core.replyToMsgId() == replyToMsgId) return;
    m_core.setReplyToMsgId(replyToMsgId);
    Q_EMIT replyToMsgIdChanged();
    Q_EMIT coreChanged();
}

inline qint32 MessageObject::replyToMsgId() const {
    return m_core.replyToMsgId();
}

inline void MessageObject::setSilent(bool silent) {
    if(m_core.silent() == silent) return;
    m_core.setSilent(silent);
    Q_EMIT silentChanged();
    Q_EMIT coreChanged();
}

inline bool MessageObject::silent() const {
    return m_core.silent();
}

inline void MessageObject::setToId(PeerObject* toId) {
    if(m_toId == toId) return;
    if(m_toId) delete m_toId;
    m_toId = toId;
    if(m_toId) {
        m_toId->setParent(this);
        m_core.setToId(m_toId->core());
        connect(m_toId.data(), &PeerObject::coreChanged, this, &MessageObject::coreToIdChanged);
    }
    Q_EMIT toIdChanged();
    Q_EMIT coreChanged();
}

inline PeerObject*  MessageObject::toId() const {
    return m_toId;
}

inline void MessageObject::setUnread(bool unread) {
    if(m_core.unread() == unread) return;
    m_core.setUnread(unread);
    Q_EMIT unreadChanged();
    Q_EMIT coreChanged();
}

inline bool MessageObject::unread() const {
    return m_core.unread();
}

inline void MessageObject::setViaBotId(qint32 viaBotId) {
    if(m_core.viaBotId() == viaBotId) return;
    m_core.setViaBotId(viaBotId);
    Q_EMIT viaBotIdChanged();
    Q_EMIT coreChanged();
}

inline qint32 MessageObject::viaBotId() const {
    return m_core.viaBotId();
}

inline void MessageObject::setViews(qint32 views) {
    if(m_core.views() == views) return;
    m_core.setViews(views);
    Q_EMIT viewsChanged();
    Q_EMIT coreChanged();
}

inline qint32 MessageObject::views() const {
    return m_core.views();
}

inline MessageObject &MessageObject::operator =(const Message &b) {
    if(m_core == b) return *this;
    m_core = b;
    m_action->setCore(b.action());
    m_fwdFrom->setCore(b.fwdFrom());
    m_media->setCore(b.media());
    m_replyMarkup->setCore(b.replyMarkup());
    m_toId->setCore(b.toId());

    Q_EMIT actionChanged();
    Q_EMIT dateChanged();
    Q_EMIT editDateChanged();
    Q_EMIT entitiesChanged();
    Q_EMIT flagsChanged();
    Q_EMIT fromIdChanged();
    Q_EMIT fwdFromChanged();
    Q_EMIT idChanged();
    Q_EMIT mediaChanged();
    Q_EMIT mediaUnreadChanged();
    Q_EMIT mentionedChanged();
    Q_EMIT messageChanged();
    Q_EMIT outChanged();
    Q_EMIT postChanged();
    Q_EMIT replyMarkupChanged();
    Q_EMIT replyToMsgIdChanged();
    Q_EMIT silentChanged();
    Q_EMIT toIdChanged();
    Q_EMIT unreadChanged();
    Q_EMIT viaBotIdChanged();
    Q_EMIT viewsChanged();
    Q_EMIT coreChanged();
    return *this;
}

inline bool MessageObject::operator ==(const Message &b) const {
    return m_core == b;
}

inline void MessageObject::setClassType(quint32 classType) {
    Message::MessageClassType result;
    switch(classType) {
    case TypeMessageEmpty:
        result = Message::typeMessageEmpty;
        break;
    case TypeMessage:
        result = Message::typeMessage;
        break;
    case TypeMessageService:
        result = Message::typeMessageService;
        break;
    default:
        result = Message::typeMessageEmpty;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

inline quint32 MessageObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case Message::typeMessageEmpty:
        result = TypeMessageEmpty;
        break;
    case Message::typeMessage:
        result = TypeMessage;
        break;
    case Message::typeMessageService:
        result = TypeMessageService;
        break;
    default:
        result = TypeMessageEmpty;
        break;
    }

    return result;
}

inline void MessageObject::setCore(const Message &core) {
    operator =(core);
}

inline Message MessageObject::core() const {
    return m_core;
}

inline void MessageObject::coreActionChanged() {
    if(m_core.action() == m_action->core()) return;
    m_core.setAction(m_action->core());
    Q_EMIT actionChanged();
    Q_EMIT coreChanged();
}

inline void MessageObject::coreFwdFromChanged() {
    if(m_core.fwdFrom() == m_fwdFrom->core()) return;
    m_core.setFwdFrom(m_fwdFrom->core());
    Q_EMIT fwdFromChanged();
    Q_EMIT coreChanged();
}

inline void MessageObject::coreMediaChanged() {
    if(m_core.media() == m_media->core()) return;
    m_core.setMedia(m_media->core());
    Q_EMIT mediaChanged();
    Q_EMIT coreChanged();
}

inline void MessageObject::coreReplyMarkupChanged() {
    if(m_core.replyMarkup() == m_replyMarkup->core()) return;
    m_core.setReplyMarkup(m_replyMarkup->core());
    Q_EMIT replyMarkupChanged();
    Q_EMIT coreChanged();
}

inline void MessageObject::coreToIdChanged() {
    if(m_core.toId() == m_toId->core()) return;
    m_core.setToId(m_toId->core());
    Q_EMIT toIdChanged();
    Q_EMIT coreChanged();
}

#endif // LQTG_TYPE_MESSAGE_OBJECT
