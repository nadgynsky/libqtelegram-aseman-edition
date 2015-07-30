// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "privacyrule.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

using namespace Tg;

Types::PrivacyRule::PrivacyRule(PrivacyRuleType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

Types::PrivacyRule::PrivacyRule(InboundPkt *in) :
    m_classType(typePrivacyValueAllowContacts)
{
    fetch(in);
}

void Types::PrivacyRule::setUsers(const QList<qint32> &users) {
    m_users = users;
}

QList<qint32> Types::PrivacyRule::users() const {
    return m_users;
}

bool PrivacyRule::operator ==(const PrivacyRule &b) {
    return m_users == b.m_users;
}

void PrivacyRule::setClassType(PrivacyRule::PrivacyRuleType classType) {
    m_classType = classType;
}

Types::PrivacyRule::PrivacyRuleType PrivacyRule::classType() const {
    return m_classType;
}

bool Types::PrivacyRule::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typePrivacyValueAllowContacts: {
        m_classType = static_cast<PrivacyRuleType>(x);
        return true;
    }
        break;
    
    case typePrivacyValueAllowAll: {
        m_classType = static_cast<PrivacyRuleType>(x);
        return true;
    }
        break;
    
    case typePrivacyValueAllowUsers: {
        if(in->fetchInt() != (qint32)TL_Vector) return false;
        qint32 m_users_length = in->fetchInt();
        m_users.clear();
        for (qint32 i = 0; i < m_users_length; i++) {
            qint32 type;
            type = in->fetchInt();
            m_users.append(type);
        }
        m_classType = static_cast<PrivacyRuleType>(x);
        return true;
    }
        break;
    
    case typePrivacyValueDisallowContacts: {
        m_classType = static_cast<PrivacyRuleType>(x);
        return true;
    }
        break;
    
    case typePrivacyValueDisallowAll: {
        m_classType = static_cast<PrivacyRuleType>(x);
        return true;
    }
        break;
    
    case typePrivacyValueDisallowUsers: {
        if(in->fetchInt() != (qint32)TL_Vector) return false;
        qint32 m_users_length = in->fetchInt();
        m_users.clear();
        for (qint32 i = 0; i < m_users_length; i++) {
            qint32 type;
            type = in->fetchInt();
            m_users.append(type);
        }
        m_classType = static_cast<PrivacyRuleType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool Types::PrivacyRule::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typePrivacyValueAllowContacts: {
        return true;
    }
        break;
    
    case typePrivacyValueAllowAll: {
        return true;
    }
        break;
    
    case typePrivacyValueAllowUsers: {
        out->appendInt(TL_Vector);
        out->appendInt(m_users.count());
        for (qint32 i = 0; i < m_users.count(); i++) {
            out->appendInt(m_users[i]);
        }
        return true;
    }
        break;
    
    case typePrivacyValueDisallowContacts: {
        return true;
    }
        break;
    
    case typePrivacyValueDisallowAll: {
        return true;
    }
        break;
    
    case typePrivacyValueDisallowUsers: {
        out->appendInt(TL_Vector);
        out->appendInt(m_users.count());
        for (qint32 i = 0; i < m_users.count(); i++) {
            out->appendInt(m_users[i]);
        }
        return true;
    }
        break;
    
    default:
        return false;
    }
}

