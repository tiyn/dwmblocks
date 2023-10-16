#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
    {"memory",        10,   6},
    {"cpu amd",       10,   5},
    {"disk /home",    1800, 7},
    {"volume",        120,  4},
    {"battery BAT0",  5,    2},
    {"internet",      5,    3},
    {"clock",         60,   1},
};

const unsigned short blockCount = LEN(blocks);
