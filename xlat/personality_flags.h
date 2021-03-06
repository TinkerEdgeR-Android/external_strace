/* Generated by ./xlat/gen.sh from ./xlat/personality_flags.in; do not edit. */
#if !(defined(UNAME26) || (defined(HAVE_DECL_UNAME26) && HAVE_DECL_UNAME26))
# define UNAME26 0x0020000
#endif
#if !(defined(ADDR_NO_RANDOMIZE) || (defined(HAVE_DECL_ADDR_NO_RANDOMIZE) && HAVE_DECL_ADDR_NO_RANDOMIZE))
# define ADDR_NO_RANDOMIZE 0x0040000
#endif
#if !(defined(FDPIC_FUNCPTRS) || (defined(HAVE_DECL_FDPIC_FUNCPTRS) && HAVE_DECL_FDPIC_FUNCPTRS))
# define FDPIC_FUNCPTRS 0x0080000
#endif
#if !(defined(MMAP_PAGE_ZERO) || (defined(HAVE_DECL_MMAP_PAGE_ZERO) && HAVE_DECL_MMAP_PAGE_ZERO))
# define MMAP_PAGE_ZERO 0x0100000
#endif
#if !(defined(ADDR_COMPAT_LAYOUT) || (defined(HAVE_DECL_ADDR_COMPAT_LAYOUT) && HAVE_DECL_ADDR_COMPAT_LAYOUT))
# define ADDR_COMPAT_LAYOUT 0x0200000
#endif
#if !(defined(READ_IMPLIES_EXEC) || (defined(HAVE_DECL_READ_IMPLIES_EXEC) && HAVE_DECL_READ_IMPLIES_EXEC))
# define READ_IMPLIES_EXEC 0x0400000
#endif
#if !(defined(ADDR_LIMIT_32BIT) || (defined(HAVE_DECL_ADDR_LIMIT_32BIT) && HAVE_DECL_ADDR_LIMIT_32BIT))
# define ADDR_LIMIT_32BIT 0x0800000
#endif
#if !(defined(SHORT_INODE) || (defined(HAVE_DECL_SHORT_INODE) && HAVE_DECL_SHORT_INODE))
# define SHORT_INODE 0x1000000
#endif
#if !(defined(WHOLE_SECONDS) || (defined(HAVE_DECL_WHOLE_SECONDS) && HAVE_DECL_WHOLE_SECONDS))
# define WHOLE_SECONDS 0x2000000
#endif
#if !(defined(STICKY_TIMEOUTS) || (defined(HAVE_DECL_STICKY_TIMEOUTS) && HAVE_DECL_STICKY_TIMEOUTS))
# define STICKY_TIMEOUTS 0x4000000
#endif
#if !(defined(ADDR_LIMIT_3GB) || (defined(HAVE_DECL_ADDR_LIMIT_3GB) && HAVE_DECL_ADDR_LIMIT_3GB))
# define ADDR_LIMIT_3GB 0x8000000
#endif

#ifdef IN_MPERS

# error static const struct xlat personality_flags in mpers mode

#else

static
const struct xlat personality_flags[] = {
 XLAT(UNAME26),
 XLAT(ADDR_NO_RANDOMIZE),
 XLAT(FDPIC_FUNCPTRS),
 XLAT(MMAP_PAGE_ZERO),
 XLAT(ADDR_COMPAT_LAYOUT),
 XLAT(READ_IMPLIES_EXEC),
 XLAT(ADDR_LIMIT_32BIT),
 XLAT(SHORT_INODE),
 XLAT(WHOLE_SECONDS),
 XLAT(STICKY_TIMEOUTS),
 XLAT(ADDR_LIMIT_3GB),
 XLAT_END
};

#endif /* !IN_MPERS */
