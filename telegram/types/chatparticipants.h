// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CHATPARTICIPANTS
#define LQTG_TYPE_CHATPARTICIPANTS

#include "telegramtypeobject.h"
#include <QtGlobal>
#include <QList>
#include "chatparticipant.h"

class LIBQTELEGRAMSHARED_EXPORT ChatParticipants : public TelegramTypeObject
{
public:
    enum ChatParticipantsType {
        typeChatParticipantsForbidden = 0xfd2bb8a,
        typeChatParticipants = 0x7841b415
    };

    ChatParticipants(ChatParticipantsType classType = typeChatParticipantsForbidden, InboundPkt *in = 0);
    ChatParticipants(InboundPkt *in);
    virtual ~ChatParticipants();

    void setAdminId(qint32 adminId);
    qint32 adminId() const;

    void setChatId(qint32 chatId);
    qint32 chatId() const;

    void setParticipants(const QList<ChatParticipant> &participants);
    QList<ChatParticipant> participants() const;

    void setVersion(qint32 version);
    qint32 version() const;

    void setClassType(ChatParticipantsType classType);
    ChatParticipantsType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const ChatParticipants &b);

private:
    qint32 m_adminId;
    qint32 m_chatId;
    QList<ChatParticipant> m_participants;
    qint32 m_version;
    ChatParticipantsType m_classType;
};

#endif // LQTG_TYPE_CHATPARTICIPANTS