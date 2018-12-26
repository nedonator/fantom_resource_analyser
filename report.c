#include <stdio.h>
#include <inttypes.h>

void
$$report(uint64_t gas)
{
    fprintf(stderr, "GAS CONSUMED: %" PRIu64 "\n", gas);
}
