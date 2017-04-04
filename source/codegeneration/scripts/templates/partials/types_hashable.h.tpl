
namespace std
{


template<>
struct hash<{{api}}::{{identifier}}>
{
    hash<std::underlying_type<{{api}}::{{identifier}}>::type>::result_type operator()(const {{api}}::{{identifier}} & t) const
    {
        return hash<std::underlying_type<{{api}}::{{identifier}}>::type>()(static_cast<std::underlying_type<{{api}}::{{identifier}}>::type>(t));
    }
};


} // namespace std