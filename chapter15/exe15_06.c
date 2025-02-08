/*	exe15_06.c
 *  2025-02-08
 *  modified by Andy Hsu
 * 
 *  Design a bit-field structure that holds the following information:
 *  Font ID: A number in the range 0–255
 *  Font Size: A number in the range 0–127
 *  Alignment: A number in the range 0–2 represented the choices Left, Center, and
 *  Right
 *  Bold: Off (0) or on (1)
 *  Italic: Off (0) or on (1)
 *  Underline: Off (0) or on (1)
 *  Use this structure in a program that displays the font parameters and uses a
 *  looped menu to let the user change parameters. For example, a sample run might
 *  look like this:

    ID SIZE ALIGNMENT B   I    U
    1  12   left      off off off
    f)change font s)change size a)change alignment
    b)toggle bold i)toggle italic u)toggle underline
    q)quit
    s
    Enter font size (0-127): 36
    ID SIZE ALIGNMENT B   I   U
    1  36   left      off off off
    f)change font s)change size a)change alignment
    b)toggle bold i)toggle italic u)toggle underline
    q)quit
    a
    Select alignment:
    l)left c)center r)right
    r
    ID SIZE ALIGNMENT B   I   U
    1  36   right     off off off
    f)change font s)change size a)change alignment
    b)toggle bold i)toggle italic u)toggle underline
    q)quit
    i
    ID SIZE ALIGNMENT B   I  U
    1  36   right     off on off
    f)change font s)change size a)change alignment
    b)toggle bold i)toggle italic u)toggle underline
    q)quit
    q
    Bye!

 *  The program should use the & operator and suitable masks to ensure that the ID
 *  and size entries are converted to the specified range.
 */
#include <stdio.h>
#define ALSTR(x)        (x? ((x == 1)? "center": "right"): "left")
#define CLEARINPUT      while(getchar() != '\n') continue;
typedef struct FONTS
{
    unsigned int font_id    :   8;
    unsigned int font_size  :   7;
    unsigned int            :   1;
    unsigned int alignment  :   2;
    unsigned int bold       :   1;
    unsigned int italic     :   1;
    unsigned int underline  :   1;
    unsigned int            :   3;
} FONTS;
char get_first(void);
void display_font(FONTS * pfont);
void print_menu(void);
void change_fonts(FONTS * pfont);
void change_size(FONTS * pfont);
void change_alignment(FONTS * pfont);
void toggle_bold(FONTS * pfont);
void toggle_italic(FONTS * pfont);
void toggle_underline(FONTS * pfont);
int main(void)
{
    FONTS font = {1, 12, 0, 0, 0, 0};
    char choice;

    display_font(&font);
    print_menu();
    while((choice = get_first()) != 'q')
    {
        switch(choice)
        {
            case 'f':
                change_fonts(&font);
                break;
            case 's':
                change_size(&font);
                break;
            case 'a':
                change_alignment(&font);
                break;
            case 'b':
                toggle_bold(&font);
                break;
            case 'i':
                toggle_italic(&font);
                break;
            case 'u':
                toggle_underline(&font);
                break;
            default:
                puts("Enter 'f', 's', 'a, 'b', 'i', 'u' or 'q', try again: ");
                continue;
        }
        display_font(&font);
        print_menu();
    }
    printf("Bye.\n");

    return 0;
}

char get_first(void)
{
    int ch;

    ch = getchar();
    while(getchar() != '\n')
        continue;

    return ch;
}

void display_font(FONTS * pfont)
{
    printf("%3s %4s %9s %3s %3s %3s\n", "ID", "SIZE", "ALIGNMENT", "B", "I", "U");
    printf("%3d %4d %9s %3s %3s %3s\n", pfont->font_id, pfont->font_size, ALSTR(pfont->alignment), 
        (pfont->bold == 1)? "on": "off", (pfont->italic == 1) ? "on": "off", (pfont->underline == 1) ? "on": "off");
}

void print_menu(void)
{
	puts("f)change fonts	s)change size 	 a)change alignment");
	puts("b)toggle bold 	i)toggle italic  u)toggle underline");
	puts("q)quit");
}

void change_fonts(FONTS * pfont)
{
    unsigned int tmp_id = 0;

    printf("Enter font id (0-255): ");
    scanf("%u", &tmp_id);
    pfont->font_id = tmp_id;

    CLEARINPUT;
}

void change_size(FONTS * pfont)
{
    unsigned int tmp_size = 0;

    printf("Enter font size (0-127): ");
    scanf("%u", &tmp_size);
    pfont->font_size = tmp_size;

    CLEARINPUT;
}

void change_alignment(FONTS * pfont)
{
    char choice;

    puts("Select alignment:");
	puts("l)left   c)center   r)right");
    switch(choice = get_first())
    {
        case 'l':
            pfont->alignment = 0;
            break;
        case 'c':
            pfont->alignment = 1;
            break;
        case 'r':
            pfont->alignment = 2;
            break;
    }
}

void toggle_bold(FONTS * pfont)
{
    pfont->bold = ~(pfont->bold);
}

void toggle_italic(FONTS * pfont)
{
    pfont->italic = ~(pfont->italic);
}

void toggle_underline(FONTS * pfont)
{
    pfont->underline = ~(pfont->underline);
}