#include <assert.h>
#include <stdio.h>

#include "../prob_2_64.h"

int main() {
    printf("Testing 2_64\n");
    assert(any_odd_one(1) == 0);
    assert(any_odd_one(2) == 1);
    assert(any_odd_one(0) == 0);
    printf("2_64 tests passed\n");
}