// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "inputnotifypeer.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

using namespace Tg;

Types::InputNotifyPeer::InputNotifyPeer(InputNotifyPeerType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

Types::InputNotifyPeer::InputNotifyPeer(InboundPkt *in) :
    m_classType(typeInputNotifyPeer)
{
    fetch(in);
}

void Types::InputNotifyPeer::setPeerInputGeoChat(const InputGeoChat &peerInputGeoChat) {
    m_peerInputGeoChat = peerInputGeoChat;
}

InputGeoChat Types::InputNotifyPeer::peerInputGeoChat() const {
    return m_peerInputGeoChat;
}

void Types::InputNotifyPeer::setPeerInput(const InputPeer &peerInput) {
    m_peerInput = peerInput;
}

InputPeer Types::InputNotifyPeer::peerInput() const {
    return m_peerInput;
}

bool InputNotifyPeer::operator ==(const InputNotifyPeer &b) {
    return m_peerInputGeoChat == b.m_peerInputGeoChat &&
           m_peerInput == b.m_peerInput;
}

void InputNotifyPeer::setClassType(InputNotifyPeer::InputNotifyPeerType classType) {
    m_classType = classType;
}

Types::InputNotifyPeer::InputNotifyPeerType InputNotifyPeer::classType() const {
    return m_classType;
}

bool Types::InputNotifyPeer::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeInputNotifyPeer: {
        m_peerInput.fetch(in);
        m_classType = static_cast<InputNotifyPeerType>(x);
        return true;
    }
        break;
    
    case typeInputNotifyUsers: {
        m_classType = static_cast<InputNotifyPeerType>(x);
        return true;
    }
        break;
    
    case typeInputNotifyChats: {
        m_classType = static_cast<InputNotifyPeerType>(x);
        return true;
    }
        break;
    
    case typeInputNotifyAll: {
        m_classType = static_cast<InputNotifyPeerType>(x);
        return true;
    }
        break;
    
    case typeInputNotifyGeoChatPeer: {
        m_peerInputGeoChat.fetch(in);
        m_classType = static_cast<InputNotifyPeerType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool Types::InputNotifyPeer::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeInputNotifyPeer: {
        m_peerInput.push(out);
        return true;
    }
        break;
    
    case typeInputNotifyUsers: {
        return true;
    }
        break;
    
    case typeInputNotifyChats: {
        return true;
    }
        break;
    
    case typeInputNotifyAll: {
        return true;
    }
        break;
    
    case typeInputNotifyGeoChatPeer: {
        m_peerInputGeoChat.push(out);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

