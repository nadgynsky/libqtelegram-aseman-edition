// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_INPUTPHOTO_OBJECT
#define LQTG_TYPE_INPUTPHOTO_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/inputphoto.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT InputPhotoObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(InputPhotoClassType)
    Q_PROPERTY(qint64 accessHash READ accessHash WRITE setAccessHash NOTIFY accessHashChanged)
    Q_PROPERTY(qint64 id READ id WRITE setId NOTIFY idChanged)
    Q_PROPERTY(InputPhoto core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum InputPhotoClassType {
        TypeInputPhotoEmpty,
        TypeInputPhoto
    };

    InputPhotoObject(const InputPhoto &core, QObject *parent = 0);
    InputPhotoObject(QObject *parent = 0);
    virtual ~InputPhotoObject();

    void setAccessHash(qint64 accessHash);
    qint64 accessHash() const;

    void setId(qint64 id);
    qint64 id() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const InputPhoto &core);
    InputPhoto core() const;

    InputPhotoObject &operator =(const InputPhoto &b);
    bool operator ==(const InputPhoto &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void accessHashChanged();
    void idChanged();

private Q_SLOTS:

private:
    InputPhoto m_core;
};

inline InputPhotoObject::InputPhotoObject(const InputPhoto &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

inline InputPhotoObject::InputPhotoObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

inline InputPhotoObject::~InputPhotoObject() {
}

inline void InputPhotoObject::setAccessHash(qint64 accessHash) {
    if(m_core.accessHash() == accessHash) return;
    m_core.setAccessHash(accessHash);
    Q_EMIT accessHashChanged();
    Q_EMIT coreChanged();
}

inline qint64 InputPhotoObject::accessHash() const {
    return m_core.accessHash();
}

inline void InputPhotoObject::setId(qint64 id) {
    if(m_core.id() == id) return;
    m_core.setId(id);
    Q_EMIT idChanged();
    Q_EMIT coreChanged();
}

inline qint64 InputPhotoObject::id() const {
    return m_core.id();
}

inline InputPhotoObject &InputPhotoObject::operator =(const InputPhoto &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT accessHashChanged();
    Q_EMIT idChanged();
    Q_EMIT coreChanged();
    return *this;
}

inline bool InputPhotoObject::operator ==(const InputPhoto &b) const {
    return m_core == b;
}

inline void InputPhotoObject::setClassType(quint32 classType) {
    InputPhoto::InputPhotoClassType result;
    switch(classType) {
    case TypeInputPhotoEmpty:
        result = InputPhoto::typeInputPhotoEmpty;
        break;
    case TypeInputPhoto:
        result = InputPhoto::typeInputPhoto;
        break;
    default:
        result = InputPhoto::typeInputPhotoEmpty;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

inline quint32 InputPhotoObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case InputPhoto::typeInputPhotoEmpty:
        result = TypeInputPhotoEmpty;
        break;
    case InputPhoto::typeInputPhoto:
        result = TypeInputPhoto;
        break;
    default:
        result = TypeInputPhotoEmpty;
        break;
    }

    return result;
}

inline void InputPhotoObject::setCore(const InputPhoto &core) {
    operator =(core);
}

inline InputPhoto InputPhotoObject::core() const {
    return m_core;
}

#endif // LQTG_TYPE_INPUTPHOTO_OBJECT
