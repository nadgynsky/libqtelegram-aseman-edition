// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_MESSAGEMEDIA_OBJECT
#define LQTG_TYPE_MESSAGEMEDIA_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/messagemedia.h"

#include <QPointer>
#include "documentobject.h"
#include "geopointobject.h"
#include "photoobject.h"
#include "webpageobject.h"

class LIBQTELEGRAMSHARED_EXPORT MessageMediaObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(MessageMediaClassType)
    Q_PROPERTY(QString address READ address WRITE setAddress NOTIFY addressChanged)
    Q_PROPERTY(QString caption READ caption WRITE setCaption NOTIFY captionChanged)
    Q_PROPERTY(DocumentObject* document READ document WRITE setDocument NOTIFY documentChanged)
    Q_PROPERTY(QString firstName READ firstName WRITE setFirstName NOTIFY firstNameChanged)
    Q_PROPERTY(GeoPointObject* geo READ geo WRITE setGeo NOTIFY geoChanged)
    Q_PROPERTY(QString lastName READ lastName WRITE setLastName NOTIFY lastNameChanged)
    Q_PROPERTY(QString phoneNumber READ phoneNumber WRITE setPhoneNumber NOTIFY phoneNumberChanged)
    Q_PROPERTY(PhotoObject* photo READ photo WRITE setPhoto NOTIFY photoChanged)
    Q_PROPERTY(QString provider READ provider WRITE setProvider NOTIFY providerChanged)
    Q_PROPERTY(QString title READ title WRITE setTitle NOTIFY titleChanged)
    Q_PROPERTY(qint32 userId READ userId WRITE setUserId NOTIFY userIdChanged)
    Q_PROPERTY(QString venueId READ venueId WRITE setVenueId NOTIFY venueIdChanged)
    Q_PROPERTY(WebPageObject* webpage READ webpage WRITE setWebpage NOTIFY webpageChanged)
    Q_PROPERTY(MessageMedia core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum MessageMediaClassType {
        TypeMessageMediaEmpty,
        TypeMessageMediaPhoto,
        TypeMessageMediaGeo,
        TypeMessageMediaContact,
        TypeMessageMediaUnsupported,
        TypeMessageMediaDocument,
        TypeMessageMediaWebPage,
        TypeMessageMediaVenue
    };

    MessageMediaObject(const MessageMedia &core, QObject *parent = 0);
    MessageMediaObject(QObject *parent = 0);
    virtual ~MessageMediaObject();

    void setAddress(const QString &address);
    QString address() const;

    void setCaption(const QString &caption);
    QString caption() const;

    void setDocument(DocumentObject* document);
    DocumentObject* document() const;

    void setFirstName(const QString &firstName);
    QString firstName() const;

    void setGeo(GeoPointObject* geo);
    GeoPointObject* geo() const;

    void setLastName(const QString &lastName);
    QString lastName() const;

    void setPhoneNumber(const QString &phoneNumber);
    QString phoneNumber() const;

    void setPhoto(PhotoObject* photo);
    PhotoObject* photo() const;

    void setProvider(const QString &provider);
    QString provider() const;

    void setTitle(const QString &title);
    QString title() const;

    void setUserId(qint32 userId);
    qint32 userId() const;

    void setVenueId(const QString &venueId);
    QString venueId() const;

    void setWebpage(WebPageObject* webpage);
    WebPageObject* webpage() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const MessageMedia &core);
    MessageMedia core() const;

    MessageMediaObject &operator =(const MessageMedia &b);
    bool operator ==(const MessageMedia &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void addressChanged();
    void captionChanged();
    void documentChanged();
    void firstNameChanged();
    void geoChanged();
    void lastNameChanged();
    void phoneNumberChanged();
    void photoChanged();
    void providerChanged();
    void titleChanged();
    void userIdChanged();
    void venueIdChanged();
    void webpageChanged();

private Q_SLOTS:
    void coreDocumentChanged();
    void coreGeoChanged();
    void corePhotoChanged();
    void coreWebpageChanged();

private:
    QPointer<DocumentObject> m_document;
    QPointer<GeoPointObject> m_geo;
    QPointer<PhotoObject> m_photo;
    QPointer<WebPageObject> m_webpage;
    MessageMedia m_core;
};

