#include <stdio.h>
#include <assert.h>
#include "../prob_2_63.h"

int main() {
    // --- Test SRL (Logical Right Shift) ---
    printf("Testing srl...\n");

    // Case 1: Shift MSB 1 logically
    // 0x80000000 >> 1 should be 0x40000000
    assert(srl(0x80000000, 1) == 0x40000000);

    // Case 2: Shift all 1s by 8 bits
    // 0xFFFFFFFF >> 8 should be 0x00FFFFFF
    assert(srl(0xFFFFFFFF, 8) == 0x00FFFFFF);

    // Case 3: k = 0 (No shift)
    assert(srl(0x12345678, 0) == 0x12345678);

    // Case 4: Shift everything out
    assert(srl(0xFFFFFFFF, 31) == 0x00000001);

    printf("srl tests passed!\n\n");


    // --- Test SRA (Arithmetic Right Shift) ---
    printf("Testing sra...\n");

    // Case 1: Negative number (MSB is 1)
    // 0x80000000 >> 1 should be 0xC0000000 (fills with 1)
    assert(sra(0x80000000, 1) == 0xC0000000);

    // Case 2: Positive number (MSB is 0)
    // 0x7FFFFFFF >> 1 should be 0x3FFFFFFF (fills with 0)
    assert(sra(0x7FFFFFFF, 1) == 0x3FFFFFFF);

    // Case 3: All ones stays all ones
    assert(sra(0xFFFFFFFF, 16) == 0xFFFFFFFF);

    // Case 4: k = 0
    assert(sra(0xEDCBA987, 0) == (int)0xEDCBA987);

    printf("sra tests passed!\n");

    return 0;
}
