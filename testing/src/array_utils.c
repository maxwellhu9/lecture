#include "array_utils.h"
int array_sum(const int arr[], size_t length)
{
int total = 0;
for (size_t i = 0; i < length; ++i) {
total += arr[i];
}
return total;
}

void array_clamp_nonnegative(int arr[], size_t length) {
for (size_t i = 0; i < length; ++i) {
if (arr[i] < 0) {
arr[i] = 0;
}
}
}