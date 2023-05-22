#include "build/test/mocks/mock_PrimeNumbers.h"
#include "src/Demo.h"
#include "C:/Ruby30-x64/lib/ruby/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"




void setUp(void)

{

}



void tearDown(void)

{

}



void test_Demo_validateResult_isPrime(void)

{



    int number = 2;

    is_prime_number_CMockExpectAndReturn(18, number, 1);



    validate_result(number);



}



void test_Demo_validateResult_isNotPrime(void)

{



    int number = 4;

    is_prime_number_CMockExpectAndReturn(28, number, 0);



    validate_result(number);



}
