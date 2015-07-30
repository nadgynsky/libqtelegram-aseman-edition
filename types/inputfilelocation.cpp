// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "inputfilelocation.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

using namespace Tg;

Types::InputFileLocation::InputFileLocation(InputFileLocationType classType, InboundPkt *in) :
    m_accessHash(0),
    m_id(0),
    m_localId(0),
    m_secret(0),
    m_volumeId(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

Types::InputFileLocation::InputFileLocation(InboundPkt *in) :
    m_accessHash(0),
    m_id(0),
    m_localId(0),
    m_secret(0),
    m_volumeId(0),
    m_classType(typeInputFileLocation)
{
    fetch(in);
}

void Types::InputFileLocation::setAccessHash(qint64 accessHash) {
    m_accessHash = accessHash;
}

qint64 Types::InputFileLocation::accessHash() const {
    return m_accessHash;
}

void Types::InputFileLocation::setId(qint64 id) {
    m_id = id;
}

qint64 Types::InputFileLocation::id() const {
    return m_id;
}

void Types::InputFileLocation::setLocalId(qint32 localId) {
    m_localId = localId;
}

qint32 Types::InputFileLocation::localId() const {
    return m_localId;
}

void Types::InputFileLocation::setSecret(qint64 secret) {
    m_secret = secret;
}

qint64 Types::InputFileLocation::secret() const {
    return m_secret;
}

void Types::InputFileLocation::setVolumeId(qint64 volumeId) {
    m_volumeId = volumeId;
}

qint64 Types::InputFileLocation::volumeId() const {
    return m_volumeId;
}

bool InputFileLocation::operator ==(const InputFileLocation &b) {
    return m_accessHash == b.m_accessHash &&
           m_id == b.m_id &&
           m_localId == b.m_localId &&
           m_secret == b.m_secret &&
           m_volumeId == b.m_volumeId;
}

void InputFileLocation::setClassType(InputFileLocation::InputFileLocationType classType) {
    m_classType = classType;
}

Types::InputFileLocation::InputFileLocationType InputFileLocation::classType() const {
    return m_classType;
}

bool Types::InputFileLocation::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeInputFileLocation: {
        m_volumeId = in->fetchLong();
        m_localId = in->fetchInt();
        m_secret = in->fetchLong();
        m_classType = static_cast<InputFileLocationType>(x);
        return true;
    }
        break;
    
    case typeInputVideoFileLocation: {
        m_id = in->fetchLong();
        m_accessHash = in->fetchLong();
        m_classType = static_cast<InputFileLocationType>(x);
        return true;
    }
        break;
    
    case typeInputEncryptedFileLocation: {
        m_id = in->fetchLong();
        m_accessHash = in->fetchLong();
        m_classType = static_cast<InputFileLocationType>(x);
        return true;
    }
        break;
    
    case typeInputAudioFileLocation: {
        m_id = in->fetchLong();
        m_accessHash = in->fetchLong();
        m_classType = static_cast<InputFileLocationType>(x);
        return true;
    }
        break;
    
    case typeInputDocumentFileLocation: {
        m_id = in->fetchLong();
        m_accessHash = in->fetchLong();
        m_classType = static_cast<InputFileLocationType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool Types::InputFileLocation::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeInputFileLocation: {
        out->appendLong(m_volumeId);
        out->appendInt(m_localId);
        out->appendLong(m_secret);
        return true;
    }
        break;
    
    case typeInputVideoFileLocation: {
        out->appendLong(m_id);
        out->appendLong(m_accessHash);
        return true;
    }
        break;
    
    case typeInputEncryptedFileLocation: {
        out->appendLong(m_id);
        out->appendLong(m_accessHash);
        return true;
    }
        break;
    
    case typeInputAudioFileLocation: {
        out->appendLong(m_id);
        out->appendLong(m_accessHash);
        return true;
    }
        break;
    
    case typeInputDocumentFileLocation: {
        out->appendLong(m_id);
        out->appendLong(m_accessHash);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

