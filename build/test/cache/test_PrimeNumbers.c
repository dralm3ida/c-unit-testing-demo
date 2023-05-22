#include "src/PrimeNumbers.h"
#include "C:/Ruby30-x64/lib/ruby/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"




void setUp(void)

{



}



void tearDown(void)

{



}



void test_PrimeNumbers_isPrimeNumber_FALSE(void)

{



    unsigned char expected_results[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    int numbers[12] = {1, 4, 6, 8, 9, 10, 12, 14, 15, 16, 18, 20};

    int numbers_len = sizeof(numbers)/sizeof(*numbers);





    unsigned char results[12];

    for (int i = 0; i < numbers_len; i++) {

        results[i] = is_prime_number(numbers[i]);

    }





    UnityAssertEqualIntArray(( const void*)((expected_results)), ( const void*)((results)), (UNITY_UINT32)((12)), (

   ((void *)0)

   ), (UNITY_UINT)(29), UNITY_DISPLAY_STYLE_CHAR, UNITY_ARRAY_TO_ARRAY);

}



void test_PrimeNumbers_isPrimeNumber_TRUE(void)

{



    unsigned char expected_results[12] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

    int numbers[12] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};

    int numbers_len = sizeof(numbers)/sizeof(*numbers);





    unsigned char results[12];

    for (int i = 0; i < numbers_len; i++) {

        results[i] = is_prime_number(numbers[i]);

    }





    UnityAssertEqualIntArray(( const void*)((expected_results)), ( const void*)((results)), (UNITY_UINT32)((12)), (

   ((void *)0)

   ), (UNITY_UINT)(46), UNITY_DISPLAY_STYLE_CHAR, UNITY_ARRAY_TO_ARRAY);

}
