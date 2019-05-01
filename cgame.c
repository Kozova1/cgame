#include <stdio.h>
#include "./config.def.h"

void get_input(char *g) {
    printf("> ");
    scanf("%s", g);
}

int main() {
    printf("%s v%s\n\n", name, version);
    char *c; 
    get_input(c); 
    get_input(c);
    return 0;
}
