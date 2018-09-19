#include <stdio.h>

#ifndef BMP_READER_BMP_READER_METHODS_H
#define BMP_READER_BMP_READER_METHODS_H

struct bmp_header read_bmp_header(FILE* fp);
int check_file_format(FILE* fp);
void print_bmp_header(struct bmp_header bh);

#endif //BMP_READER_BMP_READER_METHODS_H
