/*
 * wincompat.h - Windows/MSVC compatibility definitions
 */
#ifndef CLERI_WINCOMPAT_H_
#define CLERI_WINCOMPAT_H_

/* MSVC doesn't support __attribute__, make it a no-op */
#ifdef _MSC_VER
#define __attribute__(x)
#endif

#endif /* CLERI_WINCOMPAT_H_ */
