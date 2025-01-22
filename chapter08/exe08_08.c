/*	exe08_08.c
 *  2025-01-21
 *  modified by Andy Hsu
 * 
 *  Write a program that shows you a menu offering you the choice of addition,
 *  subtraction, multiplication, or division. After getting your choice, the program
 *  asks for two numbers, then performs the requested operation. The program
 *  should accept only the offered menu choices. It should use type float for the
 *  numbers and allow the user to try again if he or she fails to enter a number. In
 *  the case of subtraction, the program should prompt the user to enter a new value
 *  if 0 is entered as the value for the second number. A typical program run should
 *  look like this:

    Enter the operation of your choice:
    a. add s. subtract
    m. multiply d. divide
    q. quit 
    a
    Enter first number: 22.4
    Enter second number: one
    one is not an number.
    Please enter a number, such as 2.5, -1.78E8, or 3: 1
    22.4 + 1 = 23.4
    Enter the operation of your choice:
    a. add s. subtract
    m. multiply d. divide
    q. quit
    d
    Enter first number: 18.4
    Enter second number: 0
    Enter a number other than 0: 0.2
    18.4 / 0.2 = 92
    Enter the operation of your choice:
    a. add s. subtract
    m. multiply d. divide
    q. quit
    q
    Bye.

 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
char get_first(void);
char get_choice(void);
float get_float(void);
int main(void)
{
    char choice;
    float first, second;

    while((choice =  get_choice()) != 'q')
    {
        switch(choice)
        {
            case 'a':
                printf("Enter first number: ");
                first = get_float();
                printf("Enter second number: ");
                second = get_float();
                printf("%.1f + %.1f = %.1f\n", first, second, first + second);
                break;
            case 's':
                printf("Enter first number: ");
                first = get_float();
                printf("Enter second number: ");
                second = get_float();
                printf("%.1f - %.1f = %.1f\n", first, second, first - second);
                break;
            case 'm':
                printf("Enter first number: ");
                first = get_float();
                printf("Enter second number: ");
                second = get_float();
                printf("%.1f * %.1f = %.1f\n", first, second, first * second);
                break;
            case 'd':
                printf("Enter first number: ");
                first = get_float();
                printf("Enter second number: ");
                while((second = get_float()) == 0)
                    printf("Enter a number other than 0: ");
                printf("%.1f / %.1f = %.1f\n", first, second, first / second);
                break;
            default:
                printf("Type a, s, m, d or q.\n");
                break;
        }
    }

    return 0;
}

char get_first(void)
{
    int ch;

    while(!isalpha(ch = getchar()))
        continue;
    while(getchar() != '\n')
        continue;

    return ch;
}

char get_choice(void)
{
    int ch;

    printf("Enter the letter of your choice:\n");
    printf("a. add            s. substract\n");
    printf("m. multiply       d. divide\n");
    printf("q. quit\n");
    ch = get_first();
    while(!strchr("asmdq", ch) && ch!='q')
    {
        printf("Please respond with a, b, c, or q.\n");
        ch = get_first();
    }

    return ch;
}

float get_float(void)
{
    float input;
    char ch;

    while(scanf("%f", &input) != 1)
    {
        while((ch = getchar()) != '\n')
            putchar(ch);
        printf(" is not an number.\n");
        printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
    }
    
    return input;
}