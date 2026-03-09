#include <assert.h>

#include "../prob_2_68.h"

int main() {
    assert(lower_one_mask(1) == 1);
    assert(lower_one_mask(3) == 7);
    assert(lower_one_mask(4) == 15);
    assert(lower_one_mask(5) == 31);
    assert(lower_one_mask(32) == (-1));
}
