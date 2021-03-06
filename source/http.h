#pragma once

#include <3ds.h>

/* \brief Makes a GET HTTP request
 * This function will throw an exception if it encounters any error
 *
 * \param url  URL to download
 * \param buf  Output buffer (will be allocated by the function)
 * \param size Output buffer size
 *
 * \return 1 if the request completed successfully.
 */
int httpGet(const char* url, u8** buf, u32* size);