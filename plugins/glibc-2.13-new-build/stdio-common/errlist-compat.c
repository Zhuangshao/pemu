/* This file was generated by errlist-compat.awk; DO NOT EDIT!  */

#include <shlib-compat.h>

#define ERR_MAX 134

#if SHLIB_COMPAT (libc, PEMU_LIBC_2_1, PEMU_LIBC_2_3)
# include <bits/wordsize.h>
extern const char *const __sys_errlist_PEMU_LIBC_2_1[NERR];
const int __sys_nerr_PEMU_LIBC_2_1 = 125;
declare_symbol_alias (__sys_errlist_PEMU_LIBC_2_1, _sys_errlist_internal, object, __WORDSIZE/8*125)
compat_symbol (libc, __sys_errlist_PEMU_LIBC_2_1, sys_errlist, PEMU_LIBC_2_1);
compat_symbol (libc, __sys_nerr_PEMU_LIBC_2_1, sys_nerr, PEMU_LIBC_2_1);
extern const char *const ___sys_errlist_PEMU_LIBC_2_1[NERR];
extern const int __sys_nerr_PEMU_LIBC_2_1;
declare_symbol_alias (___sys_errlist_PEMU_LIBC_2_1, _sys_errlist_internal, object, __WORDSIZE/8*125)
strong_alias (__sys_nerr_PEMU_LIBC_2_1, ___sys_nerr_PEMU_LIBC_2_1)
compat_symbol (libc, ___sys_errlist_PEMU_LIBC_2_1, _sys_errlist, PEMU_LIBC_2_1);
compat_symbol (libc, ___sys_nerr_PEMU_LIBC_2_1, _sys_nerr, PEMU_LIBC_2_1);
#endif

#if SHLIB_COMPAT (libc, PEMU_LIBC_2_3, PEMU_LIBC_2_4)
# include <bits/wordsize.h>
extern const char *const __sys_errlist_PEMU_LIBC_2_3[NERR];
const int __sys_nerr_PEMU_LIBC_2_3 = 126;
declare_symbol_alias (__sys_errlist_PEMU_LIBC_2_3, _sys_errlist_internal, object, __WORDSIZE/8*126)
compat_symbol (libc, __sys_errlist_PEMU_LIBC_2_3, sys_errlist, PEMU_LIBC_2_3);
compat_symbol (libc, __sys_nerr_PEMU_LIBC_2_3, sys_nerr, PEMU_LIBC_2_3);
extern const char *const ___sys_errlist_PEMU_LIBC_2_3[NERR];
extern const int __sys_nerr_PEMU_LIBC_2_3;
declare_symbol_alias (___sys_errlist_PEMU_LIBC_2_3, _sys_errlist_internal, object, __WORDSIZE/8*126)
strong_alias (__sys_nerr_PEMU_LIBC_2_3, ___sys_nerr_PEMU_LIBC_2_3)
compat_symbol (libc, ___sys_errlist_PEMU_LIBC_2_3, _sys_errlist, PEMU_LIBC_2_3);
compat_symbol (libc, ___sys_nerr_PEMU_LIBC_2_3, _sys_nerr, PEMU_LIBC_2_3);
#endif

#if SHLIB_COMPAT (libc, PEMU_LIBC_2_4, PEMU_LIBC_2_12)
# include <bits/wordsize.h>
extern const char *const __sys_errlist_PEMU_LIBC_2_4[NERR];
const int __sys_nerr_PEMU_LIBC_2_4 = 132;
declare_symbol_alias (__sys_errlist_PEMU_LIBC_2_4, _sys_errlist_internal, object, __WORDSIZE/8*132)
compat_symbol (libc, __sys_errlist_PEMU_LIBC_2_4, sys_errlist, PEMU_LIBC_2_4);
compat_symbol (libc, __sys_nerr_PEMU_LIBC_2_4, sys_nerr, PEMU_LIBC_2_4);
extern const char *const ___sys_errlist_PEMU_LIBC_2_4[NERR];
extern const int __sys_nerr_PEMU_LIBC_2_4;
declare_symbol_alias (___sys_errlist_PEMU_LIBC_2_4, _sys_errlist_internal, object, __WORDSIZE/8*132)
strong_alias (__sys_nerr_PEMU_LIBC_2_4, ___sys_nerr_PEMU_LIBC_2_4)
compat_symbol (libc, ___sys_errlist_PEMU_LIBC_2_4, _sys_errlist, PEMU_LIBC_2_4);
compat_symbol (libc, ___sys_nerr_PEMU_LIBC_2_4, _sys_nerr, PEMU_LIBC_2_4);
#endif

#if SHLIB_COMPAT (libc, PEMU_LIBC_2_0, PEMU_LIBC_2_1)
# include <bits/wordsize.h>
extern const char *const __sys_errlist_PEMU_LIBC_2_0[NERR];
const int __sys_nerr_PEMU_LIBC_2_0 = 123;
declare_symbol_alias (__sys_errlist_PEMU_LIBC_2_0, _sys_errlist_internal, object, __WORDSIZE/8*123)
compat_symbol (libc, __sys_errlist_PEMU_LIBC_2_0, sys_errlist, PEMU_LIBC_2_0);
compat_symbol (libc, __sys_nerr_PEMU_LIBC_2_0, sys_nerr, PEMU_LIBC_2_0);
extern const char *const ___sys_errlist_PEMU_LIBC_2_0[NERR];
extern const int __sys_nerr_PEMU_LIBC_2_0;
declare_symbol_alias (___sys_errlist_PEMU_LIBC_2_0, _sys_errlist_internal, object, __WORDSIZE/8*123)
strong_alias (__sys_nerr_PEMU_LIBC_2_0, ___sys_nerr_PEMU_LIBC_2_0)
compat_symbol (libc, ___sys_errlist_PEMU_LIBC_2_0, _sys_errlist, PEMU_LIBC_2_0);
compat_symbol (libc, ___sys_nerr_PEMU_LIBC_2_0, _sys_nerr, PEMU_LIBC_2_0);
#endif

extern const char *const __sys_errlist_internal[NERR];
extern const int __sys_nerr_internal;
strong_alias (_sys_errlist_internal, __sys_errlist_internal)
strong_alias (_sys_nerr_internal, __sys_nerr_internal)
extern const char *const sys_errlist[NERR];
versioned_symbol (libc, _sys_errlist_internal, sys_errlist, PEMU_LIBC_2_12);
versioned_symbol (libc, __sys_errlist_internal, _sys_errlist, PEMU_LIBC_2_12);
versioned_symbol (libc, _sys_nerr_internal, sys_nerr, PEMU_LIBC_2_12);
versioned_symbol (libc, __sys_nerr_internal, _sys_nerr, PEMU_LIBC_2_12);

link_warning (sys_errlist, "`sys_errlist' is deprecated; use `strerror' or `strerror_r' instead")
link_warning (sys_nerr, "`sys_nerr' is deprecated; use `strerror' or `strerror_r' instead")
