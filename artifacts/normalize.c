#include "envelope.h"
#include <stdint.h>
#include <string.h>

int normalize_envelope(const uint8_t *data, size_t size) {
    uint8_t canonical[48];
    if (size < 4 || data[0] != 'E' || data[1] != 'N' || data[2] != 'V' || data[3] != 1) return 0;
    memcpy(canonical, data, size);
    return canonical[4] == 0x7f;
}
