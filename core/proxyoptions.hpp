#ifndef PROXYOPTIONS_HPP
#define PROXYOPTIONS_HPP


class QNetworkProxy;

class ProxyOptions
{
    ProxyOptions() = delete;
public:

    static QNetworkProxy getProxySettings();
};

#endif // PROXYOPTIONS_HPP
