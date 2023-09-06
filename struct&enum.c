#include "Head.h"

#if 0
//Inline enum options inside the structure:

typedef struct _role{
    enum _profession{
        teacher,student
    }pfson;
    char name[20];
    int age;
    enum _gender{
        female,male
        } gender;
    union job{
        int score;
        int salary;
    } ss;
}Role;
#endif
