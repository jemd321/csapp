#include <limits.h>

#include "library.h"

int any_bit_is_one(const int x) {
    return !!x;
}

int any_bit_is_zero(int x) {
    return !!~x;
}

int any_bit_least_sig_is_one(int x) {
    return !!(x & 0xFF);
}

int any_bit_most_sig_is_zero(int x) {
    int w = sizeof(int) << 3;
    int mask = ~0 << (w - 8);
    return !!(~x & mask);
}
