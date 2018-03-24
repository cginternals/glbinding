{{#integrations.valueRepresentable}}
    else if (typeid(*value) == typeid(Value<{{api}}::{{identifier}}>))
    {
        stream << *reinterpret_cast<const Value<{{api}}::{{identifier}}>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<{{api}}::{{identifier}} *>))
    {
        stream << *reinterpret_cast<const Value<{{api}}::{{identifier}} *>*>(value);
    }
{{/integrations.valueRepresentable}}{{^integrations.valueRepresentable}}
    // Omit {{api}}::{{identifier}}
{{/integrations.valueRepresentable}}
