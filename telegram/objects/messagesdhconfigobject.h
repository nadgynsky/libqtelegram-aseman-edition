// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_MESSAGESDHCONFIG_OBJECT
#define LQTG_TYPE_MESSAGESDHCONFIG_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/messagesdhconfig.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT MessagesDhConfigObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(MessagesDhConfigClassType)
    Q_PROPERTY(qint32 g READ g WRITE setG NOTIFY gChanged)
    Q_PROPERTY(QByteArray p READ p WRITE setP NOTIFY pChanged)
    Q_PROPERTY(QByteArray random READ random WRITE setRandom NOTIFY randomChanged)
    Q_PROPERTY(qint32 version READ version WRITE setVersion NOTIFY versionChanged)
    Q_PROPERTY(MessagesDhConfig core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum MessagesDhConfigClassType {
        TypeMessagesDhConfigNotModified,
        TypeMessagesDhConfig
    };

    MessagesDhConfigObject(const MessagesDhConfig &core, QObject *parent = 0);
    MessagesDhConfigObject(QObject *parent = 0);
    virtual ~MessagesDhConfigObject();

    void setG(qint32 g);
    qint32 g() const;

    void setP(const QByteArray &p);
    QByteArray p() const;

    void setRandom(const QByteArray &random);
    QByteArray random() const;

    void setVersion(qint32 version);
    qint32 version() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const MessagesDhConfig &core);
    MessagesDhConfig core() const;

    MessagesDhConfigObject &operator =(const MessagesDhConfig &b);
    bool operator ==(const MessagesDhConfig &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void gChanged();
    void pChanged();
    void randomChanged();
    void versionChanged();

private Q_SLOTS:

private:
    MessagesDhConfig m_core;
};

inline MessagesDhConfigObject::MessagesDhConfigObject(const MessagesDhConfig &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

inline MessagesDhConfigObject::MessagesDhConfigObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

inline MessagesDhConfigObject::~MessagesDhConfigObject() {
}

inline void MessagesDhConfigObject::setG(qint32 g) {
    if(m_core.g() == g) return;
    m_core.setG(g);
    Q_EMIT gChanged();
    Q_EMIT coreChanged();
}

inline qint32 MessagesDhConfigObject::g() const {
    return m_core.g();
}

inline void MessagesDhConfigObject::setP(const QByteArray &p) {
    if(m_core.p() == p) return;
    m_core.setP(p);
    Q_EMIT pChanged();
    Q_EMIT coreChanged();
}

inline QByteArray MessagesDhConfigObject::p() const {
    return m_core.p();
}

inline void MessagesDhConfigObject::setRandom(const QByteArray &random) {
    if(m_core.random() == random) return;
    m_core.setRandom(random);
    Q_EMIT randomChanged();
    Q_EMIT coreChanged();
}

inline QByteArray MessagesDhConfigObject::random() const {
    return m_core.random();
}

inline void MessagesDhConfigObject::setVersion(qint32 version) {
    if(m_core.version() == version) return;
    m_core.setVersion(version);
    Q_EMIT versionChanged();
    Q_EMIT coreChanged();
}

inline qint32 MessagesDhConfigObject::version() const {
    return m_core.version();
}

inline MessagesDhConfigObject &MessagesDhConfigObject::operator =(const MessagesDhConfig &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT gChanged();
    Q_EMIT pChanged();
    Q_EMIT randomChanged();
    Q_EMIT versionChanged();
    Q_EMIT coreChanged();
    return *this;
}

inline bool MessagesDhConfigObject::operator ==(const MessagesDhConfig &b) const {
    return m_core == b;
}

inline void MessagesDhConfigObject::setClassType(quint32 classType) {
    MessagesDhConfig::MessagesDhConfigClassType result;
    switch(classType) {
    case TypeMessagesDhConfigNotModified:
        result = MessagesDhConfig::typeMessagesDhConfigNotModified;
        break;
    case TypeMessagesDhConfig:
        result = MessagesDhConfig::typeMessagesDhConfig;
        break;
    default:
        result = MessagesDhConfig::typeMessagesDhConfigNotModified;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

inline quint32 MessagesDhConfigObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case MessagesDhConfig::typeMessagesDhConfigNotModified:
        result = TypeMessagesDhConfigNotModified;
        break;
    case MessagesDhConfig::typeMessagesDhConfig:
        result = TypeMessagesDhConfig;
        break;
    default:
        result = TypeMessagesDhConfigNotModified;
        break;
    }

    return result;
}

inline void MessagesDhConfigObject::setCore(const MessagesDhConfig &core) {
    operator =(core);
}

inline MessagesDhConfig MessagesDhConfigObject::core() const {
    return m_core;
}

#endif // LQTG_TYPE_MESSAGESDHCONFIG_OBJECT
