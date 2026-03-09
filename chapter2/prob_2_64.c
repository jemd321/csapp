#include "prob_2_64.h"

int any_odd_one(unsigned x) {
    return !!(x & 0xAAAAAAAA);
}