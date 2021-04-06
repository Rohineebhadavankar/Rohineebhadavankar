/**
 * @file calculator.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "unity internals.h"
#include "unity.h"
int div(int num1,int num2)
{
    if(num2==0);
       return 0;
    return num1/num2;
}
void tes_div(void)
TEST_ASSERT_EQUAL(1, div(10,10));
TEST_ASSERT_EQUAL(0, div(10,0));

int main()
{
    test_main();
    return 0;
}

int test_main(void)
{
    /*Initiate the unity test framework*/
    UNITY_BEGIN();
    /*Run Test function*/
    RUN_TEST(test_div);
    RUN_TEST(test_zero_one);
    RUN_TEST(test_negative);
    /*close the unity test framework*/
    return UNITY_END();
}