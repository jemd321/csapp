#include <assert.h>
#include <stdio.h>
#include "../prob_2_65.h"

int main() {
    printf("Testing odd_ones (Parity)...\n");

    // Case 1: Zero 1s (Even)
    assert(odd_ones(0x00000000) == 0);

    // Case 2: One 1 set (Odd)
    assert(odd_ones(0x00000001) == 1);

    // Case 3: Two 1s set (Even)
    assert(odd_ones(0x00000003) == 0); // 0011

    // Case 4: Three 1s set (Odd)
    assert(odd_ones(0x00000007) == 1); // 0111

    // Case 5: All bits set (32 ones = Even)
    assert(odd_ones(0xFFFFFFFF) == 0);

    // Case 6: 31 bits set (Odd)
    assert(odd_ones(0x7FFFFFFF) == 1);

    // Case 7: Alternating bits (16 ones = Even)
    assert(odd_ones(0xAAAAAAAA) == 0);

    printf("All odd_ones tests passed!\n");
    return 0;
}
