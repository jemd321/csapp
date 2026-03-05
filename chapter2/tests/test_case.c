#include <assert.h>
#include <stdio.h>
#include <stdint.h>
#include "test_case.h"


void run_test_cases(const TestFunc f, const struct TestCase cases[], const int num_cases) {
    for (int i = 0; i < num_cases; i++) {
        const int32_t actual = f(cases[i].input);
        printf("Case %d: %#08X Expected: %d Actual: %d\n", i, cases[i].input, cases[i].expected, actual);
        assert(cases[i].expected == actual);
    }
}
