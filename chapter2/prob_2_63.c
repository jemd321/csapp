#include "prob_2_63.h"

#include "library.h"

unsigned srl(unsigned x, int k) {
    /* Perform shift arithmetically */
    unsigned xsra = (int) x >> k;
    int w = 8*sizeof(int);
    int mask = ~(~0 << (w - k - 1) << 1);
    return xsra & mask;
}

int sra(int x, int k) {
    /* Perform shift logically */
    int xsrl = (unsigned) x >> k;
    int w = 8*sizeof(int);
    int sign_mask = !(x & (1 << (w - 1))) - 1;
    return xsrl | (sign_mask << (w - k - 1) << 1);
}