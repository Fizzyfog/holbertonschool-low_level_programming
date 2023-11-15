#include "3-calc.h"

/**
 * main - Gets input from user, converts to int, and passes to get_op_func
 * @argc: Number of command line arguments
 * @argv: Array containing command line arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result;
	int (*op)(int, int); /* Function pointer for the operation.*/

	/* Check if number of arguments provided is ok */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98); /* Exit with error code 98 for incorrect arguments.*/
	}
	/* Get good operation function based on the operator provided in argv[2].*/
	op = get_op_func(argv[2]);

	/* Exit with error code 99 if the operation is not supported.*/
	if (!op)
	{
		printf("Error\n");
		exit(99);
	}

	/* Exit with error code 100 for division or modulo by 0.*/
	if (argv[3][0] == '0' && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	result = op(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", result);

	return (0);
}
