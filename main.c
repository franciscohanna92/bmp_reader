#include <stdio.h>
#include "lib/bmp_reader_types.h"
#include "lib/bmp_reader_methods.h"

int main(int argc, char **argv) {
    FILE *fp;

    if(argc == 2) {
        fp = fopen(argv[1], "rb");
        int isValid = check_file_format(fp);
        if(isValid == 0) {
            fp = fopen(argv[1], "rb");
            struct bmp_header bh = read_bmp_header(fp);
            print_bmp_header(bh);
        } else {
            printf("The specified file is not a valid WAVE file.");
        }
    } else {
        printf("You must specify only one argument that must be a path to a BMP file.");
    }

    return 0;
}