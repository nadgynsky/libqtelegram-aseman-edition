// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "userfull.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

using namespace Tg;

Types::UserFull::UserFull(UserFullType classType, InboundPkt *in) :
    m_blocked(false),
    m_classType(classType)
{
    if(in) fetch(in);
}

Types::UserFull::UserFull(InboundPkt *in) :
    m_blocked(false),
    m_classType(typeUserFull)
{
    fetch(in);
}

void Types::UserFull::setBlocked(bool blocked) {
    m_blocked = blocked;
}

bool Types::UserFull::blocked() const {
    return m_blocked;
}

void Types::UserFull::setLink(const ContactsLink &link) {
    m_link = link;
}

ContactsLink Types::UserFull::link() const {
    return m_link;
}

void Types::UserFull::setNotifySettings(const PeerNotifySettings &notifySettings) {
    m_notifySettings = notifySettings;
}

PeerNotifySettings Types::UserFull::notifySettings() const {
    return m_notifySettings;
}

void Types::UserFull::setProfilePhoto(const Photo &profilePhoto) {
    m_profilePhoto = profilePhoto;
}

Photo Types::UserFull::profilePhoto() const {
    return m_profilePhoto;
}

void Types::UserFull::setRealFirstName(const QString &realFirstName) {
    m_realFirstName = realFirstName;
}

QString Types::UserFull::realFirstName() const {
    return m_realFirstName;
}

void Types::UserFull::setRealLastName(const QString &realLastName) {
    m_realLastName = realLastName;
}

QString Types::UserFull::realLastName() const {
    return m_realLastName;
}

void Types::UserFull::setUser(const User &user) {
    m_user = user;
}

User Types::UserFull::user() const {
    return m_user;
}

bool UserFull::operator ==(const UserFull &b) {
    return m_blocked == b.m_blocked &&
           m_link == b.m_link &&
           m_notifySettings == b.m_notifySettings &&
           m_profilePhoto == b.m_profilePhoto &&
           m_realFirstName == b.m_realFirstName &&
           m_realLastName == b.m_realLastName &&
           m_user == b.m_user;
}

void UserFull::setClassType(UserFull::UserFullType classType) {
    m_classType = classType;
}

Types::UserFull::UserFullType UserFull::classType() const {
    return m_classType;
}

bool Types::UserFull::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeUserFull: {
        m_user.fetch(in);
        m_link.fetch(in);
        m_profilePhoto.fetch(in);
        m_notifySettings.fetch(in);
        m_blocked = in->fetchBool();
        m_realFirstName = in->fetchQString();
        m_realLastName = in->fetchQString();
        m_classType = static_cast<UserFullType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool Types::UserFull::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeUserFull: {
        m_user.push(out);
        m_link.push(out);
        m_profilePhoto.push(out);
        m_notifySettings.push(out);
        out->appendBool(m_blocked);
        out->appendQString(m_realFirstName);
        out->appendQString(m_realLastName);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

