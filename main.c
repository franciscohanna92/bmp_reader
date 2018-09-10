#include <stdio.h>
#include "lib/bmp_reader_types.h"
#include "lib/bmp_reader_methods.h"

int main() {
    FILE *fp;

    fp = fopen("../resources/256-color.bmp", "rb");

    struct bmp_header bh = read_bmp_header(fp);

    print_bmp_header(bh);

    return 0;
}