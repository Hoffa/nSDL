/*
    SDL - Simple DirectMedia Layer
    Copyright (C) 1997-2012 Sam Lantinga

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

    Sam Lantinga
    slouken@libsdl.org
*/

#ifndef _SDL_config_tinspire_h
#define _SDL_config_tinspire_h

/* This is a set of defines to configure the SDL features */

/* General platform specific identifiers */
#include "SDL_platform.h"

#define SDL_HAS_64BIT_TYPE	1

/* Endianness */
#define SDL_BYTEORDER	1234

/* Useful headers */
#define HAVE_STDIO_H	1
#define HAVE_STDLIB_H	1
#define HAVE_STDARG_H	1
#define HAVE_STRING_H	1
#define HAVE_CTYPE_H	1

/* C library functions */
#define HAVE_MALLOC	1
#define HAVE_CALLOC	1
#define HAVE_REALLOC	1
#define HAVE_FREE	1
#define HAVE_MEMSET	1
#define HAVE_MEMCPY	1
#define HAVE_MEMMOVE	1
#define HAVE_MEMCMP	1
#define HAVE_STRLEN	1
#define HAVE_STRCHR	1
#define HAVE_STRSTR	1
#define HAVE_STRTOL	1
#define HAVE_STRTOUL	1
#define HAVE_STRTOD	1
#define HAVE_ATOI	1
#define HAVE_ATOF	1
#define HAVE_STRCMP	1
#define HAVE_STRNCMP	1

/* Allow disabling of core subsystems */
#define SDL_AUDIO_DISABLED	1
#define SDL_CDROM_DISABLED	1
#define SDL_CPUINFO_DISABLED	1
#define SDL_LOADSO_DISABLED	1
#define SDL_THREADS_DISABLED	1

/* I'll only concentrate on the video driver at the moment */
#define SDL_EVENTS_DISABLED 1
#define SDL_JOYSTICK_DISABLED   1
#define SDL_TIMERS_DISABLED 1
#define SDL_FILE_DISABLED   1

/* Enable various input drivers */
/* #define SDL_JOYSTICK_TINSPIRE	1 */

/* Enable various timer systems */
/* #define SDL_TIMER_TINSPIRE	1 */

/* Enable various video drivers */
#define SDL_VIDEO_DRIVER_TINSPIRE	1

/* Enable assembly routines */
/* #define SDL_ASSEMBLY_ROUTINES	1 */

#endif /* _SDL_config_tinspire_h */