#include "unity.h"

#include "PrimeNumbers.h"

void setUp(void)
{
    // Set global variable and allocate memory
}

void tearDown(void)
{
    // Free memory
}

void test_PrimeNumbers_isPrimeNumber_FALSE(void)
{
    // given
    BOOLEAN expected_results[12] = {FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE};
    int numbers[12] = {1, 4, 6, 8, 9, 10, 12, 14, 15, 16, 18, 20};
    int numbers_len = sizeof(numbers)/sizeof(*numbers);
    
    // when
    BOOLEAN results[12];
    for (int i = 0; i < numbers_len; i++) {
        results[i] = is_prime_number(numbers[i]);
    }
    
    // then
    TEST_ASSERT_EQUAL_CHAR_ARRAY(expected_results, results, 12);
}

void test_PrimeNumbers_isPrimeNumber_TRUE(void)
{
    // given
    BOOLEAN expected_results[12] = {TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE};
    int numbers[12] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
    int numbers_len = sizeof(numbers)/sizeof(*numbers);
    
    // when
    BOOLEAN results[12];
    for (int i = 0; i < numbers_len; i++) {
        results[i] = is_prime_number(numbers[i]);
    }
    
    // then
    TEST_ASSERT_EQUAL_CHAR_ARRAY(expected_results, results, 12);
}
