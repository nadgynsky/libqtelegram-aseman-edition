// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "nearestdc.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

using namespace Tg;

Types::NearestDc::NearestDc(NearestDcType classType, InboundPkt *in) :
    m_nearestDc(0),
    m_thisDc(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

Types::NearestDc::NearestDc(InboundPkt *in) :
    m_nearestDc(0),
    m_thisDc(0),
    m_classType(typeNearestDc)
{
    fetch(in);
}

void Types::NearestDc::setCountry(const QString &country) {
    m_country = country;
}

QString Types::NearestDc::country() const {
    return m_country;
}

void Types::NearestDc::setNearestDc(qint32 nearestDc) {
    m_nearestDc = nearestDc;
}

qint32 Types::NearestDc::nearestDc() const {
    return m_nearestDc;
}

void Types::NearestDc::setThisDc(qint32 thisDc) {
    m_thisDc = thisDc;
}

qint32 Types::NearestDc::thisDc() const {
    return m_thisDc;
}

bool NearestDc::operator ==(const NearestDc &b) {
    return m_country == b.m_country &&
           m_nearestDc == b.m_nearestDc &&
           m_thisDc == b.m_thisDc;
}

void NearestDc::setClassType(NearestDc::NearestDcType classType) {
    m_classType = classType;
}

Types::NearestDc::NearestDcType NearestDc::classType() const {
    return m_classType;
}

bool Types::NearestDc::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeNearestDc: {
        m_country = in->fetchQString();
        m_thisDc = in->fetchInt();
        m_nearestDc = in->fetchInt();
        m_classType = static_cast<NearestDcType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool Types::NearestDc::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeNearestDc: {
        out->appendQString(m_country);
        out->appendInt(m_thisDc);
        out->appendInt(m_nearestDc);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

