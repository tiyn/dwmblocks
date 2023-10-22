#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
    {"memory",        30,   6},
    {"cpu",           30,   5},
    {"gpu",           30,   8},
    {"disk /home",    1800, 7},
    {"volume",        120,  4},
    {"battery BAT0",  120,  2},
    {"internet",      30,   3},
    {"clock",         60,   1},
};

const unsigned short blockCount = LEN(blocks);
