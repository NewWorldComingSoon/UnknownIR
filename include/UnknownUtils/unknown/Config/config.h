#pragma once

/* Exported configuration */
#include "unknown/Config/llvm-config.h"

/* Bug report URL. */
#define BUG_REPORT_URL "https://github.com/NewWorldComingSoon/UnknownRebuilder"

/* Define to 1 to enable backtraces, and to 0 otherwise. */
#define ENABLE_BACKTRACES 1

/* Define to 1 to enable crash overrides, and to 0 otherwise. */
#define ENABLE_CRASH_OVERRIDES 1

/* Define to 1 to enable crash memory dumps, and to 0 otherwise. */
#define LLVM_ENABLE_CRASH_DUMPS 0

/* Define to 1 if you have the `backtrace' function. */
/* #undef HAVE_BACKTRACE */

#define BACKTRACE_HEADER <backtrace.h>

/* Define to 1 if you have the <CrashReporterClient.h> header file. */
/* #undef HAVE_CRASHREPORTERCLIENT_H */

/* can use __crashreporter_info__ */
#define HAVE_CRASHREPORTER_INFO 0

/* Define to 1 if you have the declaration of `arc4random', and to 0 if you
   don't. */
#define HAVE_DECL_ARC4RANDOM 0

/* Define to 1 if you have the declaration of `FE_ALL_EXCEPT', and to 0 if you
   don't. */
#define HAVE_DECL_FE_ALL_EXCEPT 1

/* Define to 1 if you have the declaration of `FE_INEXACT', and to 0 if you
   don't. */
#define HAVE_DECL_FE_INEXACT 1

/* Define to 1 if you have the declaration of `strerror_s', and to 0 if you
   don't. */
#define HAVE_DECL_STRERROR_S 1

/* Define to 1 if you have the DIA SDK installed, and to 0 if you don't. */
#define LLVM_ENABLE_DIA_SDK 0

/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef HAVE_DLFCN_H */

/* Define if dlopen() is available on this platform. */
/* #undef HAVE_DLOPEN */

/* Define if dladdr() is available on this platform. */
/* #undef HAVE_DLADDR */

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the <fenv.h> header file. */
#define HAVE_FENV_H 1

/* Define if libffi is available on this platform. */
/* #undef HAVE_FFI_CALL */

/* Define to 1 if you have the <ffi/ffi.h> header file. */
/* #undef HAVE_FFI_FFI_H */

/* Define to 1 if you have the <ffi.h> header file. */
/* #undef HAVE_FFI_H */

/* Define to 1 if you have the `futimens' function. */
/* #undef HAVE_FUTIMENS */

/* Define to 1 if you have the `futimes' function. */
/* #undef HAVE_FUTIMES */

/* Define to 1 if you have the `getpagesize' function. */
/* #undef HAVE_GETPAGESIZE */

/* Define to 1 if you have the `getrlimit' function. */
/* #undef HAVE_GETRLIMIT */

/* Define to 1 if you have the `getrusage' function. */
/* #undef HAVE_GETRUSAGE */

/* Define to 1 if you have the `isatty' function. */
/* #undef HAVE_ISATTY */

/* Define to 1 if you have the `edit' library (-ledit). */
/* #undef HAVE_LIBEDIT */

/* Define to 1 if you have the `pfm' library (-lpfm). */
/* #undef HAVE_LIBPFM */

/* Define to 1 if you have the `psapi' library (-lpsapi). */
/* #undef HAVE_LIBPSAPI */

/* Define to 1 if you have the `pthread' library (-lpthread). */
/* #undef HAVE_LIBPTHREAD */

/* Define to 1 if you have the `pthread_getname_np' function. */
/* #undef HAVE_PTHREAD_GETNAME_NP */

/* Define to 1 if you have the `pthread_setname_np' function. */
/* #undef HAVE_PTHREAD_SETNAME_NP */

