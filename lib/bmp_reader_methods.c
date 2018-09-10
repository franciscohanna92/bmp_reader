#include <stdio.h>
#include "bmp_reader_types.h"

/**
 * Reads the BMP file header
 * @param fp A pointer to a BMP file
 * @return BMP header struct
 */
struct bmp_header read_bmp_header(FILE* fp) {
    struct bmp_header bh = {};

    // Header
    fread(bh.signature, 2, 1, fp);
    fread(&bh.file_size, 4, 1, fp);
    fread(&bh.reserved, 4, 1, fp);
    fread(&bh.data_offset, 4, 1, fp);

    // Image properties
    fread(&bh.size, 4, 1, fp);
    fread(&bh.width, 4, 1, fp);
    fread(&bh.height, 4, 1, fp);
    fread(&bh.planes, 2, 1, fp);
    fread(&bh.bit_count, 2, 1, fp);
    fread(&bh.compression, 4, 1, fp);
    fread(&bh.image_size, 4, 1, fp);
    fread(&bh.x_pixels_per_m, 4, 1, fp);
    fread(&bh.y_pixels_per_m, 4, 1, fp);
    fread(&bh.colors_used, 4, 1, fp);
    fread(&bh.important_colors, 4, 1, fp);

    return bh;
}

void print_bmp_header(struct bmp_header bh) {
    printf("*** BMP Header ***\n");
    printf("Signature:\t\t%s\n", bh.signature);
    printf("File size:\t\t%d bytes\n", bh.file_size);
    printf("Reseved:\t\t%d\n", bh.reserved);
    printf("Data Offset:\t%d bytes\n\n", bh.data_offset);

    printf("*** Image properties ***\n");
    printf("Section size:\t\t%d bytes\n", bh.size);
    printf("Image width:\t\t%dpx\n", bh.width);
    printf("Image height:\t\t%dpx\n", bh.height);
    printf("Planes:\t\t\t\t%d\n", bh.planes);
    printf("Bits/pixel:\t\t\t%d\n", bh.bit_count);
    printf("Compression level:\t%d\n", bh.compression);
    printf("Compressed size:\t%d\n", bh.image_size);
    printf("X pixels/meter:\t\t%d\n", bh.x_pixels_per_m);
    printf("Y pixels/meter:\t\t%d\n", bh.y_pixels_per_m);
    printf("Colors used:\t\t%d\n", bh.colors_used);
    printf("Important colors:\t%d\n", bh.important_colors);
}
