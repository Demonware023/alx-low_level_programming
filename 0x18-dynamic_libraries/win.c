#include <stdlib.h>
int rand(void) {static int i = 0; int nums[6] = {9, 8, 10, 24, 75, 9}; return nums[i++  % 6]; }
