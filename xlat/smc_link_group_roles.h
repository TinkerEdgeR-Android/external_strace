/* Generated by ./xlat/gen.sh from ./xlat/smc_link_group_roles.in; do not edit. */
#if !(defined(SMC_CLNT) || (defined(HAVE_DECL_SMC_CLNT) && HAVE_DECL_SMC_CLNT))
# define SMC_CLNT 0
#endif
#if !(defined(SMC_SERV) || (defined(HAVE_DECL_SMC_SERV) && HAVE_DECL_SMC_SERV))
# define SMC_SERV 1
#endif

#ifdef IN_MPERS

# error static const struct xlat smc_link_group_roles in mpers mode

#else

static
const struct xlat smc_link_group_roles[] = {
 XLAT(SMC_CLNT),
 XLAT(SMC_SERV),
 XLAT_END
};

#endif /* !IN_MPERS */
