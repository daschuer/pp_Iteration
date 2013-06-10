#define LOOP_START 0
#define LOOP_MAX 100

#ifdef LOOP_END
#undef LOOP_END
#endif

#ifdef MACRO
#undef MACRO
#endif

#define JOINI(x, b) x ## b
#define JOIN(x, b) JOINI(x, b)
