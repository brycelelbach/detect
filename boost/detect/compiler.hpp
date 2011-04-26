////////////////////////////////////////////////////////////////////////////////
//  Copyright (c) 2001 - 2003 John Maddock
//  Copyright (c) 2003        Martin Wille
//  Copyright (c) 2003        Guillaume Melquiond
//  Copyright (c) 2011        Bryce Lelbach
//
//  Most information based on the data collected by predef.sourceforge.net
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file BOOST_LICENSE_1_0.rst or copy at http://www.boost.org/LICENSE_1_0.txt)
////////////////////////////////////////////////////////////////////////////////

#if !defined(BOOST_DETECT_2AE15EB8_A1DE_42B7_BA5E_14222A1CEF2F)
#define BOOST_DETECT_2AE15EB8_A1DE_42B7_BA5E_14222A1CEF2F

#include <boost/detect/kernel.hpp>

// NVIDIA CUDA C++ (nvidia)
#if defined(__CUDACC__)
  #define BOOST_DETECT_COMPILER "nvidia"
  #define BOOST_DETECT_NVIDIA_COMPILER

// Comeau C++ (comeau)
#elif defined(__COMO__)
  #define BOOST_DETECT_COMPILER "comeau"
  #define BOOST_DETECT_COMEAU_COMPILER

// IAR C/C++ (iar)
#elif defined(__IAR_SYSTEMS_ICC__)
  #define BOOST_DETECT_COMPILER "iar"
  #define BOOST_DETECT_IAR_COMPILER

// PathScale EKOPath (pathscale) 
#elif defined(__PATHSCALE__)  \
   || defined(__PATHCC__)
  #define BOOST_DETECT_COMPILER "pathscale"
  #define BOOST_DETECT_PATHSCALE_COMPILER

// Clang/LLVM (clang) 
#elif defined(__clang__)
  #define BOOST_DETECT_COMPILER "clang"
  #define BOOST_DETECT_CLANG_COMPILER

// Digital Mars C++ (digitalmars)
#elif defined(__DMC__)  \
   || defined(__SC__)   \
   || defined(__ZTC__)  \
   || defined(__DMC__)
  #define BOOST_DETECT_COMPILER "digitalmars"
  #define BOOST_DETECT_DIGITALMARS_COMPILER

// Dignus System/C and System/C++ (dignus)
#elif defined(__SYSC__)
  #define BOOST_DETECT_COMPILER "dignus"
  #define BOOST_DETECT_DIGNUS_COMPILER

// Intel C++ (intel)
#elif defined(__INTEL_COMPILER) \
   || defined(__ICL)            \
   || defined(__ICC)            \
   || defined(__ECC)
  #define BOOST_DETECT_COMPILER "intel"
  #define BOOST_DETECT_INTEL_COMPILER

// Wind River C++ (windriver)
#elif defined(__DCC__)
  #define BOOST_DETECT_COMPILER "windriver"
  #define BOOST_DETECT_WINDRIVER_COMPILER

// Local C Compiler (lcc) 
#elif defined(__LCC__)
  #define BOOST_DETECT_COMPILER "lcc"
  #define BOOST_DETECT_LCC_COMPILER

// Keil CARM, C166 and C51 (keil) 
#elif defined(__CA__)   \
   || defined(__KEIL__) \
   || defined(__C166__) \
   || defined(__C51__)  \
   || defined(__CX51__)
  #define BOOST_DETECT_COMPILER "keil"
  #define BOOST_DETECT_KEIL_COMPILER

// MetaWare High C/C++ (metaware) 
#elif defined(__metaware__)
  #define BOOST_DETECT_COMPILER "metaware"
  #define BOOST_DETECT_METAWARE_COMPILER

// LLVM/GCC (llvm) 
#elif defined(__llvm__)
  #define BOOST_DETECT_COMPILER "llvm"
  #define BOOST_DETECT_LLVM_COMPILER

// mingw-w64 (mingw-w64) 
#elif defined(__MING64__)
  #define BOOST_DETECT_COMPILER "mingw-w64"
  #define BOOST_DETECT_MINGW64_COMPILER

