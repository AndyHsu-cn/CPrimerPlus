/*************************************************************
 * File   : 08_03.c                                          *
 * Date   : 2024-07-03                                       *
 *************************************************************/
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	int ch = 0;
	int uppercase_cnt = 0, lowercase_cnt = 0, other_cnt = 0;

	while((ch = getchar()) != EOF)
	{
		if(isupper(ch))
			uppercase_cnt++;
		else if(islower(ch))
			lowercase_cnt++;
		else
			other_cnt++;
	}
	printf("Character count\n");
	printf("Uppercase letters: %d\n", uppercase_cnt);
	printf("Lowercase letters: %d\n", lowercase_cnt);
	printf("Other: %d\n", other_cnt);

	return 0;
}
