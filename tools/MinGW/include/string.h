/*
 * string.h
 *
 * Definitions for memory and string functions.
 *
 * This file is part of the Mingw32 package.
 *
 * Contributors:
 *  Created by Colin Peters <colin@bird.fu.is.saga-u.ac.jp>
 *
 *  THIS SOFTWARE IS NOT COPYRIGHTED
 *
 *  This source code is offered for use in the public domain. You may
 *  use, modify or distribute it freely.
 *
 *  This code is distributed in the hope that it will be useful but
 *  WITHOUT ANY WARRANTY. ALL WARRANTIES, EXPRESS OR IMPLIED ARE HEREBY
 *  DISCLAIMED. This includes but is not limited to warranties of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * $Revision: 1.6 $
 * $Author: earnie $
 * $Date: 2003/02/21 21:19:52 $
 *
 */

#ifndef _STRING_H_
#define	_STRING_H_

/* All the headers include this file. */
#include <_mingw.h>

/*
 * Define size_t, wchar_t and NULL
 */
#define __need_size_t
#define __need_wchar_t
#define	__need_NULL
#ifndef RC_INVOKED
#include <stddef.h>
#endif	/* Not RC_INVOKED */

#ifndef RC_INVOKED

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Prototypes of the ANSI Standard C library string functions.
 */
_CRTIMP void* __cdecl	memchr (const void*, int, size_t);
_CRTIMP int __cdecl 	memcmp (const void*, const void*, size_t);
_CRTIMP void* __cdecl 	memcpy (void*, const void*, size_t);
_CRTIMP void* __cdecl	memmove (void*, const void*, size_t);
_CRTIMP void* __cdecl	memset (void*, int, size_t);
_CRTIMP char* __cdecl	strcat (char*, const char*);
_CRTIMP char* __cdecl	strchr (const char*, int);
_CRTIMP int __cdecl	strcmp (const char*, const char*);
_CRTIMP int __cdecl	strcoll (const char*, const char*);	/* Compare using locale */
_CRTIMP char* __cdecl	strcpy (char*, const char*);
_CRTIMP size_t __cdecl	strcspn (const char*, const char*);
_CRTIMP char* __cdecl	strerror (int); /* NOTE: NOT an old name wrapper. */

_CRTIMP size_t __cdecl	strlen (const char*);
_CRTIMP char* __cdecl	strncat (char*, const char*, size_t);
_CRTIMP int __cdecl	strncmp (const char*, const char*, size_t);
_CRTIMP char* __cdecl	strncpy (char*, const char*, size_t);
_CRTIMP char* __cdecl	strpbrk (const char*, const char*);
_CRTIMP char* __cdecl	strrchr (const char*, int);
_CRTIMP size_t __cdecl	strspn (const char*, const char*);
_CRTIMP char* __cdecl	strstr (const char*, const char*);
_CRTIMP char* __cdecl	strtok (char*, const char*);
_CRTIMP size_t __cdecl	strxfrm (char*, const char*, size_t);

#ifndef __STRICT_ANSI__
/*
 * Extra non-ANSI functions provided by the CRTDLL library
 */
_CRTIMP char* __cdecl	_strerror (const char *);
_CRTIMP void* __cdecl	_memccpy (void*, const void*, int, size_t);
_CRTIMP int __cdecl 	_memicmp (const void*, const void*, size_t);
_CRTIMP char* __cdecl 	_strdup (const char*);
_CRTIMP int __cdecl	_strcmpi (const char*, const char*);
_CRTIMP int __cdecl	_stricmp (const char*, const char*);
_CRTIMP int __cdecl	_stricoll (const char*, const char*);
_CRTIMP char* __cdecl	_strlwr (char*);
_CRTIMP int __cdecl	_strnicmp (const char*, const char*, size_t);
_CRTIMP char* __cdecl	_strnset (char*, int, size_t);
_CRTIMP char* __cdecl	_strrev (char*);
_CRTIMP char* __cdecl	_strset (char*, int);
_CRTIMP char* __cdecl	_strupr (char*);
_CRTIMP void __cdecl	_swab (const char*, char*, size_t);

#ifdef __MSVCRT__
_CRTIMP int __cdecl  _strncoll(const char*, const char*, size_t);
_CRTIMP int __cdecl  _strnicoll(const char*, const char*, size_t);
#endif

#endif	/* Not __STRICT_ANSI__ */

/*
 * Unicode versions of the standard calls.
 */
