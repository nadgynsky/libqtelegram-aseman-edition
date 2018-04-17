#include "proxyoptions.hpp"

#include <QSettings>
#include <QNetworkProxy>

namespace {

static const QString SettingsGroup = QStringLiteral("libqtelegram-ae");
static const QString SettingsHost = QStringLiteral("host");
static const QString SettingsPort = QStringLiteral("port");
static const QString SettingsUser = QStringLiteral("user");
static const QString SettingsPass = QStringLiteral("pass");

} // namespace

QNetworkProxy ProxyOptions::getProxySettings()
{
    const QSettings sett;
    return QNetworkProxy{
        QNetworkProxy::Socks5Proxy,
        sett.value(SettingsGroup + '/' + SettingsHost).toString(),
        sett.value(SettingsGroup + '/' + SettingsPort).toUInt(),
        sett.value(SettingsGroup + '/' + SettingsUser).toString(),
        sett.value(SettingsGroup + '/' + SettingsPass).toString()
    };
}
