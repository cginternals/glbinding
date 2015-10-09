
#include <glbinding/Version.h>


namespace glbinding
{

bool Version::isValid() const
{
    return s_validVersions.find(*this) != s_validVersions.end();
}

const Version & Version::nearest() const
{
    auto iterator = s_validVersions.lower_bound(*this);

    if (iterator == s_validVersions.end())
    {
        return *(--iterator);
    }

    return *iterator;
}

const Version & Version::latest()
{
    return s_latest;
}

const std::set<Version> & Version::versions()
{
    return s_validVersions;
}

} // namespace glbinding
