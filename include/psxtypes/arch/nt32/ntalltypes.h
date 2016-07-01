#ifndef MIDIPIX_EXTERNAL_TYPES
#include "ntneedall.h"
#endif

#define __NT_MAX_USERSPACE_ADDRESS	0x7FFEFFFFul

#if !defined(__NEED_wchar16_t)
#define __NEED_wchar16_t
#endif

#if !defined(__NEED_wchar32_t)
#define __NEED_wchar32_t
#endif


#if defined(__NEED_wchar16_t) && !defined(__DEFINED_wchar16_t)
typedef unsigned short		wchar16_t;
#define __DEFINED_wchar16_t
#endif


#if defined(__NEED_wchar32_t) && !defined(__DEFINED_wchar32_t)
typedef int			wchar32_t;
#define __DEFINED_wchar32_t
#endif


#if defined(__NEED_size_t) && !defined(__DEFINED_size_t)
typedef unsigned long		size_t;
#define __DEFINED_size_t
#endif

#if defined(__NEED_ssize_t) && !defined(__DEFINED_ssize_t)
typedef signed   long		ssize_t;
#define __DEFINED_ssize_t
#endif

#if defined(__NEED_ptrdiff_t) && !defined(__DEFINED_ptrdiff_t)
typedef signed   long		ptrdiff_t;
#define __DEFINED_ptrdiff_t
#endif

#if defined(__NEED_off_t) && !defined(__DEFINED_off_t)
typedef signed long long		off_t;
#define __DEFINED_off_t
#endif

#if defined(__NEED_int8_t) && !defined(__DEFINED_int8_t)
typedef signed char		int8_t;
#define __DEFINED_int8_t
#endif

#if defined(__NEED_int16_t) && !defined(__DEFINED_int16_t)
typedef short			int16_t;
#define __DEFINED_int16_t
#endif

#if defined(__NEED_int32_t) && !defined(__DEFINED_int32_t)
typedef int			int32_t;
#define __DEFINED_int32_t
#endif

#if defined(__NEED_int64_t) && !defined(__DEFINED_int64_t)
typedef long long		int64_t;
#define __DEFINED_int64_t
#endif


#if defined(__NEED_uint8_t) && !defined(__DEFINED_uint8_t)
typedef unsigned char		uint8_t;
#define __DEFINED_uint8_t
#endif

#if defined(__NEED_uint16_t) && !defined(__DEFINED_uint16_t)
typedef unsigned short		uint16_t;
#define __DEFINED_uint16_t
#endif

#if defined(__NEED_uint32_t) && !defined(__DEFINED_uint32_t)
typedef unsigned long		uint32_t;
#define __DEFINED_uint32_t
#endif

#if defined(__NEED_uint64_t) && !defined(__DEFINED_uint64_t)
typedef unsigned long long	uint64_t;
#define __DEFINED_uint64_t
#endif


#if defined(__NEED___uint16_t) && !defined(__DEFINED___uint16_t)
typedef unsigned short		__uint16_t;
#define __DEFINED___uint16_t
#endif

#if defined(__NEED___uint32_t) && !defined(__DEFINED___uint32_t)
typedef unsigned long		__uint32_t;
#define __DEFINED___uint32_t
#endif

#if defined(__NEED___uint64_t) && !defined(__DEFINED___uint64_t)
typedef unsigned long long	__uint64_t;
#define __DEFINED___uint64_t
#endif


#if defined(__NEED_int_fast8_t) && !defined(__DEFINED_int_fast8_t)
typedef int8_t			int_fast8_t;
#define __DEFINED_int_fast8_t
#endif

#if defined(__NEED_int_fast16_t) && !defined(__DEFINED_int_fast16_t)
typedef int			int_fast16_t;
#define __DEFINED_int_fast16_t
#endif

#if defined(__NEED_int_fast32_t) && !defined(__DEFINED_int_fast32_t)
typedef long			int_fast32_t;
#define __DEFINED_int_fast32_t
#endif

#if defined(__NEED_int_fast64_t) && !defined(__DEFINED_int_fast64_t)
typedef int64_t			int_fast64_t;
#define __DEFINED_int_fast64_t
#endif


#if defined(__NEED_uint_fast8_t) && !defined(__DEFINED_uint_fast8_t)
typedef unsigned char		uint_fast8_t;
#define __DEFINED_uint_fast8_t
#endif

#if defined(__NEED_uint_fast16_t) && !defined(__DEFINED_uint_fast16_t)
typedef unsigned int		uint_fast16_t;
#define __DEFINED_uint_fast16_t
#endif

#if defined(__NEED_uint_fast32_t) && !defined(__DEFINED_uint_fast32_t)
typedef unsigned long		uint_fast32_t;
#define __DEFINED_uint_fast32_t
#endif

#if defined(__NEED_uint_fast64_t) && !defined(__DEFINED_uint_fast64_t)
typedef uint64_t		uint_fast64_t;
#define __DEFINED_uint_fast64_t
#endif


#if defined(__NEED_intptr_t) && !defined(__DEFINED_intptr_t)
typedef long			intptr_t;
#define __DEFINED_intptr_t
#endif

#if defined(__NEED_uintptr_t) && !defined(__DEFINED_uintptr_t)
typedef unsigned long		uintptr_t;
#define __DEFINED_uintptr_t
#endif


#if defined(__NEED_intmax_t) && !defined(__DEFINED_intmax_t)
typedef long long		intmax_t;
#define __DEFINED_intmax_t
#endif

#if defined(__NEED_uintmax_t) && !defined(__DEFINED_uintmax_t)
typedef unsigned long long	uintmax_t;
#define __DEFINED_uintmax_t
#endif


#if defined(__NEED_float_t) && !defined(__DEFINED_float_t)
typedef float			float_t;
#define __DEFINED_float_t
#endif

#if defined(__NEED_double_t) && !defined(__DEFINED_double_t)
typedef double			double_t;
#define __DEFINED_double_t
#endif

typedef __CUSTOM_OR_BUILTIN_va_list__ va_list;

#define va_start(v,l)	__builtin_va_start(v,l)
#define va_end(v)	__builtin_va_end(v)
#define va_arg(v,l)	__builtin_va_arg(v,l)
#define va_copy(d,s)	__builtin_va_copy(d,s)
