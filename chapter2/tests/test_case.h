#ifndef CSAPP_TEST_CASE_H
#define CSAPP_TEST_CASE_H
#include <stdint.h>

typedef int32_t (*TestFunc)(int32_t);

struct TestCase {
    int32_t input;
    int32_t expected;
};

void run_test_cases(TestFunc f, const struct TestCase cases[], const int num_cases);

#endif //CSAPP_TEST_CASE_H