// MinGW (mingw) 
#elif defined(__MINGW32__)
  #define BOOST_DETECT_COMPILER "mingw"
  #define BOOST_DETECT_MINGW_COMPILER

// DOS port of GNU GCC (djgpp) 
#elif defined(__DJGPP__)  \
   || defined(__GO32__)
  #define BOOST_DETECT_COMPILER "djgpp"
  #define BOOST_DETECT_DJGPP_COMPILER

// Cygwin (cygwin)
#elif defined(__CYGWIN__)
  #define BOOST_DETECT_COMPILER "cygwin"
  #define BOOST_DETECT_CYGWIN_COMPILER

// Kai C++ (kai)
#elif defined(__KCC)
  #define BOOST_DETECT_COMPILER "kai"
  #define BOOST_DETECT_KAI_COMPILER

// Cray C (cray)
#elif defined(_CRAYC)
  #define BOOST_DETECT_COMPILER "cray"
  #define BOOST_DETECT_CRAY_COMPILER

// Small Device C Compiler (sdcc)
#elif defined(SDCC)
  #define BOOST_DETECT_COMPILER "sdcc"
  #define BOOST_DETECT_SDCC_COMPILER

// SAS/C (sas)
#elif defined(SASC)     \
   || defined(__SASC)   \
   || defined(__SASC__)
  #define BOOST_DETECT_COMPILER "sas"
  #define BOOST_DETECT_SAS_COMPILER

// Compaq C++ (compaq)
#elif defined(__DECC)   \
   || defined(__DECXX)  \
   || defined(__VAXC)   \
   || defined(VAXC)
  #define BOOST_DETECT_COMPILER "compaq"
  #define BOOST_DETECT_COMPAQ_COMPILER

// Greenhills C++ (greenhills)
#elif defined(__ghs)
  #define BOOST_DETECT_COMPILER "greenhills"
  #define BOOST_DETECT_GREENHILLS_COMPILER

// CodeGear C++Builder (codegear)
#elif defined(__CODEGEARC__)
  #define BOOST_DETECT_COMPILER "codegear"
  #define BOOST_DETECT_CODEGEAR_COMPILER

// Borland C++ (borland)
#elif defined(__BORLANDC__) \
   || defined(__TURBOC__) 
  #define BOOST_DETECT_COMPILER "borland"
  #define BOOST_DETECT_BORLAND_COMPILER

// Metrowerks CodeWarrior (metrowerks)
#elif defined(__MWERKS__)
  #define BOOST_DETECT_COMPILER "metrowerks"
  #define BOOST_DETECT_METROWERKS_COMPILER

// Pacific C (pacific) 
#elif defined(__PACIFIC__)
  #define BOOST_DETECT_COMPILER "pacific"
  #define BOOST_DETECT_PACIFIC_COMPILER

// Pelles C (pelles) 
#elif defined(__POCC__)
  #define BOOST_DETECT_COMPILER "pelles"
  #define BOOST_DETECT_PELLES_COMPILER

// Palm C/C++ (palm) 
#elif defined(_PACC_VER)
  #define BOOST_DETECT_COMPILER "palm"
  #define BOOST_DETECT_PALM_COMPILER

// Norcroft C (norcroft) 
#elif defined(__CC_NORCROFT)
  #define BOOST_DETECT_COMPILER "norcroft"
  #define BOOST_DETECT_NORCROFT_COMPILER

// Renesas and Hitachi C/C++ (renesas) 
#elif defined(__RENESAS__)  \
   || defined(__HITACHI__)
  #define BOOST_DETECT_COMPILER "renesas"
  #define BOOST_DETECT_RENESAS_COMPILER

// Microtec C/C++ (microtec) 
#elif defined(_MRI)
  #define BOOST_DETECT_COMPILER "microtec"
  #define BOOST_DETECT_MICROTEC_COMPILER

