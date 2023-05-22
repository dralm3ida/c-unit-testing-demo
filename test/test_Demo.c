#include "unity.h"

#include "Demo.h"
#include "mock_PrimeNumbers.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_Demo_validateResult_isPrime(void)
{
    // given
    int number = 2;
    is_prime_number_ExpectAndReturn(number, TRUE);
    // when
    validate_result(number);
    // then
}

void test_Demo_validateResult_isNotPrime(void)
{
    // given
    int number = 4;
    is_prime_number_ExpectAndReturn(number, FALSE);
    // when
    validate_result(number);
    // then
}
