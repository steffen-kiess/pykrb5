#include "krb5.h"

// Heimdal does not define this
#ifndef KRB5_KT_NAME_TOOLONG
#define KRB5_KT_NAME_TOOLONG 1
#endif

// MIT does not define this
#ifndef KRB5_KT_PREFIX_MAX_LEN
#define KRB5_KT_PREFIX_MAX_LEN -1
#endif

// Heimdal does not define this
#ifndef KRB5_TC_SUPPORTED_KTYPES
#define KRB5_TC_SUPPORTED_KTYPES 0
#endif
