#include <assert.h>
#include <stdio.h>

#include "../prob_2_69.h"

int main() {
    printf("Testing 2_69...\n");
    int example = 0x12345678;
    assert(rotate_left(example, 4) == 0x23456781);
    assert(rotate_left(example, 20) == 0x67812345);
    assert(rotate_left(example, 0) == example);
    printf("Passed 2_69...\n");
}
