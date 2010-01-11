/*----------------------------------------------------------------------------
** This file has been automatically generated by configure any changes in it
** will be lost when you run configure again.
** Instead of modifying definitions here, use the --enable/--disable options
** of the configure script! See ./configure --help for details.
*---------------------------------------------------------------------------*/

#ifndef MPLAYER_CONFIG_H
#define MPLAYER_CONFIG_H

/* marf: Match up the mplayer usage with the kernel */
#define CONFIG_ALSA CONFIG_SND

/* Undefine this if you do not want to select mono audio (left or right)
   with a stereo MPEG layer 2/3 audio stream. The command line option
   -stereo has three possible values (0 for stereo, 1 for left-only, 2 for
   right-only), with 0 being the default.
   */
#define CONFIG_FAKE_MONO 1

/* set up max. outburst. use 65536 for ALSA 0.5, for others 16384 is enough */
#define MAX_OUTBURST 65536

/* set up audio OUTBURST. Do not change this! */
#define OUTBURST 512

/* Enable fast OSD/SUB renderer (looks ugly, but uses less CPU power) */
#undef FAST_OSD
#undef FAST_OSD_TABLE

/* Define this to enable MPEG-1/2 image postprocessing in libmpeg2 */
#define MPEG12_POSTPROC 1
#define ATTRIBUTE_ALIGNED_MAX 16



#define CONFIGURATION "--disable-dvdnav --disable-dvdread --disable-dvdread-internal --disable-x11 --disable-xmga --disable-xv --disable-xvmc --disable-xinerama --disable-cddb --disable-cdparanoia --disable-vcd"

#define MPLAYER_DATADIR "/usr/local/share/mplayer"
#define MPLAYER_CONFDIR "/usr/local/etc/mplayer"
#define MPLAYER_LIBDIR "/usr/local/lib"

/* definitions needed by included libraries */
#define HAVE_INTTYPES_H 1
/* libmpeg2 + FFmpeg */

/* libdvdcss */
#define HAVE_ERRNO_H 1
/* libdvdcss + libdvdread */
#define HAVE_LIMITS_H 1
/* libdvdcss + libfaad2 */
#define HAVE_UNISTD_H 1
/* libfaad2 + libdvdread */
#define STDC_HEADERS 1
#define HAVE_MEMCPY 1
/* libfaad2 */
#define HAVE_STRING_H 1
#define HAVE_STRINGS_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_SYS_TYPES_H 1
/* libdvdnav */
#define READ_CACHE_TRACE 0
/* libdvdread */
#define HAVE_DLFCN_H 1



/* system headers */
#define HAVE_ALLOCA_H 1
#define HAVE_ALSA_ASOUNDLIB_H 1
#define HAVE_ALTIVEC_H 0
#define HAVE_MALLOC_H 1
#define HAVE_SYS_MMAN_H 1

#undef HAVE_SOUNDCARD_H
#undef HAVE_SYS_ASOUNDLIB_H
#define HAVE_SYS_SOUNDCARD_H 1
#define HAVE_SYS_SYSINFO_H 1
#undef HAVE_TERMIOS_H
#define HAVE_SYS_TERMIOS_H 1
#define HAVE_WINSOCK2_H 0


/* system functions */
#define HAVE_GETHOSTBYNAME2 1
#define HAVE_GETTIMEOFDAY 1
#define HAVE_GLOB 1
#define HAVE_LANGINFO 1
#define HAVE_LLRINT 1
#define HAVE_LOG2 1
#define HAVE_LRINT 1
#define HAVE_LRINTF 1

#define HAVE_MEMALIGN 1
#define HAVE_NANOSLEEP 1
#define HAVE_POSIX_SELECT 1
#define HAVE_ROUND 1
#define HAVE_ROUNDF 1
#define HAVE_AUDIO_SELECT 1
#define HAVE_SETENV 1
#define HAVE_SHM 1
#define HAVE_STRSEP 1
#define HAVE_SWAB 1


#define HAVE_TERMCAP 1
#define HAVE_TERMIOS 1
#define HAVE_TRUNCF 1
#define HAVE_VSSCANF 1


/* system-specific features */
#define ASMALIGN(ZEROBITS) ".align 1<<" #ZEROBITS "\n\t"
#define HAVE_BUILTIN_EXPECT 1
#define HAVE_LIBDL 1
#define EXTERN_ASM 
#define EXTERN_PREFIX ""
#undef CONFIG_ICONV
#undef HAVE_LIBKSTAT



#define NAMED_ASM_ARGS 1
#undef CONFIG_PRIORITY


#define HAVE_RTC 1
#define CONFIG_UNRAR_EXEC 1


