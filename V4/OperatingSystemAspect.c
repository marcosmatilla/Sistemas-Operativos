
struct JoinPoint { 
	void** (*fp) (struct JoinPoint *);
	void ** args;
	int argsCount;
	const char ** argsType;
	 void * (*arg)(int, struct JoinPoint *); 
	 const char * (*argType)(int , struct JoinPoint *); 
	void ** retValue;
	const char * retType;
	const char * funcName ;
	const char * targetName ;
	const char * fileName ;
	const char * kind ;
	void * excep_return ;
};

 struct __UTAC__EXCEPTION {
	void * jumpbuf ;
	unsigned long long int prtValue ;
	int pops;
	struct __UTAC__CFLOW_FUNC {
		int (*func)(int,int) ;
		int val ;
		struct __UTAC__CFLOW_FUNC * next; 
	} * cflowfuncs; 
}; 


# 1 "OperatingSystem.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "OperatingSystem.c" 
# 1 "OperatingSystem.h" 1
# 1 "ComputerSystem.h" 1
# 1 "Simulator.h" 1
# 5 "ComputerSystem.h" 2
# 1 "ComputerSystemBase.h" 1
# 1 "ComputerSystem.h" 1
# 5 "ComputerSystemBase.h" 2
# 1 "Heap.h" 1
# 12 "Heap.h" 
typedef struct {int info; unsigned int insertionOrder; 
}heapItem; 
#line 21 "Heap.h"
int Heap_poll( heapItem ([]), int , int *); 
# 21 "Heap.h" 
# 31 "Heap.h" 
int Heap_add(int ,  heapItem ([]), int , int *, int ); 
#line 38 "Heap.h"
int Heap_compare( heapItem ,  heapItem , int ); 
#line 44 "Heap.h"
int Heap_getFirst( heapItem ([]), int ); 
#line 8 "ComputerSystemBase.h"
int ComputerSystem_ObtainProgramList(int , char *([]), int ); 
#line 9 "ComputerSystemBase.h"
void ComputerSystem_DebugMessage(int , char , ...); 
#line 10 "ComputerSystemBase.h"
void ComputerSystem_FillInArrivalTimeQueue(); 
#line 11 "ComputerSystemBase.h"
void ComputerSystem_PrintArrivalTimeQueue(); 
#line 14 "ComputerSystemBase.h"
extern char defaultDebugLevel[]; 
#line 15 "ComputerSystemBase.h"
extern int intervalBetweenInterrupts; 
#line 17 "ComputerSystemBase.h"
extern int endSimulationTime; 
# 6 "ComputerSystemBase.h" 2
# 10 "ComputerSystem.h" 2
void ComputerSystem_PowerOn(int argc, char *argv[], int ); 
#line 11 "ComputerSystem.h"
void ComputerSystem_PowerOff(); 
#line 12 "ComputerSystem.h"
void OperatingSystem_ShowTime(char ); 
#line 40 "ComputerSystem.h"
typedef struct ProgramData {char *executableName; unsigned int arrivalTime; unsigned int type; 
}PROGRAMS_DATA; 
#line 44 "ComputerSystem.h"
extern  PROGRAMS_DATA *programList[20]; 
# 36 "ComputerSystem.h" 
# 5 "OperatingSystem.h" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 367 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 410 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 411 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 368 "/usr/include/features.h" 2 3 4
# 391 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 392 "/usr/include/features.h" 2 3 4
# 28 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 216 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
# 216 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
typedef long unsigned int size_t; 
# 34 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
typedef unsigned char __u_char; 
#line 31 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned short int __u_short; 
#line 32 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __u_int; 
#line 33 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __u_long; 
#line 36 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef signed char __int8_t; 
#line 37 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned char __uint8_t; 
#line 38 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef signed short int __int16_t; 
#line 39 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned short int __uint16_t; 
#line 40 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef signed int __int32_t; 
#line 41 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __uint32_t; 
#line 43 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef signed long int __int64_t; 
#line 44 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __uint64_t; 
#line 52 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __quad_t; 
#line 53 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __u_quad_t; 
# 121 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 124 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
typedef unsigned long int __dev_t; 
#line 125 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __uid_t; 
#line 126 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __gid_t; 
#line 127 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __ino_t; 
#line 128 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __ino64_t; 
#line 129 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __mode_t; 
#line 130 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __nlink_t; 
#line 131 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __off_t; 
#line 132 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __off64_t; 
#line 133 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __pid_t; 
#line 134 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef struct {int __val[2]; 
}__fsid_t; 
#line 135 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __clock_t; 
#line 136 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __rlim_t; 
#line 137 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __rlim64_t; 
#line 138 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __id_t; 
#line 139 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __time_t; 
#line 140 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __useconds_t; 
#line 141 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __suseconds_t; 
#line 143 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __daddr_t; 
#line 144 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __key_t; 
#line 147 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __clockid_t; 
#line 150 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef void *__timer_t; 
#line 153 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __blksize_t; 
#line 158 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __blkcnt_t; 
#line 159 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __blkcnt64_t; 
#line 162 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __fsblkcnt_t; 
#line 163 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __fsblkcnt64_t; 
#line 166 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __fsfilcnt_t; 
#line 167 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __fsfilcnt64_t; 
#line 170 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __fsword_t; 
#line 172 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __ssize_t; 
#line 175 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __syscall_slong_t; 
#line 177 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __syscall_ulong_t; 
#line 181 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef  __off64_t __loff_t; 
#line 182 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef  __quad_t *__qaddr_t; 
#line 183 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef char *__caddr_t; 
#line 186 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __intptr_t; 
#line 189 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __socklen_t; 
# 36 "/usr/include/stdio.h" 2 3 4
# 44 "/usr/include/stdio.h" 3 4
struct _IO_FILE ; 
#line 48 "/usr/include/stdio.h"
typedef struct _IO_FILE FILE; 
#line 64 "/usr/include/stdio.h"
typedef struct _IO_FILE __FILE; 
# 64 "/usr/include/stdio.h" 3 4
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 31 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4
# 1 "/usr/include/wchar.h" 1 3 4
# 94 "/usr/include/wchar.h" 3 4
typedef struct {int __count; union {unsigned int __wch; char __wchb[4]; 
}__value; 
}__mbstate_t; 
#line 25 "/usr/include/_G_config.h"
typedef struct { __off_t __pos;  __mbstate_t __state; 
}_G_fpos_t; 
#line 30 "/usr/include/_G_config.h"
typedef struct { __off64_t __pos;  __mbstate_t __state; 
}_G_fpos64_t; 
# 21 "/usr/include/_G_config.h" 2 3 4
# 32 "/usr/include/libio.h" 2 3 4
# 49 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list; 
# 50 "/usr/include/libio.h" 2 3 4
# 144 "/usr/include/libio.h" 3 4
struct _IO_jump_t ; 
#line 144 "/usr/include/libio.h"
struct _IO_FILE ; 
#line 150 "/usr/include/libio.h"
typedef void _IO_lock_t; 
#line 173 "/usr/include/libio.h"
struct _IO_marker {struct _IO_marker *_next; struct _IO_FILE *_sbuf; int _pos; 
}; 
#line 182 "/usr/include/libio.h"
enum __codecvt_result {__codecvt_ok,__codecvt_partial,__codecvt_error,__codecvt_noconv}; 
# 173 "/usr/include/libio.h" 3 4
# 241 "/usr/include/libio.h" 3 4
# 307 "/usr/include/libio.h" 3 4
struct _IO_FILE {int _flags; char *_IO_read_ptr; char *_IO_read_end; char *_IO_read_base; char *_IO_write_base; char *_IO_write_ptr; char *_IO_write_end; char *_IO_buf_base; char *_IO_buf_end; char *_IO_save_base; char *_IO_backup_base; char *_IO_save_end; struct _IO_marker *_markers; struct _IO_FILE *_chain; int _fileno; int _flags2;  __off_t _old_offset; unsigned short _cur_column; signed char _vtable_offset; char _shortbuf[1];  _IO_lock_t *_lock;  __off64_t _offset; void *__pad1; void *__pad2; void *__pad3; void *__pad4;  size_t __pad5; int _mode; char _unused2[15 * sizeof (int ) - 4 * sizeof (void *) - sizeof ( size_t )]; 
}; 
#line 310 "/usr/include/libio.h"
typedef struct _IO_FILE _IO_FILE; 
#line 313 "/usr/include/libio.h"
struct _IO_FILE_plus ; 
#line 315 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stdin_; 
#line 316 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stdout_; 
#line 317 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stderr_; 
#line 333 "/usr/include/libio.h"
typedef  __ssize_t __io_read_fn(void *__cookie, char *__buf,  size_t __nbytes); 
#line 342 "/usr/include/libio.h"
typedef  __ssize_t __io_write_fn(void *__cookie, const char *__buf,  size_t __n); 
#line 350 "/usr/include/libio.h"
typedef int __io_seek_fn(void *__cookie,  __off64_t *__pos, int __w); 
#line 353 "/usr/include/libio.h"
typedef int __io_close_fn(void *__cookie); 
# 333 "/usr/include/libio.h" 3 4
# 385 "/usr/include/libio.h" 3 4
extern int __underflow( _IO_FILE *); 
#line 386 "/usr/include/libio.h"
extern int __uflow( _IO_FILE *); 
#line 387 "/usr/include/libio.h"
extern int __overflow( _IO_FILE *, int ); 
#line 429 "/usr/include/libio.h"
extern int _IO_getc( _IO_FILE *__fp); 
#line 430 "/usr/include/libio.h"
extern int _IO_putc(int __c,  _IO_FILE *__fp); 
#line 431 "/usr/include/libio.h"
extern int _IO_feof( _IO_FILE *__fp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 432 "/usr/include/libio.h"
extern int _IO_ferror( _IO_FILE *__fp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 434 "/usr/include/libio.h"
extern int _IO_peekc_locked( _IO_FILE *__fp); 
#line 440 "/usr/include/libio.h"
extern void _IO_flockfile( _IO_FILE *) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 441 "/usr/include/libio.h"
extern void _IO_funlockfile( _IO_FILE *) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 442 "/usr/include/libio.h"
extern int _IO_ftrylockfile( _IO_FILE *) __attribute__  (( __nothrow__ , __leaf__ )) ; 
# 429 "/usr/include/libio.h" 3 4
# 460 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf( _IO_FILE *__restrict , const char *__restrict ,  __gnuc_va_list , int *__restrict ); 
#line 462 "/usr/include/libio.h"
extern int _IO_vfprintf( _IO_FILE *__restrict , const char *__restrict ,  __gnuc_va_list ); 
#line 463 "/usr/include/libio.h"
extern  __ssize_t _IO_padn( _IO_FILE *, int ,  __ssize_t ); 
#line 464 "/usr/include/libio.h"
extern  size_t _IO_sgetn( _IO_FILE *, void *,  size_t ); 
#line 466 "/usr/include/libio.h"
extern  __off64_t _IO_seekoff( _IO_FILE *,  __off64_t , int , int ); 
#line 467 "/usr/include/libio.h"
extern  __off64_t _IO_seekpos( _IO_FILE *,  __off64_t , int ); 
#line 469 "/usr/include/libio.h"
extern void _IO_free_backup_area( _IO_FILE *) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 79 "/usr/include/stdio.h"
typedef  __gnuc_va_list va_list; 
# 75 "/usr/include/stdio.h" 2 3 4
# 90 "/usr/include/stdio.h" 3 4
typedef  __off_t off_t; 
#line 102 "/usr/include/stdio.h"
typedef  __ssize_t ssize_t; 
#line 110 "/usr/include/stdio.h"
typedef  _G_fpos_t fpos_t; 
# 102 "/usr/include/stdio.h" 3 4
# 164 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 168 "/usr/include/stdio.h" 2 3 4
extern struct _IO_FILE *stdin; 
#line 169 "/usr/include/stdio.h"
extern struct _IO_FILE *stdout; 
#line 170 "/usr/include/stdio.h"
extern struct _IO_FILE *stderr; 
#line 178 "/usr/include/stdio.h"
extern int remove(const char *__filename) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 180 "/usr/include/stdio.h"
extern int rename(const char *__old, const char *__new) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 186 "/usr/include/stdio.h"
extern int renameat(int __oldfd, const char *__old, int __newfd, const char *__new) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 195 "/usr/include/stdio.h"
extern  FILE *tmpfile(void ); 
#line 209 "/usr/include/stdio.h"
extern char *tmpnam(char *__s) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 215 "/usr/include/stdio.h"
extern char *tmpnam_r(char *__s) __attribute__  (( __nothrow__ , __leaf__ )) ; 
# 209 "/usr/include/stdio.h" 3 4
# 228 "/usr/include/stdio.h" 3 4
extern char *tempnam(const char *__dir, const char *__pfx) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __malloc__ )) ; 
#line 237 "/usr/include/stdio.h"
extern int fclose( FILE *__stream); 
#line 242 "/usr/include/stdio.h"
extern int fflush( FILE *__stream); 
#line 252 "/usr/include/stdio.h"
extern int fflush_unlocked( FILE *__stream); 
# 252 "/usr/include/stdio.h" 3 4
# 273 "/usr/include/stdio.h" 3 4
extern  FILE *fopen(const char *__restrict __filename, const char *__restrict __modes); 
#line 280 "/usr/include/stdio.h"
extern  FILE *freopen(const char *__restrict __filename, const char *__restrict __modes,  FILE *__restrict __stream); 
# 295 "/usr/include/stdio.h" 3 4
# 306 "/usr/include/stdio.h" 3 4
extern  FILE *fdopen(int __fd, const char *__modes) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 320 "/usr/include/stdio.h"
extern  FILE *fmemopen(void *__s,  size_t __len, const char *__modes) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 325 "/usr/include/stdio.h"
extern  FILE *open_memstream(char **__bufloc,  size_t *__sizeloc) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 332 "/usr/include/stdio.h"
extern void setbuf( FILE *__restrict __stream, char *__restrict __buf) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 337 "/usr/include/stdio.h"
extern int setvbuf( FILE *__restrict __stream, char *__restrict __buf, int __modes,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 344 "/usr/include/stdio.h"
extern void setbuffer( FILE *__restrict __stream, char *__restrict __buf,  size_t __size) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 347 "/usr/include/stdio.h"
extern void setlinebuf( FILE *__stream) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 357 "/usr/include/stdio.h"
extern int fprintf( FILE *__restrict __stream, const char *__restrict __format, ...); 
#line 362 "/usr/include/stdio.h"
extern int printf(const char *__restrict __format, ...); 
#line 365 "/usr/include/stdio.h"
extern int sprintf(char *__restrict __s, const char *__restrict __format, ...) __attribute__  (( __nothrow__ )) ; 
#line 372 "/usr/include/stdio.h"
extern int vfprintf( FILE *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg); 
#line 377 "/usr/include/stdio.h"
extern int vprintf(const char *__restrict __format,  __gnuc_va_list __arg); 
#line 380 "/usr/include/stdio.h"
extern int vsprintf(char *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __nothrow__ )) ; 
#line 388 "/usr/include/stdio.h"
extern int snprintf(char *__restrict __s,  size_t __maxlen, const char *__restrict __format, ...) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __printf__, 3, 4 )  )) ; 
#line 392 "/usr/include/stdio.h"
extern int vsnprintf(char *__restrict __s,  size_t __maxlen, const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __printf__, 3, 0 )  )) ; 
# 319 "/usr/include/stdio.h" 3 4
# 414 "/usr/include/stdio.h" 3 4
extern int vdprintf(int __fd, const char *__restrict __fmt,  __gnuc_va_list __arg) __attribute__  (( __format__ ( __printf__, 2, 0 )  )) ; 
#line 416 "/usr/include/stdio.h"
extern int dprintf(int __fd, const char *__restrict __fmt, ...) __attribute__  (( __format__ ( __printf__, 2, 3 )  )) ; 
#line 426 "/usr/include/stdio.h"
extern int fscanf( FILE *__restrict __stream, const char *__restrict __format, ...); 
#line 431 "/usr/include/stdio.h"
extern int scanf(const char *__restrict __format, ...); 
#line 434 "/usr/include/stdio.h"
extern int sscanf(const char *__restrict __s, const char *__restrict __format, ...) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 445 "/usr/include/stdio.h"
extern int fscanf( FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("""__isoc99_fscanf"); 
#line 447 "/usr/include/stdio.h"
extern int scanf(const char *__restrict __format, ...) __asm__ ("""__isoc99_scanf"); 
#line 450 "/usr/include/stdio.h"
extern int sscanf(const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("""__isoc99_sscanf") __attribute__  (( __nothrow__ , __leaf__ )) ; 
# 443 "/usr/include/stdio.h" 3 4
# 473 "/usr/include/stdio.h" 3 4
extern int vfscanf( FILE *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __format__ ( __scanf__, 2, 0 )  )) ; 
#line 480 "/usr/include/stdio.h"
extern int vscanf(const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __format__ ( __scanf__, 1, 0 )  )) ; 
#line 485 "/usr/include/stdio.h"
extern int vsscanf(const char *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __format__ ( __scanf__, 2, 0 )  )) ; 
#line 498 "/usr/include/stdio.h"
extern int vfscanf( FILE *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg) __asm__ ("""__isoc99_vfscanf") __attribute__  (( __format__ ( __scanf__, 2, 0 )  )) ; 
#line 501 "/usr/include/stdio.h"
extern int vscanf(const char *__restrict __format,  __gnuc_va_list __arg) __asm__ ("""__isoc99_vscanf") __attribute__  (( __format__ ( __scanf__, 1, 0 )  )) ; 
#line 506 "/usr/include/stdio.h"
extern int vsscanf(const char *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg) __asm__ ("""__isoc99_vsscanf") __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __format__ ( __scanf__, 2, 0 )  )) ; 
# 494 "/usr/include/stdio.h" 3 4
# 531 "/usr/include/stdio.h" 3 4
extern int fgetc( FILE *__stream); 
#line 532 "/usr/include/stdio.h"
extern int getc( FILE *__stream); 
#line 538 "/usr/include/stdio.h"
extern int getchar(void ); 
#line 550 "/usr/include/stdio.h"
extern int getc_unlocked( FILE *__stream); 
#line 551 "/usr/include/stdio.h"
extern int getchar_unlocked(void ); 
# 550 "/usr/include/stdio.h" 3 4
# 561 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked( FILE *__stream); 
#line 573 "/usr/include/stdio.h"
extern int fputc(int __c,  FILE *__stream); 
#line 574 "/usr/include/stdio.h"
extern int putc(int __c,  FILE *__stream); 
#line 580 "/usr/include/stdio.h"
extern int putchar(int __c); 
#line 594 "/usr/include/stdio.h"
extern int fputc_unlocked(int __c,  FILE *__stream); 
#line 602 "/usr/include/stdio.h"
extern int putc_unlocked(int __c,  FILE *__stream); 
#line 603 "/usr/include/stdio.h"
extern int putchar_unlocked(int __c); 
#line 610 "/usr/include/stdio.h"
extern int getw( FILE *__stream); 
#line 613 "/usr/include/stdio.h"
extern int putw(int __w,  FILE *__stream); 
#line 623 "/usr/include/stdio.h"
extern char *fgets(char *__restrict __s, int __n,  FILE *__restrict __stream); 
# 594 "/usr/include/stdio.h" 3 4
# 640 "/usr/include/stdio.h" 3 4
# 667 "/usr/include/stdio.h" 3 4
extern  __ssize_t __getdelim(char **__restrict __lineptr,  size_t *__restrict __n, int __delimiter,  FILE *__restrict __stream); 
#line 670 "/usr/include/stdio.h"
extern  __ssize_t getdelim(char **__restrict __lineptr,  size_t *__restrict __n, int __delimiter,  FILE *__restrict __stream); 
#line 680 "/usr/include/stdio.h"
extern  __ssize_t getline(char **__restrict __lineptr,  size_t *__restrict __n,  FILE *__restrict __stream); 
#line 689 "/usr/include/stdio.h"
extern int fputs(const char *__restrict __s,  FILE *__restrict __stream); 
#line 695 "/usr/include/stdio.h"
extern int puts(const char *__s); 
#line 702 "/usr/include/stdio.h"
extern int ungetc(int __c,  FILE *__stream); 
#line 710 "/usr/include/stdio.h"
extern  size_t fread(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream); 
#line 716 "/usr/include/stdio.h"
extern  size_t fwrite(const void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __s); 
#line 738 "/usr/include/stdio.h"
extern  size_t fread_unlocked(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream); 
#line 740 "/usr/include/stdio.h"
extern  size_t fwrite_unlocked(const void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream); 
#line 749 "/usr/include/stdio.h"
extern int fseek( FILE *__stream, long int __off, int __whence); 
#line 754 "/usr/include/stdio.h"
extern long int ftell( FILE *__stream); 
#line 759 "/usr/include/stdio.h"
extern void rewind( FILE *__stream); 
# 737 "/usr/include/stdio.h" 3 4
# 773 "/usr/include/stdio.h" 3 4
extern int fseeko( FILE *__stream,  __off_t __off, int __whence); 
#line 778 "/usr/include/stdio.h"
extern  __off_t ftello( FILE *__stream); 
#line 798 "/usr/include/stdio.h"
extern int fgetpos( FILE *__restrict __stream,  fpos_t *__restrict __pos); 
#line 803 "/usr/include/stdio.h"
extern int fsetpos( FILE *__stream, const  fpos_t *__pos); 
# 792 "/usr/include/stdio.h" 3 4
# 815 "/usr/include/stdio.h" 3 4
# 826 "/usr/include/stdio.h" 3 4
extern void clearerr( FILE *__stream) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 828 "/usr/include/stdio.h"
extern int feof( FILE *__stream) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 830 "/usr/include/stdio.h"
extern int ferror( FILE *__stream) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 835 "/usr/include/stdio.h"
extern void clearerr_unlocked( FILE *__stream) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 836 "/usr/include/stdio.h"
extern int feof_unlocked( FILE *__stream) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 837 "/usr/include/stdio.h"
extern int ferror_unlocked( FILE *__stream) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 846 "/usr/include/stdio.h"
extern void perror(const char *__s); 
# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr; 
#line 27 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h"
extern const char *const sys_errlist[]; 
#line 858 "/usr/include/stdio.h"
extern int fileno( FILE *__stream) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 863 "/usr/include/stdio.h"
extern int fileno_unlocked( FILE *__stream) __attribute__  (( __nothrow__ , __leaf__ )) ; 
# 854 "/usr/include/stdio.h" 2 3 4
# 872 "/usr/include/stdio.h" 3 4
extern  FILE *popen(const char *__command, const char *__modes); 
#line 878 "/usr/include/stdio.h"
extern int pclose( FILE *__stream); 
#line 884 "/usr/include/stdio.h"
extern char *ctermid(char *__s) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 912 "/usr/include/stdio.h"
extern void flockfile( FILE *__stream) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 916 "/usr/include/stdio.h"
extern int ftrylockfile( FILE *__stream) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 919 "/usr/include/stdio.h"
extern void funlockfile( FILE *__stream) __attribute__  (( __nothrow__ , __leaf__ )) ; 
# 912 "/usr/include/stdio.h" 3 4
# 942 "/usr/include/stdio.h" 3 4
# 6 "OperatingSystem.h" 2
# 27 "OperatingSystem.h" 
# 27 "OperatingSystem.h" 
enum TypeOfReadyToRunProcessQueues {USERPROCESSQUEUE,DAEMONSQUEUE}; 
#line 30 "OperatingSystem.h"
enum ProgramTypes {USERPROGRAM,DAEMONPROGRAM}; 
#line 33 "OperatingSystem.h"
enum ProcessStates {NEW,READY,EXECUTING,BLOCKED,EXIT}; 
#line 36 "OperatingSystem.h"
enum SystemCallIdentifiers {SYSCALL_END=3,SYSCALL_YIELD=4,SYSCALL_PRINTEXECPID=5,SYSCALL_SLEEP=7}; 
#line 55 "OperatingSystem.h"
typedef struct {int busy; int initialPhysicalAddress; int processSize; int state; int priority; int copyOfPCRegister; unsigned int copyOfPSWRegister; int programListIndex; int copyOfAccumulator; int queueID; int whenToWakeUp; 
}PCB; 
#line 59 "OperatingSystem.h"
extern  PCB processTable[]; 
#line 60 "OperatingSystem.h"
extern int OS_address_base; 
#line 61 "OperatingSystem.h"
extern int sipID; 
#line 64 "OperatingSystem.h"
void OperatingSystem_Initialize(); 
#line 65 "OperatingSystem.h"
void OperatingSystem_InterruptLogic(int ); 
#line 67 "OperatingSystem.h"
int OperatingSystem_GetExecutingProcessID(); 
# 2 "OperatingSystem.c" 2
# 1 "OperatingSystemBase.h" 1
# 10 "OperatingSystemBase.h" 
int OperatingSystem_ObtainAnEntryInTheProcessTable(); 
#line 11 "OperatingSystemBase.h"
int OperatingSystem_ObtainProgramSize( FILE **, char *); 
#line 12 "OperatingSystemBase.h"
int OperatingSystem_ObtainPriority( FILE *); 
#line 13 "OperatingSystemBase.h"
int OperatingSystem_LoadProgram( FILE *, int , int ); 
#line 14 "OperatingSystemBase.h"
void OperatingSystem_ReadyToShutdown(); 
#line 15 "OperatingSystemBase.h"
void OperatingSystem_TerminatingSIP(); 
#line 16 "OperatingSystemBase.h"
void OperatingSystem_ShowTime(char ); 
#line 17 "OperatingSystemBase.h"
void OperatingSystem_PrintStatus(); 
#line 18 "OperatingSystemBase.h"
void OperatingSystem_PrintReadyToRunQueue(); 
#line 19 "OperatingSystemBase.h"
void OperatingSystem_PrepareTeachersDaemons(); 
#line 20 "OperatingSystemBase.h"
int OperatingSystem_IsThereANewProgram(); 
#line 21 "OperatingSystemBase.h"
int OperatingSystem_InitializePartitionTable(); 
#line 22 "OperatingSystemBase.h"
void OperatingSystem_ShowPartitionTable(char *); 
#line 29 "OperatingSystemBase.h"
extern  heapItem sleepingProcessesQueue[]; 
#line 30 "OperatingSystemBase.h"
extern int numberOfSleepingProcesses; 
#line 34 "OperatingSystemBase.h"
extern int numberOfProgramsInArrivalTimeQueue; 
#line 35 "OperatingSystemBase.h"
extern  heapItem arrivalTimeQueue[]; 
#line 39 "OperatingSystemBase.h"
extern int baseDaemonsInProgramList; 
#line 46 "OperatingSystemBase.h"
typedef struct {int initAddress; int size; int PID; 
}PARTITIONDATA; 
#line 49 "OperatingSystemBase.h"
extern  PARTITIONDATA partitionsTable[4 * 2]; 
# 3 "OperatingSystem.c" 2
# 5 "MMU.h" 1
void MMU_SetCTRL(int ); 
#line 6 "MMU.h"
int MMU_GetCTRL(); 
#line 7 "MMU.h"
int MMU_GetMAR(); 
#line 8 "MMU.h"
void MMU_SetMAR(int ); 
#line 9 "MMU.h"
void MMU_SetBase(int ); 
#line 10 "MMU.h"
void MMU_SetLimit(int ); 
#line 13 "MMU.h"
int MMU_GetBase(); 
#line 14 "MMU.h"
int MMU_GetLimit(); 
# 4 "OperatingSystem.c" 2
# 1 "Processor.h" 1
# 1 "MainMemory.h" 1
# 9 "MainMemory.h" 
typedef int MEMORYCELL; 
#line 13 "MainMemory.h"
int MainMemory_GetMAR(); 
#line 14 "MainMemory.h"
void MainMemory_SetMAR(int ); 
#line 15 "MainMemory.h"
void MainMemory_GetMBR( MEMORYCELL *); 
#line 16 "MainMemory.h"
void MainMemory_SetMBR( MEMORYCELL *); 
#line 17 "MainMemory.h"
int MainMemory_GetCTRL(); 
#line 18 "MainMemory.h"
void MainMemory_SetCTRL(int ); 
# 5 "Processor.h" 2
# 1 "ProcessorBase.h" 1
# 4 "Buses.h" 1
enum BusConnection {MAINMEMORY,MMU,CPU,INPUTDEVICE,OUTPUTDEVICE}; 
#line 16 "Buses.h"
typedef struct {int cell; 
}BUSDATACELL; 
#line 19 "Buses.h"
int Buses_write_AddressBus_From_To(int , int ); 
#line 20 "Buses.h"
int Buses_write_DataBus_From_To(int , int ); 
#line 21 "Buses.h"
int Buses_write_ControlBus_From_To(int , int ); 
# 14 "Buses.h" 
# 5 "ProcessorBase.h" 2
# 1 "Instructions.def" 1
# 12 "ProcessorBase.h" 2
enum Instruction {NONEXISTING_INST,ADD_INST,SHIFT_INST,DIV_INST,TRAP_INST,NOP_INST,JUMP_INST,ZJUMP_INST,WRITE_INST,READ_INST,INC_INST,HALT_INST,OS_INST,IRET_INST,MEMADD_INST,LAST_INST}; 
#line 14 "ProcessorBase.h"
void Processor_UpdatePSW(); 
#line 15 "ProcessorBase.h"
void Processor_CheckOverflow(int , int ); 
#line 17 "ProcessorBase.h"
void Processor_CopyInSystemStack(int , int ); 
#line 18 "ProcessorBase.h"
int Processor_CopyFromSystemStack(int ); 
#line 19 "ProcessorBase.h"
void Processor_RaiseInterrupt(const unsigned int ); 
#line 20 "ProcessorBase.h"
void Processor_ACKInterrupt(const unsigned int ); 
#line 21 "ProcessorBase.h"
unsigned int Processor_GetInterruptLineStatus(const unsigned int ); 
#line 24 "ProcessorBase.h"
void Processor_ActivatePSW_Bit(const unsigned int ); 
#line 25 "ProcessorBase.h"
void Processor_DeactivatePSW_Bit(const unsigned int ); 
#line 26 "ProcessorBase.h"
unsigned int Processor_PSW_BitState(const unsigned int ); 
#line 31 "ProcessorBase.h"
int Processor_GetMAR(); 
#line 32 "ProcessorBase.h"
void Processor_SetMAR(int ); 
#line 33 "ProcessorBase.h"
void Processor_GetMBR( BUSDATACELL *); 
#line 34 "ProcessorBase.h"
void Processor_SetMBR( BUSDATACELL *); 
#line 39 "ProcessorBase.h"
void Processor_SetAccumulator(int ); 
#line 40 "ProcessorBase.h"
int Processor_GetAccumulator(); 
#line 44 "ProcessorBase.h"
void Processor_SetPC(int ); 
#line 48 "ProcessorBase.h"
int Processor_GetRegisterA(); 
#line 52 "ProcessorBase.h"
void Processor_SetPSW(unsigned int ); 
#line 53 "ProcessorBase.h"
unsigned int Processor_GetPSW(); 
#line 55 "ProcessorBase.h"
int Processor_Encode(int , int , int ); 
#line 56 "ProcessorBase.h"
int Processor_DecodeOperationCode( BUSDATACELL ); 
#line 57 "ProcessorBase.h"
int Processor_DecodeOperand1( BUSDATACELL ); 
#line 58 "ProcessorBase.h"
int Processor_DecodeOperand2( BUSDATACELL ); 
#line 59 "ProcessorBase.h"
void Processor_GetCodedInstruction(char *,  BUSDATACELL ); 
#line 60 "ProcessorBase.h"
int Processor_ToInstruction(char *); 
#line 61 "ProcessorBase.h"
void Processor_RaiseException(int ); 
# 6 "Processor.h" 2
# 15 "Processor.h" 
enum PSW_BITS {POWEROFF_BIT=0,ZERO_BIT=1,NEGATIVE_BIT=2,OVERFLOW_BIT=3,EXECUTION_MODE_BIT=7,INTERRUPT_MASKED_BIT=15}; 
#line 19 "Processor.h"
enum INT_BITS {SYSCALL_BIT=2,EXCEPTION_BIT=6,CLOCKINT_BIT=9}; 
#line 22 "Processor.h"
enum EXCEPTIONS {DIVISIONBYZERO,INVALIDPROCESSORMODE,INVALIDADDRESS,INVALIDINSTRUCTION}; 
#line 25 "Processor.h"
void Processor_InitializeInterruptVectorTable(); 
#line 26 "Processor.h"
void Processor_InstructionCycleLoop(); 
#line 27 "Processor.h"
void Processor_RaiseInterrupt(const unsigned int ); 
#line 29 "Processor.h"
char *Processor_ShowPSW(); 
#line 30 "Processor.h"
int Processor_GetCTRL(); 
#line 31 "Processor.h"
void Processor_SetCTRL(int ); 
# 5 "OperatingSystem.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 33 "/usr/include/string.h" 2 3 4
# 43 "/usr/include/string.h" 3 4
extern void *memcpy(void *__restrict __dest, const void *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 47 "/usr/include/string.h"
extern void *memmove(void *__dest, const void *__src,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 56 "/usr/include/string.h"
extern void *memccpy(void *__restrict __dest, const void *__restrict __src, int __c,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 62 "/usr/include/string.h"
extern void *memset(void *__s, int __c,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 66 "/usr/include/string.h"
extern int memcmp(const void *__s1, const void *__s2,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 93 "/usr/include/string.h"
extern void *memchr(const void *__s, int __c,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 92 "/usr/include/string.h" 3 4
# 126 "/usr/include/string.h" 3 4
extern char *strcpy(char *__restrict __dest, const char *__restrict __src) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 130 "/usr/include/string.h"
extern char *strncpy(char *__restrict __dest, const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 134 "/usr/include/string.h"
extern char *strcat(char *__restrict __dest, const char *__restrict __src) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 137 "/usr/include/string.h"
extern char *strncat(char *__restrict __dest, const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 141 "/usr/include/string.h"
extern int strcmp(const char *__s1, const char *__s2) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 144 "/usr/include/string.h"
extern int strncmp(const char *__s1, const char *__s2,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 148 "/usr/include/string.h"
extern int strcoll(const char *__s1, const char *__s2) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 152 "/usr/include/string.h"
extern  size_t strxfrm(char *__restrict __dest, const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
# 1 "/usr/include/xlocale.h" 1 3 4
# 39 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct {struct __locale_data *__locales[13]; const unsigned short int *__ctype_b; const int *__ctype_tolower; const int *__ctype_toupper; const char *__names[13]; 
}*__locale_t; 
#line 42 "/usr/include/xlocale.h"
typedef  __locale_t locale_t; 
#line 163 "/usr/include/string.h"
extern int strcoll_l(const char *__s1, const char *__s2,  __locale_t __l) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2, 3 )  )) ; 
#line 166 "/usr/include/string.h"
extern  size_t strxfrm_l(char *__dest, const char *__src,  size_t __n,  __locale_t __l) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 2, 4 )  )) ; 
#line 172 "/usr/include/string.h"
extern char *strdup(const char *__s) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __malloc__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 180 "/usr/include/string.h"
extern char *strndup(const char *__string,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __malloc__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 160 "/usr/include/string.h" 2 3 4
# 206 "/usr/include/string.h" 3 4
# 232 "/usr/include/string.h" 3 4
extern char *strchr(const char *__s, int __c) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 259 "/usr/include/string.h"
extern char *strrchr(const char *__s, int __c) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 258 "/usr/include/string.h" 3 4
# 281 "/usr/include/string.h" 3 4
extern  size_t strcspn(const char *__s, const char *__reject) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 285 "/usr/include/string.h"
extern  size_t strspn(const char *__s, const char *__accept) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 311 "/usr/include/string.h"
extern char *strpbrk(const char *__s, const char *__accept) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
# 310 "/usr/include/string.h" 3 4
# 338 "/usr/include/string.h" 3 4
extern char *strstr(const char *__haystack, const char *__needle) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 344 "/usr/include/string.h"
extern char *strtok(char *__restrict __s, const char *__restrict __delim) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 352 "/usr/include/string.h"
extern char *__strtok_r(char *__restrict __s, const char *__restrict __delim, char **__restrict __save_ptr) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 356 "/usr/include/string.h"
extern char *strtok_r(char *__restrict __s, const char *__restrict __delim, char **__restrict __save_ptr) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 395 "/usr/include/string.h"
extern  size_t strlen(const char *__s) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 402 "/usr/include/string.h"
extern  size_t strnlen(const char *__string,  size_t __maxlen) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 408 "/usr/include/string.h"
extern char *strerror(int __errnum) __attribute__  (( __nothrow__ , __leaf__ )) ; 
# 392 "/usr/include/string.h" 3 4
# 424 "/usr/include/string.h" 3 4
extern int strerror_r(int __errnum, char *__buf,  size_t __buflen) __asm__ ("""__xpg_strerror_r") __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 440 "/usr/include/string.h"
extern char *strerror_l(int __errnum,  __locale_t __l) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 446 "/usr/include/string.h"
extern void __bzero(void *__s,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 451 "/usr/include/string.h"
extern void bcopy(const void *__src, void *__dest,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 454 "/usr/include/string.h"
extern void bzero(void *__s,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 458 "/usr/include/string.h"
extern int bcmp(const void *__s1, const void *__s2,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
# 440 "/usr/include/string.h" 3 4
# 485 "/usr/include/string.h" 3 4
extern char *index(const char *__s, int __c) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 513 "/usr/include/string.h"
extern char *rindex(const char *__s, int __c) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 518 "/usr/include/string.h"
extern int ffs(int __i) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
# 512 "/usr/include/string.h" 3 4
# 530 "/usr/include/string.h" 3 4
extern int strcasecmp(const char *__s1, const char *__s2) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 534 "/usr/include/string.h"
extern int strncasecmp(const char *__s1, const char *__s2,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 554 "/usr/include/string.h"
extern char *strsep(char **__restrict __stringp, const char *__restrict __delim) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 559 "/usr/include/string.h"
extern char *strsignal(int __sig) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 563 "/usr/include/string.h"
extern char *__stpcpy(char *__restrict __dest, const char *__restrict __src) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 565 "/usr/include/string.h"
extern char *stpcpy(char *__restrict __dest, const char *__restrict __src) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 571 "/usr/include/string.h"
extern char *__stpncpy(char *__restrict __dest, const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 574 "/usr/include/string.h"
extern char *stpncpy(char *__restrict __dest, const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
# 552 "/usr/include/string.h" 3 4
# 658 "/usr/include/string.h" 3 4
# 8 "OperatingSystem.c" 2
# 1 "/usr/include/ctype.h" 1 3 4
# 28 "/usr/include/ctype.h" 3 4
# 39 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 46 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline unsigned int __bswap_32(unsigned int __bsx)  
# 860 "OperatingSystemAspect.c"
{
# 862 "OperatingSystemAspect.c"
unsigned int retValue_acc;




# 868 "OperatingSystemAspect.c"
{

#line 47 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"

# 873 "OperatingSystemAspect.c"
retValue_acc = __builtin_bswap32(__bsx);
# 875 "OperatingSystemAspect.c"
return (unsigned int )retValue_acc;
 
# 878 "OperatingSystemAspect.c"

}

# 882 "OperatingSystemAspect.c"
return (unsigned int )retValue_acc;

# 885 "OperatingSystemAspect.c"

}
 
#line 109 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
static __inline  __uint64_t __bswap_64( __uint64_t __bsx)  
# 891 "OperatingSystemAspect.c"
{
# 893 "OperatingSystemAspect.c"
__uint64_t retValue_acc;




# 899 "OperatingSystemAspect.c"
{

#line 110 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"

# 904 "OperatingSystemAspect.c"
retValue_acc = __builtin_bswap64(__bsx);
# 906 "OperatingSystemAspect.c"
return (__uint64_t )retValue_acc;
 
# 909 "OperatingSystemAspect.c"

}

# 913 "OperatingSystemAspect.c"
return (__uint64_t )retValue_acc;

# 916 "OperatingSystemAspect.c"

}
 
# 108 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 61 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/ctype.h" 2 3 4
enum {_ISupper=(((0) < 8?((1 << (0)) << 8):((1 << (0)) >> 8))),_ISlower=(((1) < 8?((1 << (1)) << 8):((1 << (1)) >> 8))),_ISalpha=(((2) < 8?((1 << (2)) << 8):((1 << (2)) >> 8))),_ISdigit=(((3) < 8?((1 << (3)) << 8):((1 << (3)) >> 8))),_ISxdigit=(((4) < 8?((1 << (4)) << 8):((1 << (4)) >> 8))),_ISspace=(((5) < 8?((1 << (5)) << 8):((1 << (5)) >> 8))),_ISprint=(((6) < 8?((1 << (6)) << 8):((1 << (6)) >> 8))),_ISgraph=(((7) < 8?((1 << (7)) << 8):((1 << (7)) >> 8))),_ISblank=(((8) < 8?((1 << (8)) << 8):((1 << (8)) >> 8))),_IScntrl=(((9) < 8?((1 << (9)) << 8):((1 << (9)) >> 8))),_ISpunct=(((10) < 8?((1 << (10)) << 8):((1 << (10)) >> 8))),_ISalnum=(((11) < 8?((1 << (11)) << 8):((1 << (11)) >> 8)))}; 
#line 80 "/usr/include/ctype.h"
extern const unsigned short int **__ctype_b_loc(void ) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 82 "/usr/include/ctype.h"
extern const  __int32_t **__ctype_tolower_loc(void ) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 84 "/usr/include/ctype.h"
extern const  __int32_t **__ctype_toupper_loc(void ) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
# 79 "/usr/include/ctype.h" 3 4
# 110 "/usr/include/ctype.h" 3 4
extern int isalnum(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 111 "/usr/include/ctype.h"
extern int isalpha(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 112 "/usr/include/ctype.h"
extern int iscntrl(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 113 "/usr/include/ctype.h"
extern int isdigit(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 114 "/usr/include/ctype.h"
extern int islower(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 115 "/usr/include/ctype.h"
extern int isgraph(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 116 "/usr/include/ctype.h"
extern int isprint(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 117 "/usr/include/ctype.h"
extern int ispunct(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 118 "/usr/include/ctype.h"
extern int isspace(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 119 "/usr/include/ctype.h"
extern int isupper(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 120 "/usr/include/ctype.h"
extern int isxdigit(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 124 "/usr/include/ctype.h"
extern int tolower(int __c) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 127 "/usr/include/ctype.h"
extern int toupper(int __c) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 136 "/usr/include/ctype.h"
extern int isblank(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 150 "/usr/include/ctype.h"
extern int isascii(int __c) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 154 "/usr/include/ctype.h"
extern int toascii(int __c) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 158 "/usr/include/ctype.h"
extern int _toupper(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 159 "/usr/include/ctype.h"
extern int _tolower(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
# 150 "/usr/include/ctype.h" 3 4
# 271 "/usr/include/ctype.h" 3 4
extern int isalnum_l(int ,  __locale_t ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 272 "/usr/include/ctype.h"
extern int isalpha_l(int ,  __locale_t ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 273 "/usr/include/ctype.h"
extern int iscntrl_l(int ,  __locale_t ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 274 "/usr/include/ctype.h"
extern int isdigit_l(int ,  __locale_t ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 275 "/usr/include/ctype.h"
extern int islower_l(int ,  __locale_t ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 276 "/usr/include/ctype.h"
extern int isgraph_l(int ,  __locale_t ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 277 "/usr/include/ctype.h"
extern int isprint_l(int ,  __locale_t ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 278 "/usr/include/ctype.h"
extern int ispunct_l(int ,  __locale_t ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 279 "/usr/include/ctype.h"
extern int isspace_l(int ,  __locale_t ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 280 "/usr/include/ctype.h"
extern int isupper_l(int ,  __locale_t ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 281 "/usr/include/ctype.h"
extern int isxdigit_l(int ,  __locale_t ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 283 "/usr/include/ctype.h"
extern int isblank_l(int ,  __locale_t ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 287 "/usr/include/ctype.h"
extern int __tolower_l(int __c,  __locale_t __l) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 288 "/usr/include/ctype.h"
extern int tolower_l(int __c,  __locale_t __l) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 291 "/usr/include/ctype.h"
extern int __toupper_l(int __c,  __locale_t __l) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 292 "/usr/include/ctype.h"
extern int toupper_l(int __c,  __locale_t __l) __attribute__  (( __nothrow__ , __leaf__ )) ; 
# 347 "/usr/include/ctype.h" 3 4
# 9 "OperatingSystem.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 328 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
typedef int wchar_t; 
# 33 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 55 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum {P_ALL,P_PID,P_PGID}idtype_t; 
# 42 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 97 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3 4
union wait {int w_status; struct {unsigned int __w_termsig:7; unsigned int __w_coredump:1; unsigned int __w_retcode:8; unsigned int :16; 
}__wait_terminated; struct {unsigned int __w_stopval:8; unsigned int __w_stopsig:8; unsigned int :16; 
}__wait_stopped; 
}; 
# 43 "/usr/include/stdlib.h" 2 3 4
# 71 "/usr/include/stdlib.h" 3 4
typedef union {union wait *__uptr; int *__iptr; 
}__WAIT_STATUS __attribute__  (( __transparent_union__ )) ; 
#line 101 "/usr/include/stdlib.h"
typedef struct {int quot; int rem; 
}div_t; 
#line 109 "/usr/include/stdlib.h"
typedef struct {long int quot; long int rem; 
}ldiv_t; 
#line 121 "/usr/include/stdlib.h"
 __extension__ typedef struct {long long int quot; long long int rem; 
}lldiv_t; 
# 95 "/usr/include/stdlib.h" 3 4
# 139 "/usr/include/stdlib.h" 3 4
extern  size_t __ctype_get_mb_cur_max(void ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 145 "/usr/include/stdlib.h"
extern double atof(const char *__nptr) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 148 "/usr/include/stdlib.h"
extern int atoi(const char *__nptr) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 151 "/usr/include/stdlib.h"
extern long int atol(const char *__nptr) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 158 "/usr/include/stdlib.h"
 __extension__ extern long long int atoll(const char *__nptr) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 166 "/usr/include/stdlib.h"
extern double strtod(const char *__restrict __nptr, char **__restrict __endptr) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 173 "/usr/include/stdlib.h"
extern float strtof(const char *__restrict __nptr, char **__restrict __endptr) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 177 "/usr/include/stdlib.h"
extern long double strtold(const char *__restrict __nptr, char **__restrict __endptr) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 185 "/usr/include/stdlib.h"
extern long int strtol(const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 189 "/usr/include/stdlib.h"
extern unsigned long int strtoul(const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 197 "/usr/include/stdlib.h"
 __extension__ extern long long int strtoq(const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 202 "/usr/include/stdlib.h"
 __extension__ extern unsigned long long int strtouq(const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 211 "/usr/include/stdlib.h"
 __extension__ extern long long int strtoll(const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 216 "/usr/include/stdlib.h"
 __extension__ extern unsigned long long int strtoull(const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 305 "/usr/include/stdlib.h"
extern char *l64a(long int __n) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 309 "/usr/include/stdlib.h"
extern long int a64l(const char *__s) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 305 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef  __u_char u_char; 
#line 34 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __u_short u_short; 
#line 35 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __u_int u_int; 
#line 36 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __u_long u_long; 
#line 37 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __quad_t quad_t; 
#line 38 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __u_quad_t u_quad_t; 
#line 39 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __fsid_t fsid_t; 
#line 44 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __loff_t loff_t; 
#line 48 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __ino_t ino_t; 
#line 60 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __dev_t dev_t; 
#line 65 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __gid_t gid_t; 
#line 70 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __mode_t mode_t; 
#line 75 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __nlink_t nlink_t; 
#line 80 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __uid_t uid_t; 
# 60 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 98 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef  __pid_t pid_t; 
#line 104 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __id_t id_t; 
#line 115 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __daddr_t daddr_t; 
#line 116 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __caddr_t caddr_t; 
#line 122 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __key_t key_t; 
# 115 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 132 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 59 "/usr/include/time.h" 3 4
typedef  __clock_t clock_t; 
#line 75 "/usr/include/time.h"
typedef  __time_t time_t; 
# 73 "/usr/include/time.h" 3 4
# 91 "/usr/include/time.h" 3 4
typedef  __clockid_t clockid_t; 
#line 103 "/usr/include/time.h"
typedef  __timer_t timer_t; 
# 103 "/usr/include/time.h" 3 4
# 133 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 146 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 150 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
typedef unsigned long int ulong; 
#line 151 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned short int ushort; 
#line 152 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned int uint; 
#line 194 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef int int8_t __attribute__  (( __mode__ ( __QI__ )  )) ; 
#line 195 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef int int16_t __attribute__  (( __mode__ ( __HI__ )  )) ; 
#line 196 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef int int32_t __attribute__  (( __mode__ ( __SI__ )  )) ; 
#line 197 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef int int64_t __attribute__  (( __mode__ ( __DI__ )  )) ; 
#line 200 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned int u_int8_t __attribute__  (( __mode__ ( __QI__ )  )) ; 
#line 201 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned int u_int16_t __attribute__  (( __mode__ ( __HI__ )  )) ; 
#line 202 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned int u_int32_t __attribute__  (( __mode__ ( __SI__ )  )) ; 
#line 203 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned int u_int64_t __attribute__  (( __mode__ ( __DI__ )  )) ; 
#line 205 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef int register_t __attribute__  (( __mode__ ( __word__ )  )) ; 
# 194 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 219 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
typedef int __sig_atomic_t; 
#line 30 "/usr/include/x86_64-linux-gnu/bits/sigset.h"
typedef struct {unsigned long int __val[(1024 / (8 * sizeof (unsigned long int )))]; 
}__sigset_t; 
#line 37 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef  __sigset_t sigset_t; 
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
# 1 "/usr/include/time.h" 1 3 4
# 124 "/usr/include/time.h" 3 4
struct timespec { __time_t tv_sec;  __syscall_slong_t tv_nsec; 
}; 
# 44 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
struct timeval { __time_t tv_sec;  __suseconds_t tv_usec; 
}; 
#line 48 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef  __suseconds_t suseconds_t; 
#line 54 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef long int __fd_mask; 
# 46 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
# 75 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct { __fd_mask __fds_bits[1024 / (8 * ((int )sizeof ( __fd_mask )))]; 
}fd_set; 
#line 82 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef  __fd_mask fd_mask; 
# 96 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 109 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select(int __nfds,  fd_set *__restrict __readfds,  fd_set *__restrict __writefds,  fd_set *__restrict __exceptfds, struct timeval *__restrict __timeout); 
#line 122 "/usr/include/x86_64-linux-gnu/sys/select.h"
extern int pselect(int __nfds,  fd_set *__restrict __readfds,  fd_set *__restrict __writefds,  fd_set *__restrict __exceptfds, const struct timespec *__restrict __timeout, const  __sigset_t *__restrict __sigmask); 
# 118 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 131 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 220 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
 __extension__ extern unsigned int gnu_dev_major(unsigned long long int __dev) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 31 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"
 __extension__ extern unsigned int gnu_dev_minor(unsigned long long int __dev) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 35 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"
 __extension__ extern unsigned long long int gnu_dev_makedev(unsigned int __major, unsigned int __minor) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
# 58 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
# 228 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
typedef  __blksize_t blksize_t; 
#line 235 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __blkcnt_t blkcnt_t; 
#line 239 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __fsblkcnt_t fsblkcnt_t; 
#line 243 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __fsfilcnt_t fsfilcnt_t; 
# 270 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t; 
#line 67 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
union pthread_attr_t {char __size[56]; long int __align; 
}; 
#line 69 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union pthread_attr_t pthread_attr_t; 
#line 79 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef struct __pthread_internal_list {struct __pthread_internal_list *__prev; struct __pthread_internal_list *__next; 
}__pthread_list_t; 
# 90 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 128 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef union {struct __pthread_mutex_s {int __lock; unsigned int __count; int __owner; unsigned int __nusers; int __kind; short __spins; short __elision;  __pthread_list_t __list; 
}__data; char __size[40]; long int __align; 
}pthread_mutex_t; 
#line 134 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union {char __size[4]; int __align; 
}pthread_mutexattr_t; 
#line 154 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union {struct {int __lock; unsigned int __futex;  __extension__ unsigned long long int __total_seq;  __extension__ unsigned long long int __wakeup_seq;  __extension__ unsigned long long int __woken_seq; void *__mutex; unsigned int __nwaiters; unsigned int __broadcast_seq; 
}__data; char __size[48];  __extension__ long long int __align; 
}pthread_cond_t; 
#line 160 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union {char __size[4]; int __align; 
}pthread_condattr_t; 
#line 164 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef unsigned int pthread_key_t; 
#line 168 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef int pthread_once_t; 
#line 222 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union {struct {int __lock; unsigned int __nr_readers; unsigned int __readers_wakeup; unsigned int __writer_wakeup; unsigned int __nr_readers_queued; unsigned int __nr_writers_queued; int __writer; int __shared; signed char __rwelision; unsigned char __pad1[7]; unsigned long int __pad2; unsigned int __flags; 
}__data; char __size[56]; long int __align; 
}pthread_rwlock_t; 
#line 228 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union {char __size[8]; long int __align; 
}pthread_rwlockattr_t; 
#line 234 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef volatile int pthread_spinlock_t; 
#line 243 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union {char __size[32]; long int __align; 
}pthread_barrier_t; 
#line 249 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union {char __size[4]; int __align; 
}pthread_barrierattr_t; 
# 220 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 271 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 321 "/usr/include/stdlib.h" 2 3 4
extern long int random(void ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 324 "/usr/include/stdlib.h"
extern void srandom(unsigned int __seed) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 331 "/usr/include/stdlib.h"
extern char *initstate(unsigned int __seed, char *__statebuf,  size_t __statelen) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 335 "/usr/include/stdlib.h"
extern char *setstate(char *__statebuf) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 352 "/usr/include/stdlib.h"
struct random_data { int32_t *fptr;  int32_t *rptr;  int32_t *state; int rand_type; int rand_deg; int rand_sep;  int32_t *end_ptr; 
}; 
#line 355 "/usr/include/stdlib.h"
extern int random_r(struct random_data *__restrict __buf,  int32_t *__restrict __result) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 358 "/usr/include/stdlib.h"
extern int srandom_r(unsigned int __seed, struct random_data *__buf) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 363 "/usr/include/stdlib.h"
extern int initstate_r(unsigned int __seed, char *__restrict __statebuf,  size_t __statelen, struct random_data *__restrict __buf) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 2, 4 )  )) ; 
#line 367 "/usr/include/stdlib.h"
extern int setstate_r(char *__restrict __statebuf, struct random_data *__restrict __buf) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 374 "/usr/include/stdlib.h"
extern int rand(void ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 376 "/usr/include/stdlib.h"
extern void srand(unsigned int __seed) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 381 "/usr/include/stdlib.h"
extern int rand_r(unsigned int *__seed) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 389 "/usr/include/stdlib.h"
extern double drand48(void ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 390 "/usr/include/stdlib.h"
extern double erand48(unsigned short int __xsubi[3]) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 393 "/usr/include/stdlib.h"
extern long int lrand48(void ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 395 "/usr/include/stdlib.h"
extern long int nrand48(unsigned short int __xsubi[3]) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 398 "/usr/include/stdlib.h"
extern long int mrand48(void ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 400 "/usr/include/stdlib.h"
extern long int jrand48(unsigned short int __xsubi[3]) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 403 "/usr/include/stdlib.h"
extern void srand48(long int __seedval) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 405 "/usr/include/stdlib.h"
extern unsigned short int *seed48(unsigned short int __seed16v[3]) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 406 "/usr/include/stdlib.h"
extern void lcong48(unsigned short int __param[7]) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 420 "/usr/include/stdlib.h"
struct drand48_data {unsigned short int __x[3]; unsigned short int __old_x[3]; unsigned short int __c; unsigned short int __init;  __extension__ unsigned long long int __a; 
}; 
#line 424 "/usr/include/stdlib.h"
extern int drand48_r(struct drand48_data *__restrict __buffer, double *__restrict __result) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 427 "/usr/include/stdlib.h"
extern int erand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, double *__restrict __result) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 432 "/usr/include/stdlib.h"
extern int lrand48_r(struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 436 "/usr/include/stdlib.h"
extern int nrand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 441 "/usr/include/stdlib.h"
extern int mrand48_r(struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 445 "/usr/include/stdlib.h"
extern int jrand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 449 "/usr/include/stdlib.h"
extern int srand48_r(long int __seedval, struct drand48_data *__buffer) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 452 "/usr/include/stdlib.h"
extern int seed48_r(unsigned short int __seed16v[3], struct drand48_data *__buffer) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 456 "/usr/include/stdlib.h"
extern int lcong48_r(unsigned short int __param[7], struct drand48_data *__buffer) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 466 "/usr/include/stdlib.h"
extern void *malloc( size_t __size) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __malloc__ )) ; 
#line 469 "/usr/include/stdlib.h"
extern void *calloc( size_t __nmemb,  size_t __size) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __malloc__ )) ; 
#line 481 "/usr/include/stdlib.h"
extern void *realloc(void *__ptr,  size_t __size) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 483 "/usr/include/stdlib.h"
extern void free(void *__ptr) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 488 "/usr/include/stdlib.h"
extern void cfree(void *__ptr) __attribute__  (( __nothrow__ , __leaf__ )) ; 
# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 32 "/usr/include/alloca.h" 2 3 4
extern void *alloca( size_t __size) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 498 "/usr/include/stdlib.h"
extern void *valloc( size_t __size) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __malloc__ )) ; 
#line 504 "/usr/include/stdlib.h"
extern int posix_memalign(void **__memptr,  size_t __alignment,  size_t __size) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 510 "/usr/include/stdlib.h"
extern void *aligned_alloc( size_t __alignment,  size_t __size) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __malloc__ ))  __attribute__  (( __alloc_size__ ( 2 )  )) ; 
#line 515 "/usr/include/stdlib.h"
extern void abort(void ) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __noreturn__ )) ; 
#line 519 "/usr/include/stdlib.h"
extern int atexit(void (*__func)(void )) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 527 "/usr/include/stdlib.h"
extern int at_quick_exit(void (*__func)(void )) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 536 "/usr/include/stdlib.h"
extern int on_exit(void (*__func)(int __status, void *__arg), void *__arg) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 543 "/usr/include/stdlib.h"
extern void exit(int __status) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __noreturn__ )) ; 
#line 549 "/usr/include/stdlib.h"
extern void quick_exit(int __status) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __noreturn__ )) ; 
#line 557 "/usr/include/stdlib.h"
extern void _Exit(int __status) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __noreturn__ )) ; 
#line 564 "/usr/include/stdlib.h"
extern char *getenv(const char *__name) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 493 "/usr/include/stdlib.h" 2 3 4
# 578 "/usr/include/stdlib.h" 3 4
extern int putenv(char *__string) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 585 "/usr/include/stdlib.h"
extern int setenv(const char *__name, const char *__value, int __replace) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 588 "/usr/include/stdlib.h"
extern int unsetenv(const char *__name) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 595 "/usr/include/stdlib.h"
extern int clearenv(void ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 606 "/usr/include/stdlib.h"
extern char *mktemp(char *__template) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 606 "/usr/include/stdlib.h" 3 4
# 619 "/usr/include/stdlib.h" 3 4
extern int mkstemp(char *__template) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 641 "/usr/include/stdlib.h"
extern int mkstemps(char *__template, int __suffixlen) __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 641 "/usr/include/stdlib.h" 3 4
# 662 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp(char *__template) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 716 "/usr/include/stdlib.h"
extern int system(const char *__command); 
# 711 "/usr/include/stdlib.h" 3 4
# 734 "/usr/include/stdlib.h" 3 4
extern char *realpath(const char *__restrict __name, char *__restrict __resolved) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 741 "/usr/include/stdlib.h"
typedef int (*__compar_fn_t)(const void *, const void *); 
#line 756 "/usr/include/stdlib.h"
extern void *bsearch(const void *__key, const void *__base,  size_t __nmemb,  size_t __size,  __compar_fn_t __compar) __attribute__  (( __nonnull__ ( 1, 2, 5 )  )) ; 
#line 765 "/usr/include/stdlib.h"
extern void qsort(void *__base,  size_t __nmemb,  size_t __size,  __compar_fn_t __compar) __attribute__  (( __nonnull__ ( 1, 4 )  )) ; 
# 751 "/usr/include/stdlib.h" 3 4
# 774 "/usr/include/stdlib.h" 3 4
extern int abs(int __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 775 "/usr/include/stdlib.h"
extern long int labs(long int __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 780 "/usr/include/stdlib.h"
 __extension__ extern long long int llabs(long long int __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 789 "/usr/include/stdlib.h"
extern  div_t div(int __numer, int __denom) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 791 "/usr/include/stdlib.h"
extern  ldiv_t ldiv(long int __numer, long int __denom) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 798 "/usr/include/stdlib.h"
 __extension__ extern  lldiv_t lldiv(long long int __numer, long long int __denom) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 812 "/usr/include/stdlib.h"
extern char *ecvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 818 "/usr/include/stdlib.h"
extern char *fcvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 824 "/usr/include/stdlib.h"
extern char *gcvt(double __value, int __ndigit, char *__buf) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 3 )  )) ; 
#line 831 "/usr/include/stdlib.h"
extern char *qecvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 834 "/usr/include/stdlib.h"
extern char *qfcvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 836 "/usr/include/stdlib.h"
extern char *qgcvt(long double __value, int __ndigit, char *__buf) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 3 )  )) ; 
#line 843 "/usr/include/stdlib.h"
extern int ecvt_r(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 846 "/usr/include/stdlib.h"
extern int fcvt_r(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 851 "/usr/include/stdlib.h"
extern int qecvt_r(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 855 "/usr/include/stdlib.h"
extern int qfcvt_r(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 862 "/usr/include/stdlib.h"
extern int mblen(const char *__s,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 866 "/usr/include/stdlib.h"
extern int mbtowc( wchar_t *__restrict __pwc, const char *__restrict __s,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 869 "/usr/include/stdlib.h"
extern int wctomb(char *__s,  wchar_t __wchar) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 874 "/usr/include/stdlib.h"
extern  size_t mbstowcs( wchar_t *__restrict __pwcs, const char *__restrict __s,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 878 "/usr/include/stdlib.h"
extern  size_t wcstombs(char *__restrict __s, const  wchar_t *__restrict __pwcs,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 887 "/usr/include/stdlib.h"
extern int rpmatch(const char *__response) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 811 "/usr/include/stdlib.h" 3 4
# 901 "/usr/include/stdlib.h" 3 4
extern int getsubopt(char **__restrict __optionp, char *const *__restrict __tokens, char **__restrict __valuep) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2, 3 )  )) ; 
#line 951 "/usr/include/stdlib.h"
extern int getloadavg(double __loadavg[], int __nelem) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 950 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 955 "/usr/include/stdlib.h" 2 3 4
# 967 "/usr/include/stdlib.h" 3 4
# 10 "OperatingSystem.c" 2
# 1 "/usr/include/time.h" 1 3 4
# 29 "/usr/include/time.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 38 "/usr/include/time.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 42 "/usr/include/time.h" 2 3 4
# 152 "/usr/include/time.h" 3 4
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; int tm_wday; int tm_yday; int tm_isdst; long int tm_gmtoff; const char *tm_zone; 
}; 
#line 165 "/usr/include/time.h"
struct itimerspec {struct timespec it_interval; struct timespec it_value; 
}; 
#line 168 "/usr/include/time.h"
struct sigevent ; 
#line 189 "/usr/include/time.h"
extern  clock_t clock(void ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 192 "/usr/include/time.h"
extern  time_t time( time_t *__timer) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 196 "/usr/include/time.h"
extern double difftime( time_t __time1,  time_t __time0) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 199 "/usr/include/time.h"
extern  time_t mktime(struct tm *__tp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 207 "/usr/include/time.h"
extern  size_t strftime(char *__restrict __s,  size_t __maxsize, const char *__restrict __format, const struct tm *__restrict __tp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
# 186 "/usr/include/time.h" 3 4
# 226 "/usr/include/time.h" 3 4
extern  size_t strftime_l(char *__restrict __s,  size_t __maxsize, const char *__restrict __format, const struct tm *__restrict __tp,  __locale_t __loc) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 239 "/usr/include/time.h"
extern struct tm *gmtime(const  time_t *__timer) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 243 "/usr/include/time.h"
extern struct tm *localtime(const  time_t *__timer) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 250 "/usr/include/time.h"
extern struct tm *gmtime_r(const  time_t *__restrict __timer, struct tm *__restrict __tp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 255 "/usr/include/time.h"
extern struct tm *localtime_r(const  time_t *__restrict __timer, struct tm *__restrict __tp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 261 "/usr/include/time.h"
extern char *asctime(const struct tm *__tp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 264 "/usr/include/time.h"
extern char *ctime(const  time_t *__timer) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 273 "/usr/include/time.h"
extern char *asctime_r(const struct tm *__restrict __tp, char *__restrict __buf) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 277 "/usr/include/time.h"
extern char *ctime_r(const  time_t *__restrict __timer, char *__restrict __buf) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 282 "/usr/include/time.h"
extern char *__tzname[2]; 
#line 283 "/usr/include/time.h"
extern int __daylight; 
#line 284 "/usr/include/time.h"
extern long int __timezone; 
#line 289 "/usr/include/time.h"
extern char *tzname[2]; 
#line 293 "/usr/include/time.h"
extern void tzset(void ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 297 "/usr/include/time.h"
extern int daylight; 
#line 298 "/usr/include/time.h"
extern long int timezone; 
#line 304 "/usr/include/time.h"
extern int stime(const  time_t *__when) __attribute__  (( __nothrow__ , __leaf__ )) ; 
# 236 "/usr/include/time.h" 3 4
# 319 "/usr/include/time.h" 3 4
extern  time_t timegm(struct tm *__tp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 322 "/usr/include/time.h"
extern  time_t timelocal(struct tm *__tp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 325 "/usr/include/time.h"
extern int dysize(int __year) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 335 "/usr/include/time.h"
extern int nanosleep(const struct timespec *__requested_time, struct timespec *__remaining); 
#line 339 "/usr/include/time.h"
extern int clock_getres( clockid_t __clock_id, struct timespec *__res) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 342 "/usr/include/time.h"
extern int clock_gettime( clockid_t __clock_id, struct timespec *__tp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 346 "/usr/include/time.h"
extern int clock_settime( clockid_t __clock_id, const struct timespec *__tp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 355 "/usr/include/time.h"
extern int clock_nanosleep( clockid_t __clock_id, int __flags, const struct timespec *__req, struct timespec *__rem); 
#line 358 "/usr/include/time.h"
extern int clock_getcpuclockid( pid_t __pid,  clockid_t *__clock_id) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 365 "/usr/include/time.h"
extern int timer_create( clockid_t __clock_id, struct sigevent *__restrict __evp,  timer_t *__restrict __timerid) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 368 "/usr/include/time.h"
extern int timer_delete( timer_t __timerid) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 373 "/usr/include/time.h"
extern int timer_settime( timer_t __timerid, int __flags, const struct itimerspec *__restrict __value, struct itimerspec *__restrict __ovalue) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 377 "/usr/include/time.h"
extern int timer_gettime( timer_t __timerid, struct itimerspec *__value) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 380 "/usr/include/time.h"
extern int timer_getoverrun( timer_t __timerid) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 387 "/usr/include/time.h"
extern int timespec_get(struct timespec *__ts, int __base) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 334 "/usr/include/time.h" 3 4
# 430 "/usr/include/time.h" 3 4
# 11 "OperatingSystem.c" 2
# 13 "OperatingSystem.c" 
void OperatingSystem_PrepareDaemons(); 
#line 14 "OperatingSystem.c"
void OperatingSystem_PCBInitialization(int , int , int , int , int ); 
#line 15 "OperatingSystem.c"
void OperatingSystem_MoveToTheREADYState(int , int ); 
#line 16 "OperatingSystem.c"
void OperatingSystem_Dispatch(int ); 
#line 17 "OperatingSystem.c"
void OperatingSystem_RestoreContext(int ); 
#line 18 "OperatingSystem.c"
void OperatingSystem_SaveContext(int ); 
#line 19 "OperatingSystem.c"
void OperatingSystem_TerminateProcess(); 
#line 20 "OperatingSystem.c"
int OperatingSystem_LongTermScheduler(); 
#line 21 "OperatingSystem.c"
void OperatingSystem_PreemptRunningProcess(); 
#line 22 "OperatingSystem.c"
int OperatingSystem_CreateProcess(int ); 
#line 23 "OperatingSystem.c"
int OperatingSystem_ObtainMainMemory(int , int , char *); 
#line 24 "OperatingSystem.c"
int OperatingSystem_ShortTermScheduler(); 
#line 25 "OperatingSystem.c"
int OperatingSystem_ExtractFromReadyToRun(); 
#line 26 "OperatingSystem.c"
void OperatingSystem_HandleException(); 
#line 27 "OperatingSystem.c"
void OperatingSystem_HandleSystemCall(); 
#line 28 "OperatingSystem.c"
void OperatingSystem_PrintReadyToRunQueue(); 
#line 29 "OperatingSystem.c"
void OperatingSystem_HandleClockInterrupt(); 
#line 30 "OperatingSystem.c"
void OperatingSystem_MoveToTheBLOCKState(); 
#line 31 "OperatingSystem.c"
int OperatingSystem_ExtractFromBlocked(); 
#line 32 "OperatingSystem.c"
int OperatingSystem_CheckQueue(); 
#line 33 "OperatingSystem.c"
int OperatingSystem_ExtractFromBlocked(); 
#line 34 "OperatingSystem.c"
int OperatingSystem_CheckExecutingPriority(int ); 
#line 35 "OperatingSystem.c"
int OperatingSystem_GetExecutingProcessID(); 
#line 36 "OperatingSystem.c"
void OperatingSystem_ShowPartitionTable(char *mensaje); 
#line 37 "OperatingSystem.c"
void OperatingSystem_ReleaseMainMemory(); 
#line 39 "OperatingSystem.c"
int Processor_GetException(); 
#line 42 "OperatingSystem.c"
int numberOfClockInterrupts = 0; 
#line 46 "OperatingSystem.c"
 heapItem sleepingProcessesQueue[4]; 
#line 47 "OperatingSystem.c"
int numberOfSleepingProcesses = 0; 
#line 50 "OperatingSystem.c"
char *statesNames[5] = {"NEW","READY","EXECUTING","BLOCKED","EXIT"}; 
#line 53 "OperatingSystem.c"
char *exceptions[4] = {"division by zero","invalid processor mode","invalid address","invalid instruction"}; 
#line 56 "OperatingSystem.c"
char *allocating[2] = {"before allocating memory","after allocating memory"}; 
#line 59 "OperatingSystem.c"
char *allocating2[2] = {"before releasing memory","after releasing memory"}; 
#line 62 "OperatingSystem.c"
 PCB processTable[4]; 
#line 65 "OperatingSystem.c"
int OS_address_base = 4 * (300 / (4 + 1)); 
#line 68 "OperatingSystem.c"
int executingProcessID = (-1); 
#line 71 "OperatingSystem.c"
int sipID; 
#line 74 "OperatingSystem.c"
int initialPID = 4 - 1; 
#line 76 "OperatingSystem.c"
int baseDaemonsInProgramList; 
#line 81 "OperatingSystem.c"
 heapItem readyToRunQueue[2][4]; 
#line 82 "OperatingSystem.c"
int numberOfReadyToRunProcesses[2] = {0,0}; 
#line 83 "OperatingSystem.c"
char *queueNames[2] = {"USER","DAEMONS"}; 
#line 86 "OperatingSystem.c"
int numberOfNotTerminatedUserProcesses = 0; 
#line 89 "OperatingSystem.c"
void OperatingSystem_Initialize(int daemonsIndex)  
# 1624 "OperatingSystemAspect.c"
{



# 1629 "OperatingSystemAspect.c"
{

#line 91 "OperatingSystem.c"

#line 91 "OperatingSystem.c"
int i,selectedProcess;
#line 92 "OperatingSystem.c"

#line 92 "OperatingSystem.c"
 FILE *programFile;
#line 95 "OperatingSystem.c"

#line 95 "OperatingSystem.c"
int processSize = OperatingSystem_ObtainProgramSize((&programFile), "OperatingSystemCode");
#line 98 "OperatingSystem.c"
OperatingSystem_LoadProgram(programFile, OS_address_base, processSize); 
#line 101 "OperatingSystem.c"
for(i = 0;i < 4;i++) { { 
#line 102 "OperatingSystem.c"
processTable[i].busy = 0; } } 
#line 105 "OperatingSystem.c"
Processor_InitializeInterruptVectorTable(OS_address_base + 2); 
#line 107 "OperatingSystem.c"
OperatingSystem_InitializePartitionTable(); 
#line 110 "OperatingSystem.c"
OperatingSystem_PrepareDaemons(daemonsIndex); 
#line 112 "OperatingSystem.c"
ComputerSystem_FillInArrivalTimeQueue(); 
#line 113 "OperatingSystem.c"
OperatingSystem_PrintStatus(); 
#line 117 "OperatingSystem.c"
OperatingSystem_LongTermScheduler(); 
#line 120 "OperatingSystem.c"
if (numberOfNotTerminatedUserProcesses == 0 && arrivalTimeQueue == 0){
{ 
#line 121 "OperatingSystem.c"
OperatingSystem_ReadyToShutdown(); } }
#line 124 "OperatingSystem.c"
if (strcmp((programList[processTable[sipID].programListIndex]->executableName), "SystemIdleProcess")){
{ 
#line 126 "OperatingSystem.c"
ComputerSystem_DebugMessage(99, 'd', "FATAL ERROR: Missing SIP program!\n"); 
#line 127 "OperatingSystem.c"
exit(1); } }
#line 134 "OperatingSystem.c"
selectedProcess = OperatingSystem_ShortTermScheduler(); 
#line 137 "OperatingSystem.c"
OperatingSystem_Dispatch(selectedProcess); 
#line 140 "OperatingSystem.c"
Processor_SetPC(OS_address_base); 
# 1680 "OperatingSystemAspect.c"

}

# 1684 "OperatingSystemAspect.c"

}
 
  void __utac_acc__Aspect__4 (void);


#line 145 "OperatingSystem.c"
void OperatingSystem_PrepareDaemons(int programListDaemonsBase)  
# 1693 "OperatingSystemAspect.c"
{



# 1698 "OperatingSystemAspect.c"
{

#line 148 "OperatingSystem.c"
programList[0] = (( PROGRAMS_DATA *)malloc(sizeof ( PROGRAMS_DATA ))); 
#line 150 "OperatingSystem.c"
(programList[0]->executableName) = "SystemIdleProcess"; 
#line 151 "OperatingSystem.c"
(programList[0]->arrivalTime) = 0; 
#line 152 "OperatingSystem.c"
(programList[0]->type) = DAEMONPROGRAM; 
#line 154 "OperatingSystem.c"
sipID = initialPID % 4; 
#line 158 "OperatingSystem.c"
baseDaemonsInProgramList = programListDaemonsBase; 
# 1713 "OperatingSystemAspect.c"

}

{
__utac_acc__Aspect__4();

}

# 1722 "OperatingSystemAspect.c"

}
 
#line 166 "OperatingSystem.c"
int OperatingSystem_LongTermScheduler()  
# 1728 "OperatingSystemAspect.c"
{
# 1730 "OperatingSystemAspect.c"
int retValue_acc;




# 1736 "OperatingSystemAspect.c"
{

#line 169 "OperatingSystem.c"

#line 169 "OperatingSystem.c"
int PID,i,numberOfSuccessfullyCreatedProcesses = 0;
#line 172 "OperatingSystem.c"
while(OperatingSystem_IsThereANewProgram() == 1) { { 
#line 173 "OperatingSystem.c"
i = Heap_poll(arrivalTimeQueue, 2, (&numberOfProgramsInArrivalTimeQueue)); 
#line 174 "OperatingSystem.c"
PID = OperatingSystem_CreateProcess(i); 
#line 175 "OperatingSystem.c"
switch(PID){ { 
#line 177 "OperatingSystem.c"
case ((-3)): OperatingSystem_ShowTime('e'); 
#line 178 "OperatingSystem.c"
ComputerSystem_DebugMessage(103, 'e', (programList[i]->executableName)); 
#line 179 "OperatingSystem.c"
break; 
#line 180 "OperatingSystem.c"
case ((-1)): OperatingSystem_ShowTime('e'); 
#line 182 "OperatingSystem.c"
ComputerSystem_DebugMessage(104, 'e', (programList[i]->executableName), "it does not exist"); 
#line 183 "OperatingSystem.c"
break; 
#line 184 "OperatingSystem.c"
case ((-2)): OperatingSystem_ShowTime('e'); 
#line 186 "OperatingSystem.c"
ComputerSystem_DebugMessage(104, 'e', (programList[i]->executableName), "invalid priority or size"); 
#line 187 "OperatingSystem.c"
break; 
#line 188 "OperatingSystem.c"
case ((-4)): OperatingSystem_ShowTime('e'); 
#line 190 "OperatingSystem.c"
ComputerSystem_DebugMessage(105, 'e', (programList[i]->executableName), "is too big"); 
#line 191 "OperatingSystem.c"
break; 
#line 192 "OperatingSystem.c"
case ((-5)): OperatingSystem_ShowTime('e'); 
#line 194 "OperatingSystem.c"
ComputerSystem_DebugMessage(144, 'e', (programList[i]->executableName)); 
#line 195 "OperatingSystem.c"
break; 
#line 196 "OperatingSystem.c"
default: numberOfSuccessfullyCreatedProcesses++; 
#line 198 "OperatingSystem.c"
if ((programList[i]->type) == USERPROGRAM){
{ 
#line 199 "OperatingSystem.c"
numberOfNotTerminatedUserProcesses++; 
#line 201 "OperatingSystem.c"
OperatingSystem_MoveToTheREADYState(PID, USERPROCESSQUEUE); } }else{
{ 
#line 204 "OperatingSystem.c"
OperatingSystem_MoveToTheREADYState(PID, DAEMONSQUEUE); } }} } } } 
#line 208 "OperatingSystem.c"
if (numberOfSuccessfullyCreatedProcesses >= 1){
OperatingSystem_PrintStatus(); }
#line 211 "OperatingSystem.c"
if (numberOfNotTerminatedUserProcesses == 0 && numberOfProgramsInArrivalTimeQueue == 0){
OperatingSystem_ReadyToShutdown(); }
#line 215 "OperatingSystem.c"

# 1801 "OperatingSystemAspect.c"
retValue_acc = numberOfSuccessfullyCreatedProcesses;
# 1803 "OperatingSystemAspect.c"
return (int )retValue_acc;
 
# 1806 "OperatingSystemAspect.c"

}

# 1810 "OperatingSystemAspect.c"
return (int )retValue_acc;

# 1813 "OperatingSystemAspect.c"

}
 
#line 220 "OperatingSystem.c"
int OperatingSystem_CreateProcess(int indexOfExecutableProgram)  
# 1819 "OperatingSystemAspect.c"
{
# 1821 "OperatingSystemAspect.c"
int retValue_acc;




# 1827 "OperatingSystemAspect.c"
{

#line 222 "OperatingSystem.c"

#line 222 "OperatingSystem.c"
int PID;
#line 223 "OperatingSystem.c"

#line 223 "OperatingSystem.c"
int processSize;
#line 224 "OperatingSystem.c"

#line 224 "OperatingSystem.c"
int loadingPhysicalAddress;
#line 225 "OperatingSystem.c"

#line 225 "OperatingSystem.c"
int priority;
#line 226 "OperatingSystem.c"

#line 226 "OperatingSystem.c"
 FILE *programFile;
#line 227 "OperatingSystem.c"

#line 227 "OperatingSystem.c"
 PROGRAMS_DATA *executableProgram = programList[indexOfExecutableProgram];
#line 228 "OperatingSystem.c"

#line 228 "OperatingSystem.c"
int partition;
#line 231 "OperatingSystem.c"
PID = OperatingSystem_ObtainAnEntryInTheProcessTable(); 
#line 232 "OperatingSystem.c"
if (PID == (-3)){
{ 
#line 233 "OperatingSystem.c"

# 1865 "OperatingSystemAspect.c"
retValue_acc = (-3);
# 1867 "OperatingSystemAspect.c"
return (int )retValue_acc;
 } }
#line 237 "OperatingSystem.c"
processSize = OperatingSystem_ObtainProgramSize((&programFile), (executableProgram->executableName)); 
#line 238 "OperatingSystem.c"
if (processSize == (-1)){
{ 
#line 239 "OperatingSystem.c"

# 1877 "OperatingSystemAspect.c"
retValue_acc = (-1);
# 1879 "OperatingSystemAspect.c"
return (int )retValue_acc;
 } }
#line 241 "OperatingSystem.c"
if (processSize == (-2)){
{ 
#line 242 "OperatingSystem.c"

# 1887 "OperatingSystemAspect.c"
retValue_acc = (-2);
# 1889 "OperatingSystemAspect.c"
return (int )retValue_acc;
 } }
#line 247 "OperatingSystem.c"
priority = OperatingSystem_ObtainPriority(programFile); 
#line 248 "OperatingSystem.c"
if (priority == (-2)){
{ 
#line 249 "OperatingSystem.c"

# 1899 "OperatingSystemAspect.c"
retValue_acc = (-2);
# 1901 "OperatingSystemAspect.c"
return (int )retValue_acc;
 } }
#line 252 "OperatingSystem.c"
partition = OperatingSystem_ObtainMainMemory(processSize, PID, (executableProgram->executableName)); 
#line 255 "OperatingSystem.c"
loadingPhysicalAddress = partitionsTable[partition].initAddress; 
#line 257 "OperatingSystem.c"
OperatingSystem_ShowPartitionTable(allocating[0]); 
#line 259 "OperatingSystem.c"
partitionsTable[partition].PID = PID; 
#line 262 "OperatingSystem.c"
OperatingSystem_ShowTime('m'); 
#line 263 "OperatingSystem.c"
ComputerSystem_DebugMessage(143, 'm', partition, loadingPhysicalAddress, partitionsTable[partition].size, PID, (executableProgram->executableName)); 
#line 265 "OperatingSystem.c"
if (partition == (-4)){

# 1919 "OperatingSystemAspect.c"
retValue_acc = (-4);
# 1921 "OperatingSystemAspect.c"
return (int )retValue_acc;
 }
#line 267 "OperatingSystem.c"
if (partition == (-5)){

# 1927 "OperatingSystemAspect.c"
retValue_acc = (-5);
# 1929 "OperatingSystemAspect.c"
return (int )retValue_acc;
 }
#line 271 "OperatingSystem.c"
OperatingSystem_PCBInitialization(PID, loadingPhysicalAddress, processSize, priority, indexOfExecutableProgram); 
#line 273 "OperatingSystem.c"
OperatingSystem_ShowPartitionTable(allocating[1]); 
#line 277 "OperatingSystem.c"
if ((-4) == OperatingSystem_LoadProgram(programFile, loadingPhysicalAddress, processSize)){
{ 
#line 278 "OperatingSystem.c"

# 1941 "OperatingSystemAspect.c"
retValue_acc = (-4);
# 1943 "OperatingSystemAspect.c"
return (int )retValue_acc;
 } }
#line 282 "OperatingSystem.c"
OperatingSystem_ShowTime('t'); 
#line 283 "OperatingSystem.c"
ComputerSystem_DebugMessage(70, 't', PID, (executableProgram->executableName)); 
#line 285 "OperatingSystem.c"

# 1952 "OperatingSystemAspect.c"
retValue_acc = PID;
# 1954 "OperatingSystemAspect.c"
return (int )retValue_acc;
 
# 1957 "OperatingSystemAspect.c"

}

# 1961 "OperatingSystemAspect.c"
return (int )retValue_acc;

# 1964 "OperatingSystemAspect.c"

}
 
#line 291 "OperatingSystem.c"
int OperatingSystem_ObtainMainMemory(int processSize, int PID, char *name)  
# 1970 "OperatingSystemAspect.c"
{
# 1972 "OperatingSystemAspect.c"
int retValue_acc;




# 1978 "OperatingSystemAspect.c"
{

#line 292 "OperatingSystem.c"

#line 292 "OperatingSystem.c"
int i = 0,particion = (-1),size = 300,biggest = 0;
#line 294 "OperatingSystem.c"
OperatingSystem_ShowTime('m'); 
#line 295 "OperatingSystem.c"
ComputerSystem_DebugMessage(142, 'm', PID, name, processSize); 
#line 298 "OperatingSystem.c"
for(i = 0;i < 4 * 2;i++) { { 
#line 302 "OperatingSystem.c"
if (partitionsTable[i].size > biggest){
{ 
#line 300 "OperatingSystem.c"
biggest = partitionsTable[i].size; } }} } 
#line 304 "OperatingSystem.c"
if (processSize > biggest){
{ 
#line 305 "OperatingSystem.c"

# 2001 "OperatingSystemAspect.c"
retValue_acc = (-4);
# 2003 "OperatingSystemAspect.c"
return (int )retValue_acc;
 } }
#line 309 "OperatingSystem.c"
for(i = 0;i < 4 * 2;i++) { { 
#line 315 "OperatingSystem.c"
if (partitionsTable[i].PID == (-1) && partitionsTable[i].size >= processSize && partitionsTable[i].size < size){
{ 
#line 312 "OperatingSystem.c"
particion = i; 
#line 313 "OperatingSystem.c"
size = partitionsTable[i].size; } }} } 
#line 318 "OperatingSystem.c"
if (particion < 0){
{ 
#line 319 "OperatingSystem.c"

# 2020 "OperatingSystemAspect.c"
retValue_acc = (-5);
# 2022 "OperatingSystemAspect.c"
return (int )retValue_acc;
 } }
#line 322 "OperatingSystem.c"

# 2027 "OperatingSystemAspect.c"
retValue_acc = particion;
# 2029 "OperatingSystemAspect.c"
return (int )retValue_acc;
 
# 2032 "OperatingSystemAspect.c"

}

# 2036 "OperatingSystemAspect.c"
return (int )retValue_acc;

# 2039 "OperatingSystemAspect.c"

}
 
#line 326 "OperatingSystem.c"
void OperatingSystem_PCBInitialization(int PID, int initialPhysicalAddress, int processSize, int priority, int processPLIndex)  
# 2045 "OperatingSystemAspect.c"
{



# 2050 "OperatingSystemAspect.c"
{

#line 328 "OperatingSystem.c"
processTable[PID].busy = 1; 
#line 329 "OperatingSystem.c"
processTable[PID].initialPhysicalAddress = initialPhysicalAddress; 
#line 330 "OperatingSystem.c"
processTable[PID].processSize = processSize; 
#line 331 "OperatingSystem.c"
processTable[PID].state = NEW; 
#line 332 "OperatingSystem.c"
processTable[PID].priority = priority; 
#line 333 "OperatingSystem.c"
processTable[PID].programListIndex = processPLIndex; 
#line 335 "OperatingSystem.c"
if ((programList[processPLIndex]->type) == DAEMONPROGRAM){
{ 
#line 336 "OperatingSystem.c"
processTable[PID].copyOfPCRegister = initialPhysicalAddress; 
#line 337 "OperatingSystem.c"
processTable[PID].copyOfPSWRegister = (((unsigned int )1)) << EXECUTION_MODE_BIT; 
#line 338 "OperatingSystem.c"
processTable[PID].queueID = DAEMONSQUEUE; } }else{
{ 
#line 341 "OperatingSystem.c"
processTable[PID].copyOfPCRegister = 0; 
#line 342 "OperatingSystem.c"
processTable[PID].copyOfPSWRegister = 0; 
#line 343 "OperatingSystem.c"
processTable[PID].queueID = USERPROCESSQUEUE; } }
#line 346 "OperatingSystem.c"
OperatingSystem_ShowTime('p'); 
#line 347 "OperatingSystem.c"
ComputerSystem_DebugMessage(111, 'p', PID, (programList[processTable[PID].programListIndex]->executableName)); 
# 2085 "OperatingSystemAspect.c"

}

# 2089 "OperatingSystemAspect.c"

}
 
#line 353 "OperatingSystem.c"
void OperatingSystem_MoveToTheREADYState(int PID, int queueID)  
# 2095 "OperatingSystemAspect.c"
{



# 2100 "OperatingSystemAspect.c"
{

#line 354 "OperatingSystem.c"

#line 354 "OperatingSystem.c"
int anterior = processTable[PID].state;
#line 355 "OperatingSystem.c"
if (Heap_add(PID, readyToRunQueue[queueID], 1, (&numberOfReadyToRunProcesses[queueID]), 4) >= 0){
{ 
#line 357 "OperatingSystem.c"
OperatingSystem_ShowTime('p'); 
#line 358 "OperatingSystem.c"
ComputerSystem_DebugMessage(110, 'p', PID, (programList[processTable[PID].programListIndex]->executableName), statesNames[anterior], statesNames[1]); 
#line 359 "OperatingSystem.c"
processTable[PID].state = READY; } }
# 2116 "OperatingSystemAspect.c"

}

# 2120 "OperatingSystemAspect.c"

}
 
#line 368 "OperatingSystem.c"
int OperatingSystem_ShortTermScheduler()  
# 2126 "OperatingSystemAspect.c"
{
# 2128 "OperatingSystemAspect.c"
int retValue_acc;




# 2134 "OperatingSystemAspect.c"
{

#line 370 "OperatingSystem.c"

#line 370 "OperatingSystem.c"
int selectedProcess;
#line 372 "OperatingSystem.c"
selectedProcess = OperatingSystem_ExtractFromReadyToRun(); 
#line 374 "OperatingSystem.c"

# 2145 "OperatingSystemAspect.c"
retValue_acc = selectedProcess;
# 2147 "OperatingSystemAspect.c"
return (int )retValue_acc;
 
# 2150 "OperatingSystemAspect.c"

}

# 2154 "OperatingSystemAspect.c"
return (int )retValue_acc;

# 2157 "OperatingSystemAspect.c"

}
 
#line 379 "OperatingSystem.c"
int OperatingSystem_ExtractFromReadyToRun()  
# 2163 "OperatingSystemAspect.c"
{
# 2165 "OperatingSystemAspect.c"
int retValue_acc;




# 2171 "OperatingSystemAspect.c"
{

#line 381 "OperatingSystem.c"

#line 381 "OperatingSystem.c"
int selectedProcess = (-1);
#line 383 "OperatingSystem.c"
selectedProcess = Heap_poll(readyToRunQueue[USERPROCESSQUEUE], 1, (&numberOfReadyToRunProcesses[USERPROCESSQUEUE])); 
#line 384 "OperatingSystem.c"
if (selectedProcess < 0){
{ 
#line 385 "OperatingSystem.c"
selectedProcess = Heap_poll(readyToRunQueue[DAEMONSQUEUE], 1, (&numberOfReadyToRunProcesses[DAEMONSQUEUE])); } }
#line 391 "OperatingSystem.c"

# 2187 "OperatingSystemAspect.c"
retValue_acc = selectedProcess;
# 2189 "OperatingSystemAspect.c"
return (int )retValue_acc;
 
# 2192 "OperatingSystemAspect.c"

}

# 2196 "OperatingSystemAspect.c"
return (int )retValue_acc;

# 2199 "OperatingSystemAspect.c"

}
 
#line 396 "OperatingSystem.c"
void OperatingSystem_Dispatch(int PID)  
# 2205 "OperatingSystemAspect.c"
{



# 2210 "OperatingSystemAspect.c"
{

#line 399 "OperatingSystem.c"
executingProcessID = PID; 
#line 402 "OperatingSystem.c"
processTable[PID].state = EXECUTING; 
#line 403 "OperatingSystem.c"
OperatingSystem_ShowTime('p'); 
#line 404 "OperatingSystem.c"
ComputerSystem_DebugMessage(110, 'p', PID, (programList[processTable[PID].programListIndex]->executableName), statesNames[1], statesNames[processTable[PID].state]); 
#line 406 "OperatingSystem.c"
OperatingSystem_RestoreContext(PID); 
# 2223 "OperatingSystemAspect.c"

}

# 2227 "OperatingSystemAspect.c"

}
 
#line 411 "OperatingSystem.c"
void OperatingSystem_RestoreContext(int PID)  
# 2233 "OperatingSystemAspect.c"
{



# 2238 "OperatingSystemAspect.c"
{

#line 414 "OperatingSystem.c"
Processor_CopyInSystemStack(300 - 1, processTable[PID].copyOfPCRegister); 
#line 415 "OperatingSystem.c"
Processor_CopyInSystemStack(300 - 2, processTable[PID].copyOfPSWRegister); 
#line 416 "OperatingSystem.c"
Processor_SetAccumulator(processTable[PID].copyOfAccumulator); 
#line 418 "OperatingSystem.c"
MMU_SetBase(processTable[PID].initialPhysicalAddress); 
#line 419 "OperatingSystem.c"
MMU_SetLimit(processTable[PID].processSize); 
# 2251 "OperatingSystemAspect.c"

}

# 2255 "OperatingSystemAspect.c"

}
 
#line 424 "OperatingSystem.c"
void OperatingSystem_PreemptRunningProcess()  
# 2261 "OperatingSystemAspect.c"
{



# 2266 "OperatingSystemAspect.c"
{

#line 427 "OperatingSystem.c"
OperatingSystem_SaveContext(executingProcessID); 
#line 429 "OperatingSystem.c"
OperatingSystem_MoveToTheREADYState(executingProcessID, processTable[executingProcessID].queueID); 
#line 431 "OperatingSystem.c"
executingProcessID = (-1); 
# 2275 "OperatingSystemAspect.c"

}

# 2279 "OperatingSystemAspect.c"

}
 
#line 436 "OperatingSystem.c"
void OperatingSystem_SaveContext(int PID)  
# 2285 "OperatingSystemAspect.c"
{



# 2290 "OperatingSystemAspect.c"
{

#line 439 "OperatingSystem.c"
processTable[PID].copyOfPCRegister = Processor_CopyFromSystemStack(300 - 1); 
#line 442 "OperatingSystem.c"
processTable[PID].copyOfPSWRegister = Processor_CopyFromSystemStack(300 - 2); 
#line 444 "OperatingSystem.c"
processTable[PID].copyOfAccumulator = Processor_GetAccumulator(); 
# 2299 "OperatingSystemAspect.c"

}

# 2303 "OperatingSystemAspect.c"

}
 
#line 450 "OperatingSystem.c"
void OperatingSystem_HandleException()  
# 2309 "OperatingSystemAspect.c"
{



# 2314 "OperatingSystemAspect.c"
{

#line 456 "OperatingSystem.c"
OperatingSystem_ShowTime('i'); 
#line 457 "OperatingSystem.c"

#line 457 "OperatingSystem.c"
int exception = Processor_GetException();
#line 458 "OperatingSystem.c"
ComputerSystem_DebugMessage(140, 'i', executingProcessID, (programList[processTable[executingProcessID].programListIndex]->executableName), exceptions[exception]); 
#line 460 "OperatingSystem.c"
OperatingSystem_TerminateProcess(); 
#line 461 "OperatingSystem.c"
OperatingSystem_PrintStatus(); 
# 2329 "OperatingSystemAspect.c"

}

# 2333 "OperatingSystemAspect.c"

}
 
#line 466 "OperatingSystem.c"
void OperatingSystem_TerminateProcess()  
# 2339 "OperatingSystemAspect.c"
{



# 2344 "OperatingSystemAspect.c"
{

#line 468 "OperatingSystem.c"

#line 468 "OperatingSystem.c"
int selectedProcess;
#line 470 "OperatingSystem.c"
processTable[executingProcessID].state = EXIT; 
#line 472 "OperatingSystem.c"
OperatingSystem_ShowTime('p'); 
#line 473 "OperatingSystem.c"
ComputerSystem_DebugMessage(110, 'p', executingProcessID, (programList[processTable[executingProcessID].programListIndex]->executableName), statesNames[2], statesNames[processTable[executingProcessID].state]); 
#line 475 "OperatingSystem.c"
OperatingSystem_ReleaseMainMemory(); 
#line 477 "OperatingSystem.c"
if ((programList[processTable[executingProcessID].programListIndex]->type) == USERPROGRAM){
numberOfNotTerminatedUserProcesses--; }
#line 481 "OperatingSystem.c"
if (numberOfNotTerminatedUserProcesses == 0){
{ 
#line 490 "OperatingSystem.c"
if (executingProcessID == sipID){
{ 
#line 484 "OperatingSystem.c"
OperatingSystem_TerminatingSIP(); 
#line 485 "OperatingSystem.c"
OperatingSystem_ShowTime('d'); 
#line 486 "OperatingSystem.c"
ComputerSystem_DebugMessage(99, 'd', "The system will shut down now...\n"); 
#line 487 "OperatingSystem.c"
return ; 
 } }
#line 490 "OperatingSystem.c"
if (numberOfProgramsInArrivalTimeQueue == 0){
OperatingSystem_ReadyToShutdown(); }} }
#line 494 "OperatingSystem.c"
selectedProcess = OperatingSystem_ShortTermScheduler(); 
#line 497 "OperatingSystem.c"
OperatingSystem_Dispatch(selectedProcess); 
# 2384 "OperatingSystemAspect.c"

}

# 2388 "OperatingSystemAspect.c"

}
 
#line 501 "OperatingSystem.c"
void OperatingSystem_ReleaseMainMemory()  
# 2394 "OperatingSystemAspect.c"
{



# 2399 "OperatingSystemAspect.c"
{

#line 502 "OperatingSystem.c"

#line 502 "OperatingSystem.c"
int i;
#line 503 "OperatingSystem.c"
for(i = 0;i <= 4 * 2;i++) { { 
#line 514 "OperatingSystem.c"
if (partitionsTable[i].PID == executingProcessID && partitionsTable[i].PID != (-1)){
{ 
#line 505 "OperatingSystem.c"
OperatingSystem_ShowPartitionTable(allocating2[0]); 
#line 506 "OperatingSystem.c"
partitionsTable[i].PID = (-1); 
#line 507 "OperatingSystem.c"
OperatingSystem_ShowTime('m'); 
#line 508 "OperatingSystem.c"
ComputerSystem_DebugMessage(145, 'm', i, partitionsTable[i].initAddress, partitionsTable[i].size, executingProcessID, (programList[processTable[executingProcessID].programListIndex]->executableName)); 
#line 511 "OperatingSystem.c"
OperatingSystem_ShowPartitionTable(allocating2[1]); 
#line 512 "OperatingSystem.c"
break; } }} } 
# 2423 "OperatingSystemAspect.c"

}

# 2427 "OperatingSystemAspect.c"

}
 
#line 518 "OperatingSystem.c"
void OperatingSystem_HandleSystemCall()  
# 2433 "OperatingSystemAspect.c"
{



# 2438 "OperatingSystemAspect.c"
{

#line 520 "OperatingSystem.c"

#line 520 "OperatingSystem.c"
int systemCallID,queueID,process;
#line 523 "OperatingSystem.c"
systemCallID = Processor_GetRegisterA(); 
#line 525 "OperatingSystem.c"
switch(systemCallID){ { 
#line 528 "OperatingSystem.c"
case SYSCALL_PRINTEXECPID: OperatingSystem_ShowTime('p'); 
#line 529 "OperatingSystem.c"
ComputerSystem_DebugMessage(72, 'p', executingProcessID, (programList[processTable[executingProcessID].programListIndex]->executableName)); 
#line 530 "OperatingSystem.c"
break; 
#line 532 "OperatingSystem.c"
case SYSCALL_END: OperatingSystem_ShowTime('p'); 
#line 535 "OperatingSystem.c"
ComputerSystem_DebugMessage(73, 'p', executingProcessID, (programList[processTable[executingProcessID].programListIndex]->executableName)); 
#line 536 "OperatingSystem.c"
OperatingSystem_TerminateProcess(); 
#line 537 "OperatingSystem.c"
OperatingSystem_PrintStatus(); 
#line 538 "OperatingSystem.c"
break; 
#line 540 "OperatingSystem.c"
case SYSCALL_YIELD: queueID = processTable[executingProcessID].queueID; 
#line 542 "OperatingSystem.c"
if (numberOfReadyToRunProcesses[queueID] > 0){
{ 
#line 543 "OperatingSystem.c"
process = Heap_getFirst(readyToRunQueue[queueID], numberOfReadyToRunProcesses[queueID]); 
#line 544 "OperatingSystem.c"
if (process != (-1)){
{ 
#line 555 "OperatingSystem.c"
if (processTable[executingProcessID].priority == processTable[process].priority){
{ 
#line 546 "OperatingSystem.c"
Heap_poll(readyToRunQueue[queueID], 1, (&numberOfReadyToRunProcesses[queueID])); 
#line 547 "OperatingSystem.c"
OperatingSystem_ShowTime('s'); 
#line 548 "OperatingSystem.c"
ComputerSystem_DebugMessage(115, 's', executingProcessID, (programList[processTable[executingProcessID].programListIndex]->executableName), process, (programList[processTable[process].programListIndex]->executableName)); 
#line 551 "OperatingSystem.c"
OperatingSystem_PreemptRunningProcess(); 
#line 552 "OperatingSystem.c"
OperatingSystem_Dispatch(process); 
#line 553 "OperatingSystem.c"
OperatingSystem_PrintStatus(); } }} }} }
#line 557 "OperatingSystem.c"
break; 
#line 558 "OperatingSystem.c"
case SYSCALL_SLEEP: OperatingSystem_MoveToTheBLOCKState(); 
#line 560 "OperatingSystem.c"
process = OperatingSystem_ShortTermScheduler(); 
#line 561 "OperatingSystem.c"
OperatingSystem_Dispatch(process); 
#line 562 "OperatingSystem.c"
OperatingSystem_PrintStatus(); 
#line 563 "OperatingSystem.c"
break; 
#line 564 "OperatingSystem.c"
default: OperatingSystem_ShowTime('i'); 
#line 566 "OperatingSystem.c"
ComputerSystem_DebugMessage(141, 'i', executingProcessID, (programList[processTable[executingProcessID].programListIndex]->executableName), systemCallID); 
#line 567 "OperatingSystem.c"
OperatingSystem_TerminateProcess(); 
#line 568 "OperatingSystem.c"
OperatingSystem_PrintStatus(); 
#line 569 "OperatingSystem.c"
break; } } 
# 2512 "OperatingSystemAspect.c"

}

# 2516 "OperatingSystemAspect.c"

}
 
  void __utac_acc__Aspect__3 (void);


#line 575 "OperatingSystem.c"
void OperatingSystem_InterruptLogic(int entryPoint)  
# 2525 "OperatingSystemAspect.c"
{



{
__utac_acc__Aspect__3();

}

# 2535 "OperatingSystemAspect.c"
{

#line 586 "OperatingSystem.c"
switch(entryPoint){ { 
#line 578 "OperatingSystem.c"
case SYSCALL_BIT: OperatingSystem_HandleSystemCall(); 
#line 579 "OperatingSystem.c"
break; 
#line 580 "OperatingSystem.c"
case EXCEPTION_BIT: OperatingSystem_HandleException(); 
#line 582 "OperatingSystem.c"
break; 
#line 583 "OperatingSystem.c"
case CLOCKINT_BIT: OperatingSystem_HandleClockInterrupt(); 
#line 585 "OperatingSystem.c"
break; } } 
# 2552 "OperatingSystemAspect.c"

}

# 2556 "OperatingSystemAspect.c"

}
 
#line 594 "OperatingSystem.c"
void OperatingSystem_PrintReadyToRunQueue()  
# 2562 "OperatingSystemAspect.c"
{



# 2567 "OperatingSystemAspect.c"
{

#line 595 "OperatingSystem.c"

#line 595 "OperatingSystem.c"
int i,PID,j;
#line 596 "OperatingSystem.c"
OperatingSystem_ShowTime('s'); 
#line 597 "OperatingSystem.c"
ComputerSystem_DebugMessage(106, 's'); 
#line 598 "OperatingSystem.c"
for(i = 0;i < 2;i++) { { 
#line 617 "OperatingSystem.c"
if (i == USERPROCESSQUEUE){
{ 
#line 606 "OperatingSystem.c"
if (numberOfReadyToRunProcesses[i] != 0){
{ 
#line 601 "OperatingSystem.c"
ComputerSystem_DebugMessage(112, 's'); } }else{
{ 
#line 604 "OperatingSystem.c"
ComputerSystem_DebugMessage(112, 's'); 
#line 605 "OperatingSystem.c"
ComputerSystem_DebugMessage(108, 's'); } }
#line 607 "OperatingSystem.c"
for(j = 0;j < numberOfReadyToRunProcesses[i];j++) { { 
#line 608 "OperatingSystem.c"
PID = readyToRunQueue[i][j].info; 
#line 609 "OperatingSystem.c"
if (j == numberOfReadyToRunProcesses[i] - 1){
{ 
#line 610 "OperatingSystem.c"
ComputerSystem_DebugMessage(107, 's', PID, processTable[PID].priority, "\n"); } }else{
{ 
#line 613 "OperatingSystem.c"
ComputerSystem_DebugMessage(107, 's', PID, processTable[PID].priority, ","); } }} } } }
#line 617 "OperatingSystem.c"
if (i == DAEMONSQUEUE){
{ 
#line 623 "OperatingSystem.c"
if (numberOfReadyToRunProcesses[i] != 0){
ComputerSystem_DebugMessage(113, 's'); }else{
{ 
#line 621 "OperatingSystem.c"
ComputerSystem_DebugMessage(113, 's'); 
#line 622 "OperatingSystem.c"
ComputerSystem_DebugMessage(108, 's'); } }
#line 624 "OperatingSystem.c"
for(j = 0;j < numberOfReadyToRunProcesses[i];j++) { { 
#line 625 "OperatingSystem.c"
PID = readyToRunQueue[i][j].info; 
#line 626 "OperatingSystem.c"
if (j == numberOfReadyToRunProcesses[i] - 1){
{ 
#line 627 "OperatingSystem.c"
ComputerSystem_DebugMessage(107, 's', PID, processTable[PID].priority, "\n"); } }else{
{ 
#line 630 "OperatingSystem.c"
ComputerSystem_DebugMessage(107, 's', PID, processTable[PID].priority, ","); } }} } } }} } 
# 2628 "OperatingSystemAspect.c"

}

# 2632 "OperatingSystemAspect.c"

}
 
#line 642 "OperatingSystem.c"
void OperatingSystem_HandleClockInterrupt()  
# 2638 "OperatingSystemAspect.c"
{



# 2643 "OperatingSystemAspect.c"
{

#line 643 "OperatingSystem.c"

#line 643 "OperatingSystem.c"
int process,changeQueue,queueToExecute,unlocked;
#line 645 "OperatingSystem.c"
OperatingSystem_ShowTime('i'); 
#line 646 "OperatingSystem.c"
numberOfClockInterrupts++; 
#line 647 "OperatingSystem.c"
ComputerSystem_DebugMessage(120, 'i', numberOfClockInterrupts); 
#line 649 "OperatingSystem.c"
process = Heap_getFirst(sleepingProcessesQueue, numberOfSleepingProcesses); 
#line 650 "OperatingSystem.c"
while(processTable[process].whenToWakeUp == numberOfClockInterrupts) { { 
#line 651 "OperatingSystem.c"
OperatingSystem_ExtractFromBlocked(); 
#line 652 "OperatingSystem.c"
OperatingSystem_MoveToTheREADYState(process, processTable[executingProcessID].queueID); 
#line 653 "OperatingSystem.c"
process = Heap_getFirst(sleepingProcessesQueue, numberOfSleepingProcesses); 
#line 654 "OperatingSystem.c"
unlocked = 1; } } 
#line 659 "OperatingSystem.c"
if (unlocked == 1){
{ 
#line 659 "OperatingSystem.c"
OperatingSystem_PrintStatus(); } }
#line 661 "OperatingSystem.c"

#line 661 "OperatingSystem.c"
int newProcess = OperatingSystem_LongTermScheduler();
#line 662 "OperatingSystem.c"
if (unlocked || newProcess > 0){
{ 
#line 663 "OperatingSystem.c"
queueToExecute = OperatingSystem_CheckQueue(); 
#line 664 "OperatingSystem.c"
if (queueToExecute != (-1)){
{ 
#line 665 "OperatingSystem.c"
changeQueue = Heap_getFirst(readyToRunQueue[queueToExecute], numberOfReadyToRunProcesses[queueToExecute]); 
#line 667 "OperatingSystem.c"
if (OperatingSystem_CheckExecutingPriority(changeQueue)){
{ 
#line 669 "OperatingSystem.c"
OperatingSystem_ShowTime('s'); 
#line 670 "OperatingSystem.c"
ComputerSystem_DebugMessage(121, 's', executingProcessID, (programList[processTable[executingProcessID].programListIndex]->executableName), changeQueue, (programList[processTable[changeQueue].programListIndex]->executableName)); 
#line 671 "OperatingSystem.c"
OperatingSystem_PreemptRunningProcess(); 
#line 672 "OperatingSystem.c"
OperatingSystem_Dispatch(OperatingSystem_ShortTermScheduler()); 
#line 673 "OperatingSystem.c"
OperatingSystem_PrintStatus(); } }} }} }else{
{ 
#line 681 "OperatingSystem.c"
if (OperatingSystem_IsThereANewProgram() == 0){
{ 
#line 678 "OperatingSystem.c"
OperatingSystem_ReadyToShutdown(); } }} }
# 2706 "OperatingSystemAspect.c"

}

# 2710 "OperatingSystemAspect.c"

}
 
#line 688 "OperatingSystem.c"
int OperatingSystem_ExtractFromBlocked()  
# 2716 "OperatingSystemAspect.c"
{
# 2718 "OperatingSystemAspect.c"
int retValue_acc;




# 2724 "OperatingSystemAspect.c"
{

#line 689 "OperatingSystem.c"

#line 689 "OperatingSystem.c"
int selectedProcess = (-1);
#line 690 "OperatingSystem.c"
selectedProcess = Heap_poll(sleepingProcessesQueue, 0, (&numberOfSleepingProcesses)); 
#line 692 "OperatingSystem.c"

# 2735 "OperatingSystemAspect.c"
retValue_acc = selectedProcess;
# 2737 "OperatingSystemAspect.c"
return (int )retValue_acc;
 
# 2740 "OperatingSystemAspect.c"

}

# 2744 "OperatingSystemAspect.c"
return (int )retValue_acc;

# 2747 "OperatingSystemAspect.c"

}
 
#line 695 "OperatingSystem.c"
int OperatingSystem_CheckQueue()  
# 2753 "OperatingSystemAspect.c"
{
# 2755 "OperatingSystemAspect.c"
int retValue_acc;




# 2761 "OperatingSystemAspect.c"
{

#line 700 "OperatingSystem.c"
if (numberOfReadyToRunProcesses[USERPROCESSQUEUE] > 0){

# 2767 "OperatingSystemAspect.c"
retValue_acc = USERPROCESSQUEUE;
# 2769 "OperatingSystemAspect.c"
return (int )retValue_acc;
 }else{
if (numberOfReadyToRunProcesses[DAEMONSQUEUE] > 0){

# 2774 "OperatingSystemAspect.c"
retValue_acc = DAEMONSQUEUE;
# 2776 "OperatingSystemAspect.c"
return (int )retValue_acc;
 }}
#line 700 "OperatingSystem.c"

# 2781 "OperatingSystemAspect.c"
retValue_acc = (-1);
# 2783 "OperatingSystemAspect.c"
return (int )retValue_acc;
 
# 2786 "OperatingSystemAspect.c"

}

# 2790 "OperatingSystemAspect.c"
return (int )retValue_acc;

# 2793 "OperatingSystemAspect.c"

}
 
#line 703 "OperatingSystem.c"
int OperatingSystem_CheckExecutingPriority(int process)  
# 2799 "OperatingSystemAspect.c"
{
# 2801 "OperatingSystemAspect.c"
int retValue_acc;




# 2807 "OperatingSystemAspect.c"
{

#line 711 "OperatingSystem.c"
if ((processTable[executingProcessID].queueID == processTable[process].queueID && processTable[process].priority < processTable[executingProcessID].priority) || (processTable[executingProcessID].queueID != processTable[process].queueID && processTable[executingProcessID].queueID == DAEMONSQUEUE)){

# 2813 "OperatingSystemAspect.c"
retValue_acc = 1;
# 2815 "OperatingSystemAspect.c"
return (int )retValue_acc;
 }else{

# 2819 "OperatingSystemAspect.c"
retValue_acc = 0;
# 2821 "OperatingSystemAspect.c"
return (int )retValue_acc;
 }
# 2824 "OperatingSystemAspect.c"

}

# 2828 "OperatingSystemAspect.c"
return (int )retValue_acc;

# 2831 "OperatingSystemAspect.c"

}
 
#line 715 "OperatingSystem.c"
void OperatingSystem_MoveToTheBLOCKState()  
# 2837 "OperatingSystemAspect.c"
{



# 2842 "OperatingSystemAspect.c"
{

#line 723 "OperatingSystem.c"
if (Heap_add(executingProcessID, sleepingProcessesQueue, 0, (&numberOfSleepingProcesses), 4) >= 0){
{ 
#line 717 "OperatingSystem.c"
processTable[executingProcessID].state = BLOCKED; 
#line 718 "OperatingSystem.c"
processTable[executingProcessID].whenToWakeUp = abs(Processor_GetAccumulator()) + numberOfClockInterrupts + 1; 
#line 719 "OperatingSystem.c"
OperatingSystem_ShowTime('p'); 
#line 720 "OperatingSystem.c"
ComputerSystem_DebugMessage(110, 'p', executingProcessID, (programList[processTable[executingProcessID].programListIndex]->executableName), statesNames[2], statesNames[3]); 
#line 721 "OperatingSystem.c"
OperatingSystem_SaveContext(executingProcessID); } }
# 2858 "OperatingSystemAspect.c"

}

# 2862 "OperatingSystemAspect.c"

}
 
#line 727 "OperatingSystem.c"
int OperatingSystem_GetExecutingProcessID()  
# 2868 "OperatingSystemAspect.c"
{
# 2870 "OperatingSystemAspect.c"
int retValue_acc;




# 2876 "OperatingSystemAspect.c"
{

#line 728 "OperatingSystem.c"

# 2881 "OperatingSystemAspect.c"
retValue_acc = executingProcessID;
# 2883 "OperatingSystemAspect.c"
return (int )retValue_acc;
 
# 2886 "OperatingSystemAspect.c"

}

# 2890 "OperatingSystemAspect.c"
return (int )retValue_acc;

# 2893 "OperatingSystemAspect.c"

}
 
