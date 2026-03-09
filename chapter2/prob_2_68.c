#include "prob_2_68.h"

int lower_one_mask(int n) {
    int shift = ~0 << (n - 1);
    return ~(shift << 1);
}
