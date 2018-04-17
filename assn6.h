#include<stdio.h>
#include <stdlib.h>

#define BLOCK_REQS (100)

void FCFS(int *requests, int count);
void SSTF(int *requests, int count);
void CLook(int *requests, int count);
void Look(int *requests, int count);
void sort(int *arr, size_t len);
int compare_int(const void* a, const void* b);