#ifndef BMP_READER_BMP_READER_TYPES_H
#define BMP_READER_BMP_READER_TYPES_H

struct bmp_header {
    char signature[2];      // == "BM". Must be present in every BMP file
    int  file_size;         // Size of the entire file
    int reserved;
    int data_offset;        // Starting position of the payload

    // Image properties
    int size;               // == 40. Size of this section in bytes
    int width;              // Width of the image in pixels
    int height;             // Height of the image in pixels
    int planes;             // == 1. Planes count
    int bit_count;          // Bits per pixel (1, 4, 8, 16, 24)
    int compression;        // Compression mode used (0, 1, 2)
    int image_size;         // Size of the compressed image. == 0 if no compression is used
    int x_pixels_per_m;     // Horizonal resolution in pixels/meter
    int y_pixels_per_m;     // Horizonal resolution in pixels/meter
    int colors_used;        // Colors used in the color palette
    int important_colors;   // Important colors counter. == 0 if they are all important
};

#endif //BMP_READER_BMP_READER_TYPES_H
