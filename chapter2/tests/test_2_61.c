#include <stdio.h>
#include "../prob_2_61.h"
#include "test_case.h"

int main() {
    const struct TestCase test_cases_a[] = {
        {0x00000000, 0}, // All bits are 0 (False)
        {0x00000001, 1}, // LSB is 1 (True)
        {0x80000000, 1}, // MSB is 1 (True)
        {0xFFFFFFFF, 1}, // All bits are 1 (True)
        {0x00001000, 1}  // Middle bit is 1 (True)
    };

    const struct TestCase test_cases_b[] = {
        {0xFFFFFFFF, 0}, // All bits are 1 (False)
        {0xFFFFFFFE, 1}, // One bit is 0 (True)
        {0x7FFFFFFF, 1}, // One bit is 0 (True)
        {0x00000000, 1}, // All bits are 0 (True)
        {0xAAAAAAA, 1}   // Alternating bits (True)
    };

    const struct TestCase test_cases_c[] = {
        {0x00000000, 0}, // LSB is 00 (False)
        {0xFFFF0000, 0}, // Upper bytes full, but LSB is 00 (False)
        {0x00000001, 1}, // LSB has a 1 (True)
        {0x000000FF, 1}, // LSB is all 1s (True)
        {0x12345601, 1}  // Random upper bits, LSB has a 1 (True)
    };

    const struct TestCase test_cases_d[] = {
        {0xFF000000, 0}, // MSB is all 1s (False)
        {0xFFFFFFFF, 0}, // MSB is all 1s (False)
        {0xFEFFFFFF, 1}, // MSB has one 0 (True)
        {0x00FFFFFF, 1}, // MSB is all 0s (True)
        {0x7FFFFFFF, 1}  // MSB is 01111111 (True)
    };

    printf("Testing A...\n");
    run_test_cases(any_bit_is_one, test_cases_a, 5);
    printf("A Tests Passed.\n");
    printf("Testing B...\n");
    run_test_cases(any_bit_is_zero, test_cases_b, 5);
    printf("B Tests Passed.\n");
    printf("Testing C...\n");
    run_test_cases(any_bit_least_sig_is_one, test_cases_c, 5);
    printf("C Tests Passed.\n");
    printf("Testing D...\n");
    run_test_cases(any_bit_most_sig_is_zero, test_cases_d, 5);
    printf("D Tests Passed.\n");
    return 0;
}