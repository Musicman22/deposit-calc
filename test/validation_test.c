#include <deposit.h>
#include <ctest.h>

CTEST(logic_suite, valid_all_wrong)
{
    // Given
    const int income_test = 9000;
    const int data_test = -1;

    // When
    const int result = valid_dat(income_test, data_test);

    // Then
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(logic_suite, valid_all_wrong_else)
{
    // Given
    const int income_test = 9000;
    const int data_test = 400;

    // When
    const int result = valid_dat(income_test, data_test);

    // Then
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(logic_suite, valid_income_wrong)
{
    // Given
    const int income_test = 9000;
    const int data_test = 320;

    // When
    const int result = valid_dat(income_test, data_test);

    // Then
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(logic_suite, valid_data_wrong)
{
    // Given
    const int income_test = 15000;
    const int data_test = -5;

    // When
    const int result = valid_dat(income_test, data_test);

    // Then
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(logic_suite, valid_data_wrong_else)
{
    // Given
    const int income_test = 25000;
    const int data_test = 520;

    // When
    const int result = valid_dat(income_test, data_test);

    // Then
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(logic_suite, valid_all_right)
{
    // Given
    const int income_test = 45000;
    const int data_test = 320;

    // When
    const int result = valid_dat(income_test, data_test);

    // Then
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}