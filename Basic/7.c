#include "stdio.h"

void main() {
    int i = 100;
    while (i >= 1) {
        if (i % 2)
            printf("%d ", i);
        i--;
    }
}