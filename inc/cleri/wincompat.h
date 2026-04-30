/*
 * wincompat.h - Windows/MSVC compatibility definitions
 */
#ifndef CLERI_WINCOMPAT_H_
#define CLERI_WINCOMPAT_H_

/* MSVC compatibility definitions */
#ifdef _MSC_VER
#define __attribute__(x)
#define strncasecmp _strnicmp
#endif

#endif /* CLERI_WINCOMPAT_H_ */
