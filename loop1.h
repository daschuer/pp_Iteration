#if((LOOP_END) > LOOP_MAX)
#error Loop Counter Too Big
#endif

#if(LOOP_START < (LOOP_END))

    MACRO(LOOP_START)

    #if((LOOP_START % 10) == 0)
        #undef LOOP_START
        #define LOOP_START JOIN(LOOP_START10, 1)
    #elif((LOOP_START % 10) == 1)
        #undef LOOP_START
        #define LOOP_START JOIN(LOOP_START10, 2)
    #elif((LOOP_START % 10) == 2)
        #undef LOOP_START
        #define LOOP_START JOIN(LOOP_START10, 3)
    #elif((LOOP_START % 10) == 3)
        #undef LOOP_START
        #define LOOP_START JOIN(LOOP_START10, 4)
    #elif((LOOP_START % 10) == 4)
        #undef LOOP_START
        #define LOOP_START JOIN(LOOP_START10, 5)
    #elif((LOOP_START % 10) == 5)
        #undef LOOP_START
        #define LOOP_START JOIN(LOOP_START10, 6)
    #elif((LOOP_START % 10) == 6)
        #undef LOOP_START
        #define LOOP_START JOIN(LOOP_START10, 7)
    #elif((LOOP_START % 10) == 7)
        #undef LOOP_START
        #define LOOP_START JOIN(LOOP_START10, 8)
    #elif((LOOP_START % 10) == 8)
        #undef LOOP_START
        #define LOOP_START JOIN(LOOP_START10, 9)
    #elif((LOOP_START % 10) == 9)
        #if((LOOP_START / 10) == 0 )
            #undef LOOP_START10
            #define LOOP_START10 1
        #elif((LOOP_START / 10) == 1)
            #undef LOOP_START10
            #define LOOP_START10 2
        #elif((LOOP_START / 10) == 2)
            #undef LOOP_START10
            #define LOOP_START10 3
        #elif((LOOP_START / 10) == 3)
            #undef LOOP_START10
            #define LOOP_START10 4
        #elif((LOOP_START / 10) == 4)
            #undef LOOP_START10
            #define LOOP_START10 5
        #elif((LOOP_START / 10) == 5)
            #undef LOOP_START10
            #define LOOP_START10 6
        #elif((LOOP_START / 10) == 6)
            #undef LOOP_START10
            #define LOOP_START10 7
        #elif((LOOP_START / 10) == 7)
            #undef LOOP_START10
            #define LOOP_START10 8
        #elif((LOOP_START / 10) == 8)
            #undef LOOP_START10
            #define LOOP_START10 9
        #elif((LOOP_START / 10) == 9)
            #undef LOOP_START10
            #define LOOP_START10 10
        #endif
        #undef LOOP_START
        #define LOOP_START JOIN(LOOP_START10, 0)
    #endif
    #if((LOOP_START % 10) != 0)
        #include "loop1.h"
    #endif
#endif
