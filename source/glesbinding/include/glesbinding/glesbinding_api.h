#pragma once

#ifdef _MSC_VER
#   define GLESBINDING_API_EXPORT_DECLARATION __declspec(dllexport)
#   define GLESBINDING_API_IMPORT_DECLARATION __declspec(dllimport)
#elif __GNUC__
#    define GLESBINDING_API_EXPORT_DECLARATION __attribute__ ((visibility ("default")))
#    define GLESBINDING_API_IMPORT_DECLARATION __attribute__ ((visibility ("default")))
#else
#   define GLESBINDING_API_EXPORT_DECLARATION __attribute__ ((visibility ("default")))
#   define GLESBINDING_API_IMPORT_DECLARATION __attribute__ ((visibility ("default")))
#endif

#ifndef GLBINDING_STATIC
#ifdef GLESBINDING_EXPORTS
#   define GLESBINDING_API GLESBINDING_API_EXPORT_DECLARATION
#else
#   define GLESBINDING_API GLESBINDING_API_IMPORT_DECLARATION
#endif
#else
#   define GLESBINDING_API
#endif

#ifdef N_DEBUG
#   define IF_DEBUG(statement)
#   define IF_NDEBUG(statement) statement
#else
#   define IF_DEBUG(statement) statement
#   define IF_NDEBUG(statement)
#endif // N_DEBUG

// http://stackoverflow.com/questions/18387640/how-to-deal-with-noexcept-in-visual-studio
#ifndef NOEXCEPT
#   ifdef _MSC_VER
#       define NOEXCEPT
#   else
#       define NOEXCEPT noexcept
#   endif
#endif

#ifdef _MSC_VER
#define THREAD_LOCAL  __declspec(thread)
#else
#define THREAD_LOCAL __thread
#endif
