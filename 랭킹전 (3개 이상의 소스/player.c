#include "player.h"
#include <stdlib.h>
#include <string.h>

int comp(const void* a, const void* b) {
    return strcmp(((Player*)a)->name, ((Player*)b)->name);
}
