#include <unistd.h>

int mx_strlen(const char *c);

void mx_printstr(const char *c) {
    write(1, c, mx_strlen(c));
}
