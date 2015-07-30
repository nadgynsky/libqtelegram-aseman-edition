// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_MESSAGESAFFECTEDMESSAGES
#define LQTG_TYPE_MESSAGESAFFECTEDMESSAGES

#include "telegramtypeobject.h"
#include <QtGlobal>

namespace Tg {
namespace Types {

class MessagesAffectedMessages : public TelegramTypeObject
{
public:
    enum MessagesAffectedMessagesType {
        typeMessagesAffectedMessages = 0x84d19185
    };

    MessagesAffectedMessages(MessagesAffectedMessagesType classType = typeMessagesAffectedMessages, InboundPkt *in = 0);
    MessagesAffectedMessages(InboundPkt *in);
    virtual ~MessagesAffectedMessages();

    void setPts(qint32 pts);
    qint32 pts() const;

    void setPtsCount(qint32 ptsCount);
    qint32 ptsCount() const;

    void setClassType(MessagesAffectedMessagesType classType);
    MessagesAffectedMessagesType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const MessagesAffectedMessages &b);

private:
    qint32 m_pts;
    qint32 m_ptsCount;
    MessagesAffectedMessagesType m_classType;
};

}
}

#endif // LQTG_TYPE_MESSAGESAFFECTEDMESSAGES
