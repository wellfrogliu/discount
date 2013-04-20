#include "config.h"

char markdown_version[] = VERSION
#if TABSTOP != 4
        " TAB=TABSTOP"
#endif
#if USE_AMALLOC
        " DEBUG"
#endif
#if USE_DISCOUNT_DL
# if USE_EXTRA_DL
        " DL=BOTH"
# else
        " DL=DISCOUNT"
# endif
#elif USE_EXTRA_DL
        " DL=EXTRA"
#else
        " DL=NONE"
#endif
#if WITH_ID_ANCHOR
        " ID-ANCHOR"
#endif
#if WITH_GITHUB_TAGS
        " GITHUB-TAGS"
#endif
#if WITH_FENCED_CODE
        " FENCED-CODE"
#endif
        ;
