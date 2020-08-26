#include "header.h"

void print_error(SDL_Surface *surface, char *s) {
    if (surface == NULL) {
        printf("%s\n", s);
        SDL_Quit();
        exit(1);
    }
}
