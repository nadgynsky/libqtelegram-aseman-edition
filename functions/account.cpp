// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "account.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

using namespace Tg;

Functions::Account::Account() {
}

Functions::Account::~Account() {
}

bool Functions::Account::registerDevice(OutboundPkt *out, qint32 tokenType, const QString &token, const QString &deviceModel, const QString &systemVersion, const QString &appVersion, bool appSandbox, const QString &langCode) {
    out->appendInt(fncAccountRegisterDevice);
    out->appendInt(tokenType);
    out->appendQString(token);
    out->appendQString(deviceModel);
    out->appendQString(systemVersion);
    out->appendQString(appVersion);
    out->appendBool(appSandbox);
    out->appendQString(langCode);
    return true;
}

bool Functions::Account::registerDeviceResult(InboundPkt *in) {
    bool result;
    result = in->fetchBool();
    return result;
}

bool Functions::Account::unregisterDevice(OutboundPkt *out, qint32 tokenType, const QString &token) {
    out->appendInt(fncAccountUnregisterDevice);
    out->appendInt(tokenType);
    out->appendQString(token);
    return true;
}

bool Functions::Account::unregisterDeviceResult(InboundPkt *in) {
    bool result;
    result = in->fetchBool();
    return result;
}

bool Functions::Account::updateNotifySettings(OutboundPkt *out, const Types::InputNotifyPeer &peer, const Types::InputPeerNotifySettings &settings) {
    out->appendInt(fncAccountUpdateNotifySettings);
    if(!peer.push(out)) return false;
    if(!settings.push(out)) return false;
    return true;
}

bool Functions::Account::updateNotifySettingsResult(InboundPkt *in) {
    bool result;
    result = in->fetchBool();
    return result;
}

bool Functions::Account::getNotifySettings(OutboundPkt *out, const Types::InputNotifyPeer &peer) {
    out->appendInt(fncAccountGetNotifySettings);
    if(!peer.push(out)) return false;
    return true;
}

