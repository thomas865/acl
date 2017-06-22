#ifndef ACL_ATOMIC_INCLUDE_H
#define ACL_ATOMIC_INCLUDE_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "acl_define.h"

typedef struct ACL_ATOMIC ACL_ATOMIC;

ACL_API ACL_ATOMIC *acl_atomic_new(void);
ACL_API void  acl_atomic_free(ACL_ATOMIC *self);
ACL_API void  acl_atomic_set(ACL_ATOMIC *self, void *value);
ACL_API void *acl_atomic_cas(ACL_ATOMIC *self, void *cmp, void *value);
ACL_API void *acl_atomic_xchg(ACL_ATOMIC *self, void *value);
ACL_API long long acl_atomic_int64_fetch_add(ACL_ATOMIC *self, long long n);
ACL_API long long acl_atomic_int64_add_fetch(ACL_ATOMIC *self, long long n);
ACL_API int acl_atomic_int32_fetch_add(ACL_ATOMIC *self, int n);
ACL_API int acl_atomic_int32_add_fetch(ACL_ATOMIC *self, int n);

#ifdef __cplusplus
}
#endif

#endif
