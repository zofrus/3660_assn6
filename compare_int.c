#include "assn6.h"

int compare_int(const void* a, const void* b)
{
  if (*(int*)a == *(int*)b) return 0;
  return *(int*)a < *(int*)b ? -1 : 1;
}

