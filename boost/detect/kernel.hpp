////////////////////////////////////////////////////////////////////////////////
//  Copyright (c) 2011        Bryce Lelbach
//
//  Most information based on the data collected by predef.sourceforge.net
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file BOOST_LICENSE_1_0.rst or copy at http://www.boost.org/LICENSE_1_0.txt)
////////////////////////////////////////////////////////////////////////////////

#if !defined(BOOST_DETECT_671423C3_49F7_42CB_8284_F09B701A6B85)
#define BOOST_DETECT_671423C3_49F7_42CB_8284_F09B701A6B85

// AIX UNIX (aix)
#if defined(_AIX)         \
 || defined(__TOS_AIX__)
  #define BOOST_DETECT_KERNEL "aix"
  #define BOOST_DETECT_AIX_KERNEL

// AmigaOS (amiga)
#elif defined(AMIGA)         \
   || defined(__amigaos__)
  #define BOOST_DETECT_KERNEL "amiga"
  #define BOOST_DETECT_AMIGA_KERNEL

// BeOS (beos)
#elif defined(__BEOS__)
  #define BOOST_DETECT_KERNEL "beos"
  #define BOOST_DETECT_BEOS_KERNEL

// Cray UniCOS (unicos)
#elif defined(_UNICOS)
  #define BOOST_DETECT_KERNEL "unicos"
  #define BOOST_DETECT_UNICOS_KERNEL

// DG/UX (dgux)
#elif defined(DGUX)     \
   || defined(__DGUX__) \
   || defined(__dgux__)
  #define BOOST_DETECT_KERNEL "dgux"
  #define BOOST_DETECT_DGUX_KERNEL

// BSD/OS (bsdi)
#elif defined(__bsdi__)
  #define BOOST_DETECT_KERNEL "bsdi"
  #define BOOST_DETECT_BSDI_KERNEL

// DragonFly BSD (dragonflybsd)
#elif defined(__DragonFly__)
  #define BOOST_DETECT_KERNEL "dragonflybsd"
  #define BOOST_DETECT_DRAGONFLYBSD_KERNEL

// FreeBSD (freebsd)
#elif defined(__FreeBSD__)
  #define BOOST_DETECT_KERNEL "freebsd"
  #define BOOST_DETECT_FREEBSD_KERNEL

// NetBSD (netbsd)
#elif defined(__NetBSD__)
  #define BOOST_DETECT_KERNEL "netbsd"
  #define BOOST_DETECT_NETBSD_KERNEL

// OpenBSD (openbsd)
#elif defined(__OpenBSD__)
  #define BOOST_DETECT_KERNEL "openbsd"
  #define BOOST_DETECT_OPENBSD_KERNEL

// DYNIX/ptx (dynix)
#elif defined(_SEQUENT_)
  #define BOOST_DETECT_KERNEL "dynix"
  #define BOOST_DETECT_DYNIX_KERNEL

// eCos (ecos)
#elif defined(__ECOS)
  #define BOOST_DETECT_KERNEL "ecos"
  #define BOOST_DETECT_ECOS_KERNEL

// HI-UX/MPP (hiuxmpp)
#elif defined(__hiuxmpp)
  #define BOOST_DETECT_KERNEL "hpiuxmpp"
  #define BOOST_DETECT_HPIUXMPP_KERNEL

// HP-UX (hpux)
#elif defined(_hpux)  \
   || defined(hpux)   \
   || defined(__hpux)
  #define BOOST_DETECT_KERNEL "hpux"
  #define BOOST_DETECT_HPUX_KERNEL

// INTEGRITY (integrity)
#elif defined(__INTEGRITY)
  #define BOOST_DETECT_KERNEL "integrity"
  #define BOOST_DETECT_INTEGRITY_KERNEL

// IRIX (irix)
#elif defined(sgi)    \
   || defined(__sgi)
  #define BOOST_DETECT_KERNEL "irix"
  #define BOOST_DETECT_IRIX_KERNEL

// Linux (linux) :)
#elif defined(linux)    \
   || defined(__linux)
  #define BOOST_DETECT_KERNEL "linux"
  #define BOOST_DETECT_LINUX_KERNEL

// LynxOS (lynxos)
#elif defined(__Lynx__)
  #define BOOST_DETECT_KERNEL "lynxos"
  #define BOOST_DETECT_LYNXOS_KERNEL

// MacOS (macos)
#elif defined(macintosh)    \
   || defined(Macintosh)
  #define BOOST_DETECT_KERNEL "macos"
  #define BOOST_DETECT_MACOS_KERNEL

// Apple Darwin (darwin)
#elif defined(__APPLE__)  \
   && defined(__MACH__)
  #define BOOST_DETECT_KERNEL "darwin"
  #define BOOST_DETECT_DARWIN_KERNEL

