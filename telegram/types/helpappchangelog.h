// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_HELPAPPCHANGELOG
#define LQTG_TYPE_HELPAPPCHANGELOG

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

#include <QString>

class LIBQTELEGRAMSHARED_EXPORT HelpAppChangelog : public TelegramTypeObject
{
public:
    enum HelpAppChangelogClassType {
        typeHelpAppChangelogEmpty = 0xaf7e0394,
        typeHelpAppChangelog = 0x4668e6bd
    };

    HelpAppChangelog(HelpAppChangelogClassType classType = typeHelpAppChangelogEmpty, InboundPkt *in = 0);
    HelpAppChangelog(InboundPkt *in);
    HelpAppChangelog(const Null&);
    virtual ~HelpAppChangelog();

    void setText(const QString &text);
    QString text() const;

    void setClassType(HelpAppChangelogClassType classType);
    HelpAppChangelogClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static HelpAppChangelog fromMap(const QMap<QString, QVariant> &map);

    bool operator ==(const HelpAppChangelog &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    QString m_text;
    HelpAppChangelogClassType m_classType;
};

Q_DECLARE_METATYPE(HelpAppChangelog)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const HelpAppChangelog &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, HelpAppChangelog &item);

inline HelpAppChangelog::HelpAppChangelog(HelpAppChangelogClassType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

inline HelpAppChangelog::HelpAppChangelog(InboundPkt *in) :
    m_classType(typeHelpAppChangelogEmpty)
{
    fetch(in);
}

inline HelpAppChangelog::HelpAppChangelog(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeHelpAppChangelogEmpty)
{
}

inline HelpAppChangelog::~HelpAppChangelog() {
}

inline void HelpAppChangelog::setText(const QString &text) {
    m_text = text;
}

inline QString HelpAppChangelog::text() const {
    return m_text;
}

inline bool HelpAppChangelog::operator ==(const HelpAppChangelog &b) const {
    return m_classType == b.m_classType &&
           m_text == b.m_text;
}

inline void HelpAppChangelog::setClassType(HelpAppChangelog::HelpAppChangelogClassType classType) {
    m_classType = classType;
}

inline HelpAppChangelog::HelpAppChangelogClassType HelpAppChangelog::classType() const {
    return m_classType;
}

inline bool HelpAppChangelog::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeHelpAppChangelogEmpty: {
        m_classType = static_cast<HelpAppChangelogClassType>(x);
        return true;
    }
        break;
    
    case typeHelpAppChangelog: {
        m_text = in->fetchQString();
        m_classType = static_cast<HelpAppChangelogClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

inline bool HelpAppChangelog::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeHelpAppChangelogEmpty: {
        return true;
    }
        break;
    
    case typeHelpAppChangelog: {
        out->appendQString(m_text);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

inline QMap<QString, QVariant> HelpAppChangelog::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeHelpAppChangelogEmpty: {
        result["classType"] = "HelpAppChangelog::typeHelpAppChangelogEmpty";
        return result;
    }
        break;
    
    case typeHelpAppChangelog: {
        result["classType"] = "HelpAppChangelog::typeHelpAppChangelog";
        result["text"] = QVariant::fromValue<QString>(text());
        return result;
    }
        break;
    
    default:
        return result;
    }
}

inline HelpAppChangelog HelpAppChangelog::fromMap(const QMap<QString, QVariant> &map) {
    HelpAppChangelog result;
    if(map.value("classType").toString() == "HelpAppChangelog::typeHelpAppChangelogEmpty") {
        result.setClassType(typeHelpAppChangelogEmpty);
        return result;
    }
    if(map.value("classType").toString() == "HelpAppChangelog::typeHelpAppChangelog") {
        result.setClassType(typeHelpAppChangelog);
        result.setText( map.value("text").value<QString>() );
        return result;
    }
    return result;
}

inline QByteArray HelpAppChangelog::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

inline QDataStream &operator<<(QDataStream &stream, const HelpAppChangelog &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case HelpAppChangelog::typeHelpAppChangelogEmpty:
        
        break;
    case HelpAppChangelog::typeHelpAppChangelog:
        stream << item.text();
        break;
    }
    return stream;
}

inline QDataStream &operator>>(QDataStream &stream, HelpAppChangelog &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<HelpAppChangelog::HelpAppChangelogClassType>(type));
    switch(type) {
    case HelpAppChangelog::typeHelpAppChangelogEmpty: {
        
    }
        break;
    case HelpAppChangelog::typeHelpAppChangelog: {
        QString m_text;
        stream >> m_text;
        item.setText(m_text);
    }
        break;
    }
    return stream;
}


#endif // LQTG_TYPE_HELPAPPCHANGELOG