_CRTIMP wchar_t* __cdecl wcscat (wchar_t*, const wchar_t*);
_CRTIMP wchar_t* __cdecl wcschr (const wchar_t*, wchar_t);
_CRTIMP int __cdecl	wcscmp (const wchar_t*, const wchar_t*);
_CRTIMP int __cdecl	wcscoll (const wchar_t*, const wchar_t*);
_CRTIMP wchar_t* __cdecl wcscpy (wchar_t*, const wchar_t*);
_CRTIMP size_t __cdecl	wcscspn (const wchar_t*, const wchar_t*);
/* Note: No wcserror in CRTDLL. */
_CRTIMP size_t __cdecl	wcslen (const wchar_t*);
_CRTIMP wchar_t* __cdecl wcsncat (wchar_t*, const wchar_t*, size_t);
_CRTIMP int __cdecl	wcsncmp(const wchar_t*, const wchar_t*, size_t);
_CRTIMP wchar_t* __cdecl wcsncpy(wchar_t*, const wchar_t*, size_t);
_CRTIMP wchar_t* __cdecl wcspbrk(const wchar_t*, const wchar_t*);
_CRTIMP wchar_t* __cdecl wcsrchr(const wchar_t*, wchar_t);
_CRTIMP size_t __cdecl	wcsspn(const wchar_t*, const wchar_t*);
_CRTIMP wchar_t* __cdecl wcsstr(const wchar_t*, const wchar_t*);
_CRTIMP wchar_t* __cdecl wcstok(wchar_t*, const wchar_t*);
_CRTIMP size_t __cdecl	wcsxfrm(wchar_t*, const wchar_t*, size_t);

#ifndef	__STRICT_ANSI__
/*
 * Unicode versions of non-ANSI functions provided by CRTDLL.
 */

/* NOTE: _wcscmpi not provided by CRTDLL, this define is for portability */
#define		_wcscmpi	_wcsicmp

_CRTIMP wchar_t* __cdecl _wcsdup (const wchar_t*);
_CRTIMP int __cdecl	_wcsicmp (const wchar_t*, const wchar_t*);
_CRTIMP int __cdecl	_wcsicoll (const wchar_t*, const wchar_t*);
_CRTIMP wchar_t* __cdecl _wcslwr (wchar_t*);
_CRTIMP int __cdecl	_wcsnicmp (const wchar_t*, const wchar_t*, size_t);
_CRTIMP wchar_t* __cdecl _wcsnset (wchar_t*, wchar_t, size_t);
_CRTIMP wchar_t* __cdecl _wcsrev (wchar_t*);
_CRTIMP wchar_t* __cdecl _wcsset (wchar_t*, wchar_t);
_CRTIMP wchar_t* __cdecl _wcsupr (wchar_t*);

#ifdef __MSVCRT__
_CRTIMP int __cdecl  _wcsncoll(const wchar_t*, const wchar_t*, size_t);
_CRTIMP int __cdecl  _wcsnicoll(const wchar_t*, const wchar_t*, size_t);
#endif


#endif	/* Not __STRICT_ANSI__ */


#ifndef	__STRICT_ANSI__
#ifndef	_NO_OLDNAMES

/*
 * Non-underscored versions of non-ANSI functions. They live in liboldnames.a
 * and provide a little extra portability. Also a few extra UNIX-isms like
 * strcasecmp.
 */

_CRTIMP void* __cdecl	memccpy (void*, const void*, int, size_t);
_CRTIMP int __cdecl	memicmp (const void*, const void*, size_t);
_CRTIMP char* __cdecl	strdup (const char*);
_CRTIMP int __cdecl	strcmpi (const char*, const char*);
_CRTIMP int __cdecl	stricmp (const char*, const char*);
__CRT_INLINE int __cdecl
strcasecmp (const char * __sz1, const char * __sz2)
  {return _stricmp (__sz1, __sz2);}
_CRTIMP int __cdecl	stricoll (const char*, const char*);
_CRTIMP char* __cdecl	strlwr (char*);
_CRTIMP int __cdecl	strnicmp (const char*, const char*, size_t);
__CRT_INLINE int __cdecl
strncasecmp (const char * __sz1, const char * __sz2, size_t __sizeMaxCompare)
  {return _strnicmp (__sz1, __sz2, __sizeMaxCompare);}
_CRTIMP char* __cdecl	strnset (char*, int, size_t);
_CRTIMP char* __cdecl	strrev (char*);
_CRTIMP char* __cdecl	strset (char*, int);
_CRTIMP char* __cdecl	strupr (char*);
#ifndef _UWIN
_CRTIMP void __cdecl	swab (const char*, char*, size_t);
#endif /* _UWIN */

/* NOTE: There is no _wcscmpi, but this is for compatibility. */
__CRT_INLINE int __cdecl
wcscmpi (const wchar_t * __ws1, const wchar_t * __ws2)
  {return _wcsicmp (__ws1, __ws2);}
_CRTIMP wchar_t* __cdecl wcsdup (wchar_t*);
_CRTIMP int __cdecl	wcsicmp (const wchar_t*, const wchar_t*);
_CRTIMP int __cdecl	wcsicoll (const wchar_t*, const wchar_t*);
_CRTIMP wchar_t* __cdecl wcslwr (wchar_t*);
_CRTIMP int __cdecl	wcsnicmp (const wchar_t*, const wchar_t*, size_t);
_CRTIMP wchar_t* __cdecl wcsnset (wchar_t*, wchar_t, size_t);
_CRTIMP wchar_t* __cdecl wcsrev (wchar_t*);
_CRTIMP wchar_t* __cdecl wcsset (wchar_t*, wchar_t);
_CRTIMP wchar_t* __cdecl wcsupr (wchar_t*);

#endif	/* Not _NO_OLDNAMES */
#endif	/* Not strict ANSI */


#ifdef __cplusplus
}
#endif

#endif	/* Not RC_INVOKED */

#endif	/* Not _STRING_H_ */

