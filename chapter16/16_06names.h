/*	16_06names.h
 *  2025-02-06
 *  modified by Andy Hsu
 * 
 *  names_st structure header file
 */
#define SLEN        32

struct names_st{
    char first[SLEN];
    char last[SLEN];
};

typedef struct names_st names;

void get_names(names * pn);
void show_names(const names * pn);