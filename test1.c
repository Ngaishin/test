#include "Head.h"

#if 0
/* Byte-aligned, the size of the structure 
is the least common multiple of all members*/

typedef struct _stu{
    char name[13];
    int age;
}Stu;

typedef union _dtu{
    char name[9];
    short score;
    int age;
}Dtu;

#endif