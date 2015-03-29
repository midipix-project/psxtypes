/* verify matching compiler */
#if defined(__NT32)

typedef char __sanity[sizeof(int) - sizeof(void *) + 1];

#elif defined(__NT64)

#ifndef _NT64_SANITY_CHECKED
#define _NT64_SANITY_CHECKED

struct	__sanity_struct {int i; void * p;};
typedef char __sanity[sizeof(struct __sanity_struct) - 2*sizeof(long long) + 1];

#endif

#endif


/*compiler directives: unified syntax */
#if defined(__GNUC__)
#include "compiler/__nt_compiler_gcc.h"
#elif defined (_MSC_VER)
#include "compiler/__nt_compiler_msvc.h"
#endif


/* portable types in a free-standing NT environment */
#ifndef __ASSEMBLER__
#if defined(__NT32)
#include "arch/nt32/ntalltypes.h"
#elif defined(__NT64)
#include "arch/nt64/ntalltypes.h"
#endif
#endif
