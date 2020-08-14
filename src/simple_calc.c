#include "simple_calc.h"

typedef int (*op_fn)(int, int);

int simple_add(int a, int b)
{
	return a + b;
}

int simple_sub(int a, int b)
{
	return a - b;
}

static op_fn op_fn_list[] = {
	simple_add,
	simple_sub
};

int simple_calc(calc_op_e op, int a, int b)
{
	if (op < CALC_OP_MAX)
		return op_fn_list[(int)op](a, b);
	return 0;
}