inline MessageMediaObject::MessageMediaObject(const MessageMedia &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_document(0),
    m_geo(0),
    m_photo(0),
    m_webpage(0),
    m_core(core)
{
    m_document = new DocumentObject(m_core.document(), this);
    connect(m_document.data(), &DocumentObject::coreChanged, this, &MessageMediaObject::coreDocumentChanged);
    m_geo = new GeoPointObject(m_core.geo(), this);
    connect(m_geo.data(), &GeoPointObject::coreChanged, this, &MessageMediaObject::coreGeoChanged);
    m_photo = new PhotoObject(m_core.photo(), this);
    connect(m_photo.data(), &PhotoObject::coreChanged, this, &MessageMediaObject::corePhotoChanged);
    m_webpage = new WebPageObject(m_core.webpage(), this);
    connect(m_webpage.data(), &WebPageObject::coreChanged, this, &MessageMediaObject::coreWebpageChanged);
}

inline MessageMediaObject::MessageMediaObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_document(0),
    m_geo(0),
    m_photo(0),
    m_webpage(0),
    m_core()
{
    m_document = new DocumentObject(m_core.document(), this);
    connect(m_document.data(), &DocumentObject::coreChanged, this, &MessageMediaObject::coreDocumentChanged);
    m_geo = new GeoPointObject(m_core.geo(), this);
    connect(m_geo.data(), &GeoPointObject::coreChanged, this, &MessageMediaObject::coreGeoChanged);
    m_photo = new PhotoObject(m_core.photo(), this);
    connect(m_photo.data(), &PhotoObject::coreChanged, this, &MessageMediaObject::corePhotoChanged);
    m_webpage = new WebPageObject(m_core.webpage(), this);
    connect(m_webpage.data(), &WebPageObject::coreChanged, this, &MessageMediaObject::coreWebpageChanged);
}

inline MessageMediaObject::~MessageMediaObject() {
}

inline void MessageMediaObject::setAddress(const QString &address) {
    if(m_core.address() == address) return;
    m_core.setAddress(address);
    Q_EMIT addressChanged();
    Q_EMIT coreChanged();
}

inline QString MessageMediaObject::address() const {
    return m_core.address();
}

inline void MessageMediaObject::setCaption(const QString &caption) {
    if(m_core.caption() == caption) return;
    m_core.setCaption(caption);
    Q_EMIT captionChanged();
    Q_EMIT coreChanged();
}

inline QString MessageMediaObject::caption() const {
    return m_core.caption();
}

inline void MessageMediaObject::setDocument(DocumentObject* document) {
    if(m_document == document) return;
    if(m_document) delete m_document;
    m_document = document;
    if(m_document) {
        m_document->setParent(this);
        m_core.setDocument(m_document->core());
        connect(m_document.data(), &DocumentObject::coreChanged, this, &MessageMediaObject::coreDocumentChanged);
    }
    Q_EMIT documentChanged();
    Q_EMIT coreChanged();
}

inline DocumentObject*  MessageMediaObject::document() const {
    return m_document;
}

inline void MessageMediaObject::setFirstName(const QString &firstName) {
    if(m_core.firstName() == firstName) return;
    m_core.setFirstName(firstName);
    Q_EMIT firstNameChanged();
    Q_EMIT coreChanged();
}

inline QString MessageMediaObject::firstName() const {
    return m_core.firstName();
}

inline void MessageMediaObject::setGeo(GeoPointObject* geo) {
    if(m_geo == geo) return;
    if(m_geo) delete m_geo;
    m_geo = geo;
    if(m_geo) {
        m_geo->setParent(this);
        m_core.setGeo(m_geo->core());
        connect(m_geo.data(), &GeoPointObject::coreChanged, this, &MessageMediaObject::coreGeoChanged);
    }
    Q_EMIT geoChanged();
    Q_EMIT coreChanged();
}

inline GeoPointObject*  MessageMediaObject::geo() const {
    return m_geo;
}

inline void MessageMediaObject::setLastName(const QString &lastName) {
    if(m_core.lastName() == lastName) return;
    m_core.setLastName(lastName);
    Q_EMIT lastNameChanged();
    Q_EMIT coreChanged();
}

inline QString MessageMediaObject::lastName() const {
    return m_core.lastName();
}

inline void MessageMediaObject::setPhoneNumber(const QString &phoneNumber) {
    if(m_core.phoneNumber() == phoneNumber) return;
    m_core.setPhoneNumber(phoneNumber);
    Q_EMIT phoneNumberChanged();
    Q_EMIT coreChanged();
}

inline QString MessageMediaObject::phoneNumber() const {
    return m_core.phoneNumber();
}

inline void MessageMediaObject::setPhoto(PhotoObject* photo) {
    if(m_photo == photo) return;
    if(m_photo) delete m_photo;
    m_photo = photo;
    if(m_photo) {
        m_photo->setParent(this);
        m_core.setPhoto(m_photo->core());
        connect(m_photo.data(), &PhotoObject::coreChanged, this, &MessageMediaObject::corePhotoChanged);
    }
    Q_EMIT photoChanged();
    Q_EMIT coreChanged();
}

inline PhotoObject*  MessageMediaObject::photo() const {
    return m_photo;
}

inline void MessageMediaObject::setProvider(const QString &provider) {
    if(m_core.provider() == provider) return;
    m_core.setProvider(provider);
    Q_EMIT providerChanged();
    Q_EMIT coreChanged();
}

inline QString MessageMediaObject::provider() const {
    return m_core.provider();
}

inline void MessageMediaObject::setTitle(const QString &title) {
    if(m_core.title() == title) return;
    m_core.setTitle(title);
    Q_EMIT titleChanged();
    Q_EMIT coreChanged();
}

inline QString MessageMediaObject::title() const {
    return m_core.title();
}

inline void MessageMediaObject::setUserId(qint32 userId) {
    if(m_core.userId() == userId) return;
    m_core.setUserId(userId);
    Q_EMIT userIdChanged();
    Q_EMIT coreChanged();
}

inline qint32 MessageMediaObject::userId() const {
    return m_core.userId();
}

inline void MessageMediaObject::setVenueId(const QString &venueId) {
    if(m_core.venueId() == venueId) return;
    m_core.setVenueId(venueId);
    Q_EMIT venueIdChanged();
    Q_EMIT coreChanged();
}

inline QString MessageMediaObject::venueId() const {
    return m_core.venueId();
}

inline void MessageMediaObject::setWebpage(WebPageObject* webpage) {
    if(m_webpage == webpage) return;
    if(m_webpage) delete m_webpage;
    m_webpage = webpage;
    if(m_webpage) {
        m_webpage->setParent(this);
        m_core.setWebpage(m_webpage->core());
        connect(m_webpage.data(), &WebPageObject::coreChanged, this, &MessageMediaObject::coreWebpageChanged);
    }
    Q_EMIT webpageChanged();
    Q_EMIT coreChanged();
}

inline WebPageObject*  MessageMediaObject::webpage() const {
    return m_webpage;
}

inline MessageMediaObject &MessageMediaObject::operator =(const MessageMedia &b) {
    if(m_core == b) return *this;
    m_core = b;
    m_document->setCore(b.document());
    m_geo->setCore(b.geo());
    m_photo->setCore(b.photo());
    m_webpage->setCore(b.webpage());

    Q_EMIT addressChanged();
    Q_EMIT captionChanged();
    Q_EMIT documentChanged();
    Q_EMIT firstNameChanged();
    Q_EMIT geoChanged();
    Q_EMIT lastNameChanged();
    Q_EMIT phoneNumberChanged();
    Q_EMIT photoChanged();
    Q_EMIT providerChanged();
    Q_EMIT titleChanged();
    Q_EMIT userIdChanged();
    Q_EMIT venueIdChanged();
    Q_EMIT webpageChanged();
    Q_EMIT coreChanged();
    return *this;
}

inline bool MessageMediaObject::operator ==(const MessageMedia &b) const {
    return m_core == b;
}

inline void MessageMediaObject::setClassType(quint32 classType) {
    MessageMedia::MessageMediaClassType result;
    switch(classType) {
    case TypeMessageMediaEmpty:
        result = MessageMedia::typeMessageMediaEmpty;
        break;
    case TypeMessageMediaPhoto:
        result = MessageMedia::typeMessageMediaPhoto;
        break;
    case TypeMessageMediaGeo:
        result = MessageMedia::typeMessageMediaGeo;
        break;
    case TypeMessageMediaContact:
        result = MessageMedia::typeMessageMediaContact;
        break;
    case TypeMessageMediaUnsupported:
        result = MessageMedia::typeMessageMediaUnsupported;
        break;
    case TypeMessageMediaDocument:
        result = MessageMedia::typeMessageMediaDocument;
        break;
    case TypeMessageMediaWebPage:
        result = MessageMedia::typeMessageMediaWebPage;
        break;
    case TypeMessageMediaVenue:
        result = MessageMedia::typeMessageMediaVenue;
        break;
    default:
        result = MessageMedia::typeMessageMediaEmpty;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

inline quint32 MessageMediaObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case MessageMedia::typeMessageMediaEmpty:
        result = TypeMessageMediaEmpty;
        break;
    case MessageMedia::typeMessageMediaPhoto:
        result = TypeMessageMediaPhoto;
        break;
    case MessageMedia::typeMessageMediaGeo:
        result = TypeMessageMediaGeo;
        break;
    case MessageMedia::typeMessageMediaContact:
        result = TypeMessageMediaContact;
        break;
    case MessageMedia::typeMessageMediaUnsupported:
        result = TypeMessageMediaUnsupported;
        break;
    case MessageMedia::typeMessageMediaDocument:
        result = TypeMessageMediaDocument;
        break;
    case MessageMedia::typeMessageMediaWebPage:
        result = TypeMessageMediaWebPage;
        break;
    case MessageMedia::typeMessageMediaVenue:
        result = TypeMessageMediaVenue;
        break;
    default:
        result = TypeMessageMediaEmpty;
        break;
    }

    return result;
}

inline void MessageMediaObject::setCore(const MessageMedia &core) {
    operator =(core);
}

inline MessageMedia MessageMediaObject::core() const {
    return m_core;
}

inline void MessageMediaObject::coreDocumentChanged() {
    if(m_core.document() == m_document->core()) return;
    m_core.setDocument(m_document->core());
    Q_EMIT documentChanged();
    Q_EMIT coreChanged();
}

inline void MessageMediaObject::coreGeoChanged() {
    if(m_core.geo() == m_geo->core()) return;
    m_core.setGeo(m_geo->core());
    Q_EMIT geoChanged();
    Q_EMIT coreChanged();
}

inline void MessageMediaObject::corePhotoChanged() {
    if(m_core.photo() == m_photo->core()) return;
    m_core.setPhoto(m_photo->core());
    Q_EMIT photoChanged();
    Q_EMIT coreChanged();
}

inline void MessageMediaObject::coreWebpageChanged() {
    if(m_core.webpage() == m_webpage->core()) return;
    m_core.setWebpage(m_webpage->core());
    Q_EMIT webpageChanged();
    Q_EMIT coreChanged();
}

#endif // LQTG_TYPE_MESSAGEMEDIA_OBJECT