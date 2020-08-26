#include "header.h"

static int mx_strlen(const char *s) {
    int i = 0;

    while (s[i] != '\0')
        i++;
    return i;
}

static void mx_swap_char(char *s1, char *s2) {
    char temp = *s2;
    *s2 = *s1;
    *s1 = temp;
}

static void mx_str_reverse(char *s) {
    int len = mx_strlen(s) - 1;

    if (s)
        for (int i = 0; i <= len / 2; i++)
            mx_swap_char(&s[i], &s[len - i]);
}

static int number_length(int number) {
    int length = 0;

    while (number) {
        number /= 10;
        length++;
    }
    return length;
}

static char *mx_strcpy(char *dst, const char *src) {
    int i;

    for (i = 0; src[i] != '\0'; i++)
        dst[i] = src[i];
    dst[i] = '\0';
    return dst;
}

char *mx_itoa(GameState *game) {
    int length = number_length(game->man.count);
    int tmp = game->man.count;
    char *result = NULL;

    result = (char *)malloc(sizeof(char) * (length + 1));
    for (int i = 0; i <= length; i++)
        result[i] = '\0';
    if (game->man.count == 0)
        mx_strcpy(result, "0");
    tmp = game->man.count;
    for (int i = 0; i < length; i++) {
        if (tmp < 0) {
            result[length] = '-';
            tmp = -tmp;
        }
        result[i] = (tmp % 10) + '0';
        tmp /= 10;
    }
    mx_str_reverse(result);
    game->score = result;
    return result;
}
