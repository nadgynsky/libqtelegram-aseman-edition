// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "contactssuggested.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

using namespace Tg;

Types::ContactsSuggested::ContactsSuggested(ContactsSuggestedType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

Types::ContactsSuggested::ContactsSuggested(InboundPkt *in) :
    m_classType(typeContactsSuggested)
{
    fetch(in);
}

void Types::ContactsSuggested::setResults(const QList<ContactSuggested> &results) {
    m_results = results;
}

QList<ContactSuggested> Types::ContactsSuggested::results() const {
    return m_results;
}

void Types::ContactsSuggested::setUsers(const QList<User> &users) {
    m_users = users;
}

QList<User> Types::ContactsSuggested::users() const {
    return m_users;
}

bool ContactsSuggested::operator ==(const ContactsSuggested &b) {
    return m_results == b.m_results &&
           m_users == b.m_users;
}

void ContactsSuggested::setClassType(ContactsSuggested::ContactsSuggestedType classType) {
    m_classType = classType;
}

Types::ContactsSuggested::ContactsSuggestedType ContactsSuggested::classType() const {
    return m_classType;
}

bool Types::ContactsSuggested::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeContactsSuggested: {
        if(in->fetchInt() != (qint32)TL_Vector) return false;
        qint32 m_results_length = in->fetchInt();
        m_results.clear();
        for (qint32 i = 0; i < m_results_length; i++) {
            ContactSuggested type;
            type.fetch(in);
            m_results.append(type);
        }
        if(in->fetchInt() != (qint32)TL_Vector) return false;
        qint32 m_users_length = in->fetchInt();
        m_users.clear();
        for (qint32 i = 0; i < m_users_length; i++) {
            User type;
            type.fetch(in);
            m_users.append(type);
        }
        m_classType = static_cast<ContactsSuggestedType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool Types::ContactsSuggested::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeContactsSuggested: {
        out->appendInt(TL_Vector);
        out->appendInt(m_results.count());
        for (qint32 i = 0; i < m_results.count(); i++) {
            m_results[i].push(out);
        }
        out->appendInt(TL_Vector);
        out->appendInt(m_users.count());
        for (qint32 i = 0; i < m_users.count(); i++) {
            m_users[i].push(out);
        }
        return true;
    }
        break;
    
    default:
        return false;
    }
}

