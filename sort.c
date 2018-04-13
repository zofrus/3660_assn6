void sort(int *arr, size_t len)
{
  qsort(arr, len, sizeof(int), compare_int);
}
