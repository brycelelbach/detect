////////////////////////////////////////////////////////////////////////////////
//  Copyright (c) 2011 Bryce Lelbach
//
//  Most information based on the data collected by predef.sourceforge.net
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file BOOST_LICENSE_1_0.rst or copy at http://www.boost.org/LICENSE_1_0.txt)
////////////////////////////////////////////////////////////////////////////////

#if !defined(BOOST_DETECT_A454A7E1_8A13_4B47_A7E9_69606F1F2B93)
#define BOOST_DETECT_A454A7E1_8A13_4B47_A7E9_69606F1F2B93

// Alpha (alpha)
#if defined(__alpha__) || defined(__alpha) || defined(_M_ALPHA)
  #define BOOST_DETECT_ARCHITECTURE "alpha"
  #define BOOST_DETECT_ALPHA_ARCHITECTURE

// x86_64 (x86-64)
#elif defined(__amd64__) || defined(__amd64)    \
   || defined(__x86_64__) || defined(__x86_64)  \
   || defined(_M_X64)
  #define BOOST_DETECT_ARCHITECTURE "x86-64"
  #define BOOST_DETECT_X86_64_ARCHITECTURE

// ARM (arm)
#elif defined(__arm__) || defined(__thumb__) || defined(_ARM) \
   || defined(__TARGET_ARCH_ARM) || defined(__TARGET_ARCH_THUMB)
  #define BOOST_DETECT_ARCHITECTURE "arm"
  #define BOOST_DETECT_ARM_ARCHITECTURE

// ARM v6+ (arm-v6)
#elif defined(__ARM_ARCH_6__) || defined(__ARM_ARCH_6J__)   \
   || defined(__ARM_ARCH_6Z__) || defined(__ARM_ARCH_6ZK__) \
   || defined(__ARM_ARCH_6K__) || defined(__ARM_ARCH_7A__)
  #define BOOST_DETECT_ARCHITECTURE "arm-v6"
  #define BOOST_DETECT_ARM_V6_ARCHITECTURE

// HP/PA RISC (hppa)
#elif defined(__hppa__) || defined(__hppa)
  #define BOOST_DETECT_ARCHITECTURE "hppa"
  #define BOOST_DETECT_HPPA_ARCHITECTURE

// x86 (x86-32)
#elif defined(i386) || defined(__i386__) || defined(__i486__) \
   || defined(__i586__) || defined(__i686__) || defined(__i386) \
   || defined(_M_IX86) || defined(__X86__) || defined(_X86_) \
   || defined(__THW_INTEL__) || defined(__I86__) || defined(__INTEL__)
  #define BOOST_DETECT_ARCHITECTURE "x86-32"
  #define BOOST_DETECT_X86_32_ARCHITECTURE

// Intel 64 (ia64)
#elif defined(__ia64__) || defined(_IA64) || defined(__IA64__) \
   || defined(__ia64) || defined(_M_IA64)
  #define BOOST_DETECT_ARCHITECTURE "ia64"
  #define BOOST_DETECT_IA64_ARCHITECTURE

// Motorola 68k (m68k)
#elif defined(__m68k__) || defined(M68000)
  #define BOOST_DETECT_ARCHITECTURE "m68k"
  #define BOOST_DETECT_M68K_ARCHITECTURE

// MIPS (mips)
#elif defined(__mips__) || defined(__mips) || defined(__MIPS__)
  #define BOOST_DETECT_ARCHITECTURE "mips"
  #define BOOST_DETECT_MIPS_ARCHITECTURE

// PowerPC (ppc)
#elif defined(__powerpc) || defined(__powerpc__) || defined(__ppc__) \
   || defined(__POWERPC__) || defined(_M_PPC) || defined(_ARCH_PPC)
  #define BOOST_DETECT_ARCHITECTURE "ppc"
  #define BOOST_DETECT_PPC_ARCHITECTURE

// RS/6000 (power)
#elif defined(__THW_RS6000) || defined(_IBMR2) || defined(_POWER) \
   || defined(_ARCH_PWR) || defined(_ARCH_PWR2)
  #define BOOST_DETECT_ARCHITECTURE "power"
  #define BOOST_DETECT_POWER_ARCHITECTURE

// SPARC (sparc)
#elif defined(__sparc__) || defined(__sparc)
  #define BOOST_DETECT_ARCHITECTURE "sparc"
  #define BOOST_DETECT_SPARC_ARCHITECTURE

// SuperH (superh)
#elif defined(__sh__)
  #define BOOST_DETECT_ARCHITECTURE "superh"
  #define BOOST_DETECT_SUPERH_ARCHITECTURE

// System/370 (s370)
#elif defined(__370__) || defined(__THW_370__) 
  #define BOOST_DETECT_ARCHITECTURE "s370"
  #define BOOST_DETECT_S370_ARCHITECTURE

// System/390 (s390)
#elif defined(__s390__) || defined(__s390x__) 
  #define BOOST_DETECT_ARCHITECTURE "s390"
  #define BOOST_DETECT_S390_ARCHITECTURE

// z/Architecture (zarch)
#elif defined(__SYSC_ZARCH__)
  #define BOOST_DETECT_ARCHITECTURE "zarch"
  #define BOOST_DETECT_ZARCH_ARCHITECTURE

#else
  #define BOOST_DETECT_ARCHITECTURE "unknown"
  #define BOOST_DETECT_UNKNOWN_ARCHITECTURE

#endif

#endif // BOOST_DETECT_A454A7E1_8A13_4B47_A7E9_69606F1F2B93