Types::PeerNotifySettings Functions::Account::getNotifySettingsResult(InboundPkt *in) {
    Types::PeerNotifySettings result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Account::resetNotifySettings(OutboundPkt *out) {
    out->appendInt(fncAccountResetNotifySettings);
    return true;
}

bool Functions::Account::resetNotifySettingsResult(InboundPkt *in) {
    bool result;
    result = in->fetchBool();
    return result;
}

bool Functions::Account::updateProfile(OutboundPkt *out, const QString &firstName, const QString &lastName) {
    out->appendInt(fncAccountUpdateProfile);
    out->appendQString(firstName);
    out->appendQString(lastName);
    return true;
}

Types::User Functions::Account::updateProfileResult(InboundPkt *in) {
    Types::User result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Account::updateStatus(OutboundPkt *out, bool offline) {
    out->appendInt(fncAccountUpdateStatus);
    out->appendBool(offline);
    return true;
}

bool Functions::Account::updateStatusResult(InboundPkt *in) {
    bool result;
    result = in->fetchBool();
    return result;
}

bool Functions::Account::getWallPapers(OutboundPkt *out) {
    out->appendInt(fncAccountGetWallPapers);
    return true;
}

QList<Types::WallPaper> Functions::Account::getWallPapersResult(InboundPkt *in) {
    QList<Types::WallPaper> result;
    if(in->fetchInt() != (qint32)TL_Vector) return result;
    qint32 result_length = in->fetchInt();
    result.clear();
    for (qint32 i = 0; i < result_length; i++) {
        Types::WallPaper type;
        if(!type.fetch(in)) return result;
        result.append(type);
    }
    return result;
}

bool Functions::Account::checkUsername(OutboundPkt *out, const QString &username) {
    out->appendInt(fncAccountCheckUsername);
    out->appendQString(username);
    return true;
}

bool Functions::Account::checkUsernameResult(InboundPkt *in) {
    bool result;
    result = in->fetchBool();
    return result;
}

bool Functions::Account::updateUsername(OutboundPkt *out, const QString &username) {
    out->appendInt(fncAccountUpdateUsername);
    out->appendQString(username);
    return true;
}

Types::User Functions::Account::updateUsernameResult(InboundPkt *in) {
    Types::User result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Account::getPrivacy(OutboundPkt *out, const Types::InputPrivacyKey &key) {
    out->appendInt(fncAccountGetPrivacy);
    if(!key.push(out)) return false;
    return true;
}

Types::AccountPrivacyRules Functions::Account::getPrivacyResult(InboundPkt *in) {
    Types::AccountPrivacyRules result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Account::setPrivacy(OutboundPkt *out, const Types::InputPrivacyKey &key, const QList<Types::InputPrivacyRule> &rules) {
    out->appendInt(fncAccountSetPrivacy);
    if(!key.push(out)) return false;
    out->appendInt(TL_Vector);
    out->appendInt(rules.count());
    for (qint32 i = 0; i < rules.count(); i++) {
        if(!rules[i].push(out)) return false;
    }
    return true;
}

Types::AccountPrivacyRules Functions::Account::setPrivacyResult(InboundPkt *in) {
    Types::AccountPrivacyRules result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Account::deleteAccount(OutboundPkt *out, const QString &reason) {
    out->appendInt(fncAccountDeleteAccount);
    out->appendQString(reason);
    return true;
}

bool Functions::Account::deleteAccountResult(InboundPkt *in) {
    bool result;
    result = in->fetchBool();
    return result;
}

bool Functions::Account::getAccountTTL(OutboundPkt *out) {
    out->appendInt(fncAccountGetAccountTTL);
    return true;
}

Types::AccountDaysTTL Functions::Account::getAccountTTLResult(InboundPkt *in) {
    Types::AccountDaysTTL result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Account::setAccountTTL(OutboundPkt *out, const Types::AccountDaysTTL &ttl) {
    out->appendInt(fncAccountSetAccountTTL);
    if(!ttl.push(out)) return false;
    return true;
}

bool Functions::Account::setAccountTTLResult(InboundPkt *in) {
    bool result;
    result = in->fetchBool();
    return result;
}

bool Functions::Account::sendChangePhoneCode(OutboundPkt *out, const QString &phoneNumber) {
    out->appendInt(fncAccountSendChangePhoneCode);
    out->appendQString(phoneNumber);
    return true;
}

Types::AccountSentChangePhoneCode Functions::Account::sendChangePhoneCodeResult(InboundPkt *in) {
    Types::AccountSentChangePhoneCode result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Account::changePhone(OutboundPkt *out, const QString &phoneNumber, const QString &phoneCodeHash, const QString &phoneCode) {
    out->appendInt(fncAccountChangePhone);
    out->appendQString(phoneNumber);
    out->appendQString(phoneCodeHash);
    out->appendQString(phoneCode);
    return true;
}

Types::User Functions::Account::changePhoneResult(InboundPkt *in) {
    Types::User result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Account::updateDeviceLocked(OutboundPkt *out, qint32 period) {
    out->appendInt(fncAccountUpdateDeviceLocked);
    out->appendInt(period);
    return true;
}

bool Functions::Account::updateDeviceLockedResult(InboundPkt *in) {
    bool result;
    result = in->fetchBool();
    return result;
}

bool Functions::Account::getAuthorizations(OutboundPkt *out) {
    out->appendInt(fncAccountGetAuthorizations);
    return true;
}

Types::AccountAuthorizations Functions::Account::getAuthorizationsResult(InboundPkt *in) {
    Types::AccountAuthorizations result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Account::resetAuthorization(OutboundPkt *out, qint64 hash) {
    out->appendInt(fncAccountResetAuthorization);
    out->appendLong(hash);
    return true;
}

bool Functions::Account::resetAuthorizationResult(InboundPkt *in) {
    bool result;
    result = in->fetchBool();
    return result;
}

bool Functions::Account::getPassword(OutboundPkt *out) {
    out->appendInt(fncAccountGetPassword);
    return true;
}

Types::AccountPassword Functions::Account::getPasswordResult(InboundPkt *in) {
    Types::AccountPassword result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Account::getPasswordSettings(OutboundPkt *out, const QByteArray &currentPasswordHash) {
    out->appendInt(fncAccountGetPasswordSettings);
    out->appendBytes(currentPasswordHash);
    return true;
}

Types::AccountPasswordSettings Functions::Account::getPasswordSettingsResult(InboundPkt *in) {
    Types::AccountPasswordSettings result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Account::updatePasswordSettings(OutboundPkt *out, const QByteArray &currentPasswordHash, const Types::AccountPasswordInputSettings &newSettings) {
    out->appendInt(fncAccountUpdatePasswordSettings);
    out->appendBytes(currentPasswordHash);
    if(!newSettings.push(out)) return false;
    return true;
}

bool Functions::Account::updatePasswordSettingsResult(InboundPkt *in) {
    bool result;
    result = in->fetchBool();
    return result;
}