// ImageCraft C (imagecraft) 
#elif defined(__IMAGECRAFT__)
  #define BOOST_DETECT_COMPILER "imagecraft"
  #define BOOST_DETECT_IMAGECRAFT_COMPILER

// Tiny C (tinyc)
#elif defined(__TINYC__)
  #define BOOST_DETECT_COMPILER "tinyc"
  #define BOOST_DETECT_TINYC_COMPILER

// Watcom C++ and Open Watcom C++ (watcom)
#elif defined(__WATCOMC__)
  #define BOOST_DETECT_COMPILER "watcom"
  #define BOOST_DETECT_WATCOM_COMPILER

// Ultimate C/C++ (ultimate)
#elif defined(_UCC)
  #define BOOST_DETECT_COMPILER "ultimate"
  #define BOOST_DETECT_ULTIMATE_COMPILER

// TenDRA C/C++ (dera)
#elif defined(__TenDRA__)
  #define BOOST_DETECT_COMPILER "dera"
  #define BOOST_DETECT_DERA_COMPILER

// Sun Workshop Compiler C++ or Solaris Studio (sun)
#elif defined(__SUNPRO_C)   \
   || defined(__SUNPRO_CC)
  #define BOOST_DETECT_COMPILER "sun"
  #define BOOST_DETECT_SUN_COMPILER

// HP aCC and HP ANSI C (hp)
#elif defined(__HP_aCC) \
   || defined(__HP_cc)
  #define BOOST_DETECT_COMPILER "hp"
  #define BOOST_DETECT_HP_COMPILER

// MPW MrCpp or SCpp (mpw)
#elif defined(__MRC__)    \
   || defined(__SC__)     \
   || defined(MPW_C)      \
   || defined(MPW_CPLUS)
  #define BOOST_DETECT_COMPILER "mpw"
  #define BOOST_DETECT_MPW_COMPILER

// IBM Visual Age, XL C/C++ and z/OS C/C++ (ibm)
#elif defined(__IBMCPP__) \
   || defined(__IBMC__)   \
   || defined(__xlc__)    \
   || defined(__xlC__) 
  #define BOOST_DETECT_COMPILER "ibm"
  #define BOOST_DETECT_IBM_COMPILER

// RealView C (realview)
#elif defined(__CC_ARM)
  #define BOOST_DETECT_COMPILER "realview"
  #define BOOST_DETECT_REALVIEW_COMPILER

// Portland Group Inc. (pgi)
#elif defined(__PGI)
  #define BOOST_DETECT_COMPILER "pgi"
  #define BOOST_DETECT_PGI_COMPILER

// SGI MIPSpro C++ (sgi)
#elif defined(__sgi)  \
   || defined(sgi)
  #define BOOST_DETECT_COMPILER "sgi"
  #define BOOST_DETECT_SGI_COMPILER

// EDG C++ Frontend (edg)
#elif defined(__EDG__)
  #define BOOST_DETECT_COMPILER "edg"
  #define BOOST_DETECT_EDG_COMPILER

// GNU GCC (gnu)
#elif defined(__GNUC__)
  #define BOOST_DETECT_COMPILER "gnu"
  #define BOOST_DETECT_GNU_COMPILER

// Microsoft Visual C++ (microsoft)
#elif defined(_MSC_VER)
  #define BOOST_DETECT_COMPILER "microsoft"
  #define BOOST_DETECT_MICROSOFT_COMPILER

#else
  #define BOOST_DETECT_COMPILER "unknown"
  #define BOOST_DETECT_UNKNOWN_COMPILER

#endif

#if defined(__GNUC__)                        \
 || defined(BOOST_DETECT_PATHSCALE_COMPILER) \
 || defined(BOOST_DETECT_CLANG_COMPILER)     \
 || (  defined(BOOST_DETECT_INTEL_COMPILER)  \
    && !defined(BOOST_DETECT_WINDOWS_KERNEL))
  #define BOOST_DETECT_GNULIKE_COMPILER
#endif

#endif // BOOST_DETECT_2AE15EB8_A1DE_42B7_BA5E_14222A1CEF2F

