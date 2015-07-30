// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "inputaudio.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

using namespace Tg;

Types::InputAudio::InputAudio(InputAudioType classType, InboundPkt *in) :
    m_accessHash(0),
    m_id(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

Types::InputAudio::InputAudio(InboundPkt *in) :
    m_accessHash(0),
    m_id(0),
    m_classType(typeInputAudioEmpty)
{
    fetch(in);
}

void Types::InputAudio::setAccessHash(qint64 accessHash) {
    m_accessHash = accessHash;
}

qint64 Types::InputAudio::accessHash() const {
    return m_accessHash;
}

void Types::InputAudio::setId(qint64 id) {
    m_id = id;
}

qint64 Types::InputAudio::id() const {
    return m_id;
}

bool InputAudio::operator ==(const InputAudio &b) {
    return m_accessHash == b.m_accessHash &&
           m_id == b.m_id;
}

void InputAudio::setClassType(InputAudio::InputAudioType classType) {
    m_classType = classType;
}

Types::InputAudio::InputAudioType InputAudio::classType() const {
    return m_classType;
}

bool Types::InputAudio::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeInputAudioEmpty: {
        m_classType = static_cast<InputAudioType>(x);
        return true;
    }
        break;
    
    case typeInputAudio: {
        m_id = in->fetchLong();
        m_accessHash = in->fetchLong();
        m_classType = static_cast<InputAudioType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool Types::InputAudio::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeInputAudioEmpty: {
        return true;
    }
        break;
    
    case typeInputAudio: {
        out->appendLong(m_id);
        out->appendLong(m_accessHash);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

