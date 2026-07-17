#include <stdlib.h>

int main() {
    int *p = malloc(4 * sizeof(int));
    p[0] = 5;
    /*Without free(p)*/
    return 0;
}
