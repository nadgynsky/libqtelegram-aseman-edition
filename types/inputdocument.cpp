// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "inputdocument.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

using namespace Tg;

Types::InputDocument::InputDocument(InputDocumentType classType, InboundPkt *in) :
    m_accessHash(0),
    m_id(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

Types::InputDocument::InputDocument(InboundPkt *in) :
    m_accessHash(0),
    m_id(0),
    m_classType(typeInputDocumentEmpty)
{
    fetch(in);
}

void Types::InputDocument::setAccessHash(qint64 accessHash) {
    m_accessHash = accessHash;
}

qint64 Types::InputDocument::accessHash() const {
    return m_accessHash;
}

void Types::InputDocument::setId(qint64 id) {
    m_id = id;
}

qint64 Types::InputDocument::id() const {
    return m_id;
}

bool InputDocument::operator ==(const InputDocument &b) {
    return m_accessHash == b.m_accessHash &&
           m_id == b.m_id;
}

void InputDocument::setClassType(InputDocument::InputDocumentType classType) {
    m_classType = classType;
}

Types::InputDocument::InputDocumentType InputDocument::classType() const {
    return m_classType;
}

bool Types::InputDocument::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeInputDocumentEmpty: {
        m_classType = static_cast<InputDocumentType>(x);
        return true;
    }
        break;
    
    case typeInputDocument: {
        m_id = in->fetchLong();
        m_accessHash = in->fetchLong();
        m_classType = static_cast<InputDocumentType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool Types::InputDocument::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeInputDocumentEmpty: {
        return true;
    }
        break;
    
    case typeInputDocument: {
        out->appendLong(m_id);
        out->appendLong(m_accessHash);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

