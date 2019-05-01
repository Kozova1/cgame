#include <stdio.h>
#include "./config.def.h"

char * get_input() {
    char *c;
    printf("> ");
    scanf("> %s", c);
    return c;
}

int main() {
    printf("%s v%s\n\n", name, version);
    char *c = get_input();

    return 0;
}
