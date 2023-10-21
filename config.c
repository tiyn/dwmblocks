#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
    {"memory",        30,   6},
    {"cpu amd",       30,   5},
    {"disk /home",    1800, 7},
    {"volume",        120,  4},
    {"battery BAT0",  120,  2},
    {"internet",      30,   3},
    {"clock",         60,   1},
};

const unsigned short blockCount = LEN(blocks);
