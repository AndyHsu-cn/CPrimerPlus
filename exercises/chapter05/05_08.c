/*************************************************************
 * File   : 05_08.c                                          *
 * Date   : 2024-06-19                                       *
 *************************************************************/
#include <stdio.h>
int main(void)
{
	int first_op, second_op;

	printf("This program computes moduli.\n");
	printf("Enter an integer to serve as the second operand: ");
	scanf("%d", &second_op);
	printf("Now enter the first operand: ");
	scanf("%d", &first_op);
	while(first_op > 0)
	{
		printf("%d %% %d is %d\n", first_op, second_op,
			first_op % second_op);
		printf("Enter next number for first operand "
		       "(<= 0 to quit):");
		scanf("%d", &first_op);
	}
	printf("Done!\n");

	return 0;			// return statement
}
