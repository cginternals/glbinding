
namespace eglbinding { namespace aux
{


template <typename VersionClass>
bool ValidVersions<VersionClass>::isValid(const VersionClass & version)
{
    return s_validVersions.find(version) != s_validVersions.end();
}

template <typename VersionClass>
const VersionClass & ValidVersions<VersionClass>::nearest(const VersionClass & version)
{
    auto iterator = s_validVersions.lower_bound(version);

    if (iterator == s_validVersions.end())
    {
        return *(--iterator);
    }

    return *iterator;
}

template <typename VersionClass>
const VersionClass & ValidVersions<VersionClass>::latest()
{
    return s_latest;
}

template <typename VersionClass>
const std::set<VersionClass> & ValidVersions<VersionClass>::versions()
{
    return s_validVersions;
}

template <typename VersionClass>
std::set<VersionClass> ValidVersions<VersionClass>::preceeding(const VersionClass & version)
{
    auto preceedingVersions = std::set<VersionClass>{};
    for (auto & v : s_validVersions)
    {
        if (v < version)
            preceedingVersions.insert(v);
    }

    return preceedingVersions;
}

template <typename VersionClass>
std::set<VersionClass> ValidVersions<VersionClass>::succeeding(const VersionClass & version)
{
    auto succeedingVersions = std::set<VersionClass>{};
    for (auto & v : s_validVersions)
    {
        if (v > version)
            succeedingVersions.insert(v);
    }

    return succeedingVersions;
}


} } // namespace eglbinding::aux
