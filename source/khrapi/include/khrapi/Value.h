#pragma once

#include <khrapi/khrapi_api.h>

#include <vector>

#include <khrapi/AbstractValue.h>
//#include <glbinding/gl/types.h>

namespace khrapi 
{

template <typename T>
class Value : public AbstractValue
{
public:
    Value(const T & value);

    Value & operator=(const Value &) = delete;

    virtual void printOn(std::ostream & stream) const override;

protected:
    T value;
};

template <typename Argument>
AbstractValue * createValue(Argument argument);

template <typename... Arguments>
std::vector<AbstractValue*> createValues(Arguments&&... arguments);

} // namespace khrapi

#include <khrapi/Value.hpp>
