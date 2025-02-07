/*	16_10names_st.c
 *  2025-02-06
 *  modified by Andy Hsu
 * 
 *  revised with include protection
 */
#ifndef NAMES_ST_H__
#define NAMES_ST_H__
#define SLEN        32

struct names_st
{
    char first[SLEN];
    char last[SLEN];
};

typedef struct names_st names;

void get_names(names * pn);
void show_names(const names * pn);
#endif