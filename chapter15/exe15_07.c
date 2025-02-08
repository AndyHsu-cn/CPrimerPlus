/*	exe15_07.c
 *  2025-02-08
 *  modified by Andy Hsu
 * 
 *  Write a program with the same behavior as described in Programming exe15_07.c,
 *  but use an unsigned long variable to hold the font information and use the
 *  bitwise operators instead of bit members to manage the information.
 */
#include <stdio.h>

#define     CLEARINPUT          while(getchar() != '\n') continue

#define     LEFT                0
#define     CENTER              1
#define     RIGHT               2

#define     OFF                 0
#define     ON                  1
#define     ONOFF(status)       (status ? "on": "off")

/**
 * bits's meaning in my unsigned int
 * 31 30 29 28 27 26 25 24    23 22 21 20 19 18 17 16    15 14 13 12 11 10 09 08    07 06 05 04 03 02 01 00
 * —— —— —— —— —— —— —— ——    —— —— —— —— —— —— —— ——    —— —— —— —— —— —— —— ——    —— —— —— —— —— —— —— —— 
 *                                     U  I   B    |align  ||font_size          |   |font_id               |
 * 
 */
#define     ID_SHIFT            0
#define     SIZE_SHIFT          8
#define     ALIGN_SHIFT         15
#define     BOLD_SHIFT          18
#define     ITAL_SHIFT          19
#define     UNDREL_SHIFT        20

#define     ID_MASK             (255U << ID_SHIFT)
#define     SIZE_MASK           (127U << SIZE_SHIFT)
#define     ALIGN_MASK          (3U   << ALIGN_SHIFT)
#define     BOLD_MASK           (1U   << BOLD_SHIFT)
#define     ITAL_MASK           (1U   << ITAL_SHIFT)
#define     UNDER_MASK          (1U   << UNDREL_SHIFT)

#define     getid(font)         ((font & ID_MASK) >> ID_SHIFT) 
#define     getsize(font)       ((font & SIZE_MASK) >> SIZE_SHIFT)
#define     getalign(font)      ((font & ALIGN_MASK) >> ALIGN_SHIFT)
#define     getalignstr(font)   (getalign(font)? (getalign(font) == CENTER? "center": "right"): "left")
#define     getbold(font)       ((font & BOLD_MASK) >> BOLD_SHIFT)  
#define     getital(font)       ((font & ITAL_MASK) >> ITAL_SHIFT)
#define     getunderline(font)  ((font & UNDER_MASK) >> UNDREL_SHIFT)

typedef unsigned int Font;
void setid(Font * pfont, int id);
void setsize(Font * pfont, int size);
void setalign(Font * pfont, int align);
void display_font(Font font);
void print_menu(void);
void togglebold(Font * pfont);
void toggleitalic(Font * pfont);
void toggleunderline(Font * pfont);
int main(void)
{
    Font font =  0;
    int choice;
	
    setid(&font, 1);
    setsize(&font, 12);
    setalign(&font, 2);

    display_font(font);
    print_menu();
    while((choice = getchar()) != 'q')
    {
        CLEARINPUT;
        switch(choice)
        {
            case 'f':
                unsigned int id;
	            printf("Enter font id (0 - 255): ");
                scanf("%u", &id);
                CLEARINPUT;
                setid(&font, id);
                break;
            case 's':
                unsigned int size;
                printf("Enter font size (0 - 127): ");
                scanf("%u", &size);
                CLEARINPUT;
                setsize(&font, size);
                break;
            case 'a':
                puts("Select alignment:");
                puts("l)left   c)center   r)right");
                char ch;
                scanf("%c", &ch);
                CLEARINPUT;
                if(ch == 'l')
                    ch = LEFT;
                else if(ch == 'c')
                    ch = CENTER;
                else
                    ch = RIGHT;
                setalign(&font, ch);
                break;
            case 'b':
                togglebold(&font);
                break;
            case 'i':
                toggleitalic(&font);
                break;
            case 'u':
                toggleunderline(&font);
                break;
            default:
                puts("Sorry, I don't understand that input. Try again.");
                break;
        }
        display_font(font);
        print_menu();
    }
    printf("Bye.\n");

    return 0;
}

void setid(Font * pfont, int id)
{
    *pfont &= ~ID_MASK;
    *pfont |= ((id << ID_SHIFT) & ID_MASK);
}

void setsize(Font * pfont, int size)
{
    *pfont &= ~SIZE_MASK;
    *pfont |= (size << SIZE_SHIFT);
}

void setalign(Font * pfont, int align)
{
    *pfont &= ~ALIGN_MASK;
    *pfont |= (align <<ALIGN_SHIFT);
}

void display_font(Font font)
{
    printf("%3s %4s %9s %3s %3s %3s\n", "ID", "SIZE", "ALIGNMENT", "B", "I", "U");
    printf("%3d %4d %9s %3s %3s %3s\n", getid(font), getsize(font), getalignstr(font), 
            ONOFF(getbold(font)), ONOFF(getital(font)), ONOFF(getunderline(font)));
}

void print_menu(void)
{
	puts("f)change fonts	s)change size 	 a)change alignment");
	puts("b)toggle bold 	i)toggle italic  u)toggle underline");
	puts("q)quit");
}

void togglebold(Font * pfont)
{
    *pfont ^= BOLD_MASK;
}

void toggleitalic(Font * pfont)
{
    *pfont ^= ITAL_MASK;
}

void toggleunderline(Font * pfont)
{
    *pfont ^= UNDER_MASK;
}