/* Define to 1 if you have the `z' library (-lz). */
/* #undef HAVE_LIBZ */

/* Define to 1 if you have the <link.h> header file. */
/* #undef HAVE_LINK_H */

/* Define to 1 if you have the `lseek64' function. */
/* #undef HAVE_LSEEK64 */

/* Define to 1 if you have the <mach/mach.h> header file. */
/* #undef HAVE_MACH_MACH_H */

/* Define to 1 if you have the `mallctl' function. */
/* #undef HAVE_MALLCTL */

/* Define to 1 if you have the `mallinfo' function. */
/* #undef HAVE_MALLINFO */

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* Define to 1 if you have the <malloc/malloc.h> header file. */
/* #undef HAVE_MALLOC_MALLOC_H */

/* Define to 1 if you have the `malloc_zone_statistics' function. */
/* #undef HAVE_MALLOC_ZONE_STATISTICS */

/* Define to 1 if you have the `posix_fallocate' function. */
/* #undef HAVE_POSIX_FALLOCATE */

/* Define to 1 if you have the `posix_spawn' function. */
/* #undef HAVE_POSIX_SPAWN */

/* Define to 1 if you have the `pread' function. */
/* #undef HAVE_PREAD */

/* Have pthread_getspecific */
/* #undef HAVE_PTHREAD_GETSPECIFIC */

/* Define to 1 if you have the <pthread.h> header file. */
/* #undef HAVE_PTHREAD_H */

/* Have pthread_mutex_lock */
/* #undef HAVE_PTHREAD_MUTEX_LOCK */

/* Have pthread_rwlock_init */
/* #undef HAVE_PTHREAD_RWLOCK_INIT */

/* Define to 1 if you have the `realpath' function. */
/* #undef HAVE_REALPATH */

/* Define to 1 if you have the `sbrk' function. */
/* #undef HAVE_SBRK */

/* Define to 1 if you have the `setenv' function. */
/* #undef HAVE_SETENV */

/* Define to 1 if you have the `sched_getaffinity' function. */
/* #undef HAVE_SCHED_GETAFFINITY */

/* Define to 1 if you have the `CPU_COUNT' macro. */
/* #undef HAVE_CPU_COUNT */

/* Define to 1 if you have the `setrlimit' function. */
/* #undef HAVE_SETRLIMIT */

/* Define to 1 if you have the `sigaltstack' function. */
/* #undef HAVE_SIGALTSTACK */

/* Define to 1 if you have the <signal.h> header file. */
#define HAVE_SIGNAL_H 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the `strerror_r' function. */
/* #undef HAVE_STRERROR_R */

/* Define to 1 if you have the `sysconf' function. */
/* #undef HAVE_SYSCONF */

/* Define to 1 if you have the <sys/ioctl.h> header file. */
/* #undef HAVE_SYS_IOCTL_H */

/* Define to 1 if you have the <sys/mman.h> header file. */
/* #undef HAVE_SYS_MMAN_H */

/* Define to 1 if you have the <sys/param.h> header file. */
/* #undef HAVE_SYS_PARAM_H */

/* Define to 1 if you have the <sys/resource.h> header file. */
/* #undef HAVE_SYS_RESOURCE_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
/* #undef HAVE_SYS_TIME_H */

/* Define to 1 if stat struct has st_mtimespec member .*/
/* #undef HAVE_STRUCT_STAT_ST_MTIMESPEC_TV_NSEC */

/* Define to 1 if stat struct has st_mtim member. */
/* #undef HAVE_STRUCT_STAT_ST_MTIM_TV_NSEC */

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define if the setupterm() function is supported this platform. */
/* #undef HAVE_TERMINFO */

/* Define if the xar_open() function is supported this platform. */
/* #undef HAVE_LIBXAR */

/* Define to 1 if you have the <termios.h> header file. */
/* #undef HAVE_TERMIOS_H */

