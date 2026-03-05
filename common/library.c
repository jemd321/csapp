#include <stdio.h>
#include <library.h>

void show_bytes(const unsigned char *start, const size_t len) {
    for (int i = 0; i < len; i++) {
        printf("%.02x", start[i]);
        printf("\n");
    }
}
