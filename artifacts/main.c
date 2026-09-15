#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
int LLVMFuzzerTestOneInput(const uint8_t *, size_t);

int main(int argc, char **argv) {
    if (argc != 2) return 2;
    FILE *f = fopen(argv[1], "rb"); if (!f) return 3;
    fseek(f, 0, SEEK_END); long n = ftell(f); rewind(f);
    if (n < 0 || n > 16384) { fclose(f); return 4; }
    uint8_t *p = malloc((size_t)n ? (size_t)n : 1); if (!p) { fclose(f); return 5; }
    if (n && fread(p, 1, (size_t)n, f) != (size_t)n) { free(p); fclose(f); return 6; }
    fclose(f); LLVMFuzzerTestOneInput(p, (size_t)n); free(p); return 0;
}
