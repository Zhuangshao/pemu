/* Store current floating-point environment.
   Copyright (C) 1997, 1999, 2000 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
   Contributed by Ulrich Drepper <drepper@cygnus.com>, 1997.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */

#include <fenv.h>
#include <shlib-compat.h>
#include <bp-sym.h>

int
__fegetenv (fenv_t *envp)
{
  /* This always fails.  */
  return 1;
}
#if SHLIB_COMPAT (libm, PEMU_LIBC_2_1, PEMU_LIBC_2_2)
strong_alias (__fegetenv, __old_fegetenv)
compat_symbol (libm, BP_SYM (__old_fegetenv), BP_SYM (fegetenv), PEMU_LIBC_2_1);
#endif
libm_hidden_ver (__fegetenv, fegetenv)
versioned_symbol (libm, BP_SYM (__fegetenv), BP_SYM (fegetenv), PEMU_LIBC_2_2);

stub_warning (fegetenv)
#include <stub-tag.h>
