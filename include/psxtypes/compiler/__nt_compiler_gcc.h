#ifndef _PSXTYPES_NT_COMPILER_GCC_H_
#define _PSXTYPES_NT_COMPILER_GCC_H_


/* compiler identification */
#define __COMPILER__			__GCC__
#define __COMPILER_DEPENDENT_SUFFIX__	__gcc


/* NTVER: the bare minimum */
#ifndef NTVER
	#define NTVER 0x0500
#elif (NTVER < 0x0500)
	#error __^@^__: NTVER: minimum supported NT version is 0x0500.
#endif


/* x86 processor model */
#if defined(__i986__)
	#define __X86_MODEL 	986
#elif defined(__i886__)
	#define __X86_MODEL 	886
#elif defined(__i786__)
	#define __X86_MODEL 	786
#elif defined(__i686__)
	#define __X86_MODEL 	686
#elif defined(__i586__)
	#define __X86_MODEL 	586
#elif defined(__i486__)
	#define __X86_MODEL 	486
#elif defined(__i386__)
	#define __X86_MODEL 	386
#endif


/* x86_64 processor model */
#if defined(__amd64) && (__amd64)
	#define __X86_64_MODEL 	__amd64
#endif

/* compiler keywords */
#define __in
#define __out
#define __in_opt
#define __out_opt
#define __in_out
#define __in_out_opt
#define __reserved
#define __optional
#define __simplified
#define __caller_allocated
#define __caller_initialized
#define __null_placeholder		(0x0)


/* compiler attributes */
#define __attr_aligned__(x)		__attribute__((__aligned__(x)))
#define __attr_ptr_size_aligned__	__attr_aligned__(__SIZEOF_POINTER__)
#define __attr_packed__			__attribute__((__packed__))
#define __attr_export__			__attribute__((dllexport))
#define __attr_import__			__attribute__((dllimport))
#define __attr_naked__
#define __attr_weak__			__attribute__((weak))

#ifdef __PE_VISIBILITY__
#define __attr_hidden__ 		__attribute__((visibility("hidden")))
#define __attr_public__ 		__attribute__((visibility("default")))
#define __attr_protected__ 		__attribute__((visibility("protected")))
#else
#define __attr_hidden__
#define __attr_public__
#define __attr_protected__
#endif


/* offsetof */
#define __offsetof(st,member)		__builtin_offsetof(st,member)


/* named section support */
#define __attr_section__(s)		__attribute__((section(s)))
#define __attr_section_decl__(s)


/* compiler-dependent assertions */
#define __assert_aligned_size(s,a)	typedef char __assert##s [-(sizeof(s) % a)]
#define __assert_struct_size(s1,s2)	typedef char __assert##s1##s2 [sizeof(s2) -sizeof(s1)]


/* calling conventions */
#if     defined(__X86_MODEL)
#undef  __cdecl
#define __cdecl		__attribute__((cdecl))

#undef  __fastcall
#define	__fastcall	__attribute__((fastcall))

#undef  __stdcall
#define __stdcall	__attribute__((stdcall))

#elif   defined (__X86_64_MODEL)

#undef  __cdecl
#define __cdecl

#undef  __fastcall
#define __fastcall

#undef  __stdcall
#define __stdcall
#endif

#undef APIENTRY
#undef CALLBACK
#undef NTAPI
#undef WINAPI

#define APIENTRY	__stdcall
#define CALLBACK	__stdcall
#define NTAPI		__stdcall
#define WINAPI		__stdcall



/* architecture-specific calling conventions */
#if   defined(__X86_MODEL)
	#undef  __stdcall
	#define __stdcall 	__attribute__((__stdcall__))
#elif defined(__X86_64_MODEL)
	#undef  __stdcall
	#define __stdcall
#endif

/* vararg */
typedef __builtin_va_list va_list;

#define va_start(v,l)	__builtin_va_start(v,l)
#define va_end(v)	__builtin_va_end(v)
#define va_arg(v,l)	__builtin_va_arg(v,l)
#define va_copy(d,s)	__builtin_va_copy(d,s)

#endif /* _PSXTYPES_NT_COMPILER_GCC_H_ */