/* configurable options */
#define MSG_CHARSET "UTF-8"
#undef CONFIG_CRASH_DEBUG
#undef MP_DEBUG
#undef CONFIG_DYNAMIC_PLUGINS
#define CONFIG_FASTMEMCPY 1
#undef CONFIG_MENU
#define CONFIG_RUNTIME_CPUDETECT 0
#define CONFIG_SIGHANDLER 1
#define CONFIG_SORTSUB 1
#define CONFIG_STREAM_CACHE 1
#undef PTHREAD_CACHE


/* CPU stuff */
#define __CPU__ 686
#undef WORDS_BIGENDIAN
#define HAVE_BIGENDIAN 0
#define ARCH_X86 1
#define ARCH_X86_32 1
#define ARCH_X86_64 0
#define ARCH_IA64 0
#define ARCH_SPARC 0
#define ARCH_ARM 0
#define ARCH_AVR32 0
#define ARCH_SH4 0
#define ARCH_PPC 0
#define ARCH_PPC64 0
#define ARCH_ALPHA 0
#define ARCH_MIPS 0
#define ARCH_SGI_MIPS 0
#define ARCH_PA_RISC 0
#define ARCH_S390 0
#define ARCH_S390X 0
#define ARCH_VAX 0
#define ARCH_BFIN 0
#define ARCH_XTENSA 0
#define ARCH_GENERIC 0
#define HAVE_ALTIVEC 0
#define HAVE_MMX 1
#define HAVE_MMX2 1
#define HAVE_AMD3DNOW 0
#define HAVE_AMD3DNOWEXT 0
#define HAVE_SSE 1
#define HAVE_SSE2 1
#define HAVE_SSSE3 1
#define HAVE_FAST_CMOV 0
#define HAVE_CMOV 1
#define HAVE_PLD 0
#define HAVE_ARMV5TE 0
#define HAVE_ARMV6 0
#define HAVE_ARMV6T2 0
#define HAVE_ARMVFP 0
#define HAVE_NEON 0
#define HAVE_IWMMXT 0
#define HAVE_MMI 0
#define HAVE_VIS 0
#define HAVE_MVI 0


/* DVD/VCD/CD */
#define DEFAULT_CDROM_DEVICE "/dev/cdrom"
#define DEFAULT_DVD_DEVICE   "/dev/dvd"

#undef DVD_STRUCT_IN_SYS_CDIO_H
#define DVD_STRUCT_IN_LINUX_CDROM_H 1
#undef DVD_STRUCT_IN_DVD_H

/* networking */
#define HAVE_CLOSESOCKET 0
#define HAVE_AF_INET6 1
#define HAVE_INET_ATON 1
#define HAVE_INET_PTON 1
#define HAVE_SOCKLEN_T 1

#undef DVD_STRUCT_IN_SYS_DVDIO_H

#define HAVE_ARPA_INET_H 1
#define HAVE_BSWAP 1
#define CONFIG_BZLIB 0

#define HAVE_DOS_PATHS 0
#define HAVE_FAST_64BIT 0
#define HAVE_FAST_UNALIGNED 1
#define CONFIG_MPEGAUDIO_HP 1
#define CONFIG_MEMALIGN_HACK 0
#define CONFIG_MLIB 0
#define HAVE_MKSTEMP 1
#define HAVE_POSIX_MEMALIGN 1
#define HAVE_PTHREADS 1
#define HAVE_TEN_OPERANDS 1
#define HAVE_THREADS 1

#define HAVE_YASM 1

#define CONFIG_FASTDIV 0
#define CONFIG_FFSERVER 0
#define CONFIG_GPL 1
#define CONFIG_GRAY 0
#define CONFIG_HARDCODED_TABLES 0
#define CONFIG_LIBVORBIS 0
#define CONFIG_POWERPC_PERF 0
#define CONFIG_SMALL 0
#define CONFIG_SWSCALE 1
#define CONFIG_SWSCALE_ALPHA 1

#define HAVE_ATTRIBUTE_PACKED 1
#define HAVE_GETHRTIME 0
#define HAVE_INLINE_ASM 0
#define HAVE_LDBRX 0
#define HAVE_POLL_H 1
#define HAVE_PPC4XX 0
#define HAVE_VIRTUALALLOC 0

/* Use these registers in FFmpeg x86 inline asm. No proper detection yet. */
#define HAVE_EBX_AVAILABLE 1
#ifndef MP_DEBUG
#define HAVE_EBP_AVAILABLE 1
#else
#define HAVE_EBP_AVAILABLE 0
#endif

#define CONFIG_H263_VAAPI_HWACCEL 0
#define CONFIG_MPEG2_VAAPI_HWACCEL 0
#define CONFIG_MPEG4_VAAPI_HWACCEL 0
#define CONFIG_H264_VAAPI_HWACCEL 0
#define CONFIG_VC1_VAAPI_HWACCEL 0
#define CONFIG_WMV3_VAAPI_HWACCEL 0

#endif /* MPLAYER_CONFIG_H */