// Microware OS-9 (microware)
#elif defined(__OS9000)  \
   || defined(__OSK)
  #define BOOST_DETECT_KERNEL "microware"
  #define BOOST_DETECT_MICROWARE_KERNEL

// MINIX (minix)
#elif defined(__minix)
  #define BOOST_DETECT_KERNEL "minix"
  #define BOOST_DETECT_MINIX_KERNEL

// MPE/iX (mpeix)
#elif defined(mpeix)   \
   || defined(__mpexl)
  #define BOOST_DETECT_KERNEL "mpeix"
  #define BOOST_DETECT_MPEIX_KERNEL

/// MSDOS (msdos)
#elif defined(MSDOS)      \
   || defined(__MSDOS__)  \
   || defined(_MSDOS)     \
   || defined(__DOS__)
  #define BOOST_DETECT_KERNEL "msdos"
  #define BOOST_DETECT_MSDOS_KERNEL

// MS Windows (windows)
#elif defined(_WIN32)       \
   || defined(_WIN64)       \
   || defined(__WIN32__)    \
   || defined(__TOS_WIN__)  \
   || defined(__WINDOWS__)
  #define BOOST_DETECT_KERNEL "windows"
  #define BOOST_DETECT_WINDOWS_KERNEL

// NonStop (nonstop)
#elif defined(__TANDEM)
  #define BOOST_DETECT_KERNEL "nonstop"
  #define BOOST_DETECT_NONSTOP_KERNEL

// Nucleus OS (nucleusos)
#elif defined(__nucleus__)
  #define BOOST_DETECT_KERNEL "nucleusos"
  #define BOOST_DETECT_NUCLEUSOS_KERNEL

// OS/2 (os2)
#elif defined(OS2)          \
   || defined(_OS2)         \
   || defined(__OS2__)      \
   || defined(__TOS_OS2__)
  #define BOOST_DETECT_KERNEL "os2"
  #define BOOST_DETECT_OS2_KERNEL

// QNX (qnx)
#elif defined(__QNX__)    \
   || defined(__QNXNTO__)
  #define BOOST_DETECT_KERNEL "qnx"
  #define BOOST_DETECT_QNX_KERNEL

// Solaris (solaris)
#elif defined(sun)   \
   || defined(__sun) 
  #define BOOST_DETECT_KERNEL "solaris"
  #define BOOST_DETECT_SOLARIS_KERNEL

// Symbian OS (symbianos)
#elif defined(__SYMBIAN32__)
  #define BOOST_DETECT_KERNEL "symbianos"
  #define BOOST_DETECT_SYMBIANOS_KERNEL

// Tru64 OSF/1 (osf)
#elif defined(__osf__)  \
   || defined(__osf)
  #define BOOST_DETECT_KERNEL "osf"
  #define BOOST_DETECT_OSF_KERNEL

// Ultrix (ultrix)
#elif defined(ultrix)     \
   || defined(__ultrix)   \
   || defined(__ultrix__) \
   || (defined(unix) && defined(vax))
  #define BOOST_DETECT_KERNEL "ultrix"
  #define BOOST_DETECT_ULTRIX_KERNEL

// UnixWare (unixware)
#elif defined(sco)        \
   || defined(_UNIXWARE7)
  #define BOOST_DETECT_KERNEL "unixware"
  #define BOOST_DETECT_UNIXWARE_KERNEL

// UnixWare (unixware)
#elif defined(VMS)    \
   || defined(__VMS)
  #define BOOST_DETECT_KERNEL "vms"
  #define BOOST_DETECT_VMS_KERNEL

// XBox (xbox)
#elif defined(_XBOX)
  #define BOOST_DETECT_KERNEL "xbox"
  #define BOOST_DETECT_XBOX_KERNEL

// z/OS aka OS/390 (zos)
#elif defined(__MVS__)      \
   || defined(__HOS_MVS__)  \
   || defined(__TOS_MVS__)
  #define BOOST_DETECT_KERNEL "zos"
  #define BOOST_DETECT_ZOS_KERNEL

// GNU Hurd (hurd)
#elif defined(__GNU__)
  #define BOOST_DETECT_KERNEL "hurd"
  #define BOOST_DETECT_HURD_KERNEL

#else
  #define BOOST_DETECT_KERNEL "unknown"
  #define BOOST_DETECT_UNKNOWN_KERNEL

#endif

#if defined(BSD)
  #define BOOST_DETECT_BSD
#endif

#if defined(__unix__) || defined(__unix)
  #define BOOST_DETECT_UNIX
#endif

#endif // BOOST_DETECT_671423C3_49F7_42CB_8284_F09B701A6B85