/* Define to 1 if you have the <unistd.h> header file. */
/* #undef HAVE_UNISTD_H */

/* Define to 1 if you have the <valgrind/valgrind.h> header file. */
/* #undef HAVE_VALGRIND_VALGRIND_H */

/* Define to 1 if you have the <zlib.h> header file. */
/* #undef HAVE_ZLIB_H */

/* Have host's _alloca */
/* #undef HAVE__ALLOCA */

/* Define to 1 if you have the `_chsize_s' function. */
#define HAVE__CHSIZE_S 1

/* Define to 1 if you have the `_Unwind_Backtrace' function. */
/* #undef HAVE__UNWIND_BACKTRACE */

/* Have host's __alloca */
/* #undef HAVE___ALLOCA */

/* Have host's __ashldi3 */
/* #undef HAVE___ASHLDI3 */

/* Have host's __ashrdi3 */
/* #undef HAVE___ASHRDI3 */

/* Have host's __chkstk */
#define HAVE___CHKSTK 1

/* Have host's __chkstk_ms */
/* #undef HAVE___CHKSTK_MS */

/* Have host's __cmpdi2 */
/* #undef HAVE___CMPDI2 */

/* Have host's __divdi3 */
/* #undef HAVE___DIVDI3 */

/* Have host's __fixdfdi */
/* #undef HAVE___FIXDFDI */

/* Have host's __fixsfdi */
/* #undef HAVE___FIXSFDI */

/* Have host's __floatdidf */
/* #undef HAVE___FLOATDIDF */

/* Have host's __lshrdi3 */
/* #undef HAVE___LSHRDI3 */

/* Have host's __main */
/* #undef HAVE___MAIN */

/* Have host's __moddi3 */
/* #undef HAVE___MODDI3 */

/* Have host's __udivdi3 */
/* #undef HAVE___UDIVDI3 */

/* Have host's __umoddi3 */
/* #undef HAVE___UMODDI3 */

/* Have host's ___chkstk */
/* #undef HAVE____CHKSTK */

/* Have host's ___chkstk_ms */
/* #undef HAVE____CHKSTK_MS */

/* Linker version detected at compile time. */
/* #undef HOST_LINK_VERSION */

/* Target triple LLVM will generate code for by default */
/* Doesn't use `cmakedefine` because it is allowed to be empty. */
#ifdef WIN64
#    define LLVM_DEFAULT_TARGET_TRIPLE "x86_64-pc-windows-msvc"
#else
#    define LLVM_DEFAULT_TARGET_TRIPLE "x86_32-pc-windows-msvc"
#endif
/* Define if zlib compression is available */
#define LLVM_ENABLE_ZLIB 0

/* Define if overriding target triple is enabled */
/* #undef LLVM_TARGET_TRIPLE_ENV */

/* LLVM version information */
/* #undef LLVM_VERSION_INFO */

/* Whether tools show host and target info when invoked with --version */
#define LLVM_VERSION_PRINTER_SHOW_HOST_TARGET_INFO 1

/* Define if libxml2 is supported on this platform. */
/* #undef LLVM_LIBXML2_ENABLED */

/* Define to the extension used for shared libraries, say, ".so". */
#define LTDL_SHLIB_EXT ".dll"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "https://github.com/NewWorldComingSoon/UnknownRebuilder"

/* Define to the full name of this package. */
#define PACKAGE_NAME "LLVM"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "LLVM 8.0.0"

/* Define to the version of this package. */
#define PACKAGE_VERSION "8.0.0"

/* Define to the vendor of this package. */
/* #undef PACKAGE_VENDOR */

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* Define to a function implementing stricmp */
#define stricmp _stricmp

/* Define to a function implementing strdup */
#define strdup _strdup

/* Whether GlobalISel rule coverage is being collected */
#define LLVM_GISEL_COV_ENABLED 0

/* Define to the default GlobalISel coverage file prefix */
/* #undef LLVM_GISEL_COV_PREFIX */