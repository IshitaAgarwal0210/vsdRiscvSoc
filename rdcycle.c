#include <stdint.h>

static inline uint32_t rdcycle(void) {
    uint32_t c;
    asm volatile ("csrr %0, cycle" : "=r"(c));
    return c;
}
#include <stdio.h>
int main() {
    uint32_t start = rdcycle();
    uint32_t end = rdcycle();
    printf("cycles elapsed: %u\n", end - start);
    return 0;
}

