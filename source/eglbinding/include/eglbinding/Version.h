#pragma once

#include <eglbinding/eglbinding_api.h>

#include <khrapi/Version.h>


namespace eglbinding
{

class Binding;

class EGLBINDING_API Version : public khrapi::Version<Binding>
{
public:
    using khrapi::Version<Binding>::Version;

    bool isValid() const;

    const Version & nearest() const;

    static const std::set<Version> & versions();
    static const Version & latest();

protected:
    static const std::set<Version> s_validVersions;
    static const Version s_latest;
};

} // namespace eglbinding
