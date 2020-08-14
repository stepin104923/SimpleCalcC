/**
* @file simple_calc.h
*
*/
#ifndef __SIMPLE_CALC_H__
#define __SIMPLE_CALC_H__

/**
 * List of Operations for the Calculator
 */
typedef enum
{
	CALC_OP_ADD,    ///< Addition of two integers
	CALC_OP_SUB,    ///< Subtraction of 2nd integer from the 1st
	CALC_OP_MAX
} calc_op_e;

// TODO : Introduce Overflow/Underflow/Other Error Detection
// TODO : Introduce VA syntax

/**
* Computes the requested operation in the given input
* @param[in] op Operation to be performed. One of #calc_op_e
* @param[in] a 1st integer
* @param[in] b 2nd integer
* @return Result of performing the requested operation on the input
*/
int simple_calc(calc_op_e op, int a, int b);

#endif /* #ifndef __SIMPLE_CALC_H__ */
