// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_AUTHEXPORTEDAUTHORIZATION
#define LQTG_TYPE_AUTHEXPORTEDAUTHORIZATION

#include "telegramtypeobject.h"
#include <QByteArray>
#include <QtGlobal>

namespace Tg {
namespace Types {

class AuthExportedAuthorization : public TelegramTypeObject
{
public:
    enum AuthExportedAuthorizationType {
        typeAuthExportedAuthorization = 0xdf969c2d
    };

    AuthExportedAuthorization(AuthExportedAuthorizationType classType = typeAuthExportedAuthorization, InboundPkt *in = 0);
    AuthExportedAuthorization(InboundPkt *in);
    virtual ~AuthExportedAuthorization();

    void setBytes(const QByteArray &bytes);
    QByteArray bytes() const;

    void setId(qint32 id);
    qint32 id() const;

    void setClassType(AuthExportedAuthorizationType classType);
    AuthExportedAuthorizationType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const AuthExportedAuthorization &b);

private:
    QByteArray m_bytes;
    qint32 m_id;
    AuthExportedAuthorizationType m_classType;
};

}
}

#endif // LQTG_TYPE_AUTHEXPORTEDAUTHORIZATION
