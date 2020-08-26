#include "header.h"

char *mx_file_to_str(const char *filename) {
    int rd;
    char ch;
    int count = 0;
    char *str = NULL;

    rd = open(filename, O_RDONLY);
    while(read(rd, &ch, 1))
        count++;
    close(rd);
    str = mx_strnew(count);
    rd = open(filename, O_RDONLY);
    for (int i = 0; read(rd, &ch, 1); i++) {
        str[i] = ch;
    }
    close(rd);
    return str;
}
