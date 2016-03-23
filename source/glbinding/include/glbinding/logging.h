
#pragma once

#include <glbinding/glbinding_api.h>

#include <glbinding/callbacks.h>


namespace glbinding 
{


namespace logging
{


/**
 * @brief
 *   The type of an entry in the log buffer is a FunctionCall *.
 */
using LogEntry = FunctionCall*;

/**
 * @brief
 *   Resizes the global log buffer.
 *
 * @param[in] newSize
 *   The new size of the buffer.
 */
GLBINDING_API void resize(unsigned int newSize);

/**
 * @brief
 *   Start logging to a file globally.
 *
 * This function generates a file name and uses this as output.
 */
GLBINDING_API void start();

/**
 * @brief
 *   Start logging to a file globally.
 *
 * @param[in] filepath
 *   The file to store the log into.
 */
GLBINDING_API void start(const std::string & filepath);

/**
 * @brief
 *   Start logging to a file globally, except for blacklisted functions.
 *
 * @param blackList
 *   The blacklist of function names.
 *
 * This function generates a file name and uses this as output.
 */
GLBINDING_API void startExcept(const std::set<std::string> & blackList);

/**
 * @brief
 *   Start logging to a file globally, except for blacklisted functions.
 *
 * @param[in] filepath
 *   The file to store the log into.
 * @param blackList
 *   The blacklist of function names.
 */
GLBINDING_API void startExcept(const std::string & filepath, const std::set<std::string> & blackList);

/**
 * @brief
 *   Stops logging and flushing log file.
 */
GLBINDING_API void stop();

/**
 * @brief
 *   Pauses logging for later stopping or resuming.
 *
 * While logging is started but paused, no OpenGL function calls are considered for the log file.
 */
GLBINDING_API void pause();

/**
 * @brief
 *   Resumes paused logging.
 */
GLBINDING_API void resume();

/**
 * @brief
 *   Add a function call to the log
 *
 * This function is intended to get used by glbinding and not by a user of glbinding.
 */
GLBINDING_API void log(LogEntry call);


} // namespace logging


} // namespace glbinding
