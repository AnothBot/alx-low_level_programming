0x0F-function_pointers
Task 0
Write a function that prints a name.

	void print_name(char *name, void (*f)(char *));
Task 1
Write a function that executes a function given as a parameter on each element of an array.

	void array_iterator(int *array, size_t size, void (*action)(int));
Task 2
Write a function that searches for an integer.

	int int_index(int *array, int size, int (*cmp)(int));
Task 3
Write a program that performs simple operations.

You are allowed to use the standard library

Usage: calc num1 operator num2

You can assume num1 and num2 are integers, so use the atoi function to convert them from the string input to int

operator is one of the following:

+: addition
-: subtraction
*: multiplication
/: division
%: modulo
The program prints the result of the operation, followed by a new line

if the number of arguments is wrong, print Error, followed by a new line, and exit with the status 98
if the operator is none of the above, print Error, followed by a new line, and exit with the status 99
if the user tries to divide (/ or %) by 0, print Error, followed by a new line, and exit with the status 100
Files:

3-calc.h
This file should contain all the function prototypes and data structures used by the program.

	/* Function prototypes */
	int (*get_op_func(char *s))(int, int);
	int op_add(int a, int b);
	int op_sub(int a, int b);
	int op_mul(int a, int b);
	int op_div(int a, int b);
	int op_mod(int a, int b);
/* Data structure */
typedef struct op {
	char *op;
	int (*f)(int a, int b);
} op_t;

3-op_functions.c
This file should contain the 5 following functions (not more):

	/* Function definitions */
	int op_add(int a, int b)
	{
		return (a + b);
	}
int op_sub(int a, int b)
{
	return (a - b);
}

int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b)
{
	return (a / b);
}

int op_mod(int a, int b)
{
	return (a % b);
