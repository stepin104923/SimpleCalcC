#include "unity.h"
#include "simple_calc.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_simple_calc_add(void)
{
	TEST_ASSERT_EQUAL(15, simple_calc(CALC_OP_ADD, 10, 5));
	TEST_ASSERT_EQUAL(15, simple_calc(CALC_OP_ADD, 0, 15));
}

void test_simple_calc_sub(void)
{
	TEST_ASSERT_EQUAL(5, simple_calc(CALC_OP_SUB, 10, 5));
	TEST_ASSERT_EQUAL(-15, simple_calc(CALC_OP_SUB, 0, 15));
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
	UNITY_BEGIN();

/* Run Test functions */
	RUN_TEST(test_simple_calc_add);
	RUN_TEST(test_simple_calc_sub);

	/* Close the Unity Test Framework */
	return UNITY_END();
}
