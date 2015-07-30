// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_DOCUMENTATTRIBUTE
#define LQTG_TYPE_DOCUMENTATTRIBUTE

#include "telegramtypeobject.h"
#include <QString>
#include <QtGlobal>
#include "inputstickerset.h"

namespace Tg {
namespace Types {

class DocumentAttribute : public TelegramTypeObject
{
public:
    enum DocumentAttributeType {
        typeDocumentAttributeImageSize = 0x6c37c15c,
        typeDocumentAttributeAnimated = 0x11b58939,
        typeDocumentAttributeSticker = 0x3a556302,
        typeDocumentAttributeVideo = 0x5910cccb,
        typeDocumentAttributeAudio = 0x51448e5,
        typeDocumentAttributeFilename = 0x15590068
    };

    DocumentAttribute(DocumentAttributeType classType = typeDocumentAttributeImageSize, InboundPkt *in = 0);
    DocumentAttribute(InboundPkt *in);
    virtual ~DocumentAttribute();

    void setAlt(const QString &alt);
    QString alt() const;

    void setDuration(qint32 duration);
    qint32 duration() const;

    void setFileName(const QString &fileName);
    QString fileName() const;

    void setH(qint32 h);
    qint32 h() const;

    void setStickerset(const InputStickerSet &stickerset);
    InputStickerSet stickerset() const;

    void setW(qint32 w);
    qint32 w() const;

    void setClassType(DocumentAttributeType classType);
    DocumentAttributeType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const DocumentAttribute &b);

private:
    QString m_alt;
    qint32 m_duration;
    QString m_fileName;
    qint32 m_h;
    InputStickerSet m_stickerset;
    qint32 m_w;
    DocumentAttributeType m_classType;
};

}
}

#endif // LQTG_TYPE_DOCUMENTATTRIBUTE
