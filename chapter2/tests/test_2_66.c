#include <assert.h>
#include <stdio.h>

#include "../prob_2_66.h"

int main() {
    printf("Testing 2_66...\n");
    assert(leftmost_one(7) == 4);
    assert(leftmost_one(3) == 2);
    assert(leftmost_one(2) == 2);
    assert(leftmost_one(1) == 1);
    assert(leftmost_one(0) == 0);
    printf("2_66 Tests Passed.\n");
}
