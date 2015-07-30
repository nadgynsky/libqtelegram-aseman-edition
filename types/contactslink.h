// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CONTACTSLINK
#define LQTG_TYPE_CONTACTSLINK

#include "telegramtypeobject.h"
#include "contactlink.h"
#include "user.h"

namespace Tg {
namespace Types {

class ContactsLink : public TelegramTypeObject
{
public:
    enum ContactsLinkType {
        typeContactsLink = 0x3ace484c
    };

    ContactsLink(ContactsLinkType classType = typeContactsLink, InboundPkt *in = 0);
    ContactsLink(InboundPkt *in);
    virtual ~ContactsLink();

    void setForeignLink(const ContactLink &foreignLink);
    ContactLink foreignLink() const;

    void setMyLink(const ContactLink &myLink);
    ContactLink myLink() const;

    void setUser(const User &user);
    User user() const;

    void setClassType(ContactsLinkType classType);
    ContactsLinkType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const ContactsLink &b);

private:
    ContactLink m_foreignLink;
    ContactLink m_myLink;
    User m_user;
    ContactsLinkType m_classType;
};

}
}

#endif // LQTG_TYPE_CONTACTSLINK
