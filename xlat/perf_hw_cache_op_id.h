/* Generated by ./xlat/gen.sh from ./xlat/perf_hw_cache_op_id.in; do not edit. */
#if !(defined(PERF_COUNT_HW_CACHE_OP_READ) || (defined(HAVE_DECL_PERF_COUNT_HW_CACHE_OP_READ) && HAVE_DECL_PERF_COUNT_HW_CACHE_OP_READ))
# define PERF_COUNT_HW_CACHE_OP_READ 0
#endif
#if !(defined(PERF_COUNT_HW_CACHE_OP_WRITE) || (defined(HAVE_DECL_PERF_COUNT_HW_CACHE_OP_WRITE) && HAVE_DECL_PERF_COUNT_HW_CACHE_OP_WRITE))
# define PERF_COUNT_HW_CACHE_OP_WRITE 1
#endif
#if !(defined(PERF_COUNT_HW_CACHE_OP_PREFETCH) || (defined(HAVE_DECL_PERF_COUNT_HW_CACHE_OP_PREFETCH) && HAVE_DECL_PERF_COUNT_HW_CACHE_OP_PREFETCH))
# define PERF_COUNT_HW_CACHE_OP_PREFETCH 2
#endif

#ifdef IN_MPERS

# error static const struct xlat perf_hw_cache_op_id in mpers mode

#else

static
const struct xlat perf_hw_cache_op_id[] = {
 XLAT(PERF_COUNT_HW_CACHE_OP_READ),
 XLAT(PERF_COUNT_HW_CACHE_OP_WRITE),
 XLAT(PERF_COUNT_HW_CACHE_OP_PREFETCH),
 /* this array should remain not NULL-terminated */
};

#endif /* !IN_MPERS */
