// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_AUTHSENTCODETYPE_OBJECT
#define LQTG_TYPE_AUTHSENTCODETYPE_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/authsentcodetype.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT AuthSentCodeTypeObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(AuthSentCodeTypeClassType)
    Q_PROPERTY(qint32 length READ length WRITE setLength NOTIFY lengthChanged)
    Q_PROPERTY(QString pattern READ pattern WRITE setPattern NOTIFY patternChanged)
    Q_PROPERTY(AuthSentCodeType core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum AuthSentCodeTypeClassType {
        TypeAuthSentCodeTypeApp,
        TypeAuthSentCodeTypeSms,
        TypeAuthSentCodeTypeCall,
        TypeAuthSentCodeTypeFlashCall
    };

    AuthSentCodeTypeObject(const AuthSentCodeType &core, QObject *parent = 0);
    AuthSentCodeTypeObject(QObject *parent = 0);
    virtual ~AuthSentCodeTypeObject();

    void setLength(qint32 length);
    qint32 length() const;

    void setPattern(const QString &pattern);
    QString pattern() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const AuthSentCodeType &core);
    AuthSentCodeType core() const;

    AuthSentCodeTypeObject &operator =(const AuthSentCodeType &b);
    bool operator ==(const AuthSentCodeType &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void lengthChanged();
    void patternChanged();

private Q_SLOTS:

private:
    AuthSentCodeType m_core;
};

inline AuthSentCodeTypeObject::AuthSentCodeTypeObject(const AuthSentCodeType &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

inline AuthSentCodeTypeObject::AuthSentCodeTypeObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

inline AuthSentCodeTypeObject::~AuthSentCodeTypeObject() {
}

inline void AuthSentCodeTypeObject::setLength(qint32 length) {
    if(m_core.length() == length) return;
    m_core.setLength(length);
    Q_EMIT lengthChanged();
    Q_EMIT coreChanged();
}

inline qint32 AuthSentCodeTypeObject::length() const {
    return m_core.length();
}

inline void AuthSentCodeTypeObject::setPattern(const QString &pattern) {
    if(m_core.pattern() == pattern) return;
    m_core.setPattern(pattern);
    Q_EMIT patternChanged();
    Q_EMIT coreChanged();
}

inline QString AuthSentCodeTypeObject::pattern() const {
    return m_core.pattern();
}

inline AuthSentCodeTypeObject &AuthSentCodeTypeObject::operator =(const AuthSentCodeType &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT lengthChanged();
    Q_EMIT patternChanged();
    Q_EMIT coreChanged();
    return *this;
}

inline bool AuthSentCodeTypeObject::operator ==(const AuthSentCodeType &b) const {
    return m_core == b;
}

inline void AuthSentCodeTypeObject::setClassType(quint32 classType) {
    AuthSentCodeType::AuthSentCodeTypeClassType result;
    switch(classType) {
    case TypeAuthSentCodeTypeApp:
        result = AuthSentCodeType::typeAuthSentCodeTypeApp;
        break;
    case TypeAuthSentCodeTypeSms:
        result = AuthSentCodeType::typeAuthSentCodeTypeSms;
        break;
    case TypeAuthSentCodeTypeCall:
        result = AuthSentCodeType::typeAuthSentCodeTypeCall;
        break;
    case TypeAuthSentCodeTypeFlashCall:
        result = AuthSentCodeType::typeAuthSentCodeTypeFlashCall;
        break;
    default:
        result = AuthSentCodeType::typeAuthSentCodeTypeApp;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

inline quint32 AuthSentCodeTypeObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case AuthSentCodeType::typeAuthSentCodeTypeApp:
        result = TypeAuthSentCodeTypeApp;
        break;
    case AuthSentCodeType::typeAuthSentCodeTypeSms:
        result = TypeAuthSentCodeTypeSms;
        break;
    case AuthSentCodeType::typeAuthSentCodeTypeCall:
        result = TypeAuthSentCodeTypeCall;
        break;
    case AuthSentCodeType::typeAuthSentCodeTypeFlashCall:
        result = TypeAuthSentCodeTypeFlashCall;
        break;
    default:
        result = TypeAuthSentCodeTypeApp;
        break;
    }

    return result;
}

inline void AuthSentCodeTypeObject::setCore(const AuthSentCodeType &core) {
    operator =(core);
}

inline AuthSentCodeType AuthSentCodeTypeObject::core() const {
    return m_core;
}

#endif // LQTG_TYPE_AUTHSENTCODETYPE_OBJECT
