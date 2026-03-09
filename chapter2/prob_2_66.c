#include "prob_2_66.h"

int leftmost_one(unsigned x) {
    // bitvector
    x |= x >> 1;
    x |= x >> 2;
    x |= x >> 4;
    x |= x >> 8;
    x |= x >> 16;
    return x - (x >> 1);
}
