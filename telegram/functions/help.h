// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_FNC_HELP
#define LQTG_FNC_HELP

#include "telegramfunctionobject.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include "telegram/types/config.h"
#include "telegram/types/nearestdc.h"
#include "telegram/types/helpappupdate.h"
#include <QString>
#include <QList>
#include "telegram/types/inputappevent.h"
#include "telegram/types/helpinvitetext.h"
#include "telegram/types/helpsupport.h"
#include "telegram/types/helpappchangelog.h"
#include "telegram/types/helptermsofservice.h"

namespace Tg {
namespace Functions {

class LIBQTELEGRAMSHARED_EXPORT Help : public TelegramFunctionObject
{
public:
    enum HelpFunction {
        fncHelpGetConfig = 0xc4f9186b,
        fncHelpGetNearestDc = 0x1fb33026,
        fncHelpGetAppUpdate = 0xc812ac7e,
        fncHelpSaveAppLog = 0x6f02f748,
        fncHelpGetInviteText = 0xa4a95186,
        fncHelpGetSupport = 0x9cdf08cd,
        fncHelpGetAppChangelog = 0x5bab7fb2,
        fncHelpGetTermsOfService = 0x37d78f83
    };

    Help();
    virtual ~Help();

    static bool getConfig(OutboundPkt *out);
    static Config getConfigResult(InboundPkt *in);

    static bool getNearestDc(OutboundPkt *out);
    static NearestDc getNearestDcResult(InboundPkt *in);

    static bool getAppUpdate(OutboundPkt *out, const QString &deviceModel, const QString &systemVersion, const QString &appVersion, const QString &langCode);
    static HelpAppUpdate getAppUpdateResult(InboundPkt *in);

    static bool saveAppLog(OutboundPkt *out, const QList<InputAppEvent> &events);
    static bool saveAppLogResult(InboundPkt *in);

    static bool getInviteText(OutboundPkt *out, const QString &langCode);
    static HelpInviteText getInviteTextResult(InboundPkt *in);

    static bool getSupport(OutboundPkt *out);
    static HelpSupport getSupportResult(InboundPkt *in);

    static bool getAppChangelog(OutboundPkt *out, const QString &deviceModel, const QString &systemVersion, const QString &appVersion, const QString &langCode);
    static HelpAppChangelog getAppChangelogResult(InboundPkt *in);

    static bool getTermsOfService(OutboundPkt *out, const QString &langCode);
    static HelpTermsOfService getTermsOfServiceResult(InboundPkt *in);

};

}
inline Functions::Help::Help() {
}

inline Functions::Help::~Help() {
}

inline bool Functions::Help::getConfig(OutboundPkt *out) {
    out->appendInt(fncHelpGetConfig);
    return true;
}

inline Config Functions::Help::getConfigResult(InboundPkt *in) {
    Config result;
    if(!result.fetch(in)) return result;
    return result;
}

inline bool Functions::Help::getNearestDc(OutboundPkt *out) {
    out->appendInt(fncHelpGetNearestDc);
    return true;
}

inline NearestDc Functions::Help::getNearestDcResult(InboundPkt *in) {
    NearestDc result;
    if(!result.fetch(in)) return result;
    return result;
}

inline bool Functions::Help::getAppUpdate(OutboundPkt *out, const QString &deviceModel, const QString &systemVersion, const QString &appVersion, const QString &langCode) {
    out->appendInt(fncHelpGetAppUpdate);
    out->appendQString(deviceModel);
    out->appendQString(systemVersion);
    out->appendQString(appVersion);
    out->appendQString(langCode);
    return true;
}

inline HelpAppUpdate Functions::Help::getAppUpdateResult(InboundPkt *in) {
    HelpAppUpdate result;
    if(!result.fetch(in)) return result;
    return result;
}

inline bool Functions::Help::saveAppLog(OutboundPkt *out, const QList<InputAppEvent> &events) {
    out->appendInt(fncHelpSaveAppLog);
    out->appendInt(CoreTypes::typeVector);
    out->appendInt(events.count());
    for (qint32 i = 0; i < events.count(); i++) {
        if(!events[i].push(out)) return false;
    }
    return true;
}

inline bool Functions::Help::saveAppLogResult(InboundPkt *in) {
    bool result;
    result = in->fetchBool();
    return result;
}

inline bool Functions::Help::getInviteText(OutboundPkt *out, const QString &langCode) {
    out->appendInt(fncHelpGetInviteText);
    out->appendQString(langCode);
    return true;
}

inline HelpInviteText Functions::Help::getInviteTextResult(InboundPkt *in) {
    HelpInviteText result;
    if(!result.fetch(in)) return result;
    return result;
}

inline bool Functions::Help::getSupport(OutboundPkt *out) {
    out->appendInt(fncHelpGetSupport);
    return true;
}

inline HelpSupport Functions::Help::getSupportResult(InboundPkt *in) {
    HelpSupport result;
    if(!result.fetch(in)) return result;
    return result;
}

inline bool Functions::Help::getAppChangelog(OutboundPkt *out, const QString &deviceModel, const QString &systemVersion, const QString &appVersion, const QString &langCode) {
    out->appendInt(fncHelpGetAppChangelog);
    out->appendQString(deviceModel);
    out->appendQString(systemVersion);
    out->appendQString(appVersion);
    out->appendQString(langCode);
    return true;
}

inline HelpAppChangelog Functions::Help::getAppChangelogResult(InboundPkt *in) {
    HelpAppChangelog result;
    if(!result.fetch(in)) return result;
    return result;
}

inline bool Functions::Help::getTermsOfService(OutboundPkt *out, const QString &langCode) {
    out->appendInt(fncHelpGetTermsOfService);
    out->appendQString(langCode);
    return true;
}

inline HelpTermsOfService Functions::Help::getTermsOfServiceResult(InboundPkt *in) {
    HelpTermsOfService result;
    if(!result.fetch(in)) return result;
    return result;
}


}

#endif // LQTG_FNC_HELP
